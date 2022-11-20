// file name: Rectnagle.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/201
#include "CPolygon.h"
//#include "CLine.h"
#pragma once
#if !defined (_CRECTANGLE_H_)
#define _CRECTANGLE_H_

class CRectangle : public CPolygon
{
public:
    // Default Constructor
    CRectangle(void);
    // default destructor 
    ~CRectangle(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:
    double m_width;
    double m_height;
};

#endif