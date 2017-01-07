import math

global radius
radius=100
center_x=50
center_y=50


def isInCircle(point_x, point_y):
	if((point_x*point_x + point_y*point_y) <= radius*radius):
		return (point_y*point_y)
	else:
		return 0


print math.atan2(100-50,50-50)*(180/math.pi)

print isInCircle(70,50)
