//
//  main.cpp
//  Homework5_2
//
//  Created by Mark Vember on 11/29/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//


#include <iostream>


using namespace std;


struct Node
{
    int num;
    Node*link;
};

void intVal(int &integer)
{
    while(cin.fail() ||!cin.good()|| integer!= static_cast<int>(integer) || integer <=0)
    {
        cout << "Error, invalid entry. " << endl
        << "Pease make a different entry: ";
        cin.clear();
        cin.ignore(80,'\n');
        cin.sync ();
        cin >> integer;
        cout << integer;
    }
}



int main()
{
    Node *head = NULL;
    Node *current;
    int prisoners;
    int numSyls;
    cout <<"Enter number of Prisoners: " ;
    cin>>prisoners;
    cout <<"Enter number of Syllables: " ;
    cin>>numSyls;
    intVal(prisoners);
    
    if(prisoners ==1)
    {
        cout <<"THE PRISONER SURVIVOR IS #: " <<prisoners <<endl;
    }
    
    
    else
    {
        //create the circular linked list, starting with #1
        head = new Node;
        head->num=1;
        head->link=head;
        current=head;
        
        for(int i = 2; i<=prisoners; i++)
        {
            Node *newNode = new Node;
            newNode->num=i;
            newNode->link=head;
            current->link=newNode;
            current=newNode;
        }
        current = head;
        
        do
        {
            //skip to 3rd prisoner
            Node *prev;
            Node *next;
            if (numSyls == 1)
            {
                prev= head;
                while(prev->link != current)prev = prev->link;
                
            }
            else
            {
                for(int i = 0; i < numSyls -2; i++)
                {
                    current = current ->link;
                    prev = current;
                    
                }
                
                current = current->link;
                next = current->link;
                
                prev->link = next;
                
            }
            
            
            
            cout<< "Execute prisoners number: " <<current->num <<endl;
            
            
            delete current;
            current = next;
            
        } while (current !=current->link);
        
        
        cout <<"THE PRISONER SURVIVOR IS #: " <<current->num <<endl;
        delete current;
    }
    
    return 0;
}


