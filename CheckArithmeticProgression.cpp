//Ashish Kumar Verma
bool checkIsAP(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int d=arr[1]-arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]+d != arr[i+1]){
                return false;
            }
        }
        return true;
        
    }
