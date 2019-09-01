#include <iostream>
#include <string>
using namespace std;
int main()
{
	char message[100];
	char output[100];
	int key, count;

	cout<<"Enter encrypted message : "<<endl;
	cin.getline(message,100);

	for(key = 1; key <= 100; key++)
	{
		for(count = 0; message[count]!='\0'; count++)
		{
			if(message[count]-key <32)
				output[count]=message[count]-key-32+127;
			else
				output[count]=message[count]-key;
		}
		cout <<" Decrypted message using Key "<<key<<" : ";
		cout<<output<<endl;
	}

}
