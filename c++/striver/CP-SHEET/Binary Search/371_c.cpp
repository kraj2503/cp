#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pii pair<int, int>
#define ll long long int

int pb, pc, ps;
int nb, nc, ns;
int lb, lc, ls;
ll fb, fc, fs;


ll price(ll x)
{
	fb = max(x*lb - nb, (ll)0);
	fc = max(x*lc - nc, (ll)0);
	fs = max(x*ls - ns, (ll)0);
    
    ll p = fb*pb + fc*pc + fs*ps;
	return p;
}

int main()
{
	// freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;
	ll r;
	string s;

	cin >> s;

	n = s.length();
	lb = lc = ls = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'B')lb++;
		else if (s[i] == 'C')lc++;
		else ls++;
	}

	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
// cout<<price(7)<<endl;
	// binary search
	ll high, low, mid, z, ans = 0;
	low = 0, high = r + 1000, mid = 0;

	while (low <= high)
	{
		mid = (low + high) / 2;

		z = price(mid);
        
        if (z == r)
		{
			cout << mid << endl;
			return 0;
		}

		if (z > r)
			high = mid - 1;

		else
			low = mid + 1, ans = mid;
	}
   
    cout << ans << endl;

	return 0;
}