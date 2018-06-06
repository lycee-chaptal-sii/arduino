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

    RangeInCentimeters = ultrasonic.MeasureInCentimeters(); // two measurements should keep an interval
    delay(250);
}
