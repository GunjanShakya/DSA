class Solution {
public:
string encode(string longUrl) {
	return longUrl+longUrl;
}
string decode(string shortUrl) {
	return shortUrl.substr(0,shortUrl.length()/2);
}
};