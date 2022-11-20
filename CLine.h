// file name: CLine.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/201
#include "CShape.h"
#pragma once
#if !defined (_CLINE_H_)
#define _CLINE_H_

class CLine : public CShape
{
public:
    // Default Constructor
    CLine(void);
    // default destructor 
    ~CLine(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:

    CPoint m_point1;
    CPoint m_point2;

};

#endif