from tkinter import *
import requests
import json

def new_data(r):
    error=False
    data={}
    try:
        result = requests.get('http://localhost:3000/raw')
    except:
        error=True
    else:
        if result.status_code!=200: error=True
        else: data = result.json()
    if error:
        desc["text"]="Ошибка"
        temp["text"]="  °C"
    else:
        desc["text"]=data["description"].encode('l1').decode()
        temp["text"]=str(int(data["temp"]))+"°C"

main = Tk()
main.geometry("170x260+400+450")
main.resizable(False, False)
main.overrideredirect(True)

town = Label(main, text = "Симферополь", height=1, width=20, bg='orange', font=("Helvetica", 14, 'bold'))
desc = Label(main, text = "", height=1, width=30, bg='orange', font=("Helvetica",  9, 'bold'))
temp = Label(main, text = "", height=2, width=10, bg='white' , font=("Helvetica", 48, 'bold'))
footer = Label(main,            height=3, width=30, bg="orange")

town.pack(side=TOP)
desc.pack(side=TOP)
temp.pack(side=TOP)
footer.pack(side=BOTTOM)

new_data(None)
main.bind("<Button-1>", new_data)
mainloop()
