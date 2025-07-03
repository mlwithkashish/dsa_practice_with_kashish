//MOVE ALL NEGATIVE NO. TO BEGINNING AND POSITIVE TO END WITH CONSTANT EXTRA SPACE
//SINGH KASHISH
//08-06-2025 15:30
#include<iostream>
#include<vector>
using namespace std;
//Function
void move(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>=0) j--;
        if(v[i]>=0 && v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}
int main(){
    vector <int> v;
    v={1,-2,3,-4,-5,6,8};
      cout<<"Original Vector: \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    move(v);
       cout<<"\n\nAfter Moving Vector: \n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   
}
/* 
OUTPUT:
Original Vector:
1 -2 3 -4 -5 6 8

After Moving Vector:
-5 -2 -4 3 1 6 8
*/