//  WRITER :  particleproton
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> v;
typedef pair<int,int> p;
#define f first
#define s second
#define pb push_back
#define mp make_pair
///////////////NOTE///////////////////////////
/*    
1<<l   is equal to  pow(2,l);





/////////////////////// runing length encoding ////////////////////////////////////////////////

/*void rle(string s, vector<pair<char, int>> &vec)
{
  int cnt = 1;
  for(int i = 1; i < (int)s.size(); i++)
  {
    if(s[i] != s[i-1])
    {
      vec.push_back({s[i-1], cnt});
      cnt = 0;
    }
    cnt++;
  }
  vec.push_back({s.back(), cnt});
}

////////////////////NO OF FACTORS//////////////////////////////////////////////////
vector<int> factor(int n)
 {
    vector<int> ret;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ret.push_back(i);
            n /= i;
        }
    }
    if (n > 1) ret.push_back(n);
    return ret;
}
/////////////////////////////////////////////////////////////////////////////////
long long area(int bl_x, int bl_y, int tr_x, int tr_y)  // for calculating area of rectangle 
{
   long long length = tr_y - bl_y;
   long long width = tr_x - bl_x;
   return length * width;
}
bool intersect(vector<int> s1, vector<int> s2)  // for checking  if two rectangles intersect or not 
{
   int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
   int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];
   
   // no overlap
   if (bl_a_x >= tr_b_x || tr_a_x <= bl_b_x  || bl_a_y >= tr_b_y || tr_a_y <= bl_b_y) 
   {
      return false;
   } 
   else 
   {
      return true;
   }
}
int inter_area(vector<int> s1, vector<int> s2)   // for getting area of intersection of two rectangles
{
   int bl_a_x = s1[0], bl_a_y = s1[1], tr_a_x = s1[2], tr_a_y = s1[3];
   int bl_b_x = s2[0], bl_b_y = s2[1], tr_b_x = s2[2], tr_b_y = s2[3];

   return ((min(tr_a_x, tr_b_x) - max(bl_a_x, bl_b_x))*(min(tr_a_y, tr_b_y) - max(bl_a_y, bl_b_y)));
}
/*int gcd(int a,int b)
 {
   if(a==0 || b==0)
      return (a^b);
   else
      return __gcd(a,b);
 }
 int phi(int n)   // in root of n complexity 
  {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
vector<vector<int>> adj;  // adjacency list representation
int n; // number of nodes
int s; // source vertex

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);

q.push(s);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
            p[u] = v;
        }
    }
}


/*void dfs(int node,int comp)
{
   vis[node]= comp;
   for(auto v:g[node])
   {
      if(!vis[v])
      {
         dfs(v,comp);
      }
   }
}*/


int main ()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
       // freopen("error.txt", "w", stdin);
        freopen("output.txt", "w", stdout);
        #endif
         int X=7,x=0;
           for(int j=1;j*j<=X;j++)     // it basically find no of(a,b) such that a*b=n;
           {
             if(X%j==0)
             {
                x++;
                if(X!=j*j)x++;
             }
           }
     
        cout<<x<<endl;
        
        return 0;
}
   
