import json 
from difflib import get_close_matches


def Load_Chat_IA(file_path: str) -> dict:
    with open(file_path, 'r') as file:
        data: dict = json.load(file)
        return data
    
    
def Salvar_Chat_IA(file_path: str, data: dict):
    with open(file_path, 'w') as file:
        json.dump(data, file, indent=2)
        
        
def Achar_Melhor_combinacao(pergunta_usuario: str, perguntas: list[str])-> str| None:
    resultados: list = get_close_matches(pergunta_usuario, perguntas, n=1, precisao=0.6)
    return resultados[0] if resultados else None


def Achar_Resposta_Da_Questao(pergunta: str, Chat_IA: dict) -> str | None:
    for p in Chat_IA["perguntas"]:
        if p["perguntas"] == pergunta: 
            return p["resposta"]

def Chat_bot():
    Chat_IA: dict = Load_Chat_IA("Chat_IA.json")
    
    while True:
        input_usuario: str = input("você: ")
        
        if input_usuario.lower() == "sair":
            break
        
        melhor_resposta: str | None = Achar_Melhor_combinacao(input_usuario, [p["pergunta"]for p in Chat_IA["perguntas"]])
        
        if melhor_resposta:
            resposta: str = Achar_Resposta_Da_Questao(melhor_resposta, Chat_IA)
            print(f'bot:{resposta}')
        else:
            print('Bot: Eu não sei a resposta. Você pode me ensinar?')
            nova_resposta: str = input('Digite a resposta ou digite "pular" para pular: ')
            
            if nova_resposta.lower() != 'pular':
                Chat_IA['perguntas'].append({"pergunta": input_usuario, "resposta": nova_resposta})
                Salvar_Chat_IA('Chat_IAx.json', Chat_IA)
                print('Bot: Obrigado! Eu aprendi uma nova resposta!')
                
                
if __name__ == '__main__':
    Chat_bot()