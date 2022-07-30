#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    //What is memset? Give an example
    
    //Solution: Memset is used to set a whole memory block to a particular value, for example we will set the value of character array(all it's entries ) to 'a'
    
    char ch[12];
    // for(int i=0; i<10; i++){
    //     ch[i]='a';
    // }
    // memset(ch,'a',sizeof(char)*10); //Shows a a a a a a a a a a 
    
    memset(ch,'a',sizeof(char)*5);
    memset(ch + 5, 'b', sizeof(char)*5);
    //Prints a a a a a b b b b b
    for(int i=0; i<10; i++){
        std::cout << ch[i]<< " ";
    }
    

    return 0;
}
