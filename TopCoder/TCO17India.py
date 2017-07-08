# https://www.topcoder.com/challenge-details/30058242/?type=develop&noncache=true
# TCO17 INDIA REGIONALS REGISTRATION CHALLENGE
import hashlib

def Hashing(givenString):
    hash = hashlib.sha256(givenString.encode('utf-8'))
    hash = hash.hexdigest()
    return hash

def main():

    handle = input()    #Input TopCoder's handle
    while True:
        random = input()    #Enter any number
        hashed = Hashing(handle+random) #get the SHA256 hash
        if hashed[0].isdigit():
            print(hashed)
            break
    with open("output.txt", "w") as text:
        text.write("{0}\n{1}\n{2}\n".format(handle, random, hashed))

if __name__ == '__main__':
    main()
