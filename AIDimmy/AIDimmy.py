import json 
from difflib import get_close_matches


def Load_knowledge_base(file_path: str) -> dict:
    with open(file_path, 'r') as file:
        data: dict = json.load(file)
        return data
    
    
def Salvar_knowledge_base(file_path: str, data: dict):
    with open(file_path, 'w') as file:
        json.dump(data, file, indent=2)
        
        
def find_best_match(pergunta_usuario: str, perguntas: list[str])-> str| None:
    resultados: list = get_close_matches(pergunta_usuario, perguntas, n=1, precisao=0.6)
    return resultados[0] if resultados else None


def get_answer_for_question(pergunta: str, knowledge_base: dict) -> str | None:
    for p in knowledge_base["perguntas"]:
        if p["perguntas"] == pergunta: 
            return p["resposta"]

def Chat_bot():
    knowledge_base: dict = Load_knowledge_base("knowledge_base.json")
    
    while True:
        input_usuario: str = input("você: ")
        
        if input_usuario.lower() == "sair":
            break
        
        melhor_resposta: str | None = find_best_match(input_usuario, [p["pergunta"]for p in knowledge_base["perguntas"]])
        
        if melhor_resposta:
            resposta: str = find_best_match(melhor_resposta, knowledge_base)
            print(f'bot:{resposta}')
        else:
            print('Bot: Eu não sei a resposta. Você pode me ensinar?')
            nova_resposta: str = input('Digite a resposta ou digite "pular" para pular: ')
            
            if nova_resposta.lower() != 'pular':
                knowledge_base['perguntas'].append({"pergunta": input_usuario, "resposta": nova_resposta})
                Salvar_knowledge_base('knowledge_basex.json', knowledge_base)
                print('Bot: Obrigado! Eu aprendi uma nova resposta!')
                
                
if __name__ == '__main__':
    Chat_bot()