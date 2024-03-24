typedef struct Leitor;
typedef struct ListaLeitores; // Simboliza uma lista de leitores

/**
 * @brief Lista todos os leitores no inventário
 * 
 * @return ListaLeitores* Uma lista com todos os leitores no inventário
*/
ListaLeitores* listar_leitores();

/**
 * @brief Busca um Leitor no banco de dados
 * 
 * @param id O id do leitor a ser buscado
 * @return Leitor* O leitor encontrado
 */
Leitor* recuperar_leitor(char id[20]);

/**
 * @brief Adiciona um leitor no banco de dados
 * 
 * @param leitor O objeto de leitor a ser adicionado
 * @return Leitor* O objeto adiocionado
 */
Leitor* criar_leitor(Leitor* leitor);

/**
 * @brief Edita um leitor no banco de dados
 * 
 * @param id O id do leitor a ser editado
 * @param leitor O objeto de leitor já atualizado
 * @return Leitor* O objeto atualizado no banco de dados
 */
Leitor* editar_leitor(char id[20], Leitor* leitor);

/**
 * @brief Remove um leitor do banco de dados
 * 
 * @param id O id do leitor a ser removido do banco de dados
 * @return Leitor* O objeto de leitor removido
 */
Leitor* remover_leitor(char id[20]);
