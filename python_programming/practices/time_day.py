# AS 7th time of day


import datetime

now = datetime.datetime.now()
hour = now.hour

print(f"here is the date and time: {now}")
print(f"here is the hour: {hour}")

if hour >= 3:
    print(f"Good morning user")
elif hour >= 12:
    print("Good afternoon")