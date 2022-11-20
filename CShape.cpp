// file name: CShapes.cpp
// Descriptions : Main Entry point to the shapes classs to encapsulate  the shape properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019

// Great!

#include <iostream>
using namespace std;

#include "CShape.h"

CShape::CShape(void)
{
  cout << " Shape  class created " << endl;

}
CShape::~CShape(void)
{
  cout << " Shape  class  destroyed " << endl;
}

// calculate the are of this shape
double  CShape::calcArea()
{
  return 0.0;
}
// stub that would normally draw this stage
bool  CShape::draw()
{
  cout << " Drawing  Shape" << endl;
  return true;
}

