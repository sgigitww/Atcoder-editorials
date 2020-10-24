#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ff first
#define ss second
#define rsz resize
#define ins insert 
#define mp make_pair
#define pf push_front 
#define pb push_back
#define eb emplace_back 
#define ft front() 
#define bk back()
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define deb(x) cout<<#x<<" "<<x<<'\n';
#define rep(i,a,b) for (int i = (a); i < (b); ++i)

const ll mod = 1e9+7; // 998244353;
const ll inf = 1e18; 
const ld pie = acos((ld)-1);

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

template<typename T>
set<T> factor(T n) {
    set<T> cur;

    for(int i=1;i<=sqrt(n);++i) {
    	if(n%i==0){
    	    cur.ins(i);
    	}
    }

    int x = cur.size();
    for(auto itr = cur.begin();itr!=cur.end() ;++itr) { 
    	cur.ins(n/(*itr));
    }
    
    return cur; 
}

int main(){
    
	ll n;
	scanf("%lld",&n);
	if(n==1) {
		printf("%d\n",1);
		return 0;	
	}

	set<ll> ans = factor<ll>(n);

	for(auto itr=ans.begin();itr!=ans.end();++itr) {
		printf("%lld\n",*itr);
	}

	return 0;

	/*STUFF TO LOOK:	
		1. Check the constraints
		2. Corner cases(n==0||n==1)
		3. Variables in loops
		4. Make sure two ints aren’t multiplied to get a long long
		5. Don't use scanf or printf while using ios_base
		6. using the local variable of the same name when global variable was required to be used
	*/
}
