void checkString(string s) {
    int v = 0;
    int c = 0;
    int n = s.length();
    
    for(int i=0; i<n; i++){
        char ch = tolower(s[i]);
        
        if(ch >= 'a' && ch <= 'z'){
            if(ch=='a' || ch== 'e' || ch=='i' || ch=='o' || ch== 'u'){
                v++;
            }
            else{
                c++;
            }
        }
    }

    if (v > c)
        cout << "Yes";
    else if (c > v)
        cout << "No";
    else
        cout << "Same";

    cout << endl;
}