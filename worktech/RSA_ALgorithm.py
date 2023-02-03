import math

#Input Prime Numbers
print(" Enter 'p' and 'q' :")
p = int(input("Enter a prime number for p: "))
q = int(input("Enter a prime number for q: "))

#Check if Input's are Prime
def check_prime(a):
    if(a==2):
        return True
    elif((a<2) or ((a%2)==0)):
        return False
    elif(a>2):
        for i in range(2,a):
            if not(a%i):
                return False
    return True
 
check_p = check_prime(p)
check_q = check_prime(q)
while(((check_p==False)or(check_q==False))):
    print("Not prime numbers")
    p = int(input("Enter a prime number for p: "))
    q = int(input("Enter a prime number for q: "))
    check_p = check_prime(p)
    check_q = check_prime(q)

#RSA Modulus
# CALCULATION OF RSA MODULUS 'n'
n = p * q
print("RSA Modulus(n) is:",n)
 
#Eulers Toitent
#CALCULATION OF EULERS TOITENT 'r'.
z = (p-1)*(q-1)
print("RSA TOITENT(Z) is:",z)
e=3
d=7
public = (e,n)
private = (d,n)
print("Private Key is:",private)
print("Public Key is:",public)

#Encryption
'''ENCRYPTION ALGORITHM.'''
def encrypt(pub_key,n_text):
    e,n=pub_key
    x=[]
    m=0
    for i in n_text:
        if(i.isupper()):
            m = (ord(i)-65)+1
            c=(m**e)%n
            x.append(c)
        elif(i.islower()):               
            m= (ord(i)-97)+1
            c=(m**e)%n
            x.append(c)
        elif(i.isspace()):
            spc=400
            x.append(400)
    return x
     
 
#Decryption
'''DECRYPTION ALGORITHM'''
def decrypt(priv_key,c_text):
    d,n=priv_key
    txt=c_text.split(',')
    x=''
    m=0
    for i in txt:
        if(i=='400'):
            x+=' '
        else:
            m=(int(i)**d)%n
            m+=65
            c=chr(m)
            x+=c
    return x
#Message
message = input("What would you like encrypted or decrypted?(Separate numbers with ',' for decryption):")
print("Your message is:",message)
 
#Choose Encrypt or Decrypt and Print
choose = input("Type '1' for encryption and '2' for decrytion.")
if(choose=='1'):
    enc_msg=encrypt(public,message)
    print("Your encrypted message is:",enc_msg)
elif(choose=='2'):
    print("Your decrypted message is:",decrypt(private,message))
else:
    print("You entered the wrong option.")
   