typedef struct Rota;
typedef struct Entrega;
typedef struct ListaEntregas; // Simboliza uma lista de Entrega


/**
 * @brief Lista todas as entregas
 * 
 * @return ListaEntregas* Uma lista de Entrega contendo todas as entregas
 */
ListaEntregas* listar_entregas();

/**
 * @brief Lista todas as entregas para um cliente
 * 
 * @param id_cliente O id do cliente 
 * @return ListaEntregas* Uma lista de Entrega contendo todas as entregas do cliente
 */
ListaEntregas* listar_entregas(char id_cliente[20]);

/**
 * @brief Busca uma rota no banco de dados
 * 
 * @param id O id da rota
 * @return Rota* A rota encontrada
 */
Rota* recuperar_rota(char id[20]);

/**
 * @brief Adiciona uma rota no banco de dados
 * 
 * @param rota O objeto de rota a ser adicionado
 * @return Rota* A rota adiocionada ao banco
 */
Rota* criar_rota(Rota* rota);

/**
 * @brief Edita uma rota no banco de dados
 * 
 * @param id O id da rota a ser editada
 * @param rota O objeto de rota no banco de dados
 * @return Rota* O objeto de rota atualizado
 */
Rota* editar_rota(char id[20], Rota* rota);

/**
 * @brief Exclui uma rota do banco de dados
 * 
 * @param id O id da rota a ser excluída
 * @return Rota* A rota excluída
 */
Rota* excluir_rota(char id[20]);

/**
 * @brief Adiociona uma entrega e recalcula a rota
 * 
 * @param id O id da rota que deverá comportar a entrega
 * @param entrega A entrega ser adicionada
 * @return Rota* A rota atualizada
 */
Rota* adicionar_entrega(char id[20], Entrega* entrega);