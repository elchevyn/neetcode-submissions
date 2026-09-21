class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> grupos;

        for(int i = 0; i < strs.size(); i++){

            string ordenado = strs[i];
            sort(ordenado.begin(), ordenado.end());

            grupos[ordenado].push_back(strs[i]);
        }

        vector<vector<string>> anagrama;

        for(auto grupo : grupos){
            anagrama.push_back(grupo.second);
        }

        return anagrama;
    }
};