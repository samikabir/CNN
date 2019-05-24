//
//  main.cpp
//  HelloWorld
//
//  Created by Sami Kabir on 11/9/18.
//  Copyright © 2018 PERCCOM. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  string attribute1;
  string attribute2;
  string attribute3;
  int counter = 0;    
    
  ifstream myfile ("cnn_prediction.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
      if(counter == 0)
      {
         attribute1 = line;        
      }
      else if (counter == 1)
      {
          attribute2 = line;        
      }
      else
          attribute3 = line;        
        
      counter++;     
     
    }
    myfile.close();
  }

  else cout << "Unable to open file";  
    
  cout << "\n" << "attribute1: " << attribute1 << "\n" << "attribute2: " << attribute2 << "\n" << "attribute3: " << attribute3 << endl;       

  return 0;
    
}