static int sequence[34] = {0,1};
static int largest_index_calculated = 1;
int fibcalc(int n) {
    
    for(int i = largest_index_calculated+1; i <= n; i ++)
        sequence[i] = sequence[i-1] + 2*sequence[i-2];
 
    if (largest_index_calculated < n)
        largest_index_calculated = n;

    return sequence[n];

}