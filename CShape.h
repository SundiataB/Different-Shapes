// file name: CShapes.cpp
// Descriptions :  Main Entry point to the shapes classs to encapsulate  the shape properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019
#include "CPoint.h"
#include "CColor.h"
#pragma once
#if !defined (_CSHAPE_H_)
#define CSHAPE_H_

class CShape 
{
public:
    // Default Constructor
    CShape(void);
    // default destructor 
    ~CShape(void);


private:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();


protected:
    CPoint m_center;
    CColor m_color;
    double m_rotation;

};

#endif