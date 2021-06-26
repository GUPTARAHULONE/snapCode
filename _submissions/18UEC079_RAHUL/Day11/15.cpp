int Solution::solve(vector<string> &A) {
  
  // This answerr not include this tescases--     4 0.3 0.3 1.5 0.1  answerr should be 1.
     int n = A.size(), i;
    vector<float> v;
    for (i = 0; i < n; i++) {
        v.push_back(stof(A[i]));
    }
    float a = v[0], b = v[1], c = v[2];

    float mx = 0;
    for (i = 3; i < n; i++) {
        if (a + b + c < 2 && a + b + c > 1)
            return 1;
        else if (a + b + c > 2) {
            if (a > b && a > c)
                a = v[i];
            else if (b > a && b > c)
                b = v[i];
            else
                c = v[i];
        }
        else {
            if (a < b && a < c)
                a = v[i];
            else if (b < a && b < c)
                b = v[i];
            else
                c = v[i];
        }
    }
    if (a + b + c > 1 && a + b + c < 2)
        return 1;
    else
        return 0;
}
