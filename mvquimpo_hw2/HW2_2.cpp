#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
using namespace std;

const int ROWS=120;
const int COLUMNS=3;
void readLifeDeathProbabilityFile(double fileData[ROWS][COLUMNS], ifstream& fileReader) ;
int main()
{

   double fileDate[ROWS][COLUMNS];

   ifstream fin;
   fin.open("/home/student/mvquimpo/csce211/LAB2/LifeDeathProbability.txt");
  

   if(!fin)
   {
       cout<<"File doesnot exit."<<endl;
       cout<<"Exiting from program."<<endl;
       system("pause");
       exit(0);

   }
  
   readLifeDeathProbabilityFile(fileDate,fin);
   int age;
   cout<<"Enter age : ";
   cin>>age;

   char gender;;
   cout<<"Enter Gender (M/F) : "<<endl;
   cin>>gender;

   srand(time_t(0));
   double ageProbability = ((double) rand() / (RAND_MAX));
   bool death=false;

   while(!death && age<120)
   {
       if(gender=='M' || gender=='m')
       {
           if(ageProbability<=fileDate[age][1])
           {
               cout<<"You will live to age "<<age<<endl;
               death=true;
           }
           else
           {  
               age++;      
               ageProbability = ((double) rand() / (RAND_MAX));
           }
       }
       else if(gender=='F'|| gender =='f')
       {
           if(ageProbability<=fileDate[age][2])
           {
               cout<<"You will live to age "<<age<<endl;
               death=true;
           }
           else
           {      
               age++;
               ageProbability = ((double) rand() / (RAND_MAX));
           }
       }
   }

   if(age==120)
       cout<<"You will live upto 120"<<endl;  

   system("pause");
   return 0;


}

void readLifeDeathProbabilityFile(double fileData[ROWS][COLUMNS], ifstream& fileReader)
{  
   for (int age = 0; age < ROWS; age++)
   {      
       fileReader>>fileData[age][0];
       fileReader>>fileData[age][1];
       fileReader>>fileData[age][2];
   }
}


