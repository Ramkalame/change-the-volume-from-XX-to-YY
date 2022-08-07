#include <iostream>
using namespace std;

int main() {
    int current_vulume, expected_volume;
    cin>>current_vulume>>expected_volume;
    if(current_vulume>expected_volume)
    {
        int n = current_vulume - expected_volume;
        cout<<n;
        
    }
    else if(current_vulume<expected_volume)
    {
        int n = expected_volume - current_vulume;
        cout<<n;
    }
    else
    {
        cout<<0;
    }
	
	return 0;
}
