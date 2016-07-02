class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[30],b[30];
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;s[i]!='\0';i++) a[s[i]-'a']++;
        for(int i=0;t[i]!='\0';i++) b[t[i]-'a']++;
        for(int i=0;i<26;i++)
            if(a[i]!=b[i]) return false;
        return true;
    }
};