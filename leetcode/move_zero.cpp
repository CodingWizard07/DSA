#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if(nums[j] != 0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
    
}

void print(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(3);
    nums.push_back(12);
    cout << "Before moving zeroes --> ";
    print(nums);
    moveZeroes(nums);
    cout << "After moving zeroes in the end --> ";
    print(nums);

    return 0;
}