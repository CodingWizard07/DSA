#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;
vector<int> finddistinct(vector<int> &v)
{
    unordered_set<int> distinctset;

    for (int i = 0; i < v.size(); i++)
    {
        distinctset.insert(v[i]);
    }

    // copy distinct elements from set to vector

    vector<int> distinctarray(distinctset.begin(), distinctset.end());

    sort(distinctarray.begin(), distinctarray.end());

    return distinctarray;
}

int majorityElement(vector<int> &nums)
{
    vector<int> d = finddistinct(nums);

    int maxfrequency = 0;
    int major;

    for (int i = 0; i < d.size(); i++)
    {
        int frequency = count(nums.begin(), nums.end(), d[i]);
        if (frequency > maxfrequency)
        {
            maxfrequency = frequency;
            major = d[i];
        }
    }

    return major;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    vector<int> array = finddistinct(arr);

    cout << "Array --> ";
    print(arr);

    cout << "Distinct Array --> ";
    print(array);

    int m = majorityElement(arr);
    cout << "Mjority element --> " << m << endl;
    return 0;
}