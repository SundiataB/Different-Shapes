// file name: Polygon.cpp
// Descriptions :  Main Entry point to the shapes classs to encapsulate  the polygon properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019
#include "CShape.h"
#pragma once
#if !defined (_CPOLYGON_H_)
#define _CPOLYGON_H_

class CPolygon : public CShape
{
public:
    // Default Constructor
    CPolygon(void);
    // default destructor 
    ~CPolygon(void);


public:
    // calculate the are of this shape
    double  calcArea();
    // stub that would normally draw this stage
    bool  draw();  

public:
    int m_numSides;

};

#endif