//
//  main.cpp
//  Homework5_4
//
//  Created by Mark Vember on 11/27/16.
//  Copyright © 2016 Mark Vember. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(){
    cout << setprecision(1) << fixed;
    string fileName, line, movie;
        
    ifstream in;
    in.open("movieList.txt");
    
    map<string, map<string, int> > ratings;
    if(in.is_open())
    {
        getline(in, line);
        int numReviews = atoi(line.c_str());
        
        for(int i = 0; i < numReviews; ++i)
        {
            getline(in, movie);
            getline(in, line);
            int rating = atoi(line.c_str());
            
            if(ratings.find(movie) != ratings.end()){
                ratings[movie]["numReviews"]++;
                ratings[movie]["totalRatings"] += rating;
            }
            else{
                ratings[movie]["numReviews"] = 1;
                ratings[movie]["totalRatings"] = rating;
            }
        }
        for(auto itr = ratings.begin(); itr != ratings.end(); ++itr){
            cout << itr->first << ": " << itr->second["numReviews"] << " review, Average of " << itr->second["totalRatings"] / (double)itr->second["numReviews"] << " / 5" << endl;
        }
        in.close();
    }
    else{
        cout << "File Not Exist " << fileName << endl;
    }
    return 0;
}
