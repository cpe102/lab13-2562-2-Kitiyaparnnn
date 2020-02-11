#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	//Write your code here.
	int lo;
		for(int i=1;i<N;i++){
			for(int a=0;a<N;a++){
				lo = i;
				if(a==i) cout<<"["<<d[a]<<"]"<<" ";
				else cout<<d[a]<<" ";}
			cout<<"=>"<<" ";
			for(int end=i;end>0;end--){
				if(d[end]>d[end-1]){
					swap(d,end,end-1);
					lo=end-1;
				}
			}
			for(int j=0;j<N;j++){
				if(j==lo) cout<<"["<<d[j]<<"]"<<" ";
				else cout<<d[j]<<" ";}
			cout<<"\n"; 
		}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
