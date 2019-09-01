//
//  Vector2D.h
//  Homework5_1
//
//  Created by Mark Vember on 11/28/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#ifndef Vector2D_h
#define Vector2D_h
#include <iostream>
#include <vector>
#include <cmath>

class Vector2D
{
    public:
    double X,Y;
    void setX(double x)
    {
        X=x;
    }
    void setY(double y)
    {
        Y=y;
    }
    double operator*(Vector2D &b)
    {
        double sum=this->X *b.X+this->Y*b.Y;
        return sum;
    }
};


#endif /* Vector2D_h */
