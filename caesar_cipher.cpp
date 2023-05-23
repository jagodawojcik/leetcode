string caesarCipher(string s, int k) {
int alphabet_len = 52;
k = k % (alphabet_len/2);
int len_string = s.length();

string alphabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
string alphabet_rotated = alphabet.substr(k*2) + alphabet.substr(0, k*2);

string new_string = "";
int position;
for (int i=0; i<s.length(); i++){
    
    if (!isalpha(s[i])){
    new_string += s[i];
    }
    else{
    position = alphabet.find(s[i]); 
    new_string += alphabet_rotated[position];  
    }
    
}
return new_string;
}