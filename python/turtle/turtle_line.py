import turtle
import time

print "OK"

racer = turtle.Turtle()
racer.tracer()
racer.pencolor("red")

for i in range(10):
	racer.forward(10)
	time.sleep(.250)

racer.left(90)
time.sleep(.250)

for i in range(10):
	racer.forward(10)
	time.sleep(.250)


turtle.done()
