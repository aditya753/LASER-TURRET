# LASER-TURRET
 a turret that allows you to control a laser along X and Y using a joystick
so basically this project uses an arduino uno/mega ,adafruit motor shield,2 stepper motors,joystick and a laser
so when the user moves thye joystick it outputs analog values i.e(0-1023) and these values are sensed by the arduino and as per the commands given in the code the stepper motors are moved.
if the weight of laser is heavy then you can use INTERLEAVE isntead of MICROSTEP in the code and by using an additional 5VDC suppy to the motor sheild and remove the pull down resistor onthe sheild.
