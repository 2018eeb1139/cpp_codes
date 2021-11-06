vector<int> find(int arr[], int n , int x )
{
    // code here
    int idx1=-1,idx2=-1;
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==x){
            idx1=mid;
            j=mid-1;
        }
        else if(arr[mid]<x){
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
    }
    i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==x){
            idx2=mid;
            i=mid+1;
        }
        else if(arr[mid]<x){
            i=mid+1;
        }
        else if(arr[mid]>x){
            j=mid-1;
        }
    }
    return {idx1,idx2};
}