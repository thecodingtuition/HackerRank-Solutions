long arrayManipulation(int n, vector<vector<int>> queries) {

    vector<int> arr(n+1,0);
    for(int i=0;i<queries.size();i++){
        int a=queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        arr[a]+=k;
        if((b+1)<=n)
            arr[b+1]-=k;
    }
    long sum=0,maxSum=0;
    for(int i : arr){
        sum = sum+i;
        maxSum = max(maxSum,sum);
    }
    return maxSum;
    
}