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

const int MAX_CAR_PARK_SPACE = 6;

struct CarImplementation
{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acceleration;
  int speed;
  int max_speed;
  bool available;
};

struct CarImplementation aixam1 {AIXAM, RED, 16.0, 0.0, 0, true};
struct CarImplementation multipla1 {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true};
struct CarImplementation multipla2 {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true};
struct CarImplementation multipla3 {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, true};
struct CarImplementation jeep1 {JEEP, SILVER, 80.0, 0.0, 0, true};
struct CarImplementation jeep2 {JEEP, BLACK, 80.0, 0.0, 0, true};

static Car car_park[6] = {&aixam1, &multipla1, &multipla2, &multipla3, &jeep1, &jeep2};

Car get_car(CarType type)
{
  for (int i = 0; i < MAX_CAR_PARK_SPACE; i++) {
    if (car_park[i]->type == type && car_park[i]->available == true)
    {
      car_park[i]->available = false;
      return car_park[i];
    }
  }
  return 0;
}

CarType get_type(Car car)
{
  return car->type;
}

Color get_color(Car car)
{
  return car->color;
}

double get_fill_level(Car car)
{
  return car->fill_level;
}

double get_acceleration_rate(Car car)
{
  return car->acceleration;
}

void set_acceleration_rate(Car car, double rate)
{
  if(rate < -8)
  {
    rate = -8;
  }
  else if(car->type == JEEP && rate > 3.14)
  {
    rate = 3.14;
  }
  else if(car->type == AIXAM && rate > 1.0)
  {
    rate = 1.0;
  }
  else if(car->type == FIAT_MULTIPLA && rate > 2.26)
  {
    rate = 2.26;
  }
}

int get_speed(Car car)
{
  return (double)car->speed + 0.5;
}

void init()
{
  for (int i = 0; i < MAX_CAR_PARK_SPACE; i++)
  {
    car_park[i]->available = true;
    car_park[i]->acceleration = 0;
    car_park[i]->speed = 0;
  }
}

void accelerate(Car car)
{
  double velocity = car->acceleration * 3.6;

  if(velocity + car->speed <= car->max_speed)
  {
    car->speed+= velocity;
  }
  else
  {
    car->speed = car->max_speed;
  }
}
