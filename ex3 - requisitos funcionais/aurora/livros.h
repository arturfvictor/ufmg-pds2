typedef struct Livro;
typedef struct ListaLivros; // Simbiliza uma lista de livros

/**
 * @brief Lista todos os livros no inventário
 * 
 * @return ListaLivros* Uma lista com todos os livros no inventário
*/
ListaLivros* listar_livros();

/**
 * @brief Procura por um livro no banco de dados de livros
 * 
 * @param id O id do livro a ser recuperado do banco de dados
 * @return Livro* O livro recuperado
 */
Livro* recuperar_livro(char id[20]);

/**
 * @brief Cria um novo livro no banco de dados de livros
 * 
 * @param livro O livro a ser adicionado ao banco de dados
 * @return Livro* O livro criado
 */
Livro* criar_livro(Livro* livro);

/**
 * @brief Edita um livro no banco de dados de livros
 * 
 * @param id O id do livro a ser editado no banco de dados
 * @param livro O objeto do livro com as edições feitas
 * @return Livro* O livro editado
 */
Livro* editar_livro(char id[20], Livro* livro);

/**
 * @brief Remove um livro do banco de dados de livros
 * 
 * @param id O id do livro a ser removido
 * @return Livro* O livro removido
 */
Livro* remover_livro(char id[20]);

/**
 * @brief Aumenta a quantidade de exemplares do livro definido
 * 
 * @param id O id do livro em questão
 * @param quantidade A quantidade a ser aumentada
 * @return Livro* A nova quantidade de exemplares
 */
int adicionar_exemplares(char id[20], int quantidade);

/**
 * @brief Reduz a quantidade de exemplares do livro definido
 * 
 * @param id O id do livro em questão
 * @param quantidade A quantidade a ser diminuída
 * @return Livro* A nova quantidade de exemplares
 */
int remover_exemplares(char id[20], int quantidade);