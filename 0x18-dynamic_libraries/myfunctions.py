import ctypes

# Load the dynamic library
mylib = ctypes.CDLL('./libmyfunctions.so')  # Adjust the library name and path

# Define the function prototype
add = mylib.add
add.argtypes = [ctypes.c_int, ctypes.c_int]
add.restype = ctypes.c_int

