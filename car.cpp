/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2DHIF
* ---------------------------------------------------------
* Exercise Number: 7
* Title:			car.h
* Author:			Kocsis Patrik
* Due Date:		December 06. 2018
* ----------------------------------------------------------
* Description:
*
* ----------------------------------------------------------
*/
#include "car.h"

struct CarImplementation
{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration_rate;
  int speed;
}

Car get_car(CarType type)
{
  return 0;
}

CarType get_type(Car car)
{
  return JEEP;
}

Color get_color(Car car)
{
  return RED;
}

double get_fill_level(Car car)
{
  return 1.5;
}

double get_acceleration_rate(Car car)
{
  return 1.5;
}

void set_acceleration_rate(Car car, double rate)
{

}

int get_speed(Car car)
{
  return 0;
}

void init()
{

}

void accelerate(Car car)
{

}
