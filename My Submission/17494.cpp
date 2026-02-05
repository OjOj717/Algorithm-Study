//채점 불가로 제출 X

#include <algorithm>
#include <iostream>
using namespace std;
const int INF = 1e9; //무한대 설정

    int dp[100001];

int main()
{
    int n, m;
    cin >> n >> m;

    dp[0] = 0;
    for (int i = 1; i <= m; i++) 
    {
        dp[i] = INF;
    }
    
    for (int i = 1; i <= n; ++i)
    {
        int w, h;
        cin >> w >> h;
        
        for (int j = m; j >= 0; j--)
        {
            if (dp[j] != INF)
            {
                int sub_w = min(m, j + w);
                dp[sub_w] = min(dp[sub_w], dp[j] + h );
            }
        }
    }

    if (dp[m] == INF)
    {
        cout << "죄송합니다 한승엽 병장님";
    }

    else
    {
        cout << dp[m];
    }
    
    return 0;
}