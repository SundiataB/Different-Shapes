// file name: CSquare.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019
#include "CRectangle.h"
#pragma once
#if !defined (_CSQUARE_H_)
#define _CSQUARE_H_

class CSquare : public CRectangle
{
public:
    // Default Constructor
    CSquare(void);
    // default destructor 
    ~CSquare(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:
};

#endif