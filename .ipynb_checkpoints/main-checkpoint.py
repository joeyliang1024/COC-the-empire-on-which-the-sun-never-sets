import pygame
import pyautogui

width, height = pyautogui.size()
def main():
    pygame.init()
    pygame.display.set_caption('永晝城物語')  # 遊戲標題
    win = pygame.display.set_mode((width, height))  # 窗口尺寸
    background = Background(width, height)
    johann = Johann(width, height)
    all_sprites = [background, johann]  # 注意添加順序，後添加的對象圖層在先添加的對象的圖層上面
    running = True
    while running:
        for event in pygame.event.get():
            # 點擊左上角或者右上角的x關閉窗口時，停止程序
            if event.type == pygame.QUIT:  
                running = False

        keys = pygame.key.get_pressed()
        johann.update(keys)
        # 顯示物件
        for sprite in all_sprites:
            win.blit(sprite.surf, sprite.rect)
        pygame.display.flip()
        
main()  

class Johann(pygame.sprite.Sprite):
    def __init__(self, width, height):
        super(Johann, self).__init__()
        johann = pygame.image.load('./劇本/角色立繪/約翰.png').convert_alpha()
        self.surf = pygame.transform.scale(johann, (80, 60))
        self.rect = self.surf.get_rect(center=(width/2, height/2))  # 中心定位

    def update(self, keys):
        if keys[pygame.K_LEFT]:
            self.rect.move_ip((-2, 0))  # 橫座標向左
        elif keys[pygame.K_RIGHT]:
            self.rect.move_ip((2, 0))  # 橫座標向右
        elif keys[pygame.K_UP]:
            self.rect.move_ip((0, -2))  #縱座標向上
        elif keys[pygame.K_DOWN]:
            self.rect.move_ip((0, 2))  # 縱座標向下

        # 防止小豬跑到屏幕外面
        if self.rect.left < 0:
            self.rect.left = 0
        if self.rect.right > width:
            self.rect.right = width
        if self.rect.top < 0:
            self.rect.top = 0
        if self.rect.bottom > height:
            self.rect.bottom = height

class Background(pygame.sprite.Sprite):
    def __init__(self, width, height):
        super(Background, self).__init__()
        background = pygame.image.load('./劇本/地圖.png').convert_alpha()
        self.surf = pygame.transform.scale(background, (width, height))
        self.rect = self.surf.get_rect(left=0, top=0)  # 左上角定位
      
  