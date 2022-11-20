// file name: CSquare.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CLine.h"

CLine::CLine(void)
{
   m_point1.m_xLocation = 4.2;
   m_point2.m_yLocation = 2.0;
   cout << "CLine class created (" << m_point1.m_xLocation <<","<< m_point1.m_yLocation << m_point2.m_xLocation << "," << m_point2.m_yLocation << ")" << endl;
}
  
CLine::~CLine(void)
{
   cout << " CLine  class  destroyed " << endl;
}

double CLine::calcArea()
{
   return 0.0;
}

bool CLine::draw()
{
   CLine::draw();
   cout << "Drawing Cline " << endl;
   return true;
}
