class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        newlist = []
        for m in range(len(matrix)):
            for n in range(len(matrix[0])):
                newlist.append(matrix[m][n])
        
        if target in newlist:
            return True
        
        return False