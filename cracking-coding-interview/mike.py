

# create a function that takes a string and returns a list of all the substrings of the string


def substring(string):
    substrings = []
    for i in range(len(string)):
        for j in range(i, len(string)):
            substrings.append(string[i:j+1])
    return substrings



print(substring("hello"))