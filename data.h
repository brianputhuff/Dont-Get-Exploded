/*
** Don't Get Exploded!
** Copyright 2022, Brian Puthuff
**
** See LICENSE.md for details.
*/


#ifndef DATA_H
#define DATA_H


#include <iostream>
#include "defines.h"


class Data
{
	public:
	Data ( void );
	~Data ( void );

	void
	reset ( void );
	 
	void
	setDifficulty ( uint8_t setting );
	
	uint8_t
	getDifficulty ( void );
	
	uint8_t
	getNumberOfMines ( void );

	uint8_t
	getAvailableFlags ( void );
	
	bool
	setFlag ( void );
	
	bool
	restoreFlag ( void );

	void
	setMessage ( uint8_t message_id );
	
	uint8_t
	getMessage ( void );

	private:
	uint8_t _difficulty;
	uint8_t _number_of_mines;
	uint8_t _available_flags;
	uint8_t _message;
};


#endif
