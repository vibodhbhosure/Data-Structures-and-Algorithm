class Solution:
    def findClosestElements(self, arr, k: int, x: int):

        xIndex = self.search(x, arr)

        if xIndex == -1:
            return []
        elif xIndex - k // 2 > -1:
            itr = xIndex - k // 2
        else:
            itr = xIndex

        ans = []

        while (len(ans) < k):
            ans.append(arr[itr])
            itr += 1

        return ans

    def search(self, x, arr):

        if x < arr[0]:
            return 0
        elif x > arr[len(arr)]:
            return len(arr)

        start = 0
        end = len(arr) - 1

        while start <= end:
            mid = ((start + end) // 2)

            if arr[mid] == x:
                return mid
            elif arr[mid] < x:
                start = mid + 1
            elif arr[mid] > x:
                end = mid - 1


def main():
    arr = [1, 2, 3, 4, 5, 6, 7, 8, 10]
    s = Solution()
    print(s.findClosestElements(arr, 3, 5))


main()
