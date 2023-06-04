class Solution:
    def constructRectangle(self, area: int) -> List[int]:
        L = math.isqrt(area)
        if (L*L) == area:
            return [L, L]
        R = math.isqrt(area)
        
        while(L <= area):
            L += 1
            R = area//L
            if (L*R == area):
                return [L, R]
        
        return [area, 1]