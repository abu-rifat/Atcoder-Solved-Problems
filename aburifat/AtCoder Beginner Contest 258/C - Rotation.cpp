// /*******Bismillahir-Rahmanir-Rahim**********/
//  
// Name         : Abu Rifat Muhammed Al Hasib
// Institution  : University of Barisal, Bangladesh
// Github       : https://github.com/abu-rifat
// website	: https://a...content-available-to-author-only...t.com
//  
// Codeforces   : https://codeforces.com/profile/ARMaster
// lightoj      : https://lightoj.com/user/abu-rifat
// AtCoder      : https://atcoder.jp/users/aburifat
// codechef     : https://codechef.com/users/aburifat
// SPOJ         : https://spoj.com/users/abu_rifat
// UvaOJ        : https://uhunt.onlinejudge.org/id/889274
//  
// facebook     : https://facebook.com/AbuRifatM
// linkedin     : https://www.linkedin.com/in/aburifat
// Email        : rifat.cse4.bu@gmail.com
// 		  armalhasib@gmail.com
// 		  abu.rifat.m@gmail.com
//  
// Problem	: C - Rotation
// Contest	: AtCoder - AtCoder Beginner Contest 258
// URL		: https://atcoder.jp/contests/abc258/tasks/abc258_c
// Memory Limit : 1024 MB
// Time Limit	: 2000 ms
//  
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll t=1;
	//cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		n=s.size();
		ll idx=0;
		for(ll i=0;i<q;i++){
			ll a,b;
			cin>>a>>b;
			if(a==1){
				idx-=b;
				idx+=n;
				idx%=n;
			}else{
				//cout<<"What?\n";
				b--;
				ll pt=idx+b;
				pt%=n;
				cout<<s[pt]<<endl;
			}
		}
	}
	return 0;
}