int countingValleys(int steps, string path) {
    int h = 0;
    int v = 0;
    
    for (char step : path) {
        if (step == 'U') {
            h++;
            if (h == 0) {
                v++;
            }
        } else if (step == 'D') {
            h--;
        }
    }
    
    return v;
}