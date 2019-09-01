//
//  main.cpp
//  Homework5_6
//
//  Created by Mark Vember on 12/1/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class Date
{
public:
    int dd;
    int mm;
    int yy;
    void setDate(int dd, int mm, int yy)
    {
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }
    bool isValid(int dd, int mm, int yy)
    {
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
        {
            if(dd>31||dd<1)
            {
                cout<<"Invalid DATE"<<endl;
                return false;
            }
            else
                return true;
        }
        else if(mm==2)
        {
            if((dd>28)&&(!leapYear(yy)))
            {
                cout<<"\n"<<yy<<" -> Not a Leap Year! \n";
                cout<<dd<<" is not a valid date of February!"<<endl;
                return false;
            }
            else
                return true;
        }
        else if(mm>12 || mm<1)
        {
            cout<<"Invalid MONTH"<<endl;
            return false;
        }
        else
        {
            if(dd>30||dd<1)
            {
                cout<<"Invalid DATE"<<endl;
                return false;
            }
            else
                return true;
        }
    }
    
    
    int leapYear(int yr)
    {
        if(yr%4 == 0)
        {
            if( yr%100 == 0)
            {
                if ( yr%400 == 0)
                    return 1;
                else
                    return 0;
            }
            else
                return 1;
        }
        else
            return 0;
    }
};

string getMonth(int m)
{
    string Months[]={"January","February","March","April","May","June","July",
        "August","September","October","November","December"};
    return Months[m-1];
}


int main()
{
    int dd,mm,yy;
    string dateInp;
    while(true)
    {
        cout << "Enter a date (MM/DD/YY): " << endl;
        cin >> dateInp;
        if(dateInp.compare("-1") == 0)
            break;
        mm = stoi(dateInp.substr(0,2));
        dd = stoi(dateInp.substr(3,2));
        yy = stoi(dateInp.substr(6));
        Date date;
        if(date.isValid(dd,mm,yy))
        {
            date.setDate(dd,mm,yy);
            cout<<getMonth(date.mm)<<" "<<date.dd<<", '"<<date.yy<<endl;
            
        }
        else
        {
            cout<<"\n****Invalid Input!! Enter again!**** \n";
            
        }
    }
    
}



