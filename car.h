/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: 2DHIF
* ---------------------------------------------------------
* Exercise Number: 7
* Title:			car.h
* Author:			Kocsis Patrik
* Due Date:		December 06. 2018
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum CarType {AIXAM, FIAT_MULTIPLA, JEEP};
enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

typedef struct CarImplementation* Car;

Car get_car(CarType type);

CarType get_type(Car car);

Color get_color(Car car);

double get_fill_level(Car car);

double get_acceleration_rate(Car car);

void set_acceleration_rate(Car car, double rate);

int get_speed(Car car);

void init();

void accelerate(Car car);


#endif
