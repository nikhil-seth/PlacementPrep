#include <bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
#define ll long long int
#define vvi vector<vector<int> >
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<int,int> >
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;i<n;i++)
#define deb(x) cout<<#x<<" "<<x<<endl;
#define inf 1000000001
#define mp make_pair
#define mod 1000000007
#define pii pair<int,int>
#define pdd pair<double,double>

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin>>n;
    	int ans = 0;
    	int x = (-1+((int)pow((1+8*n),0.5)))/2;
        cout<<x<<" ";
    	if((x*(x+1)/2)<n){
            int num = (x*(x+1)/2);
            ans = (n-num)%10;
        }else{
            if(x%10==0){
                ans = 0;
            }else{
                ans = x%10;
            }
        }
        cout<<ans<<endl;
    }
}