#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod,
					char to_rod, char aux_rod)
{
	if (n == 1)
	{
		cout <<A<<"to"<<C<<endl;
		return;
	}
	towerOfHanoi(n - 1, A, B, C);
	towerOfHanoi(n - 1,B, C, A);
}

// Driver code
int main()
{
	int n; cin>>n;
	towerOfHanoi(n, 'A', 'C', 'B'); 
	return 0;
}
