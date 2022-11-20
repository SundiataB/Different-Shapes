// file name: color.cpp
// Descriptions :  Main Entry point to the shapes classs to encapsulate  the color properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019

// Great!

#include <iostream>
using namespace std;

#include "CColor.h"

CColor::CColor(void)
{
  m_green = 22;
  m_red = 0 ;
  m_blue = 42;
  cout << " Color  class created (" << m_red << "," << m_green << "," << m_blue << ")" << endl;

}
CColor::~CColor(void)
{
  cout << " Color  class  destroyed " << endl;
}


