// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Date: September 29th, 2022
// This program calculates the cost of a pizza
// including HST, and getting user input for the
// diameter of the pizza, to give a total cost in
// Canadian dollars.
#include <iostream>
#include <iomanip>

// this is the function that will calculate
// the cost of the pizza
int main() {
  // declaring constants for the function
  const float HST = 0.13;
  const float LABOUR_COST = 2.00;
  const float RENTAL_COST = 2.25;
  const float INGREDIENTS = 1.50;

  // declaring and initializing subtotal, tax,
  // diamater, and total variables
  float diameter, taxDollars, subtotal, total;

  // getting user input for diameter
  std::cout << "Please insert the diameter you’d like ";
  std::cout << "your pizza to be in inches : ";
  std::cin >> diameter;

  // process of calculating pizza cost
  subtotal = diameter * INGREDIENTS + LABOUR_COST + RENTAL_COST;
  taxDollars = subtotal * HST;
  total = subtotal + taxDollars;

  // displaying the results back to the user, output.
  std::cout << "The total cost of your pizza, including HST, is: $";
  std::cout << std::fixed << std::setprecision(2) << std::setfill('0') << total;
  std::cout << " CAD." << std::endl;
}
