<<<<<<< HEAD
//  Copyright (c) 2019 Antoine Tran Tan
=======
//  Copyright (c) 2018 Antoine Tran Tan
>>>>>>> Ajout copyright
//

#include "Arduino.h"
#include "include/Ultrasonic.h"

Ultrasonic ultrasonic(2);

void setup()
{
}

void loop()
{
    long RangeInInches;
    long RangeInCentimeters;

    RangeInInches = ultrasonic.MeasureInInches();
    delay(250);

<<<<<<< HEAD
    RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
    delay(250);
=======
    // Stop MOTOR1 and MOTOR2
    Motor.stop(MOTOR1);
    Motor.stop(MOTOR2);
    delay(2000);

>>>>>>> Ajout copyright
}
