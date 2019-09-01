#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::setw;
using namespace std;

string players[20];
int score[20],pointer=1;

void addPlayer(string name,int scor);
void sortData(string player, int size);
void printPlayers();
int searchPlayer(string player);
void removePlayer(string player);

int main ()
{

   int selection ,score;
   string player;

   while(1)
   {
    cout<<"Enter an option"<<endl;
    cout<<"[1]-Add a new player and score"<<endl;
    cout<<"[2]-Print all players and scores"<<endl;
    cout<<"[3]-Remove a player "<<endl;
    cout<<"[4]-Quit"<<endl;
    cin>>selection;

    switch(selection)
    {
	    case 1:	cout<<"Enter player name and score"<<endl;
        	 	cin>>player;
        	    	cin>>score;
            	 	addPlayer(player,score);
             		break;
    	    case 2:	printPlayers();
            		break;
    	    case 3: 	cout<<"Enter player name"<<endl;
            		cin>>player;
            		removePlayer(player);
            		break;
    	    case 4: 	exit(0);
    	    default:cout<<"wrong choice enter again"<<endl;
     }
  
   }
}

void addPlayer(string name,int scor)
{
   players[pointer]=name;
   score[pointer]=scor;
   pointer++;
}


void sortData(string player, int size)
{
	int startScan, maxIndex;
	string tempId;
	double maxValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = score[startScan];
		tempId = players[startScan];
		for (int index = startScan+1; index <size; index++)
		{
			if (score[index] > maxValue)
			{
				maxValue = score[index];
				tempId = players[index];
				maxIndex = index;
			}
		}
		score[maxIndex] = score[startScan];
		players[maxIndex] = players[startScan];
		score[startScan] = maxValue;
		players[startScan] = tempId;

	}
}	

void printPlayers()
{

	cout << " Top 10 Scorers: " <<endl;

	for (int i = 0; i < 10; i++)
	{
		cout << setw( 13 ) << players[i] << ":" << setw ( 13 ) << score[i] <<endl;
	}


}

int searchPlayer(string player)
{
	int i=1,found=0;
   	while(i<pointer)
   	{
      		if(players[i]==player)
       		{
          		cout<<"score: "<<score[i]<<endl;
          		found=1;
          		return i;
       	 	}
  		i++;  
   	}
  	if(found==0)
  	{
   		cout<<"the player's name was not entered";  
   		return 0;
   	}
  
}

void removePlayer(string player)
{
	int i;
	i=searchPlayer(player);
	if(i)
	{
		while(i<pointer)
		{
   			players[i]=players[i+1];
   			score[i]=score[i+1];
   			i++;
		}
		pointer--;      
	}  
}




