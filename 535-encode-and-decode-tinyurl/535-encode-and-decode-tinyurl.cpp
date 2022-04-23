class Solution {
    unordered_map<string,string> shortner;
    int counter=0;
    public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl="http://tinyurl.com/"+to_string(counter);
        shortner[shortUrl] = longUrl;
        counter++;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return shortner[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));