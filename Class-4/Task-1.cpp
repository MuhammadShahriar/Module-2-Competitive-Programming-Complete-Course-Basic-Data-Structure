
///   ***   ---   ||         In the name of ALLAH        |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

const int mx = 3e4+123;
int sum[mx];

int main()
{
    optimize();

    int t;
    cin >> t;
    ///O(T*30*n) = 100 * 30 * 30000 = 90000000
    for ( int tc = 1; tc <= t; tc++ ) {
        mem( sum, 0 );

        string s, p;
        cin >> s >> p;

        int n = s.size();
        int m = p.size();

        ll ans = 0;

        ///O(10*3*n)
        for ( int c = 0; c < 10; c++ ) {
            char ch = c + 'a';

            ///O(n)
            for ( int i = 0; i < n; i++ ) {
                sum[i+1] = ( s[i] == ch );
            }
            ///O(n)
            for ( int i = 1; i <= n; i++ ) sum[i] += sum[i-1];

            ///O(m)
            for ( int i = 0; i < m; i++ ) {
                if ( p[i] == ch ) {
                    int l = i+1;
                    int cnt = m - i - 1;
                    int r = n - cnt;

                    ans += ( sum[r] - sum[l-1] );
                }
            }
        }

        cout << "Case " << tc << ": " << ans << endl;
    }


    return 0;
}














