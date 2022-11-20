// file name: Point.cpp
// Descriptions :  Main Entry point to the shapes classs to encapsulate  the shape properties
// Author : Sundiata Bondojia
// Date modified : 9/27/2019

#pragma once
#if !defined (_CPOINT_H_)
#define _CPOINT_H_

class CPoint 
{
public:
    // Default Constructor
    CPoint(void);
    // default destructor 
    ~CPoint(void);


public:
    // calculate the distance between this and another point
   double calculateDistance(CPoint p);

public:
    double m_xLocation;
    double m_yLocation;
};

#endif