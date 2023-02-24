vector<int> find(int arr[], int n , int x )
{
    int l = 0, r = n-1;
    int firstOc = n;
    
    while ( l <= r ) {
        int mid = ( l + r ) / 2;
        if( arr[mid] == x ) firstOc = min ( firstOc, mid );
        if ( arr[mid] >= x ) {
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    
    if(firstOc == n) firstOc = -1;
    
    l = 0, r = n-1;
    int lastOc = -1;
    
    while ( l <= r ) {
        int mid = ( l + r ) / 2;
        if ( arr[mid] == x ) lastOc = max ( lastOc, mid );
        if ( arr[mid] <= x ) {
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    
    return {firstOc, lastOc}; 
}