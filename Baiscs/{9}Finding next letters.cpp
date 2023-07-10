/*   This program is about to learn the importace 
     of (char) reserved word and their use.
     In this program we display next two letters after 
     the enterd letter    */

      #include<iostream>
      using namespace std;
    int main()
      {
       	char character;
	    cout<<"Enter any letter \n";
	     cin>>character;
		cout<<"Your next two letters are\n";
	     cout<<(char)(character+1)<<endl;
	     cout<<(char)(character+2)<<endl;
	     return 0;
	
        } 
