#include<iostream>

using namespace std;


int main()
{	
  int num;
  int a[10] = {0};          //array is only  10 elements
  cout << "How many numbers? (max of 10)" << endl;
  cin >> num;               //prompts user for a values
  for (int i = 0; i < num; i++)
  {
     cout << "Enter number " << i << endl;
     cin >> a[i];           //put values in array
  }
  // Output the numbers entered
  for (int i = 0; i < 10; i++)
        cout << a[i] << endl;
  return 0;
}        


/* The reason why the program did not run or loop to 255 times
because the array is already set to 10. Since the program is asking
the user to set the size of the array (num) the output will limit from
the array. We need an a variable pointer that holds the address location
of an integer to have allocated the memory for array. We can also use
the while loop inside the function */
