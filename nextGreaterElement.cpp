#include<iostream>
#include<stack>
using namespace std;

    void greater1(int* arr, int n) {
    stack<int> s, s1;
    int arr2[n];

    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }

    s1.push(arr[n - 1]);
    arr2[n - 1] = -1;
    s.pop();

    for (int i = n - 2; i >= 0; i--) {
        while (!s1.empty() && s.top() >= s1.top()) {
            s1.pop();
        }

        if (s1.empty()) {
            arr2[i] = -1;
        } else {
            arr2[i] = s1.top();
        }

        s1.push(s.top());
        s.pop();
    }

    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
}


int main()
{
    int arr[]={5,4,3,2,1};
    greater1(arr,5);
    return 0;
}