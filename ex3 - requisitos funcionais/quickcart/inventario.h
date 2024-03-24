typedef struct Item;
typedef struct ListaItems; // Simboliza uma lista de Item

/**
 * @brief Lista todos os itens do inventário
 * 
 * @return ListaItems* Uma lista de Item contendo todos os itens do inventário
 */
ListaItems* listar_items();

/**
 * @brief Procura por um item no banco de dados de inventário
 * 
 * @param id O id do item a ser recuperado do banco de dados
 * @return Item* O item recuperado
 */
Item* recuperar_item(char id[20]);

/**
 * @brief Cria um novo item no banco de dados de inventário
 * 
 * @param item O item a ser adicionado ao banco de dados
 * @return Item* O item criado
 */
Item* criar_item(Item* item);

/**
 * @brief Edita um item no banco de dados de inventário
 * 
 * @param id O id do item a ser editado no banco de dados
 * @param item O objeto do item com as edições feitas
 * @return Item* O item editado
 */
Item* editar_item(char id[20], Item* item);

/**
 * @brief Remove um item do banco de dados de inventário
 * 
 * @param id O id do item a ser removido
 * @return Item* O item removido
 */
Item* remover_item(char id[20]);

/**
 * @brief Aumenta a quantidade em estoque do item definido
 * 
 * @param id O id do item em questão
 * @param quantidade A quantidade a ser aumentada
 * @return Item* A nova quantidade em inventário
 */
int adicionar_estoque(char id[20], int quantidade);

/**
 * @brief Reduz a quantidade em estoque do item definido
 * 
 * @param id O id do item em questão
 * @param quantidade A quantidade a ser diminuída
 * @return Item* A nova quantidade em inventário
 */
int remover_estoque(char id[20], int quantidade);