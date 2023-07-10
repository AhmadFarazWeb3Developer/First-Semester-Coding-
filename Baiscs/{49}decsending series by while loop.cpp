/* with only WHILE loop semiclone is
    not reqiured outside the coditin bracket
	if we do so result will not be shown;
    for DO-WHILE loop semilone  is required  
    out side the codtion in While brackets 
    
    64 32 16 8 4 2
                    */

#include<iostream>
using namespace std;
int main()
{
	int n=64;
while(n>=2)
 
{
	cout<<n<<" ";
	
	n=n/2;
}
return 0;
}
