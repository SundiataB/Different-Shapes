// file name: CPoint.cpp
// Descriptions :  Main Entry point to the shapes classs to encapsulate  the point properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019

// Great!

#include <iostream>
using namespace std;

#include "CPoint.h"

CPoint::CPoint(void)
{
   m_xLocation = 0.0;
   m_yLocation = 0.0;
   cout << " Point  class created (" << m_xLocation << "," << m_yLocation << ")" << endl;

}
CPoint::~CPoint(void)
{
   cout << " Point  class  destroyed " << endl;
}

double CPoint::calculateDistance(CPoint p)
{
   return 0.0;
}
