valid = False

while not valid:
    try:
        n = 6
        while n%2 != 0:
            print("Bye!")
            valid = True
    except ValueError:
            print("Invalid!")
            