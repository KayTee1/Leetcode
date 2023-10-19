def containsNearbyDuplicate(nums, k):
    """
    :type nums: List[int]
    :type k: int
    :rtype: bool
    """
    pos1, pos2 = 0, 0

    hash_nums = {}
    
    for i, n in enumerate(nums):
        hash_nums[n] = i
    
    for i in len(hash_nums):
        print(hash_nums[i])

    abso = pos1 - pos2
    if abso <= k:
        return True
    return False


nums = [4, 3, 1, 4]
k = 5

print(containsNearbyDuplicate(nums, k))
