# 1. DIRETORIO =====================================================================================================

# Metodo 1:
setwd("C:\\Users\\")

# Metodo 2:
setwd(choose.dir())


# 2. PACOTES =======================================================================================================

# Instalando pacotes:
install.packages("readxl")   # Importa de dados em formato excel
install.packages("rio")      # Importa quase todo tipo de dados
install.packages("esquisse") # Ajuda na criacao de graficos

# Carregando pacotes:
library(readxl)
library(rio)
library(esquisse)


# 3. INTRODUCAO AO R ===============================================================================================

# 3.1. Funçoes de matematica basica --------------------------------------------------------------------------------

a+b     # soma
8+4
a-b     # subtraçao
5-2
a*b     # multiplicaçao
9*4
a/b     # divisao
3/3
a^b     # elevado
7^2
a^(1/b) # raiz de b
sqrt(a) # raiz quadrada 
1/(5*9)
5+8
# 3.2. Objetos -----------------------------------------------------------------------------------------------------

# Criando:
a= 5 *3 +2
a= 7/2
a
b=3^5-3
a = c (1,2,3,4,5,6,7,8,9,10)
b <-  c(11,12,13,14,15,16,17,18,19,20)

D = c ("A","B")

# Removendo:
rm(a)

# Visualizando:
print(a)
print(b)


# 3.3. Funcoes -----------------------------------------------------------------------------------------------------

sum(a)      # soma do vetor
mean(b)     # media do vetor
median(a)   # mediana do vetor
maximo (a)  # maior valor do vetor 
minimo (b)  # menor valor do vetor
sd(a)       # desvio padrao
quantile(b) # fracionamento em 4 partes
length(a)

# 3.4. Atalhos -----------------------------------------------------------------------------------------------------

ctrl + shift + c      # transforma a linha em comentario
ctrl + shift 1/2/3/4/ # aumenta a tela equivalente
ctrl + s              # salvar
ctrl + f              # pesquisa
ctrl + d              # exclui linha 
ctrl + 2              # vai pro console
ctrl + 1              # vai pro script
alt  + -              # cria = <- 
ctrl + z              # refaz 
Ctrl + Shift + N      # Criar um novo script
Ctrl + Enter          # Executar a linha de coigo atual
Ctrl + Shift + Enter  # Executar o bloco de codigo selecionado
Ctrl + F10            # Interromper a execução do codigo
Ctrl + Shift + F10    # Reiniciar o r
Ctrl + Space          # Mostrar sugestões de código.
Shift + F3            # Localizar ocorrencia anterior
alt + shift + k       # lista de atalhos

# 4. MANIPULACAO DE DADOS ==========================================================================================

# 4.1. Importando dados --------------------------------------------------------------------------------------------

# Definindo diretorio:
setwd("C:\\Users\\")

# Carregando base de dados:
dados2022.1 = read_excel("C:\\Users\\
                         dados2022.xlsx")

# Por ja ter definido o diretorio :
dados2022 = import("dados2022.xlsx")     # pacote rio
dados2019 = read_excel("dados2019.xlsx") # pacote  readxl
dados2022 <- read_excel("dados2022.xlsx") 



# Visualizando a base de dados:
print(dados2019)
View(dados2019)


# 4.2.Analise rapida -----------------------------------------------------------------------------------------------

# Vendo nome das colunas:
names(dados2019)

# Visualizar as 6 primeiras linhas:
head(dados2019)

# Visualizar 6 ultimas linhas:
tail(dados2019)

# Resumo das variaveis:
str(dados2019)
l=summary(dados2019) 

# Tabela de frequencia:
table(dados2019$idade)


# 4.3. Manipulacao rapida ------------------------------------------------------------------------------------------

# Removendo uma colunas:

dados1 = dados2019[,-1]         # apenas 1 coluna
dados1 = dados2019[,-c(8,9)]    # mais colunas
View(dados1)
# Removendo linha:
dados2 = dados2019[-8,]  # apenas 1 linha

# Alterando o nome das colunas:
names(dados2019)[-c(1, 4, 11)] <- c("sexo","raça","escolaridade","força de trabalho",
                                    "condiçao de ocupação","posição na ocupação",
                                    "condição na ocupação","carteira assinada?") 
colnames(dados2022)[-c(1, 4, 11)] <- c("sexo","raça","escolaridade","*********",
                                       "*****","********","**********","*******") 

# Recategorizando variaveis:
dados2019$sexo_1 <- factor(dados2019$sexo, levels = c("Homem", "Mulher"), 
                           labels = c(2, 1))
  
)


# 4.4. Criacao de graficos -----------------------------------------------------------------------------------------

# Janela grafica:
graphics.off()
if(.Platform$OS.type == "windows") windows(record = TRUE)
# comando usado para abrir arquivo de imagem fora do r

par(mfrow= c(2,2),  #14 definir quantos graficos na imagem
    mar=c(2,2,1,1), # margem da imagem 
    oma=c(3,3,2,2)) # margem interna

# Gerando graficos:
plot(b~a) # dispersao
boxplot(a) # boxplot
barplot(b) # barras
hist(a) # histograma
pie(a) # pizza
 
# Graficos personalizados: 
barplot(a,
        main= "boxplot", #nome do grafico
        col = "blue",# definindo cor
        xlab = "Categoria", # nome da variavel horizontal
        ylab = "Frequencia") # nome da variavel vertical
plot(a, col = "red", pch = 16, xlab = "Variavel 1", ylab = "Variavel 2")
abline(h=mean(a),lty=3, col="black", lwd=5) # cria uma linha para ajudar na analise

# Metodo mais rapido para criar:
esquisser(dados2019)


# 4.5. Manipulacao intermediaria -----------------------------------------------------------------------------------

# Argumentos logicos mais usados:
==   # igual
!=   # diferente
<    # menor
>    # maior
>=   # maior igual 
<=   # menor igual igual
&    # e 
%in% # contido
  
# Retorna linhas onde a condicao e verdadeira:
which(dados2019$sexo == "Mulher")

# Faz uma filtragem e retorna todas as colunas apenas com mulheres:
mulher=dados2019[which(dados2019$sexo == "Mulher"), ]

# Faz uma filtragem e retorna colunas com mulheres e idades diferentes de 14-24:
dados2019[which(dados2019$sexo == "Mulher" & dados2019$idade != "14-24"), ]

# Faz uma filtragem e retorna colunas com mulheres e com valores menores que mil na coluna total:
dados2019[which(dados2019$sexo == "Mulher" & dados2019$total < 1000), ]


# 5. EXPORTANDO DADOS ==============================================================================================

# Exportando em xlsx:
export(dados2019, "dados 2019 teste.xls")

# Exportando em txt:
export(dados2019, "dados 2019 teste.txt")
