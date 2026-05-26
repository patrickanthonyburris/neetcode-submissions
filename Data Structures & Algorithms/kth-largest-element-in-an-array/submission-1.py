class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = [-n for n in nums]
        heapq.heapify(heap)
        res = 0
        i = 0
        while i < k:
            res = heapq.heappop(heap)
            i = i + 1
        return res*-1