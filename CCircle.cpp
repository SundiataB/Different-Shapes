// file name: CEllipse.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CCircle.h"

CCircle::CCircle(void)
{

   m_minorRadius = m_majorRadius;
   cout << " Circle class created (" << m_majorRadius << "," << m_minorRadius << ")" << endl;
}
  
CCircle::~CCircle(void)
{
   cout << " Circle  class  destroyed " << endl;
}

double CCircle::calcArea()
{
   return 0.0;
}

bool CCircle::draw()
{
   cout << "Drawing Circle " << endl;
   return true;
}
