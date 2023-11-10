#include <iosteam>
#include <cstdlib>
using namespace std;
int main()
{
    int i, a;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    c=a+rand%(b-a+1);
    for (i=0; i<c; i++)
    {
        cout<<"Hello world!";
    }
}