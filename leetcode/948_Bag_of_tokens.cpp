#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int countscore(vector<int> &arr, int power)
{
    // finding the array size
    int n = arr.size();

    // initializing score
    int max_score = 0;

    // sorting the array
    sort(arr.begin(),arr.end());

    int i = 0;
    int j = n - 1;
    int score = 0;
    while (i < j)
    {
        // checking if power can be used to increase score
        if (power >= arr[i])
        {
            power = power - arr[i];
            score++;
            i++;
            
            max_score= max(max_score,score);
        }
        // checking if score need to be used to increase power
        else if (max_score >= 1)
        {
            power = power + arr[j];
            score--;
            j--;

            max_score= max(max_score,score);
        }
        // if score is 0 and power is also less than tokens
        else
        {

            return max_score;
            cout << "Insufficient power or score !!" << endl;
        }
    }
    return max_score;
}

void print_array(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr(2);
    arr = {200,100};
    int score=countscore(arr,150);
    cout<<"Score : "<<score<<endl;
    print_array(arr);

    return 0;
}