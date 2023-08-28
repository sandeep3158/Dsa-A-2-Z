#include <iostream>
using namespace std;
void pattern1(int n)
{
    cout << "pattern1" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    cout << "pattern2" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    cout << "pattern3" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    cout << "pattern4" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    cout << "pattern5" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    cout << "pattern6" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    cout << "pattern7" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n - i + 1; space++)
            cout << " ";
        for (int star = 0; star < 2 * i + 1; star++)
            cout << "*";

        for (int space = 0; space < n - i + 1; space++)
            cout << " ";

        cout << endl;
    }
}
void pattern8(int n)
{
    cout << "pattern8" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i + 1; space++)
            cout << " ";
        for (int star = 0; star < 2 * n - (2 * i + 1); star++)
        {
            cout << "*";
        }
        for (int space = 0; space < i + 1; space++)
            cout << " ";
        cout << endl;
    }
}
void pattern10(int n)
{
    cout << "pattern10" << endl;
    for (int i = 0; i < 2 * n; i++)
    {
        int star = i;
        if (i > n)
            star = 2 * n - i;
        for (int j = 0; j < star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    cout << "pattern11" << endl;
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    cout << "pattern12" << endl;
    int space = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j < space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n)
{
    cout << "pattern13" << endl;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << count++ << " ";
        cout << endl;
    }
}
void pattern14(int n)
{
    cout << "pattern14" << endl;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    cout << "pattern15" << endl;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    cout << "pattern16" << endl;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}
void pattern17(int n)
{
    cout << "pattern17" << endl;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    cout << "pattern 18:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << endl;
    }
}
void pattern19(int n)
{
    cout << "pattern 19 " << endl;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + (n - 1);
        for (char x = ch; x >= ch - i; x--)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
void pattern20(int n)
{
    cout << "pattern 20" << endl;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        // stars

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*"
                 << " ";
        }
        s += 2;
        cout << endl;
    }
    s = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        s -= 2;
        cout << endl;
    }
}
void pattern21(int n)
{
    cout << "pattern 21" << endl;
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int star = i;
        if (i > n)
            star = 2 * n - i;

        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;

        cout << endl;
    }
}
void pattern22(int n)
{
    cout << "pattern 22" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern23(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        cout<<"pattern 23"<<endl;
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right))); 
        }
        cout<<endl;
    }
}
int main()
{
    pattern1(3);
    pattern2(3);
    pattern3(3);
    pattern4(3);
    pattern6(3);
    pattern7(3);
    pattern8(3);
    pattern10(3);
    pattern11(3);
    pattern12(3);
    pattern13(3);
    pattern14(3);
    pattern15(3);
    pattern16(3);
    pattern17(3);
    pattern18(3);
    pattern19(3);
    pattern20(3);
    pattern21(5);
    pattern22(5);
    pattern23(5);
}