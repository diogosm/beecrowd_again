#include<bits/stdc++.h>
#include<algorithm> 
#include<iostream>
#include<climits>
#include<string>
#include<map>
#include<set>
#include<vector>
#include<string.h>
#include <cmath>        // std::abs

using namespace std; 

#define ENDLINE printf("\n");
#define HEY printf("HEY\n");
#define HEYA printf("HEY_A\n");
#define HEYB printf("HEY_B\n");
#define HEY2 printf("	HEY\n");
#define HEY3 printf("		HEY\n");
#define END ("\n")
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)
#define forab(i,a,b)for(__typeof(b)i = a ; i <= (b) ; i++)
 
#define FOR(i,a,b) for(int i = a;i<b;++i)
#define EPS 1e-3
#define MAX 105

int tab[MAX][MAX];

void imprime(bool vetor[],int n){
	FOR(i,1,n+1)
		cout<<vetor[i]<<" ";
	cout<<endl;
}

bool ehVogal(char c){
	if(c == 'a' ||
	c == 'e' ||
	c == 'i' ||
	c == 'o' ||
	c == 'u') return 1;
	return 0;
}

int solve(string in){
	int v_int[in.size()];
	int ans = -1;
	memset(v_int, 0, sizeof(v_int));
	
	FOR(i,0,in.size()) v_int[i] = ehVogal(tolower(in[i])) ? 0 : 1;
	FOR(i,1,in.size()) 
		if(v_int[i-1] == 0 || v_int[i] == 0) continue;
		else v_int[i] = v_int[i-1]+1;
	FOR(i,0,in.size()) ans = max(ans, v_int[i]);
	return ans;
}

int main() {
	
	int n;
	
	while(cin>>n){
		int ans = 0;
		FOR(i,0,n){
			string in;
			cin>>in;
			int ans = solve(in);
			if(ans >= 3) cout<<in<<" nao eh facil";
			else cout<<in<<" eh facil";
			cout<<"\n";
		}
	}
	
	return 0;
}
