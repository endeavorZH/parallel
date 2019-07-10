#include <bits/stdc++.h>
#include "akari.h"

using namespace std;

namespace aka{

typedef struct black{
    int x;
    int y;
    int quantity;
}blackBlank;

vector<vector<int>> lamp(vector<vector<int>> & g, vector<blackBlank> & dig, vector<blackBlank> & undig){
    for (int i = 1; i <= (int)g.size(); ++i) {
        for (int j = 1; j <= (int)g[0].size(); ++j) {
            
        }
    }
    for(int i=0;i<dig.size();i++){
        cout<<dig[i].x<<" "<<dig[i].y<<" "<<dig[i].quantity<<endl;
    }
    for(int i=0;i<undig.size();i++){
        cout<<undig[i].x<<" "<<undig[i].y<<" "<<undig[i].quantity<<endl;
    }
    return g;
}

vector<vector<int> > solveAkari(vector<vector<int> > & g)
{
    // 请在此函数内返回最后求得的结果
    vector<blackBlank> digitalBlank;
    vector<blackBlank> undigitalBlank;
    vector<vector<int> > ans;
    for (int i = 1; i <= (int)g.size(); ++i) {
        ans.push_back(vector<int>());
        for (int j = 1; j <= (int)g[0].size(); ++j) {
            ans[i-1].push_back(g[i-1][j-1]);
            if(g[i-1][j-1]>-1){
                blackBlank temp;
                temp.x=i-1;
                temp.y=j-1;
                temp.quantity=g[i-1][j-1];
                digitalBlank.push_back(temp);
            }else if(g[i-1][j-1]==-1){
                blackBlank temp;
                temp.x=i-1;
                temp.y=j-1;
                temp.quantity=g[i-1][j-1];
                undigitalBlank.push_back(temp);
            }
        }
    }
    ans=lamp(ans,digitalBlank,undigitalBlank);
    return ans;
}

}
