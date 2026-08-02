vector<int> breakingRecords(vector<int> scores) {
    int highest = scores[0];
    int lowest = scores[0];
    
    int highBreak = 0;
    int lowBreak = 0;
    
    for(int i = 1; i < scores.size(); i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highBreak++;
        }
        else if (scores[i] < lowest) {
            lowest = scores[i];
            lowBreak++;
        }
    }
    return {highBreak, lowBreak};
    
}
