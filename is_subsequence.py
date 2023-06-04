class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if s in t:
            return True
        
        t = list(t)
        current_char = s[0]
        counter = 0
        counter_max = len(s)-1
        for c in t:
            if c==current_char:
                if counter == counter_max:
                    return True
                if counter< counter_max:
                    counter += 1
                    current_char = s[counter]

        return False

            