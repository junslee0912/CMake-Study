#include <iostream>
#include <set>
using namespace std;
set <int> s;
set<int>::iterator arr[100];
int main()
{
	arr[0] = s.insert(1).first;
}