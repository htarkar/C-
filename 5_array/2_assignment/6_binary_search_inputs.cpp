#include <iostream>
using namespace std;

int main(){
    int nums[10];
    for(int i = 0; i < 10; i++) {
        cout << i + 1 << " Enter any number : ";
        cin >> nums[i];
    }
    for(int i = 0; i < 10; i++) {
        cout << nums[i] << "\t";
    }
    cout << endl;
    
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 0, start = 0, last = size, found = 0, mid;
    cout << "Enter target number : ";
    cin >> target;
    while(start <= last && found == 0) {
        mid = (start + last) / 2;
        if (target == nums[mid]){
            found = 1;
        } else if (target > nums[mid]) {
                start = mid + 1;
        } else {
                last = mid - 1;
        }
    }
    if (found == 1) {
        cout << "Target is found at index " << mid + 1 << endl;
    } else {
        cout << "Target is not found !";
    }
    return 0;
}