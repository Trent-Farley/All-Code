"""
This program is a game that acts like jetpack beach volleyball,
with pong like characters. 

Trent Farley 
CS161

progrm specifications-
For the final project I wanted to do something with GUIs so games sounded fun. 
I used Pygmaes which was a very intereisting library to learn. I originally wanted to 
make a volleyball game, but my game ended up more like pong. Since I did not know 
anything about pygames, learning the information first was step number one. 
This program utilizes all fo the information that I learned from my researxch and 
falling back on what I used this term. This takes an input from the user 
to start the game, and continues it until they say to stop. 

testing- 
Tested with many different types of inputs, all of them worked sometimes. I did have to 
redesign characteristics of the physics and characters to create something a bit 
more realistic


"""

import pygame
from pygame.locals import *
from sys import exit
import random
import pygame.freetype
pygame.init()
size = width, height = 1000,600

screen =  size

screen = pygame.display.set_mode(size)

pygame.display.set_caption("Alien Beach Volleyball")

## Main Screen ###
font = pygame.freetype.SysFont("Callibri",70)

font.render_to(screen,(30,0),"Welcome to Alien Volleyball", (255,255,255))
font.render_to(screen,(30,70),"Press 0 for EASY", (255, 255, 255))
font.render_to(screen,(30,140),"Press 1 for MEDIUM", (255, 255, 255))
font.render_to(screen,(30,210),"Press 2 for HARD" ,(255, 255, 255))
font.render_to(screen,(30,280),"Press 3 for EXTREME ",(255, 255, 255))
font.render_to(screen,(30,370),"First to 15 WINS!!" , (255,255,255))
pygame.display.flip()

#Defining modes ###
speed = []
while speed == []:    
    for event in pygame.event.get():
        if event.type == pygame.KEYDOWN:
            if event.key == K_0:
                speed = 1
            elif event.key == K_1:
                speed = 2
            elif event.key == K_2:
                speed = 3
            elif event.key == K_3:
                speed = 4
            elif event.type == pygame.QUIT:
                exit()

##Starting the game ###
screen_background = pygame.display.set_mode([800,600])

background = screen_background.convert()

#The work behind the players
bar = pygame.Surface((300,150))
bar1 = bar.convert()
bar1 = pygame.image.load("jetpack.jpg")
## The computer
bar2 = bar.convert()
bar2 = pygame.image.load("AI_Character (3).jpg")
## The Beach ball
circ_sur =  pygame.image.load("beach_ball.gif")
circ = pygame.Surface((400,400))
circle = circ_sur.convert()
circ.convert()
ballrect = circ.get_rect()
# some definitions for the starting points
bar1_x, bar2_x = 40. , 870.
bar1_y, bar2_y = 215. , 215.
circle_x, circle_y = 450, 232.5
bar1_move, bar2_move = 0. , 0.
speed_x, speed_y, speed_circ = 150., 150., 250.

bar1_score, bar2_score = 0, 0
#clock and font objects
clock = pygame.time.Clock()
#The actual game

while True:
    #movement
    #Test to see winner
    if bar1_score == 15:
        break
    elif bar2_score== 15:
        break


    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()
        if event.type == KEYDOWN:
            if event.key == K_UP:
                bar1_move = -computer_speed
            elif event.key == K_DOWN:
                bar1_move = computer_speed
        elif event.type == KEYUP:
            if event.key == K_UP:
                bar1_move = 0.
            elif event.key == K_DOWN:
                bar1_move = 0.
    #Updating scores
    font = pygame.font.SysFont("calibri",60)
    score1 = font.render(str(bar1_score), True,(255,255,255))
    score2 = font.render(str(bar2_score), True,(255,255,255))
    #Rendering everything on the screen
    screen.blit(background,(0,0))   
    #Frame of the game
    frame = pygame.draw.rect(screen,(255,255,255),Rect((10,10),(920,580)),2)
    middle_line = pygame.draw.aaline(screen,(255,255,255),(490,20),(490,580))
    #More rendering
    screen.blit(bar1,(bar1_x,bar1_y))
    screen.blit(bar2,(bar2_x,bar2_y))
    screen.blit(circle,(circle_x,circle_y))
    screen.blit(score1,(450.,210.))
    screen.blit(score2,(500.,210.))
    

    bar1_y += bar1_move
    
# movement of circle
    time_passed = clock.tick(30)
    time_sec = time_passed / 1000.0
    
    circle_x += (speed_x+speed) * time_sec 
    circle_y += (speed_y+speed) * time_sec 
    computer_speed = speed_circ * time_sec 
#smartness of the computer.
    if circle_x >= 305.:
        if not bar2_y == circle_y + 7.5:
            if bar2_y < circle_y + 7.5:
                bar2_y += computer_speed
            if  bar2_y > circle_y - 42.5:
                bar2_y -= computer_speed
        else:
            bar2_y == circle_y + 7.5
    
    if bar1_y >= 420.: bar1_y = 420.
    elif bar1_y <= 10. : bar1_y = 10.
    if bar2_y >= 420.: bar2_y = 420.
    elif bar2_y <= 10.: bar2_y = 10.
# Some *Interesting* physics
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
    #Constantly updating 
    pygame.display.update()
## WIN or LOSEE statements
font = pygame.freetype.SysFont("Callibri",70)
if bar2_score == 15:
    font.render_to(screen,(50,280),"You lose, thanks for playing",(255, 0, 0))
elif bar1_score == 15:
    font.render_to(screen,(100,280),"You win!",(255, 0, 0))
pygame.display.flip()