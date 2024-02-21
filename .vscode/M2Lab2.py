import turtle

# Setup Turtle
wn = turtle.Screen()
wn.bgcolor("white")
car = turtle.Turtle()
car.speed(0)

# Car body
car.color('black', 'red')  # Pen color and fill color
car.begin_fill()
car.penup()
car.goto(-70, -30)
car.pendown()
car.forward(140)
car.left(90)
car.forward(60)
car.left(90)
car.forward(140)
car.left(90)
car.forward(60)
car.end_fill()

# Car windows
car.penup()
car.goto(-50, 5)
car.pendown()
car.setheading(0)  # Face the turtle to the right
car.color('black', 'skyblue')
car.begin_fill()
car.forward(40)
car.left(90)
car.forward(20)
car.left(90)
car.forward(40)
car.left(90)
car.forward(20)
car.end_fill()

# Car wheels
car.penup()
car.goto(-60, -30)
car.pendown()
car.color('black', 'black')
car.begin_fill()
car.circle(10)
car.end_fill()

car.penup()
car.goto(50, -30)
car.pendown()
car.color('black', 'black')
car.begin_fill()
car.circle(10)
car.end_fill()

car.hideturtle()

# Create a turtle for the road
road_turtle = turtle.Turtle()
road_turtle.speed('fastest')

# Draw the road
road_turtle.penup()
road_turtle.goto(-300, -40)
road_turtle.pendown()
road_turtle.begin_fill()
road_turtle.color("gray")
road_turtle.forward(600)
road_turtle.right(90)
road_turtle.forward(200)
road_turtle.right(90)
road_turtle.forward(600)
road_turtle.right(90)
road_turtle.forward(200)
road_turtle.right(90)
road_turtle.end_fill()

# Draw the dashed center line
road_turtle.penup()
road_turtle.goto(-300, -50)
road_turtle.pendown()
road_turtle.color("yellow")
for _ in range(30):
    road_turtle.forward(15)
    road_turtle.penup()
    road_turtle.forward(10)
    road_turtle.pendown()

# Hide the turtle
road_turtle.hideturtle()

# Finish
turtle.done()