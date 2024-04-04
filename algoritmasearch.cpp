#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n; // Number of elements in the array
int i; // index of array element

void input ()
{
    while (true)
    {
        cout << "Enter the number of elements in the array:";
        cin >> n;
        if ((n>0)&& (n<= 20))
            break;
            else cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";

    }

    // Accept array elements
    cout << "\n--------------------\n";
    cout << "Enter array elements \n";
    cout << "------------\n";
    for (i=0; i < n; i++)
    {
        cout << "<" << (i+1) << ">";
        cin >> arr [i];
    }
}

void Linearsearch()
{
    char ch;
    int ctr; // Number of comparinsons
    int item;
    do 
    {
        // Accept the number to be searched 
        cout << "\nEnter the element you want to search"; // Step 1
        cin >> item;

        ctr=0;
        i=0; // Step 2
        while (i <n) //Step 3
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << "found at position" << endl; // Step 6
                break;
            } 
            i++; // Step 4
        }
        if (i == n) // Step 5
        cout << "\n" << item << "not found in the array\n";
        cout << "\nNumber of comparisons :" << ctr << endl;

        cout << "\nContinue search (y/n) :";
        cin >> ch;

    } while ((ch == 'y') || (ch == 'Y'));

}

    void display ()
    {
        cout << "Array elements are :";
        for (i =0; i < n; i++)
            cout << arr[i] << " ";
            cout << endl;
    }
    int main ()
    {
        input ();
        Linearsearch();
        display();
    }