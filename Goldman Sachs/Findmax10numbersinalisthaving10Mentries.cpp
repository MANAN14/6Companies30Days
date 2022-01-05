#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> q;
    int sz;
    cin>>sz;
    for(int i=0;i<sz;i++)
    {
        int temp;
        cin>>temp;
        if(q.size()<10)
        {
            q.push(-temp);
        }
        else
        {
            q.pop();
            q.push(-temp);
        }
    }
    while (!q.empty()) {
        cout << -q.top() << endl;
        q.pop();
    }
}