typedef struct Emprestimo;
typedef struct ListaEmprestimos; // Simboliza uma lista de empréstimos

/**
 * @brief Lista todos os empréstimos de um leitor
 * 
 * @param id_leitor O id do leitor em questão
 * @return ListaEmprestimos Uma lista contendo todos os empréstimos do leitor
 */
ListaEmprestimos* listar_emprestimo(char id_leitor[20]);

/**
 * @brief Busca um empréstimo no banco de dados
 * 
 * @param id O id do empréstimo 
 * @return Emprestimo* O empréstimo encontrado
 */
Emprestimo* recuperar_emprestimo(char id[20]);

/**
 * @brief Adiciona um novo empréstimo ao banco de dados
 * 
 * @param emprestimo O objeto do no empréstimo
 * @return Emprestimo* O objeto de empréstimo criado
 */
Emprestimo* criar_emprestimo(Emprestimo* emprestimo);

/**
 * @brief Edita um empréstimo no banco de dados
 * 
 * @param id O id do empréstimo no banco de dados
 * @param emprestimo O objeto de empréstimo já editado
 * @return Emprestimo* O empréstimo atualizado
 */
Emprestimo* editar_emprestimo(char id[20], Emprestimo* emprestimo);

/**
 * @brief Exclui um empréstimo do banco de dados
 * 
 * @param id o id do empréstimo a ser excluído
 * @return Emprestimo* O objeto de empréstimo excluído
 */
Emprestimo* remover_emprestimo(char id[20]);

/**
 * @brief Registra a devolução de um empréstimo
 * 
 * @param id O id do empréstimo devolvido
 */
void registrar_devolucao(char id[20]);

/**
 * @brief Estende o prazo de devolução de um empréstimo
 * 
 * @param id O id do empréstimo em questão
 * @param tempo O tempo a ser extendido (em segundos)
 * @return Emprestimo* O objeto de empréstimo atualizado
 */
Emprestimo* estender_prazo(char id[20], int tempo);

/**
 * @brief Lista todos os empréstimos atrasados de um leitor
 * 
 * @param id_leitor O id do leitor em questão
 * @return ListaEmprestimos Uma lista contendo todos os empréstimos atrasados do leitor
 */
ListaEmprestimos* listar_atrasos(char id_leitor[20]);