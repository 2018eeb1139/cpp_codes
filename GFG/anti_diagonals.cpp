// C++ program for the above approach
#include <iostream>
#include <vector>
using namespace std;

// Function to print diagonals
void diagonal(vector<vector<int> >& A)
{

	int n = A.size();
	int N = 2 * n - 1;

	vector<vector<int> > result(N);

	// Push each element in the result vector
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			result[i + j].push_back(A[i][j]);

	// Print the diagonals
	for (int i = 0; i < result.size(); i++) 
	{
		cout << endl;
		for (int j = 0; j < result[i].size(); j++)
			cout << result[i][j] << " ";
	}
}

// Driver Code
int main()
{

	vector<vector<int> > A = { { 1, 2, 3, 4 },
							{ 5, 6, 7, 8 },
							{ 9, 10, 11, 12 },
							{ 13, 14, 15, 16 } };
	
	// Function Call
	diagonal(A);

	return 0;
}

