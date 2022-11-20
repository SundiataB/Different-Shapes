// file name: CEllipse.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CEllipse.h"

CEllipse::CEllipse(void)
{
   m_majorRadius = 4.2;
   m_minorRadius = 2.0;
   cout << "Ellipse class created (" << m_majorRadius << "," << m_minorRadius << ")" << endl;
}
  
CEllipse::~CEllipse(void)
{
   cout << " Ellipse  class  destroyed " << endl;
}

double CEllipse::calcArea()
{
   return 0.0;
}

bool CEllipse::draw()
{
   CEllipse::draw();
   cout << "Drawing Ellipse " << endl;
   return true;
}
