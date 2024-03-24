typedef struct Entrega;
typedef struct ListaEntrega; //Simboliza uma lista de Entrega

/**
 * @brief Lista as entregas
 * 
 * @param id_cliente O id do cliente 
 * @return ListaEntrega* Lista de Entrega contendo todas as entregas do cliente especificado
 */
ListaEntrega* listar_entregas(char id_cliente[20]);

/**
 * @brief (Público) Busca uma entrega no banco de dados de Entregas
 * 
 * @param id O id da entrega
 * @return Entrega* A entrega encontrada
 */
Entrega* rastrear(char id[20]);

