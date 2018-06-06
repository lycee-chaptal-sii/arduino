//  Copyright (c) 2019 Antoine Tran Tan
//

#include "Arduino.h"
#include "include/Grove_I2C_Motor_Driver.h"

// default I2C address is 0x0A
#define I2C_ADDRESS 0x0A

void setup()
{
    Motor.begin(I2C_ADDRESS);
}

void loop()
{
    // Set speed of MOTOR1, Clockwise
    Motor.speed(MOTOR1, 50);
    // Set speed of MOTOR2, Anticlockwise
    Motor.speed(MOTOR2, -70);
    delay(2000);

    // Change speed and direction of MOTOR1
    Motor.speed(MOTOR1, -100);
    // Change speed and direction of MOTOR2
    Motor.speed(MOTOR2, 100);
    delay(2000);

    // Stop MOTOR1 and MOTOR2
    Motor.stop(MOTOR1);
    Motor.stop(MOTOR2);
    delay(2000);

}
