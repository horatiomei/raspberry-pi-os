#ifndef	_BOOT_H
#define	_BOOT_H

extern void DELAY ( unsigned int);
extern void PUT32 ( unsigned int, unsigned int );
extern unsigned int GET32 ( unsigned int );
extern int GET_EL ( void );

#endif  /*_BOOT_H */
