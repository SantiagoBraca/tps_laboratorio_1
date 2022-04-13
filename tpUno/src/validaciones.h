#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

/** \brief Recibe un valor y una bandera
 *
 * \param Analiza el valor ingresado
 * \param Si es correcto el puntero se vuelve 1
 * \return Retorna el valor y el puntero
 *
 */
float kilometrosConfirmados(float kms, int* pFlagKilometros);

/** \brief Recibe un valor y una bandera
 *
 * \param Analiza el valor ingresado
 * \param Si es correcto el puntero se vuelve 1
 * \return Retorna el valor y el puntero
 *
 */
float aerolineasConfirmado(float precioAerolineas, int* pFlagAerolineas);

/** \brief Recibe un valor y una bandera
 *
 * \param Analiza el valor ingresado
 * \param Si es correcto el puntero se vuelve 1
 * \return Retorna el valor y el puntero
 *
 */
float latamConfirmado(float precioLatam, int* pFlagLatam);

#endif /* VALIDACIONES_H_ */
