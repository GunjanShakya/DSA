/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector <int> items;
    int i ;
    void prepare(vector<NestedInteger>&nestedList, int index ) 
    { 
        
           
        for(int i = 0 ;  i< index ; i ++) {
            
            if(nestedList[i].isInteger()) {
                 
                items.push_back(nestedList[i].getInteger());
            }
            else 
            {
                prepare(nestedList[i].getList(), (nestedList[i].getList()).size());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) : i(0) {
        prepare(nestedList, nestedList.size());
    }
    
    int next() {
        
        return items[i++];
    }
    
    bool hasNext() {
        return i < items.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */