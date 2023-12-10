#include <bits/stdc++.h>
using namespace std;

int N, A[100001];

int main() {
	cin >> N;
	for(int i = 1; i <= N; i++)
	    cin >> A[i];
	    
	int previous = 0;
	int longest_till_now = 0;
	int current_streak = 0;
	for(int i = 1; i <= N; i++)
	{
	    if(A[i] == 0)
	    {
	        previous = 0;
	        continue;
	    }
	    else if(A[i] == 1)
	    {
	        if(previous == 0)
	        {
	            previous = 1;
	            current_streak = 1;
	            longest_till_now = max (longest_till_now, current_streak); 
	        }
	        else if(previous == 1)
	        {
	            current_streak = current_streak + 1;
	            longest_till_now = max (longest_till_now, current_streak); 
	        }
	    }
	}
	
	cout << longest_till_now << endl;
	
	return 0;
}
