vector<string> Solution::fizzBuzz(int A) {
    vector <string> ans;
    string numb;
    for(int i = 1;i<=A;i++)
    {
        
        if (i%3==0)
        {
            if (i%5==0) ans.push_back("FizzBuzz");
            else ans.push_back("Fizz");
        }
        else
        {
            if(i%5==0)ans.push_back("Buzz");
            else{
                numb = to_string(i);
                ans.push_back(numb);
            }
        }
    }
    
    return ans;
}
