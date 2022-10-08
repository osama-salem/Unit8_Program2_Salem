#include <iostream>
using namespace std;

/*Osama Salem
  COSC-1436-57001*/

struct Car{
  string make;
  string model;
  int year;
  string color;
};

void changeColor(Car *car);
Car& changeColor2(Car *car);

int main() {
  
  Car car1 = {"Porsche", "911", 2022};
  Car car2 = {"Nissian", "Skyline GTR", 2000};

  changeColor(&car2);
  car2= changeColor2(&car1);
  

  cout << "\nOriginal Car\nMake: " << car1.make << "\nModel: " << car1.model << "\nYear: "  << car1.year << "\nColor: " << car1.color << endl;
  cout << "\nUpdated Car\nMake: " << car2.make << "\nModel: " << car2.model << "\nYear: "  << car2.year << "\nColor: " << car2.color << endl;

  return 0;
}

void changeColor(Car *car){
  if(car->year > 2010)
  car->color = "GREEN";
  else // if year is 2010 or before update the color to RED
  car->color = "RED";
}

Car& changeColor2(Car *car){
  Car *updCar = new Car();
  if(car->year > 2010)
  updCar->color = "GREEN";
  else
  updCar->color = "RED";
  return *updCar;
}