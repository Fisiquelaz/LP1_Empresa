# LP1_Empresa
Implemente um programa em C++ que atenda aos seguintes critérios:<br>
a) Contenha uma classe que representa um funcionário, registrando seu nome (pesquise o uso da classe string 1 ), salário e data de admissão;<br>
b) Contenha também uma classe que representa uma empresa, registrando seu nome, CNPJ e lista de funcionários;<br>
c) O programa deverá permitir criar uma empresa;<br>
d) O programa deverá permitir que se adicione funcionários (um por vez) a uma empresa e não deve permitir adicionar um funcionário que já tenha sido anteriormente adicionado, sendo neste caso exibida uma mensagem de erro. Os funcionários de uma empresa poderão ser mantidos em um array (você já conhece), vector 2 ou list 3 (pesquisar sobre a STL do C++), ou ainda alguma estrutura de dados que você já implementou em EDB1 e que considere conveniente. Dica: utilize a sobrecarga dos operadores de igualdade (==) e de extração de stream (>>).<br>
e) O programa deverá permitir listar os dados de todos os funcionários de uma empresa, sobrecarregando-se o operador de inserção em stream (<<);<br>
f) O programa deverá permitir que seja dado um aumento de X% a todos os funcionários de uma determinada empresa;<br>
g) O programa deverá permitir listar os dados de todos os funcionários de uma empresa em período de experiência, ou seja, contratados há menos de 90 dias considerando a data corrente;<br>
h) O programa deverá permitir listar a média de funcionários por empresa. O cálculo deve ser realizado a partir de atributos estáticos das próprias classes (Empresa e Funcionário).<br>

Dica 1: Observe que as funcionalidades exigidas nesta questão podem (e devem) ser resolvidas com a alteração das classes (por exemplo, criando novos métodos) e não manipulando de forma mirabolante os objetos no programa principal. Não complique o que é simples!<br>
Dica 2: A modelagem das classes é livre, ou seja, inclua os atributos que você considerar importantes para resolver a questão. Mas não se limite, pois quanto mais elaborado for o seu modelo de classes, melhor será a avaliação de seu trabalho.<br>
