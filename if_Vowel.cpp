//SINGH KASHISH
//16-06-25 09:42
//TOpic: Strings - Count Vowels
//Very useful for logic building and interviews

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int count = 0;
    cout<<"Enter A string: ";
    getline(cin,str);

    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        count++; // char ch = tolower(str[i]); tolower() → handles both upper and lower case vowels.
      i++;
    }
    cout<<"Total NO. Of Vowels: "<<count;
  return 0;
}
/*
Enter A string: Singh Kashish
Total NO. Of Vowels: 3....
*/