class Solution {
  public:
    string removePair(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())st.push(s[i]);
            else{
                if(st.top()==s[i])st.pop();
                else st.push(s[i]);
            }
        }
        string ans="";
        if(st.empty())return "-1";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//

class Solution {
  public:
    string removePair(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())st.push(s[i]);
            else{
                if(st.top()==s[i])st.pop();
                else st.push(s[i]);
            }
        }
        string ans="";
        if(st.empty())return "-1";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
