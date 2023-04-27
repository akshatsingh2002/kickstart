string l;
    for(int i=0;i<s.length();i++){
        if(s.at(i)==' '){
            l = l + "@40";
        }
        else{
            l = l + s[i];
        }
    }
    cout<<l<<endl;