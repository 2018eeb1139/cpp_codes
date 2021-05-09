#include <iostream>
#include <cstdlib>

using namespace std;

void read_matrix(int A[][100],int m,int n){
						int i,j;
						for(i=0;i<m;i++){
							for(j=0;j<n;j++){
										cin>> A[i][j];
									}
							}
}

void print_matrix(int A[][100],int m,int n){
						int i,j;
						for(i=0;i<m;i++){
							for(j=0;j<n;j++){
										cout<< A[i][j]<< " ";
									}
							cout<< "\n";
							}
}

void binary_search(int A[][100],int m,int n,int target){
		int i=0;
		int j=(m*n)-1;
		while(j>=i){
			int mid=(i+j)/2;
			int midx=mid/n;
			int midy=mid%n;
			if(A[midx][midy]==target){
				cout<< "target found";
				exit(0);
				}
			if(A[midx][midy]<target){
						i=mid+1;
					}
			if(A[midx][midy]>target){
						j=mid-1;		
			}
		}
cout<< "not found";
}
int main()
{
	int m,n;
	cin>> m>> n; 
	int A[100][100];
	read_matrix(A,m,n);
	print_matrix(A,m,n);
	int target;
	cin>> target;
	binary_search(A,m,n,target);
}
