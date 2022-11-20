// file name: CSquare.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/201
#include "CPolygon.h"
#include "CLine.h"
#pragma once
#if !defined (_TRIANGLE_H_)
#define _TRIANGLE_H_

class CTriangle : public CPolygon
{
public:
    // Default Constructor
    CTriangle(void);
    // default destructor 
    ~CTriangle(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:

    CLine m_line1;
    CLine m_line2;
    CLine m_line3;


};

#endif