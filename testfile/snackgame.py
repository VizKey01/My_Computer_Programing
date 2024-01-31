import turtle
import time
import random

delay = 0.1

score = 0
high_score = 0

wn = turtle.Screen()
wn.title("Super Snake game")
wn.bgcolor("pink")
wn.setup(width = 600, height = 600)
wn.tracer(0)

head = turtle.Turtle()
head.speed(0)
head.shape("circle")
head.color("blue")
head.penup()
head.goto(0,0)
head.direction = "stop"

food = turtle.Turtle()
food.speed(0)
food.shape("triangle")
food.color("red")
food.penup()
food.goto(0,200)

bar = turtle.Turtle()
bar.speed(0)
bar.shape("square")
bar.color("green")
bar.penup()
bar.goto(0,100)

segments = []

pen = turtle.Turtle()
pen.speed(0)
pen.shape("square")
pen.color("black")
pen.penup()
pen.hideturtle()
pen.goto(0,260)
pen.write("Score: 0 High Score: 0",align= "center", font=("Courier",24,"normal"))

def go_up():
    if head.direction != "down":       
        head.direction = "up"
    
def go_down():
    if head.direction != "up":
        head.direction = "down"
    
def go_right():
    if head.direction != "left":
        head.direction = "right"
    
def go_left():
    if head.direction != "right":
        head.direction = "left"    
 
def move():
    if head.direction == "up":
        y = head.ycor()
        head.sety(y + 20)
        
    if head.direction == "down":
        y = head.ycor()
        head.sety(y - 20)
        
    if head.direction == "right":
        x = head.xcor()
        head.setx(x + 20)    
    
    if head.direction == "left":
        x = head.xcor()
        head.setx(x - 20)
        
wn.listen()
wn.onkeypress(go_up,"w")
wn.onkeypress(go_down,"s")
wn.onkeypress(go_left,"a")
wn.onkeypress(go_right,"d")

while True:
    wn.update()
    
    if head.xcor()>290 or head.xcor()<-290 or head.ycor()>290 or head.ycor()<-290:
        time.sleep(1)
        head.goto(0,0)
        head.direction = "stop"
        
        for segment in segments:
            segment.goto(1000,1000)
            
        segments.clear()
        
        score = 0
        
        pen.clear()
        pen.write("Score: {} High Score: {}".format(score,high_score), align="center",font=("Courier",24,"normal"))

    if head.distance(food) < 20:
        x = random.randint(-190,190)
        y = random.randint(-190,190)
        food.goto(x,y)
        
        new_segment = turtle.Turtle()
        new_segment.speed(0)
        new_segment.shape("circle")
        new_segment.color("yellow")
        new_segment.penup()
        segments.append(new_segment)
        
        delay -= 0.000000001
        
        score += 1

        if score > high_score:
            high_score = score

        pen.clear()
        pen.write("Score: {} High Score: {}".format(score,high_score), align="center",font=("Courier",24,"normal"))

        
    if head.distance(bar) < 20:
        x = random.randint(-190,190)
        y = random.randint(-190,190)
        bar.goto(x,y)
        
        delay -= 0.001

        time.sleep(1)
        head.goto(0,0)
        head.direction = "stop"
        
        for segment in segments:
            segment.goto(1000,1000)
            
        segments.clear()
        
        score = 0

        pen.clear()
        pen.write("Score: {} High Score: {}".format(score,high_score), align="center",font=("Courier",24,"normal"))
    
    for index in range(len(segments)-1, 0,-1):
        x = segments[index-1].xcor()
        y = segments[index-1].ycor()
        segments[index].goto(x,y)
        
    if len(segments) > 0:
        x = head.xcor()
        y = head.ycor()
        segments[0].goto(x,y)
    
    move()
    
    for segment in segments:
        if segment.distance(head) < 20:
            time.sleep(1)
            head.goto(0,0)
            head.direction = "stop"
        
            for segment in segments:
                segment.goto(1000,1000)
            
            segments.clear()
            
            score = 0
        
            pen.clear()
            pen.write("Score: {} High Score: {}".format(score,high_score), align="center",font=("Courier",24,"normal"))
        
    time.sleep(delay)
