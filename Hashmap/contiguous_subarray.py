def findMaxLength(nums):

    hmap = {}
    total_sum = 0
    longest_subarray = 0

    for i in range(len(nums)):

        if nums[i] == 0:
            total_sum += -1

        else:
            total_sum += 1

        if (total_sum in hmap):

            if (longest_subarray < i - hmap[total_sum]):
                longest_subarray = i - hmap[total_sum]

        else:
            hmap[total_sum] = i

    return longest_subarray

def main():
    nums = list(map(int, input().split()))   
    result = findMaxLength(nums)
    print(result)

main()                 