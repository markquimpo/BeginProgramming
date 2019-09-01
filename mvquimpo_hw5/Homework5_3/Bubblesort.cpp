//
//  main.cpp
//  Homework5_3
//
//  Created by Mark Vember on 11/29/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#include <iostream>
using namespace std;
template <class T>
void swap_values(T &variable1, T &variable2)
{
    T temp;
    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}
template<class T>
void bubblesort(T arr[], int length)
{
    for (int i = length-1; i>0; i--)
        for(int j = 0; j < i; j++)
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
}


int main()
{
    int i;
    
    int a[10] = {9, 8, 7, 6, 5, 1, 2, 3, 0, 4};
    cout << "Unsorted integers:\n";
    for(i =0; i <10; i++)
        cout << a[i] << " ";
    cout <<endl;
    bubblesort(a, 10);
    cout << "In sorted order the integers are:\n";
    for(i =0; i <10; i++)
        cout << a[i] << " ";
    cout <<endl;

    double b[5] = {5.5, 4.4, 1.1, 3.3, 2.2};
    cout << "Unsorted integers:\n";
    for(i =0; i <5; i++)
        cout << b[i] << " ";
    cout <<endl;
    bubblesort(b, 5);
    cout << "In sorted order the integers are:\n";
    for(i =0; i <5; i++)
        cout << b[i] << " ";
    cout <<endl;
    
    char c[7] = {'G', 'E', 'N', 'E', 'R', 'I', 'C'};
    cout << "Unsorted integers:\n";
    for(i =0; i <7; i++)
        cout << c[i] << " ";
    cout <<endl;
    bubblesort(c, 7);
    cout << "In sorted order the integers are:\n";
    for(i =0; i <7; i++)
        cout << c[i] << " ";
    cout <<endl;
    
return 0;
}
