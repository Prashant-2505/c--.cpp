
}

int main()
{
    set<string> S; 
    S.insert("ABC");
    S.insert("opo");
    S.insert("plo");
   S.insert("opo");
       
    auto it = S.find("opo");
    if (it != S.end())          // O(log(n))
    {