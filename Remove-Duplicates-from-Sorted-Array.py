
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        # Use a set to track seen elements
        seen = set()
        write_index = 0
        
        for read_index in range(len(nums)):
            if nums[read_index] not in seen:
                seen.add(nums[read_index])
                nums[write_index] = nums[read_index]
                write_index += 1
        
        # The first 'write_index' elements are unique
        return write_index