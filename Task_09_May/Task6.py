try:
    raise ValueError("This is an argument")
except ValueError as ex:
    print("The exception argument were",ex.args)