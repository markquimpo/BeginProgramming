

//
//  main.cpp
//  Homework5_5
//
//  Created by Mark Vember on 12/5/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#include <iostream>
#include <thread>
#include <chrono>
#include "unistd.h"
#include <stdio.h>

using namespace std;

int main()
{
    int numb;
   // int count;
    cout <<"Enter the # of value: "<<endl;
    cin >> numb;
   
    


    cout << "count:\n";
    for (int i=1; i>0; i++)
    {
        cout << i << std::endl;
        
        this_thread::sleep_for (std::chrono::seconds(1));
    
    }
    cout << "Output";
    
    return 0;
 
    
}


