string is_palindrome(int n)
		{
		    // Code here.
		    string t= to_string(n);
		    int y=t.length();
		    for(int i=0;i<y/2;i++){
		        if(t[i]!=t[y-i-1]){return "No";}
		        
		    }
		    return "Yes";
		}