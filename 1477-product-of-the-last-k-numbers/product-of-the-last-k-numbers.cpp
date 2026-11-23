class ProductOfNumbers {
public:
    vector<int> number;
    ProductOfNumbers() {
        this->number = number;
    }
    
    void add(int num) {
        this->number.push_back(num);
    }
    
    int getProduct(int k) {
        int ans = 1, n=this->number.size();
        for(int i=n-1; i>=n-k; i--){
            ans *= this->number[i];
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */