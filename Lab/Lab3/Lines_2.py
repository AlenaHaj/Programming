import random as rnd # в первую очередь импортируем библиотеку, с помощю которой учитель по математике оценивает контрольные работы!! :)
from tkinter import *
from PIL import Image, ImageTk

game=[]
select=None
podskazka=[]
schet=0
gameend=""

def pf(destination):
    global game, select
    empty   = set([(x, y) for y in range(len(game)) for x in range(len(game[y])) if game[y][x].color==0])
    tracks   = [[select.cord]]
    while tracks:
        add_tracks=[]
        for track in tracks:
            cx, cy = track[-1][0], track[-1][1]
            add_dots=set([(cx+1, cy), (cx-1, cy), (cx, cy+1), (cx, cy-1)]) & empty
            if destination in add_dots:
                return track + [destination]
            empty -= add_dots
            add_tracks += [track + [dot] for dot in add_dots]
        tracks = add_tracks
    return []

def check_lines5():
    global game

    for clr in range(1,8):
        del_balls=[]
        for x in range(0,9): # по вертикальним поиск
            for y in range(0,9):
                if game[y][x].color==clr: del_balls.append((x,y))
                else: del_balls=[]
                if len(del_balls)>=5: return del_balls

        for y in range(0,9): # по горизонтальным поиск
            for x in range(0,9):
                if game[y][x].color==clr: del_balls.append((x,y))
                else: del_balls=[]
                if len(del_balls)>=5: return del_balls

        for y in range(-4,5): # по \
            x=0
            y1=y
            for i in range(10):
                if 0<=x<9 and 0<=y1<9:
                    if game[y1][x].color==clr: del_balls.append((x,y1))
                    else: del_balls=[]
                    if len(del_balls)>=5: return del_balls
                x+=1
                y1+=1

        for y in range(4,13): # по /
            x=0
            y1=y
            for i in range(10):
                if 0<=x<9 and 0<=y1<9:
                    if game[y1][x].color==clr: del_balls.append((x,y1))
                    else: del_balls=[]
                    if len(del_balls)>=5: return del_balls
                x+=1
                y1-=1
    return []

def check():
    global game, count, schet
    have_line5=check_lines5()
    if have_line5:
        for i in have_line5:
            game[i[1]][i[0]].color = 0
            game[i[1]][i[0]].configure(image=picts[0][0])

        schet+=10
        Canv.delete(count)
        count=Canv.create_text(710,95, text=str(schet), font="Helvetica 17 bold", fill="white", anchor=NW)
        Canv.update()
        return True
    return False


def restart_game(*args, **kargs):
    global gameend, game, count, select

    Canv.delete(count)
    count=Canv.create_text(710,95, text=str(schet), font="Helvetica 17 bold", fill="white", anchor=NW)
    Canv.update()

    if gameend!="":
        Canv.delete(gameend)
        gameend=""
    for x in range(9):
        for y in range(9):
            game[y][x].color=0
            game[y][x].configure(image=picts[0][0])
    if select:
        game[select.cord[1]][select.cord[0]].configure(image=picts[select.color][0])
        select=None
    add_3_balls()

def get_free_cells():
    result=[]
    for i in range(9):
        for j in range(9):
            if game[j][i].color==0:
                result.append(game[j][i].cord)
    return result

def add_3_balls(*args, **kargs):
    global gameend, game, select
    if gameend!="": return
    if select:
        game[select.cord[1]][select.cord[0]].configure(image=picts[select.color][0])
        select=None
    for i in range(3):
        free=get_free_cells()
        xp,yp=free[rnd.randint(0,len(free)-1)]
        game[yp][xp].color = podskazka[i].color
        game[yp][xp].configure(image=picts[game[yp][xp].color][0])
        check()
        if not get_free_cells():
            Canv.delete(gameend)
            gameend=Canv.create_text(640,460, text='Всё, проиграли', anchor=NW, font="Times 15 bold", fill="white")
            return
    for i in range(3):
        podskazka[i].color=rnd.randint(1,7)
        podskazka[i].configure(image=picts[podskazka[i].color][-1])

def game_click(event):
    global game, select
    if gameend!="":
        return

    x,y=event.widget.cord
    if event.widget.color:
        if select:
            game[select.cord[1]][select.cord[0]].configure(image=picts[select.color][0])
            select=None
        game[y][x].configure(image=picts[event.widget.color][1])
        select=event.widget;
        return

    if not event.widget.color and not select:
        return

    if not pf((x,y)):
        return

    game[y][x].color = select.color
    game[y][x].configure(image=picts[select.color][0])


    x1,y1=select.cord
    game[y1][x1].color = 0
    game[y1][x1].configure(image=picts[0][0])
    select=None
    if not check():
        add_3_balls()

root = Tk()
root.title("Lines 2")
root.geometry('850x635+200+100')
root.resizable(0, 0)

Canv=Canvas(root, width='850', height='635', bd=0, highlightthickness=0, relief='ridge', bg="#484848");
Canv.place(x=0,y=0)

Canv.create_text(640,35, text='Линии 2', font="Helvetica 17 bold", fill="white", anchor=NW)
Canv.create_text(640,95, text='Счёт:', font="Helvetica 17 bold", fill="white", anchor=NW)
count=Canv.create_text(710,900, text='00', font="Helvetica 17 bold", fill="white", anchor=NW)

NextTurn=Button(root, text="Сделать ход", font="Helvetica 11", bg="#636363", fg='white')
NextTurn.bind("<Button-1>", add_3_balls)
NextTurn.place(x=640,y=160)

Canv.create_text(640,250, text='Подсказка:', anchor=NW, font="Helvetica 13 bold", fill="white")
NewGame=Button(root, text="Новая игра", font="Helvetica 15", bg="#636363", fg='white')
NewGame.bind("<Button-1>", restart_game)
NewGame.place(x=640,y=340)

fon_c   = Image.open("cell-bgr.png")
empty   = fon_c.crop((0, 0,69, 69)).convert('RGBA')

empty_s = Image.open("fon_small_ball.png").crop((0,0,35,35)).convert('RGBA')

sel     = fon_c.crop((0,69,69,138)).convert('RGBA')
picts=[[ImageTk.PhotoImage(empty), ImageTk.PhotoImage(empty_s)]]
pic_size_same_as_bgr   = Image.new("RGBA", (69,69))
pic_size_same_as_bgr_s = Image.new("RGBA", (35,35))
for image_filename in ['aqua','blue','green','pink','red','violet','yellow']:
    picts.append([])
    ball_picts=Image.open('ball-'+image_filename+'.png')

    ball=ball_picts.crop((0,0,55,57)).convert('RGBA')
    ball_over_bgr = Image.alpha_composite(empty, pic_size_same_as_bgr)
    ball_over_bgr.paste(ball, (5,7), ball)
    picts[-1].append(ImageTk.PhotoImage(ball_over_bgr))

    ball_over_bgr = Image.alpha_composite(sel, pic_size_same_as_bgr)
    ball_over_bgr.paste(ball, (5,7), ball)
    picts[-1].append(ImageTk.PhotoImage(ball_over_bgr))

    ball=ball_picts.crop((13, 57*3+23, 50,57*4)).convert('RGBA')
    ball_over_bgr = Image.alpha_composite(empty_s, pic_size_same_as_bgr_s)
    ball_over_bgr.paste(ball, (5,7), ball)
    picts[-1].append(ImageTk.PhotoImage(ball_over_bgr))
game=[]
for y in range(9):
    game.append([])
    for x in range(9):
        game[y].append(Label(root, image = picts[0][0], bd=0))
        game[y][x].bind("<Button-1>", game_click)
        game[y][x].cord = (x,y)
        game[y][x].color = 0
        game[y][x].place(x=x*69+10, y=y*69+10)
podskazka=[]
for i in range(3):
    clr=rnd.randint(1,7)
    podskazka.append(Label(root, image = picts[clr][2], bd=0))
    podskazka[i].color = clr
    podskazka[i].place(x=640+i*50, y=280)

add_3_balls()
root.mainloop()
