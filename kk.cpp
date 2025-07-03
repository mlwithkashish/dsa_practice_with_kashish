
// Merge two Sorted Array
#include <iostream>
#include <vector>
using namespace std;
class Solution{
	public: void Sort_Array1(vector<int>&v1){
		cout << "\n First Array Formed"<<"{ ";
		for(int i=0;i<v1.size();i++){
			cout << v1[i]<<" ";
		}cout <<"}"<<endl;
	}
	void Sort_Array2(vector<int>&v2){
		cout << "\n Second Array Formed"<<"{ ";
		for(int i=0;i<v2.size();i++){
			cout << v2[i]<<" ";
		}cout <<"}"<<endl;
	}
	
	vector<int>merge(vector<int>&v1,vector<int>&v2){
		int p = v1.size();
		int q = v2.size();
		vector<int> sum(p+q);
		int i = 0;
		int j = 0;
		int k = 0;
		while(i<p && j<q){
			if(v1[i]<v2[j]){
				sum[k] = v1[i];
				i++;
				k++;
				
			}else{
				sum[k] = v2[j];
				j++;
				k++;
			}
			
		
		
	}
		
	
	// For Remaining Elements
	if(i==p){
		while(j<=q-1){
			sum[k] = v2[j];
			k++;
			j++;
			
		}
	}
	if(j==q){
		while(i<=p-1){
			sum[k] = v1[i];
			k++;
			i++;
		}
	}return sum;
}
};
int main(){
	int n;
	cout << "\n Enter the size of First Array: "<<endl;
	cin >> n;
	vector<int> v1(n);
	
	for(int i=0;i<n;i++){
		cout << "\n Enter the Elements "<<i+1<<".";
		cin >> v1[i];
	}cout <<endl;
	
	int m;
	cout << "\n Enter the size of Second  Array: "<<endl;
	cin >> m;
	vector<int> v2(m);
	
	for(int i=0;i<m;i++){
		cout << "\n Enter the Elements "<<i+1<<".";
		cin >> v2[i];
	}cout<<endl;
	Solution aa;
aa.Sort_Array1(v1);
aa.Sort_Array2(v2);

vector<int> v = aa.merge(v1,v2);
cout << "\n After Merging Two Arrays."<<"{ ";
for(int i=0;i<v.size();i++){
	cout << v[i]<<" ";
}cout <<"}"<<endl;
return 0;
	}
