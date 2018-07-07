class bot():
    def __init__(self, autosave, deldups, autocount, maxwords, maxresp):
        self.autosave = autosave
        self.autocount = autocount
        self.deldups = deldups
        self.maxwords = maxwords
        self.maxresp = maxresp
        self.known = {}
        self.wordcount = 0
        self.sescount = 0
        os.system("cls")
        print(startmes)
        if os.path.isfile("known.data"): 
            self.known = pickle.load(open('known.data', "rb"))
            print("Save file loaded!")
        else:
            print("No save file found.")
        print()
        for key, value in self.known.items():
            self.wordcount += 1
    def question(self, x):
        self.wordcount += 1
        a = "w" + str(self.wordcount)
        d = {"name": x, "resp": [x], "uses": 0}
        self.known[a] = d
    def talk(self):
        talking = True
        prevres = ""
        while talking:
            if self.autosave:
                self.sescount += 1
                if self.sescount >= self.autocount:
                    self.sescount = 0
                    pickle.dump(self.known, open('known.data', 'wb'))
                    print("Saving...")
            if self.deldups:
                for key, value in self.known.items():
                    value["resp"] = list(set(value["resp"]))
            if len(self.known.keys()) > self.maxwords:
                count = 0
                for key, value in self.known.items():
                    count += value["uses"]
                for i in range(self.wordcount):
                    for key, value in self.known.items():
                        if value["uses"] <= count/self.wordcount: 
                            self.wordcount -= 1
                            self.known.pop(key, None)
                            break
            for key, value in self.known.items():
                if len(value["resp"]) > self.maxresp:
                    rem = random.choice(value["resp"])
                    value["resp"].remove(rem)    
            res = "" 
            a = input("You: ")
            if "#" in a:
                if "quit" in a:
                    pickle.dump(self.known, open('known.data', 'wb'))
                    print("Saving...")
                    exit()
                if "help" in a:
                    print(helpmes)
                a = ""

            data = prevres.split(" ")
            inp = a.split(" ")

            for x in data:
                for key, value in self.known.items():
                    if x == value["name"]:
                        value["resp"].extend(inp)
            for x in inp:
                if a == "":
                    break
                names = []
                for key, value in self.known.items():
                    names.append(value["name"])
                if x not in names:
                    self.question(x)
                else:
                    for key, value in self.known.items():
                        if x == value["name"]:
                            xyz = random.randrange(0,4)
                            for i in range(xyz):
                                res = res + " {0}".format(random.choice(value["resp"]))
                                value["uses"] += 1
            if res == "":
                res = " ..."
            print("Bot:{0}".format(res))
            prevres = res
sauce = bot(True, True, 25, 1000, 15)
sauce.talk()
