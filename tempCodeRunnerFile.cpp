transform(s.begin(), s.end(), s.begin(), ::tolower);
    string newstr;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 0 && s[i] <= 9))
        {
            newstr = newstr + s[i];
        }
    }
    int i = 0, l = newstr.length() - 1;
    while (i < l)
    {
        if (newstr[i] != newstr[l])
        {
            return 0;
        }
        i++;
        l--;
    }
    return 1;