#include <bits/stdc++.h>
 
using namespace std;
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl "\n"
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define debug(x) cout << #x << ": " << x << nl

ll n, m, t, a, b, c,d, k;
string f, s;
 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a>>b>>c>>d;
	n=1;
	while (true){
		if (cin.eof()){
			break;
		}
		cout<<"Case "<<n<<":"<<nl;
		ll ratio = a*d-b*c;
		cout<< d/ratio<<" "<<-b/ratio<<nl<<-c/ratio<<" "<<a/ratio<<nl;
		n++;
		cin>>a>>b>>c>>d;
	}
}