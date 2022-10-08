def minion_game(string):
    # your code goes here
    s = stuartScore(string)
    k = kevinScore(string)

    if s == k:
        print("Draw")
    elif s < k:
        print(f"Kevin {k}")
    else:
        print(f"Stuart {s}")


def stuartScore(s):
    score = 0
    for i in range(len(s)):
        if not(s[i] in ['A', 'E', 'I', 'O', 'U']):
            score += len(s) - i

    return score


def kevinScore(s):
    score = 0
    for i in range(len(s)):
        if s[i] in ['A', 'E', 'I', 'O', 'U']:
            score += len(s) - i

    return score


if __name__ == '__main__':
    s = input()
    minion_game(s)
