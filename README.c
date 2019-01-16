# hello-world in C, C++
coded by Tanilus     
Hello, this is my first repository

C ---

      #include <stdio.h>           //standard input/output library
      #include <stdlib.h>
       int main(){
                      printf("Hello World");
                      system("pause");
                      
                      return 0;
       
       }

C++ --- 

        #include <iostream> 
        #include <vector.h>
        using namespace std
        
  
        int main(){
                       vector<char> string("H");
                      
                       string.push_back("e");
                       string.push_back("l");
                       string.push_back("l");
                       string.push_back("o");
                       string.push_back("");
                       string.push_back("W");
                       string.push_back("o");
                       string.push_back("r");
                       string.push_back("l");
                       string.push_back("d");
        
                      for(auto i=string.cbegin; i<string.cend; i++)
                      {cout<< *string[i];
                                   }
                                   return 0;
        }
        

