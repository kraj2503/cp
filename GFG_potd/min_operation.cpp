//29jan2023
int solve(int a, int b) {
        // code here
        int reva=0,revb=0;
        for(int i = 0 ; i<30;i++){
            if((a&(1<<i))&& !(b&(1<<i)))reva=1;
            if((b&(1<<i))&& !(a&(1<<i)))revb=1;
        }
        return reva+revb;
    }