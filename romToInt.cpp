#include <iostream>
#include <string>

using namespace std;
    int digit(char c){
        int value = 0;
        switch(c){
            case 'I':value = 1;break;
            case 'V':value = 5;break;
            case 'X':value = 10;break;
            case 'L':value = 50;break;
            case 'C':value = 100;break;
            case 'D':value = 500;break;
            case 'M':value = 1000;break;     
            case '\0':value = 0;break;
            default : value = -1;break;      
        }
        return value;
    }

    int romanToInt(string s) {
        int i = 0,num = 0;
        while(s[i]){
            if(digit(s[i]) >= digit(s[i + 1])){
            num += digit(s[i]);
            }
            else{
            num += (digit(s[i + 1]) - digit(s[i]));
            i++;
            }
            i++;
        }   
    return num;
    }

int main(){
	string s;
	cin >> s;
	cout << romanToInt(s) << endl;
	
}