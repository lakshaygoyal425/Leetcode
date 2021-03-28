class Solution:
    def myAtoi(self, str):
        
        MAX_INT = 2 ** 31 -1
        MIN_INT = -2 ** 31
        
        i = 0
        res = 0
        negative = 1
        
        #whitespace
        while i < len(str) and str[i] == ' ':
            i += 1
            
        # +/- symbol
        if i < len(str) and str[i] == '-':
            i += 1
            negative = -1
        elif i < len(str) and str[i] == '+':
            i += 1
        
        # check number b/w 0-9
        checker = set('0123456789')
        while i < len(str) and str[i] in checker:
            res = res *10 + int(str[i])
            i += 1
            
        # Check the max/min    
        res = res * negative
        if res < 0:
            return max(res, MIN_INT)
        return min(res, MAX_INT)
                
        
