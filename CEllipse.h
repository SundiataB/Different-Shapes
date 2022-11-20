// file name: CEllipse.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/201
#include "CLine.h"
#pragma once
#if !defined (_CELLIPSE_H_)
#define _CELLIPSE_H_

class CEllipse : public CShape
{
public:
    // Default Constructor
    CEllipse(void);
    // default destructor 
    ~CEllipse(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:

    double m_majorRadius;
    double m_minorRadius;
};

#endif