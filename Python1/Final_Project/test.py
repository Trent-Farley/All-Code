"""
This program is a game that acts like beach volleyball,
with pong like characters. 

"""

import pygame
from pygame.locals import *
from sys import exit
import random
pygame.init()
size = width, height = 1000,600

screen =  size

screen = pygame.display.set_mode(size)

pygame.display.set_caption("Alien Volleyball")

font = pygame.font.SysFont("Times New Roman",70)
textsurface = font.render(
'Welcome to SPACE \n  Press 0 \
for easy \n press 1 for medium \n press 2 for hard \
\n press 3 for EXTREME \n then press ENTER', False, (255, 255, 255))
screen.blit(textsurface,(0,0))
def Start():
    speed = []
    while speed == []:    
        for event in pygame.event.get():
            if event.type == pygame.KEYDOWN:
                if event.key == K_0:
                    speed = 2
                elif event.key == K_1:
                    speed = 10
                elif event.key == K_2:
                    speed = 20
                elif event.key == K_3:
                    speed = 30
                elif event.type == pygame.QUIT:
                    exit()
    return speed

screen_background = pygame.image.load("beach_tree.jpg")
background = screen_background.convert()

bar = pygame.Surface((300,150))
bar1 = bar.convert()
bar1 = pygame.image.load("./jetpack2 (2).png")
bar2 = bar.convert()
bar2 = pygame.image.load("./AI_Character (3).jpg")
circ_sur =  pygame.image.load("./beach_ball.gif")
circ = pygame.Surface((400,400))
circle = circ_sur.convert()
circ.convert()
ballrect = circ.get_rect()
# some definitions
bar1_x, bar2_x = 40. , 870.
bar1_y, bar2_y = 215. , 215.
circle_x, circle_y = 450, 232.5
bar1_move, bar2_move = 0. , 0.
speed_x, speed_y, speed_circ = 150., 150., 250.
bar1_score, bar2_score = 0, 0
#clock and font objects
clock = pygame.time.Clock()

def The_Entire_Game(Start):
    while True:
    
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                exit()
            if event.type == KEYDOWN:
                if event.key == K_UP:
                    bar1_move = -ai_speed
                elif event.key == K_DOWN:
                    bar1_move = ai_speed
            elif event.type == KEYUP:
                if event.key == K_UP:
                    bar1_move = 0.
                elif event.key == K_DOWN:
                    bar1_move = 0. 
    score1 = font.render(str(bar1_score), True,(255,255,255))
    score2 = font.render(str(bar2_score), True,(255,255,255))
    screen.blit(background,(0,0))
    frame = pygame.draw.rect(screen,(255,255,255),Rect((10,10),(920,580)),2)
    middle_line = pygame.draw.aaline(screen,(255,255,255),(490,20),(490,580))
    screen.blit(bar1,(bar1_x,bar1_y))
    screen.blit(bar2,(bar2_x,bar2_y))
    screen.blit(circle,(circle_x,circle_y))
    screen.blit(score1,(450.,210.))
    screen.blit(score2,(500.,210.))
    bar1_y += bar1_move

    time_passed = clock.tick(30)
    time_sec = time_passed / 1000.0
    
    circle_x += speed_x * time_sec + speed
    circle_y += speed_y * time_sec + speed
    ai_speed = speed_circ * time_sec + speed
    ### The Computer ####
    if circle_x >= 305.:
        if not bar2_y == circle_y + 7.5:
            if bar2_y < circle_y + 7.5:
                bar2_y += ai_speed
            if  bar2_y > circle_y - 42.5:
                bar2_y -= ai_speed
        else:
            bar2_y == circle_y + 7.5
    
    if bar1_y >= 420.: bar1_y = 420.
    elif bar1_y <= 10. : bar1_y = 10.
    if bar2_y >= 420.: bar2_y = 420.
    elif bar2_y <= 10.: bar2_y = 10.
    #since i don't know anything about collision, ball hitting bars goes like this.
    if circle_x <= bar1_x + 20.:
        if circle_y >= bar1_y - 7.5 and circle_y <= bar1_y + 42.5:
            circle_x = 60.
            speed_x = -speed_x
    if circle_x >= bar2_x - 70.:
        if circle_y >= bar2_y - 10.5 and circle_y <= bar2_y + 52.5:
            circle_x = 800.
            speed_x = -speed_x
    if circle_x < 0:
        bar2_score += 1
        circle_x, circle_y = 320., 232.5
        bar1_y,bar_2_y = 215., 215.
    elif circle_x > 920.:
        bar1_score += 1
        circle_x, circle_y = 307.5, 232.5
        bar1_y, bar2_y = 215., 215.
    if circle_y <= 10.:
        speed_y = -speed_y
        circle_y = 10.
    elif circle_y >= 457.5:
        speed_y = -speed_y
        circle_y = 457.5

    pygame.display.update()

The_Entire_Game(Start())