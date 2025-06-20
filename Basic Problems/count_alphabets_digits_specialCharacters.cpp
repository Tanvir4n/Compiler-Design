#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    string str;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);  // Reads the full line including spaces

    for(char ch : str){
        if(isalpha(ch)){
            alphabets++;
        } else if(isdigit(ch)){
            digits++;
        } else if(!isspace(ch)){
            special++;
        }
    }

    cout<<"Alphabets: "<<alphabets<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special characters: "<<special<<endl;

    return 0;
}
