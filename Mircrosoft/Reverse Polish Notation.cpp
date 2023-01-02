class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<long> st;
        
    for(auto &it : tokens){

    if(it == "+" || it == "-" || it == "*" || it == "/"){

           long a = st.top(); st.pop();
           long b = st.top(); st.pop();

        if(it == "+"){
            st.push(b + a);
        }

        else if(it == "-"){
            st.push(b - a);
        }

        else if(it == "*"){
            st.push(b * a);
        }

        else if(it == "/"){
            st.push(b / a); 
        }

        else if(it == "^"){
            st.push(pow(b,a));
        }

    }

    else st.push(stoi(it));

}

    return st.top();

    }
};
