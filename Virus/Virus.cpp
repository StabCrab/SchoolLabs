//
// Created by trykr on 26.12.2018.
//

#include <iostream>
#include <set>
#include <algorithm>
#include <functional>
struct Log{
    int time;
    int send;
    int direction;
};
using namespace std;

int main()
{
    int n = 1, m = 1;
    while (1)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        set <int> infected;
        infected.clear();
        Log log[m];
        infected.insert(1);
        for (int i = 0; i < m; i++)
        {
            Log change;
            cin >> log[i].time >> log[i].send >> log[i].direction;
        }
        Log temp;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (log[j + 1].time < log[j].time)
                {
                    temp = log[j + 1];
                    log[j+1] = log[j];
                    log[j] = temp;
                }

            }
        }
        int count = 1;
        for (int i = 0; i < m; i++)
        {
            if (infected.find(log[i].send) != infected.end())
            {
                infected.insert(log[i].direction);
                count++;
            }
        }
        cout << count << endl;
    }
}