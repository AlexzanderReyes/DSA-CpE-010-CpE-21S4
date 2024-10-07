from tkinter import*
class MyWindow:
    def __init__(self,win):
        #common widgets
        self.Label1 = Label(win, fg="Red",text="Calculator")
        self.Label1.place(x=150,y=50)

        self.Label2 = Label(win, fg="Green",text="Number 1")
        self.Label2.place(x=50,y=80)

        self.Label3 = Label(win,fg="Blue",text="Number 2")
        self.Label3.place(x=50,y=120)

        self.Label4 = Label(win,fg="Red",text="Result")
        self.Label4.place(x=50,y=160)

        self.Entry1= Entry(win,bd=2)
        self.Entry1.place(x=120,y=80)

        self.Entry2 = Entry(win, bd=2)
        self.Entry2.place(x=120, y=120)

        self.Entry3 = Entry(win,bd=2)
        self.Entry3.place(x=120,y=160)

        self.Button1= Button(win,fg="Black",text="Add",command=self.add)
        self.Button1.place(x=90,y=200)

        self.Button1 = Button(win, fg="Black", text="Sub", command=self.sub)
        self.Button1.place(x=130, y=200)

        self.Button1 = Button(win, fg="Black", text="Multi", command=self.multiply)
        self.Button1.place(x=170, y=200)

        self.Button1 = Button(win, fg="Black", text="Divide", command=self.divide)
        self.Button1.place(x=220, y=200)

    def add(self):
        self.Entry3.delete(0,'end')

        num1 = int(self.Entry1.get())
        num2 = int(self.Entry2.get())
        result = num1 + num2
        self.Entry3.insert(END, str(result))

    def sub(self):
        self.Entry3.delete(0, 'end')

        num1 = int(self.Entry1.get())
        num2 = int(self.Entry2.get())
        result = num1 - num2
        self.Entry3.insert(END, str(result))

    def multiply(self):
        self.Entry3.delete(0, 'end')

        num1 = int(self.Entry1.get())
        num2 = int(self.Entry2.get())
        result = num1 * num2
        self.Entry3.insert(END, str(result))

    def divide(self):
        self.Entry3.delete(0, 'end')

        num1 = float(self.Entry1.get())
        num2 = float(self.Entry2.get())
        result = num1 / num2
        self.Entry3.insert(END, str(result))


window = Tk()
MyWin= MyWindow(window)
window.geometry("400x300+10+10")
window.title("Standard Calculator")
window.mainloop()