#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string period = s.substr(8,2);
    int hour = stoi(s.substr(0, 2));
    
    if (period == "AM") {
        if(hour == 12) 
        hour = 0;
    } else { 
        if (hour != 12)
            hour += 12;
    }
    string result = "";
    
    if (hour < 10)
        result += "0";
        
        result += to_string(hour);
        result += s.substr(2, 6);
        
        return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
