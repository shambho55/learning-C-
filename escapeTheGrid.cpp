#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int grid[101][101];

bool isSafe(int x,int y,int n,int m)

{

    return x>=0 && x<n && y>=0 && y<m;

}

int minSteps(int n,int m,int start,int it)

{

    queue<pair<int,int>> q;

        int dx[]={1,0,-1,0};

        int dy[]={0,1,0,-1};

        q.push({start,it});

        grid[start][it]=1;

        

        int level=0;

        while(!q.empty())

        {

            int size=q.size();

            

            for(int i=0;i<size;i++)

            {

                pair<int,int> curr=q.front();

                q.pop();

                if(curr.first==n-1 || curr.second==m-1 || curr.first==0 || curr.second==0)

                return level;

                for(int j=0;j<4;j++)

                {

                    int newx=curr.first+dx[j];

                    int newy=curr.second+dy[j];

                    if(isSafe(newx,newy,n,m) && grid[newx][newy]==0)

                    {

                        grid[newx][newy]=1;

                        q.push({newx,newy});

                    }

                }

         }

            level++;

        }

        return -1;

}

int main() {

    ios_base::sync_with_stdio(0);

 

cin.tie(0);

    

        int n,m,starti,startj;

        cin>>n>>m;

        // int grid[n][m];

        for(int i=0;i<n;i++)

            for(int j=0;j<m;j++)

                {

                    cin>>grid[i][j];

                    if(grid[i][j]==2)

                    {

                        starti=i;

                        startj=j;

                    }

                }

    

        

        cout<<minSteps(n,m,starti,startj);

    

    return 0;

}