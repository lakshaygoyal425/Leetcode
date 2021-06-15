class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        findAll("(", 1, 0, result, n);
        return result;
    }
    
    public void findAll(String current, int open, int closed, List<String> result, int n){
        if (current.length() == 2*n){
            result.add(current);
            return;
        }
            
        
        if (open < n){
            findAll(current+"(", open+1, closed, result, n);
        }
        
        if (closed < open){
            findAll(current+")", open, closed+1, result, n);
        }
    }
}
