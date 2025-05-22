#include <bits/stdc++.h> 

void helpersolve(string &str,string &output,int idx,vector<string>&ans){
	if ( idx>=str.length())
	{
		if   (output.length()>0){
			ans.push_back(output); 
	    }
		
		 return;	
	}

	helpersolve(str,output,idx+1,ans);

	char element = str[idx];
	output.push_back(element);
	helpersolve(str,output,idx+1,ans);
	output.pop_back();

}

vector<string> subsequences(string str){
	
	vector<string>ans;
	string output = "";
	int idx=0;
	helpersolve(str,output,idx,ans);
	return ans;

}
