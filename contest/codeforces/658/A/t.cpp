#include <bits/stdc++.h>
#define endl '\n'
#define debug1( x ) cout << #x << " = " <<  x << endl;
#define debug2( x, y) cout <<#x << " = " << x << " , " <<#y << " = " << y <<endl;
#define F first
#define S second
#define PB push_back
#define size( x )   int( ( x ).size( ) )
#define endl '\n'
#define rep(i, a, b) for( __typeof(a) i =(a); i<(b);i++)
#define rept(i, a, b) for( __typeof(a) i =(a); i<=(b);i++)
#define all(x) x.begin(),x.end()

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

int main(){
  ios::sync_with_stdio( false );
  cin.tie( nullptr );
#ifdef LOCAL
  if(!freopen("in", "r" , stdin)) 
    cerr << "no file..."<<endl;
#endif
  
  int t;
  cin >> t;
  while(t--){
    int n, m, x;
    cin >> n >> m;
    map< int, int> vis;
    bool found = false;
    for( int i = 0; i < n; i++){
      cin >> x ;
      vis[x] = 1;
    }

    for( int i = 0; i < m; i++){
      cin >> x;
      if( !found && vis.count(x)){
        found = true;
        cout << "YES" << endl;
        cout << 1 << " " << x <<endl;
      }
    }
    if( !found){
      cout << "NO" <<endl;
    }
  }
  
  return 0;
}
