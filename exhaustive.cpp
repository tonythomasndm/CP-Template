//Optimising Compiler
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//Short Forms
typedef long long int ll;typedef unsigned long long int ull;typedef long double ld;
typedef pair<int, int> pii;typedef pair<ll,ll> pll;
typedef vector<int> vi;typedef vector<ll> vll;typedef vector<pii> vpii;typedef vector<pll> vpll;typedef vector<vi> vvi;typedef vector<vll> vvll;
//Defining most used functions
//for inputing test cases
#define test(t)             int t; cin >> t; while(t--)
//simple for loop from a to b in i
#define f(i, a, b)          for(int (i) = (a); (i) < (b); ++(i))
//for loop starting from 0
#define fr(i, n)            f(i,0,n)
//for loop till n
#define till(n)             fr(i,n)
//for each iterator
#define each(it,arr)        for(auto it : arr)
//all iterators
#define all(x)              x.begin(), x.end()
//pair first
#define ff                  first
//pair second
#define ss                  second
//vector push_back
#define pb                  push_back
//make a pair and returns a pair
#define mp                  make_pair
//find by order
#define fbo                 find_by_order
//order of key
#define ook                 order_of_key
//clear the values
#define clr(x)              memset(x, 0, sizeof(x))
//sort all 
#define sortall(x)          sort(all(x))
//iterator from starting till end
#define tr(it, a)           for(auto it = a.begin(); it != a.end(); it++)

// Descending Vector
#define rev(ds) reverse(all(ds))
// Total Sum
#define tsum(ds) (accumulate(all(ds), 0ll))
// Count frequency of x
#define ctx(ds, x) (count(all(ds), (x)))
// Size
#define sz(ds) ((ll)(ds).size())
// Min Value
#define mine(ds) (*min_element(all(ds)))
// Max Value
#define maxe(ds) (*max_element(all(ds)))
// Min Value Index
#define minei(ds) (min_element(all(ds)) - (ds).begin())
// Max Value Index
#define maxei(ds) (max_element(all(ds)) - (ds).begin())
// Binary Search
#define bs(ds, x) (binary_search(all(ds), x))
// Lower Bound Index
#define lb(ds, x) (lower_bound(all(ds), (x)) - (ds).begin())
// Upper Bound Index
#define ub(ds, x) (upper_bound(all(ds), (x)) - (ds).begin())
// Ceil Function
#define ceil(num, div) ((num % div != 0) ? ((num / div) + 1) : (num / div))
//fast
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);                                 
#define eps 1e-9 #define mod 1000000007 #define PI 3.141592653589793238462643383279502884L
//short forms
#define imax INT_MAX #define imin INT_MIN #define llmax LLONG_MAX #define llmin LLONG_MIN
#define maxll max<ll> #define minll min<ll>
// yes or no
#define py cout << "YES" << endl // Print Yes
#define pn cout << "NO" << endl	 // Print No
#define debArr(a,n) for(int z=0;z<n;z++){ cout<<a[z]<<" "; } cout<<endl;
#define deb2DArr(a,m,n) for(int z=0;z<m;z++){for(int y=0;y<n;y++){ cout<<a[z][y]<<" "; } cout<<endl;}
//input an vector
#define read(v,n,x) for(int i=0;i<n;i++){ cin>>x; v.pb(x);}
//print an vector
#define print(v,n) for(int i=0;i<n;i++){ cout<<v[i]<<" ";}
string to_string(bool b) { return b ? "1" : "0"; } string to_string(char c) { return string(1, c); } string to_string(string s) { return s; }

template <class T> string dbg(T x) { return to_string(x); }  
template <typename T> T exp(T b, T p){T x = 1;while(p){if(p&1)x=(x*b);b=(b*b);p=p>>1;}return x;}
long long INFF = 1000000000000000005ll;
const int mod=1000000007;
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b){return a*(b/gcd(a,b));} 
ll mod_expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return mod_expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
template <typename T>
//decrease each element in a vector
vector<T> &operator--(vector<T> &v)
{
	for (auto &i : v)
		--i;
	return v;
}
template <typename T>
//increase each element in a vector
vector<T> &operator++(vector<T> &v)
{
	for (auto &i : v)
		++i;
	return v;
}
template <typename T>
//input each element into a vector
istream &operator>>(istream &is, vector<T> &v)
{
	for (auto &i : v)
		is >> i;
	return is;
}
template <typename T>
//output each element in a vector
ostream &operator<<(ostream &os, vector<T> v)
{
	for (auto &i : v)
		os << i << ' ';
	return os;
}
template <typename T, typename U>
//decrease the pair values
pair<T, U> &operator--(pair<T, U> &p)
{
	--p.first;
	--p.second;
	return p;
}
template <typename T, typename U>
//increase the pair values
pair<T, U> &operator++(pair<T, U> &p)
{
	++p.first;
	++p.second;
	return p;
}
template <typename T, typename U>
//input the pair values
istream &operator>>(istream &is, pair<T, U> &p)
{
	is >> p.first >> p.second;
	return is;
}
template <typename T, typename U>
//output the pair values
ostream &operator<<(ostream &os, pair<T, U> p)
{
	os << p.first << ' ' << p.second;
	return os;
}
template <typename T, typename U>
//differnece of two pair values
pair<T, U> operator-(pair<T, U> a, pair<T, U> b) { return mp(a.first - b.first, a.second - b.second); }
template <typename T, typename U>
//summation of two pair values
pair<T, U> operator+(pair<T, U> a, pair<T, U> b) { return mp(a.first + b.first, a.second + b.second); }


// Functions
// Returns b to the power p using Binary Exponentiation
// - To get inverse of b (MMI): binExp(b, mod-2)
// - Enable mod: _ = true
ll binExp(ll b, ll p, bool _)
{
	ll ans = 1;
	while (p)
	{
		if (p & 1)
			ans = _ ? (ans * b) % mod : (ans * b);
		b = _ ? (b * b) % mod : (b * b);
		p >>= 1;
	}
	return ans;
}
// Returns prefix sum array
// - Format: vi preArr = prefixSum(arr)
vi prefixSum(vector<int> arr)
{
	int n = arr.size();
	vector<int> preArr(n);
	preArr[0] = arr[0];
	for (int i = 1; i < n; i++)
		preArr[i] = preArr[i - 1] + arr[i];

	return preArr;
}
void solve()
{
	cout<<binExp(2,4.9,true)<<endl;
}

int main()
{
    fast;
    test(t)
       solve();
    return 0;
}