while True:
    try:
        entrada = input()
        pilha, string = [], ''
        underLine, asterisco = 0, 0
        for caractere in entrada:
            if caractere == "_":
                underLine+=1
                if underLine == 2:
                    string+="</i>"
                    underLine = 0
                else:
                    string+="<i>"
                continue
            if caractere == "*":
                asterisco+=1
                if asterisco == 2:
                    string+="</b>"
                    asterisco = 0
                else:
                    string+="<b>"
                continue
            string+=caractere
        print(string)
    except EOFError:
        break
