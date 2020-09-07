#include<iostream>
#include<map>
#include<fstream>
//#include<bits/stdc++.h>
#include<vector>

//#include<boost/algorithm/string.hpp>
using namespace std;

int main()
{
	/* code */
	//int a=5;
	//cout<<a;
	string input,fn;
	//cout<<"enter file path";
	//cin>>fn;
	cout<<"enter word";
	cin>>input;
	fstream fin; 
  
    // Open an existing file 
    fin.open("EnglishDictionary.csv");
    vector<string> row;
    map<string,string> m;
    string line,word,f;
    while(fin){
    getline(fin, line);
    //cout<<line[0]<<line.size();
    int i=0;
    for(i=0;i<line.size();i++)
    {
    	if (line[i]==',')
    	{
            word=line.substr(0,i);
            f=line.substr(i+1,line.size());
            m[word]=f;
    	}
    }

    //cout<<"\n";
     }

    //cin>>input;
    map<string,string>::iterator x;
    int z=0;
    for(x=m.begin();x!=m.end();++x)
    {
        if (x->first == input)
        {
        	cout<<"YES"<<","<<x->second;
        	z=1;
        	break;
        }
    }
    if(z==0)
    {
      cout<<"NO";
    }

	

	return 0;
    
    
}
