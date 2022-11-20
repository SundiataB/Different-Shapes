// file name: Polygon.cpp
// Descriptions : Main Entry point to the shapes classs to encapsulate  the polygon properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019

// Great!

#include <iostream>
using namespace std;
#include "CPolygon.h"

CPolygon::CPolygon(void)
{
   m_numSides = 0;
   
   cout << " Polygon class created (number od sides " << m_numSides << ")" << endl;
}
  
CPolygon::~CPolygon(void)
{
   cout << " Polygon  class  destroyed " << endl;
}

double CPolygon::calcArea()
{
   return 0.0;
}

bool CPolygon ::draw()
{
   cout << "Drawing Polygon " << endl;
   return true;
}