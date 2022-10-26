#include <iostream>
#include <queue>
using namespace std;

// Print the queue
template <class T>
void showQ(queue<T> gq)
{
    queue<T> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    queue<string> q;
    string stu;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << "Input student "; cin >> stu;
        q.push(stu);
    }

    cout << "The queue q is : ";
    showQ(q);

    cout << "\q.size() : " << q.size() << endl;
    cout << "\q.front(): " << q.front() << endl;
    cout << "\q.back() : " << q.back() << endl;

    cout << "\q.pop() : "; q.pop();
    showQ(q);

    return 0;
}