class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.length();
        stack<unordered_map<string, int> > st;
        st.push(unordered_map<string, int>());   // empty stack

        int i = 0;
        while(i<n) {
            if(formula[i]  == '(') {      // open bracket means new formula  is going to start
                   st.push(unordered_map<string, int>());
                   i++;
            }
            else if(formula[i] == ')'){
                unordered_map<string, int> curr = st.top();   // map at the top 
                st.pop();
                i++;

                string mult;    // sfterwards convert into integer
                while((i<n) && isdigit(formula[i])) {      // isdigit to check if it is digit or letter
                         mult.push_back(formula[i]);
                         i++;     // jb tk integer milta jaay
                }

                if(!mult.empty()){       // mtlb pkka hme integer mila h
                        int multInteger = stoi(mult);    // jo mila h usko integer m covert kiya  taaki multiply krske
                         for(auto &it : curr){       // current map k elements k sath mult ki multiply
                               string element = it.first;
                               int count = it.second;

                               curr[element] = count * multInteger;
                         }       
                }
              //  merging this to stack k top p jo map k elements h
              for(auto &it : curr){          // parsing
                string element = it.first;
                int count = it.second;
                st.top()[element] += count;    // stack k top pr jo map h agr uske elements m already vo element present  hua (jo hum merge krne wale h) toh frequency add krdi
               
              }

            }
            else {    // na closing bracket h na open bracket mtlb ek character mila h
                    string currElement;
                    currElement.push_back(formula[i]);      //"He","Mg" poora Mg uthana h khali m nhi
                    i++;
                    while(i <  n && isalpha(formula[i]) && islower(formula[i])) {
                        currElement.push_back(formula[i]);
                        i++;
                    }
          // "Mg2" poora count kitna h 2 3 ... for "H" currCount is 1
                 string currCount ;
                 while(i <n && isdigit(formula[i])) {
                    currCount .push_back(formula[i]);
                    i++;
                 }
                 int currCountInteger = currCount.empty() ? 1 : stoi(currCount);
                 st.top()[currElement] += currCountInteger;
                 }
        }


        // st will only have one map on top
        map<string , int> sortedMap(begin(st.top()), end(st.top()));
        string result;
       for(auto &it : sortedMap){
        string element = it.first;
        result += element;
       
        int count = it.second;
         if(count > 1)
        
        result += to_string(count);
       }
       return result;
    }
};