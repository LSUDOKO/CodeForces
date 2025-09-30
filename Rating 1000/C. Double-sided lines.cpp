#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; 
	while (t--)
	{
		string A, B;
		cin >> A >> B; 

		long long n = A.size(), m = B.size();
		long long lcs = 0; 

		for (long long len = 1; len <= min(n, m); len++)
		{

			for (long long i = 0; i + len <= n; i++)
			{

				for (long long j = 0; j + len <= m; j++)
				{
					
					string extract_A = A.substr(i, len);
					string extract_B = B.substr(j, len);

					
					if (extract_A == extract_B)
						lcs = max(lcs, len); 
				}
			}
		}

		long long operations = n + m - 2 * lcs;
		cout << operations << endl; 
	}
	return 0;
}

// Time Complexity (TC): O(20^4) = O(160000) ~ O(10^5)
// Space Complexity (SC): O(2*20)
