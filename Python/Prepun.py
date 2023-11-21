
def leapyear(year):
    if year < 1752 :
        if year % 4 == 0:
            print("AD", year, "is a leap year")
        else:
            print("AD", year, "isn't a leap year")

    else :
        if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0): 
            print("AD", year, "is a leap year")
        else :
            print("AD", year, "isn't a leap year")


x = int(input("Enter a year in AD: "))
leapyear(x)
