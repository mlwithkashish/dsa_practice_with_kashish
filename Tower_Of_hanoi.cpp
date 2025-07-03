#include<iostream>
using namespace std;
void towerOfHanoi(int n , char source , char helper, char destination){
    if(n==1){
        cout<<"Move disk 1 from "<< source <<" ->  " << destination<<endl;
       return;
    }
    //Step 1: Move n-1 disks from source to helper
    towerOfHanoi(n - 1 , source , destination , helper );

    //Step 2: move nth disk from source to  destination
    cout<<"Move disk "<< n << " from "<<source <<" -> "<<destination<<endl;

     // Step 3: Move n-1 disks from helper to destination
    towerOfHanoi(n - 1, helper, source, destination);
}
int main(){
    int n;
    cout<<"\nEnter No. Of disk: ";
    cin>>n;
    cout<<"\nSteps to solve Tower of Hanoi for "<< n << " disks: \n";
    towerOfHanoi(n,'A','B','C');//A = source , B= Helper , C= destination

}