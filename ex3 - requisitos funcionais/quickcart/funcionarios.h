typedef struct Funcionario;
typedef struct ListaFuncionario; //Simboliza uma lista de funcionarios

/**
 * @brief Lista todos os funcionários
 * 
 * @return ListaFuncionario* Uma lista de Funcionário contendo todos os funcionários
 */
ListaFuncionario* listar_funcionarios();

/**
 * @brief Busca um funcionário no banco de dados
 * 
 * @param id id do funcionário
 * @return Funcionario* O funcionário encontrado
 */
Funcionario* recuperar_funcionario(char id[20]);

/**
 * @brief Salva um funcionário no banco de dados de funcionários
 * 
 * @param funcionario O objeto de funcionário a ser adicionado ao banco de dados
 * @return Funcionario* O funcionário criado
 */
Funcionario* criar_funcionario(Funcionario* funcionario);

/**
 * @brief Edita um funcionário no banco de dados 
 * 
 * @param id O id do funcionário a ser editado
 * @param funcionario O objeto de funcionário com as propriedades editadas
 * @return Funcionario* O objeto de funcionário atualizado
 */
Funcionario* editar_funcionario(char id[20], Funcionario* funcionario);

/**
 * @brief Exclui um funcionário no banco de dados
 * 
 * @param id O id do funcionário a ser excluído
 * @return Funcionario* O funcionário excluído
 */
Funcionario* excluir_funcionario(char id[20]);

/**
 * @brief Atualiza o salário de um funcionário do banco de dados
 * 
 * @param id O id do funcionário a ter o salário atualizado
 * @param novo_salario O novo salário do funcionário
 * @return Funcionario* O objeto de funcionário com o salário atualizado
 */
Funcionario* atualizar_salario(char id[20], float novo_salario);
