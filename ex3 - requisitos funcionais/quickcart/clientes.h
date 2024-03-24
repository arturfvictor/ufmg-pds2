typedef struct Cliente;

/**
 * @brief Busca por um cliente no banco de dados
 * 
 * @param id O id do cliente a ser buscado
 * @return Cliente* O cliente encontrado
 */
Cliente* recuperar_cliente(char id[20]);

/**
 * @brief Cria um cliente no banco de dados
 * 
 * @param Cliente O objeto do cliente a ser criado
 * @return Cliente* O cliente criado
 */
Cliente* criar_cliente(Cliente* Cliente);

/**
 * @brief Edita um cliente no banco de dados
 * 
 * @param id O id do cliente a ser editado
 * @param cliente O objeto do cliente com as alterações feitas
 * @return Cliente* O objeto do cliente atualizado
 */
Cliente* editar_cliente(char id[20], Cliente* cliente);

/**
 * @brief Exclui um  cliente do banco de dados
 * 
 * @param id O id do cliente no banco de dados
 * @return Cliente* O objeto de cliente excluído
 */
Cliente* excluir_cliente(char id[20]);