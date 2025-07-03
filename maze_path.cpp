//SINGH KASHISH
//28-06-25 21:24
//Amazon ; Google ; Microsoft
#include<iostream>
using namespace std;
// count total maze paths
int mazeCount(int m , int n){
   if (m == 1 || n == 1) return 1; // only one way if row or column is 1
   return mazeCount( m -1, n) + mazeCount(m, n-1);
}
// Print all maze patrhs
void printMazePaths(int row , int col , int m , int n, string path){
   if(row == m-1 && n-1){
      cout<<path<<endl;
      return;
   }
   if(row<m-1)
     printMazePaths(row + 1, col , m , n , path +"D"); // Move Down
   if(col<n-1)
     printMazePaths (row, col + 1, m , n , path + "R"); // Move Right
}
int main(){
   //code........
  int m = 3, n=3;
  cout<<"All Maze Paths:\n";
  printMazePaths(0,0,m,n,"");
  cout<<endl;
  cout<<"Total maze paths from(0,0) to (" << m-1 <<"," << n-1 <<"): "<< mazeCount(m,n)<<endl;
   
   return 0;

}
/*
All Maze Paths:
DD
DRD
DRRD
RDD
RDRD
RRDD

Total maze paths from(0,0) to (2,2): 6

*/
/*
What Amazon/Microsoft May Ask (Variants):
✅ Level 3: Maze with Obstacles
You’ll be given a grid with 0 = empty, 1 = blocked

Only print valid paths avoiding blocked cells

✅ Level 4: Diagonal Allowed
Allow Right, Down, and Diagonal (move like R, D, Diag)

✅ Level 5: Minimum steps (BFS)
Shortest path to reach destination (row, col)

*/