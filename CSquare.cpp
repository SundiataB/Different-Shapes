// file name: CSquare.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019



#include <iostream>
using namespace std;
#include "CSquare.h"

CSquare::CSquare(void)
{
   m_numSides = 4;
   m_width = 4.2;
   m_height = m_width;
   
   cout << "Square class created (" << m_width  << ")" << endl;
}
  
CSquare::~CSquare(void)
{
   cout << " Square  class  destroyed " << endl;
}

double CSquare::calcArea()
{
   return 0.0;
}

bool CSquare::draw()
{
   cout << "Drawing Square " << endl;
   return true;
}
