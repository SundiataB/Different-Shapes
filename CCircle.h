// file name: CEllipse.cpp
// Descriptions : An abstract class to escapluate the Square properties
// Author : Sundiata Bondojia
// Date modified : 9/27/201
#include "CELlipse.h"
#pragma once
#if !defined (_CCIRCLE_H_)
#define _CCIRCLE_H_

class CCircle : public CEllipse
{
public:
    // Default Constructor
    CCircle(void);
    // default destructor 
    ~CCircle(void);


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