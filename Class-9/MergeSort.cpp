
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

const int mx = 2e5+123;
int a[mx];

void merge( int l, int mid, int r )
{
    int p = l;
    int q = mid+1;

    int tmp[r-l+1];
    int k = 0;

    while ( p <= mid && q <= r ) {
        if ( a[p] <= a[q] ) {
            tmp[k] = a[p];
            k++;
            p++;
        }
        else {
            tmp[k] = a[q];
            q++;
            k++;
        }
    }

    while ( p <= mid ) {
        tmp[k] = a[p];
        p++;
        k++;
    }

    while ( q <= r ) {
        tmp[k] = a[q];
        q++;
        k++;
    }

    k = 0;
    for ( int i = l; i <= r; i++ ) {
        a[i] = tmp[k];
        k++;
    }
}

void mergeSort( int l, int r )
{
    if ( l == r ) return;

    int mid = ( l + r ) / 2;
    mergeSort( l, mid );
    mergeSort( mid+1, r );

    merge ( l, mid, r );
}

int main()
{
    optimize();

    int n;
    cin >> n;
    for ( int i = 1; i <= n; i++ ) cin >> a[i];

    mergeSort( 1, n );

    for ( int i = 1; i <= n; i++ ) cout << a[i] << " ";
    cout << endl;


    return 0;
}














