#include<iostream>
using namespace std;
string arr[100];
 int main()
  {
  	  int t;
  	   cin>>t;
  	   while(t--)
  	    {
  	    	string ans;
  	    	int n;
  	    	 cin>>n;
  	    	 for(int i=0;i<n;i++)
  	    	  {
  	    	  	cin>>arr[i];
  	    	  	
				}
				int len=arr[0].length();
				for(int i=0;i<len;i++)
				 {
				 	string ss;
				 	 for(int j=i;j<len;j++)
				 	  {
				 	  	ss+=arr[0][j];
				 	  	int f=0;
				 	  	for(int k=1;k<n;k++)
				 	  	 {
				 	  	 	int pos=arr[k].find(ss);
				 	  	 	
				 	  	 	if(pos==-1 || pos>=arr[k].length()) 
				 	  	 	{
				 	  	 		f=1;
				 	  	 		break;
								}
				 	  	 	
							}
							if(ans.length()<ss.length() && f==0) ans=ss;
							else if(ans.length()==ss.length() && f==0 && ans>ss) ans=ss;
					   }
				 }
				  cout<<ans<<endl;
		  }
  }  
