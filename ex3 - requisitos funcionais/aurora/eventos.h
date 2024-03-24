typedef struct Evento;
typedef struct ListaEventos; //Simboliza uma lista de eventos

/**
 * @brief Lista todos os eventos
 * 
 * @return ListaEventos Um objeto contendo uma lista com todos os eventos
 */
ListaEventos* listar_eventos();

/**
 * @brief Lista todos os eventos entre duas datas
 * 
 * @param de A data inicial do intervalo (em segundos)
 * @param ate A data final do intervalo (em segundos)
 * @return ListaEventos Um objeto contendo uma lista com todos os eventos que aconteceram entre as datas
 */
ListaEventos* listar_eventos(int de, int ate);

/**
 * @brief Busca um Evento no banco de dados
 * 
 * @param id O id do evento a ser buscado
 * @return Evento* O evento encontrado
 */
Evento* recuperar_evento(char id[20]);

/**
 * @brief Adiciona um evento no banco de dados
 * 
 * @param evento O objeto de evento a ser adicionado
 * @return Evento* O objeto adiocionado
 */
Evento* criar_evento(Evento* evento);

/**
 * @brief Edita um evento no banco de dados
 * 
 * @param id O id do evento a ser editado
 * @param evento O objeto de evento já atualizado
 * @return Evento* O objeto atualizado no banco de dados
 */
Evento* editar_evento(char id[20], Evento* evento);

/**
 * @brief Remove um evento do banco de dados
 * 
 * @param id O id do evento a ser removido do banco de dados
 * @return Evento* O objeto de evento removido
 */
Evento* remover_evento(char id[20]);

/**
 * @brief Cancela um evento
 * 
 * @param id O id do evento a ser cancelad
 * @return Reserva* O objeto do evento cancelado
 */
Evento* cancelar_reserva(char id[20]);
