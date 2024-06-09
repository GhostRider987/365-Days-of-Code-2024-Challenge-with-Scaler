string Solution::serialize(vector<string> &A) {
    ostringstream s;
    for (const string& str : A) {
        s << str << str.length() << '~';
    }
    return s.str();
}
