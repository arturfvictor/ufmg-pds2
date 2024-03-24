typedef struct Reserva;
typedef struct ListaReservas; // Simboliza uma lista de reservas

/**
 * @brief Lista todos as reservas de um leitor
 * 
 * @param id_leitor O id do leitor em questão
 * @return ListaReservas Uma lista contendo todos as reservas do leitor
 */
ListaReservas* listar_reservas(char id_leitor[20]);

/**
 * @brief Busca uma Reserva no banco de dados
 * 
 * @param id O id da reserva a ser buscado
 * @return Reserva* A reserva encontrado
 */
Reserva* recuperar_reserva(char id[20]);

/**
 * @brief Adiciona uma reserva no banco de dados
 * 
 * @param reserva O objeto de reserva a ser adicionado
 * @return Reserva* O objeto adiocionado
 */
Reserva* criar_reserva(Reserva* reserva);

/**
 * @brief Edita uma reserva no banco de dados
 * 
 * @param id O id da reserva a ser editado
 * @param reserva O objeto de reserva já atualizado
 * @return Reserva* O objeto atualizado no banco de dados
 */
Reserva* editar_reserva(char id[20], Reserva* reserva);

/**
 * @brief Remove uma reserva do banco de dados
 * 
 * @param id O id da reserva a ser removido do banco de dados
 * @return Reserva* O objeto de reserva removido
 */
Reserva* remover_reserva(char id[20]);

/**
 * @brief Cancela uma reserva
 * 
 * @param id O id da reserva a ser cancelada
 * @return Reserva* O objeto da reserva cancelada
 */
Reserva* cancelar_reserva(char id[20]);
