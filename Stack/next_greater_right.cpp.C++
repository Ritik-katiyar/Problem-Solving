#include <bits/stdc++.h>
using namespace std;
vector<int> NGR(vector<int> &nums)
{
    stack<int> s;
    vector<int> v;

    int size = nums.size();

    for (int i = size - 1; i >= 0; i--)
    {
        s.push(nums[i]);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        if (s.size() == 0)
        {
            v.push_back(-1);
            s.push(nums[i]);
        }

        else if (s.size() > 0 and s.top() > nums[i])
        {
            v.push_back(s.top());
            s.push(nums[i]);
        }
        else if (s.size() > 0 and s.top() <= nums[i])
        {
            while (s.size() > 0 and s.top() <= nums[i])
            {
                s.pop();
            }
            if (s.size() == 0)
            {
                v.push_back(-1);
                s.push(nums[i]);
            }
            else
            {
                v.push_back(s.top());
                s.push(nums[i]);
            }
        }
    }

    reverse(v.begin(), v.end());

    return v;
}
int main()
{
    int n;
    cout << "Enter The Size Of Array" << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter The Array Element" << endl;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    cout << "The Array Elements Are :: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    vector<int> res = NGR(v);
    cout << endl;
    cout << "The NGR is :: ";
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}