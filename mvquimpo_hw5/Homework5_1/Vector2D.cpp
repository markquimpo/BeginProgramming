//
//  main.cpp
//  Homework5_1
//
//  Created by Mark Vember on 11/28/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include "Vector2D.h"

using namespace std;

int main()
{
    Vector2D A, B;
    A.setX(1.0);
    A.setY(2.0);
    B.setX(3.0);
    B.setY(4.0);
    cout << "The dot product of A.B is " << A*B << endl;
    
    Vector2D C, D;
    C.setX(1.0);
    C.setY(1.0);
    D.setX(7.0);
    D.setY(2.0);
    cout << "The dot product of C.D is " << C*D << endl;
    
    Vector2D E, F;
    E.setX(5.0);
    E.setY(7.0);
    F.setX(2.0);
    F.setY(4.0);
    cout << "The dot product of E.F is " << E*F << endl;
    return 0;
}
