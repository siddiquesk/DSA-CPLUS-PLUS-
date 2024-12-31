
/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    // Adding elements using push_back
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Accessing elements using a loop
    cout << "Elements in the vector: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Size of the vector
    cout << "Size of the vector: " << vec.size() << endl;

    // Capacity of the vector

}
 */

/*

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    // Assign 5 elements with the value 100
    vec.assign(5, 100);

    cout << "Elements after assign: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

*/
/*  #include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {10, 20, 30, 40};

    // Swapping vec1 and vec2
    vec1.swap(vec2);

    cout << "After swapping:" << endl;
    cout << "vec1: ";
    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "vec2: ";
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 30, 40};

    // Inserting an element at position 2
    vec.insert(vec.begin() + 2, 25);

    cout << "After insertion: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erasing the element at position 3
    vec.erase(vec.begin() + 3);

    cout << "After erasing: ";
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/