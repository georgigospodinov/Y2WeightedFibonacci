extern int zeroth, first;
static int sequence[34];
int largest_index_calculated = -1;
int fibcalc(int n) {
    
    if (largest_index_calculated == -1) {
        sequence[0] = zeroth;
        sequence[1] = first;
        largest_index_calculated = 1;
    }

    for(int i = largest_index_calculated+1; i <= n; i ++)
        sequence[i] = sequence[i-1] + 2*sequence[i-2];
 
    if (largest_index_calculated < n)
        largest_index_calculated = n;

    return sequence[n];

}