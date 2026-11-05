long repeatedString(string s, long n) {
    long len = s.length();
    
    long count_s = count(s.begin(), s.end(), 'a');
    
    
    long full_rep = n / len;
    long rem = n % len;
    
    long total_a = full_rep * count_s;
    
    for (int i = 0; i < rem; i++) {
        if (s[i] == 'a') {
            total_a++;
        }
    }
    
    return total_a;
}