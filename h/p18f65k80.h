/*-------------------------------------------------------------------------
 * MPLAB-Cxx  PIC18F65K80 processor header
 *
 * (c) Copyright 1999-2010 Microchip Technology, All rights reserved
 *-------------------------------------------------------------------------*/

#ifndef __18F65K80_H
#define __18F65K80_H

extern volatile far  unsigned char       RXERRCNT;
extern volatile far  unsigned char       TXERRCNT;
extern volatile far  unsigned char       BRGCON1;
extern volatile far  struct {
  unsigned BRP:6;
  unsigned SJW:2;
} BRGCON1bits;
extern volatile far  unsigned char       BRGCON2;
extern volatile far  struct {
  unsigned PRSEG:3;
  unsigned SEG1PH:3;
  unsigned SAM:1;
  unsigned SEG2PHTS:1;
} BRGCON2bits;
extern volatile far  unsigned char       BRGCON3;
extern volatile far  struct {
  unsigned SEG2PH:3;
  unsigned :3;
  unsigned WAKFIL:1;
  unsigned WAKDIS:1;
} BRGCON3bits;
extern volatile far  unsigned char       RXFCON0;
extern volatile far  struct {
  unsigned RXF0EN:1;
  unsigned RXF1EN:1;
  unsigned RXF2EN:1;
  unsigned RXF3EN:1;
  unsigned RXF4EN:1;
  unsigned RXF5EN:1;
  unsigned RXF6EN:1;
  unsigned RXF7EN:1;
} RXFCON0bits;
extern volatile far  unsigned char       RXFCON1;
extern volatile far  struct {
  unsigned RXF8EN:1;
  unsigned RXF9EN:1;
  unsigned RXF10EN:1;
  unsigned RXF11EN:1;
  unsigned RXF12EN:1;
  unsigned RXF13EN:1;
  unsigned RXF14EN:1;
  unsigned RXF15EN:1;
} RXFCON1bits;
extern volatile far  unsigned char       RXF6SIDH;
extern volatile far  unsigned char       RXF6SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF6SIDLbits;
extern volatile far  unsigned char       RXF6EIDH;
extern volatile far  unsigned char       RXF6EIDL;
extern volatile far  unsigned char       RXF7SIDH;
extern volatile far  unsigned char       RXF7SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF7SIDLbits;
extern volatile far  unsigned char       RXF7EIDH;
extern volatile far  unsigned char       RXF7EIDL;
extern volatile far  unsigned char       RXF8SIDH;
extern volatile far  unsigned char       RXF8SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF8SIDLbits;
extern volatile far  unsigned char       RXF8EIDH;
extern volatile far  unsigned char       RXF8EIDL;
extern volatile far  unsigned char       RXF9SIDH;
extern volatile far  unsigned char       RXF9SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF9SIDLbits;
extern volatile far  unsigned char       RXF9EIDH;
extern volatile far  unsigned char       RXF9EIDL;
extern volatile far  unsigned char       RXF10SIDH;
extern volatile far  unsigned char       RXF10SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF10SIDLbits;
extern volatile far  unsigned char       RXF10EIDH;
extern volatile far  unsigned char       RXF10EIDL;
extern volatile far  unsigned char       RXF11SIDH;
extern volatile far  unsigned char       RXF11SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF11SIDLbits;
extern volatile far  unsigned char       RXF11EIDH;
extern volatile far  unsigned char       RXF11EIDL;
extern volatile far  unsigned char       RXF12SIDH;
extern volatile far  unsigned char       RXF12SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF12SIDLbits;
extern volatile far  unsigned char       RXF12EIDH;
extern volatile far  unsigned char       RXF12EIDL;
extern volatile far  unsigned char       RXF13SIDH;
extern volatile far  unsigned char       RXF13SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF13SIDLbits;
extern volatile far  unsigned char       RXF13EIDH;
extern volatile far  unsigned char       RXF13EIDL;
extern volatile far  unsigned char       RXF14SIDH;
extern volatile far  unsigned char       RXF14SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF14SIDLbits;
extern volatile far  unsigned char       RXF14EIDH;
extern volatile far  unsigned char       RXF14EIDL;
extern volatile far  unsigned char       RXF15SIDH;
extern volatile far  unsigned char       RXF15SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF15SIDLbits;
extern volatile far  unsigned char       RXF15EIDH;
extern volatile far  unsigned char       RXF15EIDL;
extern volatile far  unsigned char       SDFLC;
extern volatile far  struct {
  unsigned FLC:5;
} SDFLCbits;
extern volatile far  unsigned char       RXFBCON0;
extern volatile far  struct {
  unsigned F0BP:4;
  unsigned F1BP:4;
} RXFBCON0bits;
extern volatile far  unsigned char       RXFBCON1;
extern volatile far  struct {
  unsigned F2BP:4;
  unsigned F3BP:4;
} RXFBCON1bits;
extern volatile far  unsigned char       RXFBCON2;
extern volatile far  struct {
  unsigned F4BP:4;
  unsigned F5BP:4;
} RXFBCON2bits;
extern volatile far  unsigned char       RXFBCON3;
extern volatile far  struct {
  unsigned F6BP:4;
  unsigned F7BP:4;
} RXFBCON3bits;
extern volatile far  unsigned char       RXFBCON4;
extern volatile far  struct {
  unsigned F8BP:4;
  unsigned F9BP:4;
} RXFBCON4bits;
extern volatile far  unsigned char       RXFBCON5;
extern volatile far  struct {
  unsigned F10BP:4;
  unsigned F11BP:4;
} RXFBCON5bits;
extern volatile far  unsigned char       RXFBCON6;
extern volatile far  struct {
  unsigned F12BP:4;
  unsigned F13BP:4;
} RXFBCON6bits;
extern volatile far  unsigned char       RXFBCON7;
extern volatile far  struct {
  unsigned F14BP:4;
  unsigned F15BP:4;
} RXFBCON7bits;
extern volatile far  unsigned char       MSEL0;
extern volatile far  struct {
  unsigned FIL0:2;
  unsigned FIL1:2;
  unsigned FIL2:2;
  unsigned FIL3:2;
} MSEL0bits;
extern volatile far  unsigned char       MSEL1;
extern volatile far  struct {
  unsigned FIL4:2;
  unsigned FIL5:2;
  unsigned FIL6:2;
  unsigned FIL7:2;
} MSEL1bits;
extern volatile far  unsigned char       MSEL2;
extern volatile far  struct {
  unsigned FIL8:2;
  unsigned FIL9:2;
  unsigned FIL10:2;
  unsigned FIL11:2;
} MSEL2bits;
extern volatile far  unsigned char       MSEL3;
extern volatile far  struct {
  unsigned FIL12:2;
  unsigned FIL13:2;
  unsigned FIL14:2;
  unsigned FIL15:2;
} MSEL3bits;
extern volatile far  unsigned char       BSEL0;
extern volatile far  struct {
  unsigned :2;
  unsigned B0TXEN:1;
  unsigned B1TXEN:1;
  unsigned B2TXEN:1;
  unsigned B3TXEN:1;
  unsigned B4TXEN:1;
  unsigned B5TXEN:1;
} BSEL0bits;
extern volatile far  unsigned char       BIE0;
extern volatile far  struct {
  unsigned RXB0IE:1;
  unsigned RXB1IE:1;
  unsigned B0IE:1;
  unsigned B1IE:1;
  unsigned B2IE:1;
  unsigned B3IE:1;
  unsigned B4IE:1;
  unsigned B5IE:1;
} BIE0bits;
extern volatile far  unsigned char       TXBIE;
extern volatile far  struct {
  unsigned :2;
  unsigned TXB0IE:1;
  unsigned TXB1IE:1;
  unsigned TXB2IE:1;
} TXBIEbits;
extern volatile far  unsigned char       B0CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B0CONbits;
extern volatile far  unsigned char       B0SIDH;
extern volatile far  unsigned char       B0SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B0SIDLbits;
extern volatile far  unsigned char       B0EIDH;
extern volatile far  unsigned char       B0EIDL;
extern volatile far  unsigned char       B0DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B0DLCbits;
extern volatile far  unsigned char       B0D0;
extern volatile far  unsigned char       B0D1;
extern volatile far  unsigned char       B0D2;
extern volatile far  unsigned char       B0D3;
extern volatile far  unsigned char       B0D4;
extern volatile far  unsigned char       B0D5;
extern volatile far  unsigned char       B0D6;
extern volatile far  unsigned char       B0D7;
extern volatile far  unsigned char       CANSTAT_RO9;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO9bits;
extern volatile far  unsigned char       CANCON_RO9;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO9bits;
extern volatile far  unsigned char       B1CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B1CONbits;
extern volatile far  unsigned char       B1SIDH;
extern volatile far  unsigned char       B1SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B1SIDLbits;
extern volatile far  unsigned char       B1EIDH;
extern volatile far  unsigned char       B1EIDL;
extern volatile far  unsigned char       B1DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B1DLCbits;
extern volatile far  unsigned char       B1D0;
extern volatile far  unsigned char       B1D1;
extern volatile far  unsigned char       B1D2;
extern volatile far  unsigned char       B1D3;
extern volatile far  unsigned char       B1D4;
extern volatile far  unsigned char       B1D5;
extern volatile far  unsigned char       B1D6;
extern volatile far  unsigned char       B1D7;
extern volatile far  unsigned char       CANSTAT_RO8;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO8bits;
extern volatile far  unsigned char       CANCON_RO8;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO8bits;
extern volatile far  unsigned char       B2CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B2CONbits;
extern volatile far  unsigned char       B2SIDH;
extern volatile far  unsigned char       B2SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B2SIDLbits;
extern volatile far  unsigned char       B2EIDH;
extern volatile far  unsigned char       B2EIDL;
extern volatile far  unsigned char       B2DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B2DLCbits;
extern volatile far  unsigned char       B2D0;
extern volatile far  unsigned char       B2D1;
extern volatile far  unsigned char       B2D2;
extern volatile far  unsigned char       B2D3;
extern volatile far  unsigned char       B2D4;
extern volatile far  unsigned char       B2D5;
extern volatile far  unsigned char       B2D6;
extern volatile far  unsigned char       B2D7;
extern volatile far  unsigned char       CANSTAT_RO7;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO7bits;
extern volatile far  unsigned char       CANCON_RO7;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO7bits;
extern volatile far  unsigned char       B3CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B3CONbits;
extern volatile far  unsigned char       B3SIDH;
extern volatile far  unsigned char       B3SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B3SIDLbits;
extern volatile far  unsigned char       B3EIDH;
extern volatile far  unsigned char       B3EIDL;
extern volatile far  unsigned char       B3DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B3DLCbits;
extern volatile far  unsigned char       B3D0;
extern volatile far  unsigned char       B3D1;
extern volatile far  unsigned char       B3D2;
extern volatile far  unsigned char       B3D3;
extern volatile far  unsigned char       B3D4;
extern volatile far  unsigned char       B3D5;
extern volatile far  unsigned char       B3D6;
extern volatile far  unsigned char       B3D7;
extern volatile far  unsigned char       CANSTAT_RO6;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO6bits;
extern volatile far  unsigned char       CANCON_RO6;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO6bits;
extern volatile far  unsigned char       B4CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B4CONbits;
extern volatile far  unsigned char       B4SIDH;
extern volatile far  unsigned char       B4SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B4SIDLbits;
extern volatile far  unsigned char       B4EIDH;
extern volatile far  unsigned char       B4EIDL;
extern volatile far  unsigned char       B4DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B4DLCbits;
extern volatile far  unsigned char       B4D0;
extern volatile far  unsigned char       B4D1;
extern volatile far  unsigned char       B4D2;
extern volatile far  unsigned char       B4D3;
extern volatile far  unsigned char       B4D4;
extern volatile far  unsigned char       B4D5;
extern volatile far  unsigned char       B4D6;
extern volatile far  unsigned char       B4D7;
extern volatile far  unsigned char       CANSTAT_RO5;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO5bits;
extern volatile far  unsigned char       CANCON_RO5;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO5bits;
extern volatile far  unsigned char       B5CON;
extern volatile far  struct {
  unsigned FILHIT0_TXPRI0:1;
  unsigned FILHIT1_TXPRI1:1;
  unsigned FILHIT2_RTREN:1;
  unsigned FILHIT3_TXREQ:1;
  unsigned FILHIT4_TXERR:1;
  unsigned RXRTRRO_TXLARB:1;
  unsigned RXM1_TXABT:1;
  unsigned RXFUL_TXBIF:1;
} B5CONbits;
extern volatile far  unsigned char       B5SIDH;
extern volatile far  unsigned char       B5SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned SRR:1;
  unsigned SID:3;
} B5SIDLbits;
extern volatile far  unsigned char       B5EIDH;
extern volatile far  unsigned char       B5EIDL;
extern volatile far  unsigned char       B5DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RXRTR_TXRTR:1;
} B5DLCbits;
extern volatile far  unsigned char       B5D0;
extern volatile far  unsigned char       B5D1;
extern volatile far  unsigned char       B5D2;
extern volatile far  unsigned char       B5D3;
extern volatile far  unsigned char       B5D4;
extern volatile far  unsigned char       B5D5;
extern volatile far  unsigned char       B5D6;
extern volatile far  unsigned char       B5D7;
extern volatile far  unsigned char       CANSTAT_RO4;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO4bits;
extern volatile far  unsigned char       CANCON_RO4;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO4bits;
extern volatile far  unsigned char       RXF0SIDH;
extern volatile far  unsigned char       RXF0SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF0SIDLbits;
extern volatile far  unsigned char       RXF0EIDH;
extern volatile far  unsigned char       RXF0EIDL;
extern volatile far  unsigned char       RXF1SIDH;
extern volatile far  unsigned char       RXF1SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF1SIDLbits;
extern volatile far  unsigned char       RXF1EIDH;
extern volatile far  unsigned char       RXF1EIDL;
extern volatile far  unsigned char       RXF2SIDH;
extern volatile far  unsigned char       RXF2SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF2SIDLbits;
extern volatile far  unsigned char       RXF2EIDH;
extern volatile far  unsigned char       RXF2EIDL;
extern volatile far  unsigned char       RXF3SIDH;
extern volatile far  unsigned char       RXF3SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF3SIDLbits;
extern volatile far  unsigned char       RXF3EIDH;
extern volatile far  unsigned char       RXF3EIDL;
extern volatile far  unsigned char       RXF4SIDH;
extern volatile far  unsigned char       RXF4SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF4SIDLbits;
extern volatile far  unsigned char       RXF4EIDH;
extern volatile far  unsigned char       RXF4EIDL;
extern volatile far  unsigned char       RXF5SIDH;
extern volatile far  unsigned char       RXF5SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXF5SIDLbits;
extern volatile far  unsigned char       RXF5EIDH;
extern volatile far  unsigned char       RXF5EIDL;
extern volatile far  unsigned char       RXM0SIDH;
extern volatile far  unsigned char       RXM0SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXM0SIDLbits;
extern volatile far  unsigned char       RXM0EIDH;
extern volatile far  unsigned char       RXM0EIDL;
extern volatile far  unsigned char       RXM1SIDH;
extern volatile far  unsigned char       RXM1SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDEN:1;
  unsigned :1;
  unsigned SID:3;
} RXM1SIDLbits;
extern volatile far  unsigned char       RXM1EIDH;
extern volatile far  unsigned char       RXM1EIDL;
extern volatile far  unsigned char       TXB2CON;
extern volatile far  struct {
  unsigned TXPRI:2;
  unsigned :1;
  unsigned TXREQ:1;
  unsigned TXERR:1;
  unsigned TXLARB:1;
  unsigned TXABT:1;
  unsigned TXBIF:1;
} TXB2CONbits;
extern volatile far  unsigned char       TXB2SIDH;
extern volatile far  unsigned char       TXB2SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID:3;
} TXB2SIDLbits;
extern volatile far  unsigned char       TXB2EIDH;
extern volatile far  unsigned char       TXB2EIDL;
extern volatile far  unsigned char       TXB2DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned :2;
  unsigned TXRTR:1;
} TXB2DLCbits;
extern volatile far  unsigned char       TXB2D0;
extern volatile far  unsigned char       TXB2D1;
extern volatile far  unsigned char       TXB2D2;
extern volatile far  unsigned char       TXB2D3;
extern volatile far  unsigned char       TXB2D4;
extern volatile far  unsigned char       TXB2D5;
extern volatile far  unsigned char       TXB2D6;
extern volatile far  unsigned char       TXB2D7;
extern volatile far  unsigned char       CANSTAT_RO3;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO3bits;
extern volatile far  unsigned char       CANCON_RO3;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO3bits;
extern volatile far  unsigned char       TXB1CON;
extern volatile far  struct {
  unsigned TXPRI:2;
  unsigned :1;
  unsigned TXREQ:1;
  unsigned TXERR:1;
  unsigned TXLARB:1;
  unsigned TXABT:1;
  unsigned TXBIF:1;
} TXB1CONbits;
extern volatile far  unsigned char       TXB1SIDH;
extern volatile far  unsigned char       TXB1SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID:3;
} TXB1SIDLbits;
extern volatile far  unsigned char       TXB1EIDH;
extern volatile far  unsigned char       TXB1EIDL;
extern volatile far  unsigned char       TXB1DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned :2;
  unsigned TXRTR:1;
} TXB1DLCbits;
extern volatile far  unsigned char       TXB1D0;
extern volatile far  unsigned char       TXB1D1;
extern volatile far  unsigned char       TXB1D2;
extern volatile far  unsigned char       TXB1D3;
extern volatile far  unsigned char       TXB1D4;
extern volatile far  unsigned char       TXB1D5;
extern volatile far  unsigned char       TXB1D6;
extern volatile far  unsigned char       TXB1D7;
extern volatile far  unsigned char       CANSTAT_RO2;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO2bits;
extern volatile far  unsigned char       CANCON_RO2;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO2bits;
extern volatile far  unsigned char       TXB0CON;
extern volatile far  struct {
  unsigned TXPRI:2;
  unsigned :1;
  unsigned TXREQ:1;
  unsigned TXERR:1;
  unsigned TXLARB:1;
  unsigned TXABT:1;
  unsigned TXBIF:1;
} TXB0CONbits;
extern volatile far  unsigned char       TXB0SIDH;
extern volatile far  unsigned char       TXB0SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXIDE:1;
  unsigned :1;
  unsigned SID:3;
} TXB0SIDLbits;
extern volatile far  unsigned char       TXB0EIDH;
extern volatile far  unsigned char       TXB0EIDL;
extern volatile far  unsigned char       TXB0DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned :2;
  unsigned TXRTR:1;
} TXB0DLCbits;
extern volatile far  unsigned char       TXB0D0;
extern volatile far  unsigned char       TXB0D1;
extern volatile far  unsigned char       TXB0D2;
extern volatile far  unsigned char       TXB0D3;
extern volatile far  unsigned char       TXB0D4;
extern volatile far  unsigned char       TXB0D5;
extern volatile far  unsigned char       TXB0D6;
extern volatile far  unsigned char       TXB0D7;
extern volatile far  unsigned char       CANSTAT_RO1;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO1bits;
extern volatile far  unsigned char       CANCON_RO1;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO1bits;
extern volatile far  unsigned char       RXB1CON;
extern volatile far  struct {
  unsigned F0:1;
  unsigned F1:1;
  unsigned F2:1;
  unsigned RXRTRRO_F3:1;
  unsigned F4:1;
  unsigned RXM0_RTRRO:1;
  unsigned RXM1:1;
  unsigned RXFUL:1;
} RXB1CONbits;
extern volatile far  unsigned char       RXB1SIDH;
extern volatile far  unsigned char       RXB1SIDL;
extern volatile far  struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXID:1;
  unsigned SRR:1;
  unsigned SID:3;
} RXB1SIDLbits;
extern volatile far  unsigned char       RXB1EIDH;
extern volatile far  unsigned char       RXB1EIDL;
extern volatile far  unsigned char       RXB1DLC;
extern volatile far  struct {
  unsigned DLC:4;
  unsigned RESB:2;
  unsigned RXRTR:1;
} RXB1DLCbits;
extern volatile far  unsigned char       RXB1D0;
extern volatile far  unsigned char       RXB1D1;
extern volatile far  unsigned char       RXB1D2;
extern volatile far  unsigned char       RXB1D3;
extern volatile far  unsigned char       RXB1D4;
extern volatile far  unsigned char       RXB1D5;
extern volatile far  unsigned char       RXB1D6;
extern volatile far  unsigned char       RXB1D7;
extern volatile far  unsigned char       CANSTAT_RO0;
extern volatile far  struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTAT_RO0bits;
extern volatile far  unsigned char       CANCON_RO0;
extern volatile far  struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCON_RO0bits;
extern volatile far  unsigned char       MDCARL;
extern volatile far  struct {
  unsigned MDCH:4;
  unsigned :1;
  unsigned MDCHSYNC:1;
  unsigned MDCHPOL:1;
  unsigned MDCHODIS:1;
} MDCARLbits;
extern volatile far  unsigned char       MDCARH;
extern volatile far  struct {
  unsigned MDCH:4;
  unsigned :1;
  unsigned MDCHSYNC:1;
  unsigned MDCHPOL:1;
  unsigned MDCHODIS:1;
} MDCARHbits;
extern volatile far  unsigned char       MDSRC;
extern volatile far  struct {
  unsigned MDSRC:4;
  unsigned :3;
  unsigned MDSODIS:1;
} MDSRCbits;
extern volatile far  unsigned char       MDCON;
extern volatile far  struct {
  unsigned MDBIT:1;
  unsigned :2;
  unsigned MDO:1;
  unsigned MDOPOL:1;
  unsigned MDSLR:1;
  unsigned MDOE:1;
  unsigned MDEN:1;
} MDCONbits;
extern volatile far  unsigned char       PSPCON;
extern volatile far  struct {
  unsigned :4;
  unsigned PSPMODE:1;
  unsigned IBOV:1;
  unsigned OBF:1;
  unsigned IBF:1;
} PSPCONbits;
extern volatile far  unsigned char       CCP5CON;
extern volatile far  union {
  struct {
    unsigned CCP5M:4;
    unsigned DC5B:2;
  };
  struct {
    unsigned CCP5M0:1;
    unsigned CCP5M1:1;
    unsigned CCP5M2:1;
    unsigned CCP5M3:1;
    unsigned DC5B0:1;
    unsigned DC5B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP5Y:1;
    unsigned CCP5X:1;
  };
} CCP5CONbits;
extern volatile far  unsigned char       CCPR5;
extern volatile far  unsigned char       CCPR5L;
extern volatile far  unsigned char       CCPR5H;
extern volatile far  unsigned char       CCP4CON;
extern volatile far  union {
  struct {
    unsigned CCP4M:4;
    unsigned DC4B:2;
  };
  struct {
    unsigned CCP4M0:1;
    unsigned CCP4M1:1;
    unsigned CCP4M2:1;
    unsigned CCP4M3:1;
    unsigned DC4B0:1;
    unsigned DC4B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP4Y:1;
    unsigned CCP4X:1;
  };
} CCP4CONbits;
extern volatile far  unsigned char       CCPR4;
extern volatile far  unsigned char       CCPR4L;
extern volatile far  unsigned char       CCPR4H;
extern volatile far  unsigned char       CCP3CON;
extern volatile far  union {
  struct {
    unsigned CCP3M:4;
    unsigned DC3B:2;
  };
  struct {
    unsigned CCP3M0:1;
    unsigned CCP3M1:1;
    unsigned CCP3M2:1;
    unsigned CCP3M3:1;
    unsigned DC3B0:1;
    unsigned DC3B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP3Y:1;
    unsigned CCP3X:1;
  };
} CCP3CONbits;
extern volatile far  unsigned char       CCPR3;
extern volatile far  unsigned char       CCPR3L;
extern volatile far  unsigned char       CCPR3H;
extern volatile far  unsigned char       CCP2CON;
extern volatile far  union {
  struct {
    unsigned CCP2M:4;
    unsigned DC3B:2;
  };
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} CCP2CONbits;
extern volatile far  unsigned char       ECCP2CON;
extern volatile far  union {
  struct {
    unsigned CCP2M:4;
    unsigned DC3B:2;
  };
  struct {
    unsigned CCP2M0:1;
    unsigned CCP2M1:1;
    unsigned CCP2M2:1;
    unsigned CCP2M3:1;
    unsigned DC2B0:1;
    unsigned DC2B1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP2Y:1;
    unsigned CCP2X:1;
  };
} ECCP2CONbits;
extern volatile far  unsigned char       CCPR2;
extern volatile far  unsigned char       CCPR2L;
extern volatile far  unsigned char       CCPR2H;
extern volatile far  unsigned char       CTMUICON;
extern volatile far  union {
  struct {
    unsigned IRNG:2;
    unsigned ITRIM:6;
  };
  struct {
    unsigned IRNG0:1;
    unsigned IRNG1:1;
    unsigned ITRIM0:1;
    unsigned ITRIM1:1;
    unsigned ITRIM2:1;
    unsigned ITRIM3:1;
    unsigned ITRIM4:1;
    unsigned ITRIM5:1;
  };
} CTMUICONbits;
extern volatile far  unsigned char       CTMUCONL;
extern volatile far  union {
  struct {
    unsigned EDG1STAT:1;
    unsigned EDG2STAT:1;
    unsigned EDG1SEL:2;
    unsigned EDG1POL:1;
    unsigned EDG2SEL:2;
    unsigned EDG2POL:1;
  };
  struct {
    unsigned :2;
    unsigned EDG1SEL0:1;
    unsigned EDG1SEL1:1;
    unsigned :1;
    unsigned EDG2SEL0:1;
    unsigned EDG2SEL1:1;
  };
} CTMUCONLbits;
extern volatile far  unsigned char       CTMUCONH;
extern volatile far  struct {
  unsigned CTTRIG:1;
  unsigned IDISSEN:1;
  unsigned EDGSEQEN:1;
  unsigned EDGEN:1;
  unsigned TGEN:1;
  unsigned CTMUSIDL:1;
  unsigned :1;
  unsigned CTMUEN:1;
} CTMUCONHbits;
extern volatile far  unsigned char       PADCFG1;
extern volatile far  struct {
  unsigned CTMUDS:1;
  unsigned :3;
  unsigned RGPU:1;
  unsigned RFPU:1;
  unsigned REPU:1;
  unsigned RDPU:1;
} PADCFG1bits;
extern volatile far  unsigned char       PMD3;
extern volatile far  struct {
  unsigned CMP1MD:1;
  unsigned CMP2MD:1;
  unsigned ECANMD:1;
  unsigned MODMD:1;
} PMD3bits;
extern volatile far  unsigned char       PMD2;
extern volatile far  struct {
  unsigned TMR0MD:1;
  unsigned TMR1MD:1;
  unsigned TMR2MD:1;
  unsigned TMR3MD:1;
  unsigned TMR4MD:1;
  unsigned ADCMD:1;
  unsigned CTMUMD:1;
  unsigned PSPMD:1;
} PMD2bits;
extern volatile far  unsigned char       PMD1;
extern volatile far  struct {
  unsigned SPI1MD:1;
  unsigned UART1MD:1;
  unsigned UART2MD:1;
  unsigned CCP1MD:1;
  unsigned CCP2MD:1;
  unsigned CCP3MD:1;
  unsigned CCP4MD:1;
  unsigned CCP5MD:1;
} PMD1bits;
extern volatile far  unsigned char       IOCB;
extern volatile far  struct {
  unsigned IOCB0:1;
  unsigned IOCB1:1;
  unsigned IOCB2:1;
  unsigned IOCB3:1;
  unsigned IOCB4:1;
  unsigned IOCB5:1;
  unsigned IOCB6:1;
  unsigned IOCB7:1;
} IOCBbits;
extern volatile far  unsigned char       WPUB;
extern volatile far  struct {
  unsigned WPUB0:1;
  unsigned WPUB1:1;
  unsigned WPUB2:1;
  unsigned WPUB3:1;
  unsigned WPUB4:1;
  unsigned WPUB5:1;
  unsigned WPUB6:1;
  unsigned WPUB7:1;
} WPUBbits;
extern volatile far  unsigned char       ANCON1;
extern volatile far  struct {
  unsigned ANSEL8:1;
  unsigned ANSEL9:1;
  unsigned ANSEL10:1;
  unsigned ANSEL11:1;
  unsigned ANSEL12:1;
  unsigned ANSEL13:1;
  unsigned ANSEL14:1;
} ANCON1bits;
extern volatile far  unsigned char       ANCON0;
extern volatile far  struct {
  unsigned ANSEL0:1;
  unsigned ANSEL1:1;
  unsigned ANSEL2:1;
  unsigned ANSEL3:1;
  unsigned ANSEL4:1;
  unsigned ANSEL5:1;
  unsigned ANSEL6:1;
  unsigned ANSEL7:1;
} ANCON0bits;
extern volatile far  unsigned char       CM2CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM2CONbits;
extern volatile far  unsigned char       CM2CON1;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM2CON1bits;
extern volatile far  unsigned char       CM1CON;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM1CONbits;
extern volatile far  unsigned char       CM1CON1;
extern volatile far  union {
  struct {
    unsigned CCH:2;
    unsigned CREF:1;
    unsigned EVPOL:2;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned CON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :1;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
} CM1CON1bits;
extern volatile near unsigned char       RXB0CON;
extern volatile near struct {
  unsigned F0:1;
  unsigned JTOFF_F1:1;
  unsigned RB0DBEN_F2:1;
  unsigned RXRTRRO_F3:1;
  unsigned F4:1;
  unsigned RXM0_RTRRO:1;
  unsigned RXM1:1;
  unsigned RXFUL:1;
} RXB0CONbits;
extern volatile near unsigned char       RXB0SIDH;
extern volatile near unsigned char       RXB0SIDL;
extern volatile near struct {
  unsigned EID:2;
  unsigned :1;
  unsigned EXID:1;
  unsigned SRR:1;
  unsigned SID:3;
} RXB0SIDLbits;
extern volatile near unsigned char       RXB0EIDH;
extern volatile near unsigned char       RXB0EIDL;
extern volatile near unsigned char       RXB0DLC;
extern volatile near struct {
  unsigned DLC:4;
  unsigned RB:2;
  unsigned RXRTR:1;
} RXB0DLCbits;
extern volatile near unsigned char       RXB0D0;
extern volatile near unsigned char       RXB0D1;
extern volatile near unsigned char       RXB0D2;
extern volatile near unsigned char       RXB0D3;
extern volatile near unsigned char       RXB0D4;
extern volatile near unsigned char       RXB0D5;
extern volatile near unsigned char       RXB0D6;
extern volatile near unsigned char       RXB0D7;
extern volatile near unsigned char       CANSTAT;
extern volatile near struct {
  unsigned EICODE0:1;
  unsigned EICODE1_ICODE0:1;
  unsigned EICODE2_ICODE1:1;
  unsigned EICODE3_ICODE2:1;
  unsigned EICODE4:1;
  unsigned OPMODE:3;
} CANSTATbits;
extern volatile near unsigned char       CANCON;
extern volatile near struct {
  unsigned FP0:1;
  unsigned WIN0_FP1:1;
  unsigned WIN1_FP2:1;
  unsigned WIN2_FP3:1;
  unsigned ABAT:1;
  unsigned REQOP:3;
} CANCONbits;
extern volatile near unsigned char       CIOCON;
extern volatile near struct {
  unsigned :4;
  unsigned CANCAP:1;
  unsigned ENDRHI:1;
  unsigned TX1EN:1;
  unsigned TX1SRC:1;
} CIOCONbits;
extern volatile near unsigned char       COMSTAT;
extern volatile near struct {
  unsigned EWARN:1;
  unsigned RXWARN:1;
  unsigned TXWARN:1;
  unsigned RXBP:1;
  unsigned TXBP:1;
  unsigned TXBO:1;
  unsigned RXB1OVFL:1;
  unsigned RXB0OVFL:1;
} COMSTATbits;
extern volatile near unsigned char       ECANCON;
extern volatile near struct {
  unsigned EWIN:5;
  unsigned FIFOWM:1;
  unsigned MDSEL:2;
} ECANCONbits;
extern volatile near unsigned char       EEDATA;
extern volatile near unsigned char       EEADR;
extern volatile near unsigned char       EEADRH;
extern volatile near unsigned char       PIE5;
extern volatile near struct {
  unsigned RXB0IE:1;
  unsigned RXB1IE:1;
  unsigned TXB0IE:1;
  unsigned TXB1IE:1;
  unsigned TXB2IE:1;
  unsigned ERRIE:1;
  unsigned WAKIE:1;
  unsigned IRXIE:1;
} PIE5bits;
extern volatile near unsigned char       PIR5;
extern volatile near struct {
  unsigned RXB0IF:1;
  unsigned RXB1IF:1;
  unsigned TXB0IF:1;
  unsigned TXB1IF:1;
  unsigned TXB2IF:1;
  unsigned ERRIF:1;
  unsigned WAKIF:1;
  unsigned IRXIF:1;
} PIR5bits;
extern volatile near unsigned char       IPR5;
extern volatile near struct {
  unsigned RXB0IP:1;
  unsigned RXB1IP:1;
  unsigned TXB0IP:1;
  unsigned TXB1IP:1;
  unsigned TXB2IP:1;
  unsigned ERRIP:1;
  unsigned WAKIP:1;
  unsigned IRXIP:1;
} IPR5bits;
extern volatile near unsigned char       TXREG2;
extern volatile near unsigned char       RCREG2;
extern volatile near unsigned char       SPBRG2;
extern volatile near unsigned char       SPBRGH2;
extern volatile near unsigned char       SPBRGH1;
extern volatile near unsigned char       EECON2;
extern volatile near unsigned char       EECON1;
extern volatile near struct {
  unsigned RD:1;
  unsigned WR:1;
  unsigned WREN:1;
  unsigned WRERR:1;
  unsigned FREE:1;
  unsigned :1;
  unsigned CFGS:1;
  unsigned EEPGD:1;
} EECON1bits;
extern volatile near unsigned char       PORTA;
extern volatile near struct {
  unsigned RA0:1;
  unsigned RA1:1;
  unsigned RA2:1;
  unsigned RA3:1;
  unsigned RA4:1;
  unsigned RA5:1;
  unsigned RA6:1;
  unsigned RA7:1;
} PORTAbits;
extern volatile near unsigned char       PORTB;
extern volatile near struct {
  unsigned RB0:1;
  unsigned RB1:1;
  unsigned RB2:1;
  unsigned RB3:1;
  unsigned RB4:1;
  unsigned RB5:1;
  unsigned RB6:1;
  unsigned RB7:1;
} PORTBbits;
extern volatile near unsigned char       PORTC;
extern volatile near struct {
  unsigned RC0:1;
  unsigned RC1:1;
  unsigned RC2:1;
  unsigned RC3:1;
  unsigned RC4:1;
  unsigned RC5:1;
  unsigned RC6:1;
  unsigned RC7:1;
} PORTCbits;
extern volatile near unsigned char       PORTD;
extern volatile near struct {
  unsigned RD0:1;
  unsigned RD1:1;
  unsigned RD2:1;
  unsigned RD3:1;
  unsigned RD4:1;
  unsigned RD5:1;
  unsigned RD6:1;
  unsigned RD7:1;
} PORTDbits;
extern volatile near unsigned char       PORTE;
extern volatile near struct {
  unsigned RE0:1;
  unsigned RE1:1;
  unsigned RE2:1;
  unsigned RE3:1;
  unsigned RE4:1;
  unsigned RE5:1;
  unsigned RE6:1;
  unsigned RE7:1;
} PORTEbits;
extern volatile near unsigned char       PORTF;
extern volatile near struct {
  unsigned RF0:1;
  unsigned RF1:1;
  unsigned RF2:1;
  unsigned RF3:1;
  unsigned RF4:1;
  unsigned RF5:1;
  unsigned RF6:1;
  unsigned RF7:1;
} PORTFbits;
extern volatile near unsigned char       PORTG;
extern volatile near struct {
  unsigned RG0:1;
  unsigned RG1:1;
  unsigned RG2:1;
  unsigned RG3:1;
  unsigned RG4:1;
  unsigned RG5:1;
} PORTGbits;
extern volatile near unsigned char       TMR4;
extern volatile near unsigned char       T4CON;
extern volatile near union {
  struct {
    unsigned T4CKPS:2;
    unsigned TMR4ON:1;
    unsigned T4OUTPS:4;
  };
  struct {
    unsigned T4CKPS0:1;
    unsigned T4CKPS1:1;
    unsigned :1;
    unsigned T4OUTPS0:1;
    unsigned T4OUTPS1:1;
    unsigned T4OUTPS2:1;
    unsigned T4OUTPS3:1;
  };
} T4CONbits;
extern volatile near unsigned char       LATA;
extern volatile near struct {
  unsigned LATA0:1;
  unsigned LATA1:1;
  unsigned LATA2:1;
  unsigned LATA3:1;
  unsigned LATA4:1;
  unsigned LATA5:1;
  unsigned LATA6:1;
  unsigned LATA7:1;
} LATAbits;
extern volatile near unsigned char       LATB;
extern volatile near struct {
  unsigned LATB0:1;
  unsigned LATB1:1;
  unsigned LATB2:1;
  unsigned LATB3:1;
  unsigned LATB4:1;
  unsigned LATB5:1;
  unsigned LATB6:1;
  unsigned LATB7:1;
} LATBbits;
extern volatile near unsigned char       LATC;
extern volatile near struct {
  unsigned LATC0:1;
  unsigned LATC1:1;
  unsigned LATC2:1;
  unsigned LATC3:1;
  unsigned LATC4:1;
  unsigned LATC5:1;
  unsigned LATC6:1;
  unsigned LATC7:1;
} LATCbits;
extern volatile near unsigned char       LATD;
extern volatile near struct {
  unsigned LATD0:1;
  unsigned LATD1:1;
  unsigned LATD2:1;
  unsigned LATD3:1;
  unsigned LATD4:1;
  unsigned LATD5:1;
  unsigned LATD6:1;
  unsigned LATD7:1;
} LATDbits;
extern volatile near unsigned char       LATE;
extern volatile near struct {
  unsigned LATE0:1;
  unsigned LATE1:1;
  unsigned LATE2:1;
  unsigned LATE3:1;
  unsigned LATE4:1;
  unsigned LATE5:1;
  unsigned LATE6:1;
  unsigned LATE7:1;
} LATEbits;
extern volatile near unsigned char       LATF;
extern volatile near struct {
  unsigned LATF0:1;
  unsigned LATF1:1;
  unsigned LATF2:1;
  unsigned LATF3:1;
  unsigned LATF4:1;
  unsigned LATF5:1;
  unsigned LATF6:1;
  unsigned LATF7:1;
} LATFbits;
extern volatile near unsigned char       LATG;
extern volatile near struct {
  unsigned LATG0:1;
  unsigned LATG1:1;
  unsigned LATG2:1;
  unsigned LATG3:1;
  unsigned LATG4:1;
} LATGbits;
extern volatile near unsigned char       SLRCON;
extern volatile near struct {
  unsigned SLRA:1;
  unsigned SLRB:1;
  unsigned SLRC:1;
  unsigned SLRD:1;
  unsigned SLRE:1;
  unsigned SLRF:1;
  unsigned SLRG:1;
} SLRCONbits;
extern volatile near unsigned char       ODCON;
extern volatile near struct {
  unsigned U1OD:1;
  unsigned U2OD:1;
  unsigned CCP1OD:1;
  unsigned CCP2OD:1;
  unsigned CCP3OD:1;
  unsigned CCP4OD:1;
  unsigned CCP5OD:1;
  unsigned SPI1OD:1;
} ODCONbits;
extern volatile near unsigned char       TRISA;
extern volatile near struct {
  unsigned TRISA0:1;
  unsigned TRISA1:1;
  unsigned TRISA2:1;
  unsigned TRISA3:1;
  unsigned TRISA4:1;
  unsigned TRISA5:1;
  unsigned TRISA6:1;
  unsigned TRISA7:1;
} TRISAbits;
extern volatile near unsigned char       TRISB;
extern volatile near struct {
  unsigned TRISB0:1;
  unsigned TRISB1:1;
  unsigned TRISB2:1;
  unsigned TRISB3:1;
  unsigned TRISB4:1;
  unsigned TRISB5:1;
  unsigned TRISB6:1;
  unsigned TRISB7:1;
} TRISBbits;
extern volatile near unsigned char       TRISC;
extern volatile near struct {
  unsigned TRISC0:1;
  unsigned TRISC1:1;
  unsigned TRISC2:1;
  unsigned TRISC3:1;
  unsigned TRISC4:1;
  unsigned TRISC5:1;
  unsigned TRISC6:1;
  unsigned TRISC7:1;
} TRISCbits;
extern volatile near unsigned char       TRISD;
extern volatile near struct {
  unsigned TRISD0:1;
  unsigned TRISD1:1;
  unsigned TRISD2:1;
  unsigned TRISD3:1;
  unsigned TRISD4:1;
  unsigned TRISD5:1;
  unsigned TRISD6:1;
  unsigned TRISD7:1;
} TRISDbits;
extern volatile near unsigned char       TRISE;
extern volatile near struct {
  unsigned TRISE0:1;
  unsigned TRISE1:1;
  unsigned TRISE2:1;
  unsigned TRISE3:1;
  unsigned TRISE4:1;
  unsigned TRISE5:1;
  unsigned TRISE6:1;
  unsigned TRISE7:1;
} TRISEbits;
extern volatile near unsigned char       TRISF;
extern volatile near struct {
  unsigned TRISF0:1;
  unsigned TRISF1:1;
  unsigned TRISF2:1;
  unsigned TRISF3:1;
  unsigned TRISF4:1;
  unsigned TRISF5:1;
  unsigned TRISF6:1;
  unsigned TRISF7:1;
} TRISFbits;
extern volatile near unsigned char       TRISG;
extern volatile near struct {
  unsigned TRISG0:1;
  unsigned TRISG1:1;
  unsigned TRISG2:1;
  unsigned TRISG3:1;
  unsigned TRISG4:1;
} TRISGbits;
extern volatile near unsigned char       CCPTMRS;
extern volatile near struct {
  unsigned C1TSEL:1;
  unsigned C2TSEL:1;
  unsigned C3TSEL:1;
  unsigned C4TSEL:1;
  unsigned C5TSEL:1;
} CCPTMRSbits;
extern volatile near unsigned char       REFOCON;
extern volatile near union {
  struct {
    unsigned RODIV:4;
    unsigned ROSEL:1;
    unsigned ROSSLP:1;
    unsigned :1;
    unsigned ROON:1;
  };
  struct {
    unsigned RODIV0:1;
    unsigned RODIV1:1;
    unsigned RODIV2:1;
    unsigned RODIV3:1;
  };
} REFOCONbits;
extern volatile near unsigned char       OSCTUNE;
extern volatile near union {
  struct {
    unsigned TUN:6;
    unsigned PLLEN:1;
    unsigned INTSRC:1;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
} OSCTUNEbits;
extern volatile near unsigned char       PSTR1CON;
extern volatile near union {
  struct {
    unsigned STRA:1;
    unsigned STRB:1;
    unsigned STRC:1;
    unsigned STRD:1;
    unsigned STRSYNC:1;
    unsigned :1;
    unsigned CMPL:2;
  };
  struct {
    unsigned :6;
    unsigned CMPL0:1;
    unsigned CMPL1:1;
  };
} PSTR1CONbits;
extern volatile near unsigned char       IPR1;
extern volatile near union {
  struct {
    unsigned TMR1IP:1;
    unsigned TMR2IP:1;
    unsigned TMR1GIP:1;
    unsigned SSP1IP:1;
    unsigned TX1IP:1;
    unsigned RC1IP:1;
    unsigned ADIP:1;
    unsigned PSPIP:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIP:1;
    unsigned TXIP:1;
    unsigned RCIP:1;
  };
} IPR1bits;
extern volatile near unsigned char       PIE1;
extern volatile near union {
  struct {
    unsigned TMR1IE:1;
    unsigned TMR2IE:1;
    unsigned TMR1GIE:1;
    unsigned SSP1IE:1;
    unsigned TX1IE:1;
    unsigned RC1IE:1;
    unsigned ADIE:1;
    unsigned PSPIE:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIE:1;
    unsigned TXIE:1;
    unsigned RCIE:1;
  };
} PIE1bits;
extern volatile near unsigned char       PIR1;
extern volatile near union {
  struct {
    unsigned TMR1IF:1;
    unsigned TMR2IF:1;
    unsigned TMR1GIF:1;
    unsigned SSP1IF:1;
    unsigned TX1IF:1;
    unsigned RC1IF:1;
    unsigned ADIF:1;
    unsigned PSPIF:1;
  };
  struct {
    unsigned :3;
    unsigned SSPIF:1;
    unsigned TXIF:1;
    unsigned RCIF:1;
  };
} PIR1bits;
extern volatile near unsigned char       PIE2;
extern volatile near union {
  struct {
    unsigned TMR3GIE:1;
    unsigned TMR3IE:1;
    unsigned HLVDIE:1;
    unsigned BCLIE:1;
    unsigned :3;
    unsigned OSCFIE:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIE:1;
  };
} PIE2bits;
extern volatile near unsigned char       PIR2;
extern volatile near union {
  struct {
    unsigned TMR3GIF:1;
    unsigned TMR3IF:1;
    unsigned HLVDIF:1;
    unsigned BCLIF:1;
    unsigned :3;
    unsigned OSCFIF:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIF:1;
  };
} PIR2bits;
extern volatile near unsigned char       IPR2;
extern volatile near union {
  struct {
    unsigned TMR3GIP:1;
    unsigned TMR3IP:1;
    unsigned HLVDIP:1;
    unsigned BCLIP:1;
    unsigned :3;
    unsigned OSCFIP:1;
  };
  struct {
    unsigned :2;
    unsigned LVDIP:1;
  };
} IPR2bits;
extern volatile near unsigned char       PIE3;
extern volatile near struct {
  unsigned :1;
  unsigned CCP1IE:1;
  unsigned CCP2IE:1;
  unsigned CTMUIE:1;
  unsigned TX2IE:1;
  unsigned RC2IE:1;
} PIE3bits;
extern volatile near unsigned char       PIR3;
extern volatile near struct {
  unsigned :1;
  unsigned CCP1IF:1;
  unsigned CCP2IF:1;
  unsigned CTMUIF:1;
  unsigned TX2IF:1;
  unsigned RC2IF:1;
} PIR3bits;
extern volatile near unsigned char       IPR3;
extern volatile near struct {
  unsigned :1;
  unsigned CCP1IP:1;
  unsigned CCP2IP:1;
  unsigned CTMUIP:1;
  unsigned TX2IP:1;
  unsigned RC2IP:1;
} IPR3bits;
extern volatile near unsigned char       RCSTA2;
extern volatile near struct {
  unsigned RX9D:1;
  unsigned OERR:1;
  unsigned FERR:1;
  unsigned ADDEN:1;
  unsigned CREN:1;
  unsigned SREN:1;
  unsigned RX9:1;
  unsigned SPEN:1;
} RCSTA2bits;
extern volatile near unsigned char       BAUDCON1;
extern volatile near struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned SCKP:1;
  unsigned DTRXP:1;
  unsigned RCMT:1;
  unsigned ABDOVF:1;
} BAUDCON1bits;
extern volatile near unsigned char       HLVDCON;
extern volatile near union {
  struct {
    unsigned HLVDL:4;
    unsigned HLVDEN:1;
    unsigned IRVST:1;
    unsigned BGVST:1;
    unsigned VDIRMAG:1;
  };
  struct {
    unsigned HLVDL0:1;
    unsigned HLVDL1:1;
    unsigned HLVDL2:1;
    unsigned HLVDL3:1;
  };
} HLVDCONbits;
extern volatile near unsigned char       PR4;
extern volatile near unsigned char       T1GCON;
extern volatile near union {
  struct {
    unsigned T1GSS:2;
    unsigned T1GVAL:1;
    unsigned T1GGO_NOT_T1DONE:1;
    unsigned T1GSPM:1;
    unsigned T1GTM:1;
    unsigned T1GPOL:1;
    unsigned TMR1GE:1;
  };
  struct {
    unsigned T1GSS0:1;
    unsigned T1GSS1:1;
    unsigned :1;
    unsigned T1GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T1DONE:1;
  };
} T1GCONbits;
extern volatile near unsigned char       RCSTA;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned RCD8:1;
    unsigned :2;
    unsigned ADEN:1;
    unsigned :2;
    unsigned RC9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_RC8:1;
  };
  struct {
    unsigned :6;
    unsigned RC8_9:1;
  };
} RCSTAbits;
extern volatile near unsigned char       RCSTA1;
extern volatile near union {
  struct {
    unsigned RX9D:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned ADDEN:1;
    unsigned CREN:1;
    unsigned SREN:1;
    unsigned RX9:1;
    unsigned SPEN:1;
  };
  struct {
    unsigned RCD8:1;
    unsigned :2;
    unsigned ADEN:1;
    unsigned :2;
    unsigned RC9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_RC8:1;
  };
  struct {
    unsigned :6;
    unsigned RC8_9:1;
  };
} RCSTA1bits;
extern volatile near unsigned char       TXSTA;
extern volatile near union {
  struct {
    unsigned TX9D:1;
    unsigned TRMT:1;
    unsigned BRGH:1;
    unsigned SENDB:1;
    unsigned SYNC:1;
    unsigned TXEN:1;
    unsigned TX9:1;
    unsigned CSRC:1;
  };
  struct {
    unsigned TXD8:1;
    unsigned :5;
    unsigned TX8_9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_TX8:1;
  };
} TXSTAbits;
extern volatile near unsigned char       TXSTA1;
extern volatile near union {
  struct {
    unsigned TX9D:1;
    unsigned TRMT:1;
    unsigned BRGH:1;
    unsigned SENDB:1;
    unsigned SYNC:1;
    unsigned TXEN:1;
    unsigned TX9:1;
    unsigned CSRC:1;
  };
  struct {
    unsigned TXD8:1;
    unsigned :5;
    unsigned TX8_9:1;
  };
  struct {
    unsigned :6;
    unsigned NOT_TX8:1;
  };
} TXSTA1bits;
extern volatile near unsigned char       TXREG;
extern volatile near unsigned char       TXREG1;
extern volatile near unsigned char       RCREG;
extern volatile near unsigned char       RCREG1;
extern volatile near unsigned char       SPBRG;
extern volatile near unsigned char       SPBRG1;
extern volatile near unsigned char       T3GCON;
extern volatile near union {
  struct {
    unsigned T3GSS:2;
    unsigned T3GVAL:1;
    unsigned T3GGO_NOT_T3DONE:1;
    unsigned T3GSPM:1;
    unsigned T3GTM:1;
    unsigned T3GPOL:1;
    unsigned TMR3GE:1;
  };
  struct {
    unsigned T3GSS0:1;
    unsigned T3GSS1:1;
    unsigned :1;
    unsigned T3GGO:1;
  };
  struct {
    unsigned :3;
    unsigned NOT_T3DONE:1;
  };
} T3GCONbits;
extern volatile near unsigned char       T3CON;
extern volatile near union {
  struct {
    unsigned TMR3ON:1;
    unsigned RD16:1;
    unsigned NOT_T3SYNC:1;
    unsigned SOSCEN:1;
    unsigned T3CKPS:2;
    unsigned TMR3CS:2;
  };
  struct {
    unsigned :4;
    unsigned T3CKPS0:1;
    unsigned T3CKPS1:1;
    unsigned TMR3CS0:1;
    unsigned TMR3CS1:1;
  };
} T3CONbits;
extern volatile near unsigned            TMR3;
extern volatile near unsigned char       TMR3L;
extern volatile near unsigned char       TMR3H;
extern volatile near unsigned char       CMSTAT;
extern volatile near struct {
  unsigned :5;
  unsigned CMP1OUT:1;
  unsigned CMP2OUT:1;
  unsigned CMP3OUT:1;
} CMSTATbits;
extern volatile near unsigned char       CMSTATUS;
extern volatile near struct {
  unsigned :5;
  unsigned CMP1OUT:1;
  unsigned CMP2OUT:1;
  unsigned CMP3OUT:1;
} CMSTATUSbits;
extern volatile near unsigned char       CVRCON;
extern volatile near union {
  struct {
    unsigned CVR:5;
    unsigned CVRSS:1;
    unsigned CVROE:1;
    unsigned CVREN:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
    unsigned CVR4:1;
  };
} CVRCONbits;
extern volatile near unsigned char       PIE4;
extern volatile near struct {
  unsigned CCP3IE:1;
  unsigned CCP4IE:1;
  unsigned CCP5IE:1;
  unsigned :1;
  unsigned CMP1IE:1;
  unsigned CMP2IE:1;
  unsigned EEIE:1;
  unsigned TMR4IE:1;
} PIE4bits;
extern volatile near unsigned char       PIR4;
extern volatile near struct {
  unsigned CCP3IF:1;
  unsigned CCP4IF:1;
  unsigned CCP5IF:1;
  unsigned :1;
  unsigned CMP1IF:1;
  unsigned CMP2IF:1;
  unsigned EEIF:1;
  unsigned TMR4IF:1;
} PIR4bits;
extern volatile near unsigned char       IPR4;
extern volatile near struct {
  unsigned CCP3IP:1;
  unsigned CCP4IP:1;
  unsigned CCP5IP:1;
  unsigned :1;
  unsigned CMP1IP:1;
  unsigned CMP2IP:1;
  unsigned EEIP:1;
  unsigned TMR4IP:1;
} IPR4bits;
extern volatile near unsigned char       BAUDCON2;
extern volatile near struct {
  unsigned ABDEN:1;
  unsigned WUE:1;
  unsigned :1;
  unsigned BRG16:1;
  unsigned SCKP:1;
  unsigned DTRXP:1;
  unsigned RCMT:1;
  unsigned ABDOVF:1;
} BAUDCON2bits;
extern volatile near unsigned char       TXSTA2;
extern volatile near struct {
  unsigned TX9D:1;
  unsigned TRMT:1;
  unsigned BRGH:1;
  unsigned SENDB:1;
  unsigned SYNC:1;
  unsigned TXEN:1;
  unsigned TX9:1;
  unsigned CSRC:1;
} TXSTA2bits;
extern volatile near unsigned char       CCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M:4;
    unsigned DC1B:2;
    unsigned P1M:2;
  };
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} CCP1CONbits;
extern volatile near unsigned char       ECCP1CON;
extern volatile near union {
  struct {
    unsigned CCP1M:4;
    unsigned DC1B:2;
    unsigned P1M:2;
  };
  struct {
    unsigned CCP1M0:1;
    unsigned CCP1M1:1;
    unsigned CCP1M2:1;
    unsigned CCP1M3:1;
    unsigned DC1B0:1;
    unsigned DC1B1:1;
    unsigned P1M0:1;
    unsigned P1M1:1;
  };
  struct {
    unsigned :4;
    unsigned CCP1Y:1;
    unsigned CCP1X:1;
  };
} ECCP1CONbits;
extern volatile near unsigned char       CCPR1;
extern volatile near unsigned char       CCPR1L;
extern volatile near unsigned char       CCPR1H;
extern volatile near unsigned char       ECCP1DEL;
extern volatile near union {
  struct {
    unsigned P1DC:7;
    unsigned P1RSEN:1;
  };
  struct {
    unsigned P1DC0:1;
    unsigned P1DC1:1;
    unsigned P1DC2:1;
    unsigned P1DC3:1;
    unsigned P1DC4:1;
    unsigned P1DC5:1;
    unsigned P1DC6:1;
  };
} ECCP1DELbits;
extern volatile near unsigned char       PWM1CON;
extern volatile near union {
  struct {
    unsigned P1DC:7;
    unsigned P1RSEN:1;
  };
  struct {
    unsigned P1DC0:1;
    unsigned P1DC1:1;
    unsigned P1DC2:1;
    unsigned P1DC3:1;
    unsigned P1DC4:1;
    unsigned P1DC5:1;
    unsigned P1DC6:1;
  };
} PWM1CONbits;
extern volatile near unsigned char       ECCP1AS;
extern volatile near union {
  struct {
    unsigned PSS1BD:2;
    unsigned PSS1AC:2;
    unsigned ECCP1AS:3;
    unsigned ECCP1ASE:1;
  };
  struct {
    unsigned PSS1BD0:1;
    unsigned PSS1BD1:1;
    unsigned PSS1AC0:1;
    unsigned PSS1AC1:1;
    unsigned ECCP1AS0:1;
    unsigned ECCP1AS1:1;
    unsigned ECCP1AS2:1;
  };
} ECCP1ASbits;
extern volatile near unsigned char       ADCON2;
extern volatile near union {
  struct {
    unsigned ADCS:3;
    unsigned ACQT:3;
    unsigned :1;
    unsigned ADFM:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ACQT0:1;
    unsigned ACQT1:1;
    unsigned ACQT2:1;
  };
} ADCON2bits;
extern volatile near unsigned char       ADCON1;
extern volatile near union {
  struct {
    unsigned CHSN:3;
    unsigned VNCFG:1;
    unsigned VCFG:2;
    unsigned TRIGSEL:2;
  };
  struct {
    unsigned CHSN0:1;
    unsigned CHSN1:1;
    unsigned CHSN2:1;
    unsigned :1;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned TRIGSEL0:1;
    unsigned TRIGSEL1:1;
  };
} ADCON1bits;
extern volatile near unsigned char       ADCON0;
extern volatile near union {
  struct {
    unsigned ADON:1;
    unsigned GO_NOT_DONE:1;
    unsigned CHS:5;
  };
  struct {
    unsigned :1;
    unsigned DONE:1;
    unsigned CHS0:1;
    unsigned CHS1:1;
    unsigned CHS2:1;
    unsigned CHS3:1;
    unsigned CHS4:1;
  };
  struct {
    unsigned :1;
    unsigned GO:1;
  };
  struct {
    unsigned :1;
    unsigned NOT_DONE:1;
  };
} ADCON0bits;
extern volatile near unsigned            ADRES;
extern volatile near unsigned char       ADRESL;
extern volatile near unsigned char       ADRESH;
extern volatile near unsigned char       SSPCON2;
extern volatile near union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned ACKSTAT:1;
    unsigned GCEN:1;
  };
  struct {
    unsigned :1;
    unsigned ADMSK1:1;
    unsigned ADMSK2:1;
    unsigned ADMSK3:1;
    unsigned ADMSK4:1;
    unsigned ADMSK5:1;
  };
} SSPCON2bits;
extern volatile near unsigned char       SSPCON1;
extern volatile near union {
  struct {
    unsigned SSPM:4;
    unsigned CKP:1;
    unsigned SSPEN:1;
    unsigned SSPOV:1;
    unsigned WCOL:1;
  };
  struct {
    unsigned SSPM0:1;
    unsigned SSPM1:1;
    unsigned SSPM2:1;
    unsigned SSPM3:1;
  };
} SSPCON1bits;
extern volatile near unsigned char       SSPSTAT;
extern volatile near union {
  struct {
    unsigned BF:1;
    unsigned UA:1;
    unsigned R_NOT_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_NOT_A:1;
    unsigned CKE:1;
    unsigned SMP:1;
  };
  struct {
    unsigned :2;
    unsigned R_W:1;
    unsigned :2;
    unsigned D_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_W:1;
    unsigned :2;
    unsigned NOT_A:1;
  };
  struct {
    unsigned :2;
    unsigned NOT_WRITE:1;
    unsigned :2;
    unsigned NOT_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned READ_WRITE:1;
    unsigned :2;
    unsigned DATA_ADDRESS:1;
  };
  struct {
    unsigned :2;
    unsigned I2C_READ:1;
    unsigned I2C_START:1;
    unsigned I2C_STOP:1;
    unsigned I2C_DAT:1;
  };
} SSPSTATbits;
extern volatile near unsigned char       SSPADD;
extern volatile near union {
  struct {
    unsigned SSPADD:8;
  };
  struct {
    unsigned MSK0:1;
    unsigned MSK1:1;
    unsigned MSK2:1;
    unsigned MSK3:1;
    unsigned MSK4:1;
    unsigned MSK5:1;
    unsigned MSK6:1;
    unsigned MSK7:1;
  };
} SSPADDbits;
extern volatile near unsigned char       SSPBUF;
extern volatile near unsigned char       T2CON;
extern volatile near union {
  struct {
    unsigned T2CKPS:2;
    unsigned TMR2ON:1;
    unsigned T2OUTPS:4;
  };
  struct {
    unsigned T2CKPS0:1;
    unsigned T2CKPS1:1;
    unsigned :1;
    unsigned T2OUTPS0:1;
    unsigned T2OUTPS1:1;
    unsigned T2OUTPS2:1;
    unsigned T2OUTPS3:1;
  };
} T2CONbits;
extern volatile near unsigned char       PR2;
extern volatile near unsigned char       TMR2;
extern volatile near unsigned char       T1CON;
extern volatile near union {
  struct {
    unsigned TMR1ON:1;
    unsigned RD16:1;
    unsigned NOT_T1SYNC:1;
    unsigned SOSCEN:1;
    unsigned T1CKPS:2;
    unsigned TMR1CS:2;
  };
  struct {
    unsigned :4;
    unsigned T1CKPS0:1;
    unsigned T1CKPS1:1;
    unsigned TMR1CS0:1;
    unsigned TMR1CS1:1;
  };
} T1CONbits;
extern volatile near unsigned            TMR1;
extern volatile near unsigned char       TMR1L;
extern volatile near unsigned char       TMR1H;
extern volatile near unsigned char       RCON;
extern volatile near union {
  struct {
    unsigned NOT_BOR:1;
    unsigned NOT_POR:1;
    unsigned NOT_PD:1;
    unsigned NOT_TO:1;
    unsigned NOT_RI:1;
    unsigned NOT_CM:1;
    unsigned SBOREN:1;
    unsigned IPEN:1;
  };
  struct {
    unsigned BOR:1;
    unsigned POR:1;
    unsigned PD:1;
    unsigned TO:1;
    unsigned RI:1;
    unsigned CM:1;
  };
} RCONbits;
extern volatile near unsigned char       WDTCON;
extern volatile near union {
  struct {
    unsigned SWDTEN:1;
    unsigned ULPSINK:1;
    unsigned ULPEN:1;
    unsigned :1;
    unsigned SRETEN:1;
    unsigned ULPLVL:1;
    unsigned :1;
    unsigned REGSLP:1;
  };
  struct {
    unsigned SWDTE:1;
  };
} WDTCONbits;
extern volatile near unsigned char       OSCCON2;
extern volatile near union {
  struct {
    unsigned MFIOSEL:1;
    unsigned MFIOFS:1;
    unsigned :1;
    unsigned SOSCGO:1;
    unsigned SOSDRV:1;
    unsigned :1;
    unsigned SOSCRUN:1;
  };
  struct {
    unsigned LVDL0:1;
    unsigned LVDL1:1;
    unsigned LVDL2:1;
    unsigned LVDL3:1;
  };
} OSCCON2bits;
extern volatile near unsigned char       OSCCON;
extern volatile near struct {
  unsigned SCS:2;
  unsigned IOFS:1;
  unsigned OSTS:1;
  unsigned IRCF:3;
  unsigned IDLEN:1;
} OSCCONbits;
extern volatile near unsigned char       T0CON;
extern volatile near union {
  struct {
    unsigned T0PS:3;
    unsigned PSA:1;
    unsigned T0SE:1;
    unsigned T0CS:1;
    unsigned T08BIT:1;
    unsigned TMR0ON:1;
  };
  struct {
    unsigned T0PS0:1;
    unsigned T0PS1:1;
    unsigned T0PS2:1;
  };
} T0CONbits;
extern volatile near unsigned            TMR0;
extern volatile near unsigned char       TMR0L;
extern volatile near unsigned char       TMR0H;
extern          near unsigned char       STATUS;
extern          near struct {
  unsigned C:1;
  unsigned DC:1;
  unsigned Z:1;
  unsigned OV:1;
  unsigned N:1;
} STATUSbits;
extern          near unsigned            FSR2;
extern          near unsigned char       FSR2L;
extern          near unsigned char       FSR2H;
extern          near struct {
  unsigned FSR2H:4;
} FSR2Hbits;
extern volatile near unsigned char       PLUSW2;
extern volatile near unsigned char       PREINC2;
extern volatile near unsigned char       POSTDEC2;
extern volatile near unsigned char       POSTINC2;
extern          near unsigned char       INDF2;
extern          near unsigned char       BSR;
extern          near struct {
  unsigned BSR:4;
} BSRbits;
extern          near unsigned            FSR1;
extern          near unsigned char       FSR1L;
extern          near unsigned char       FSR1H;
extern          near struct {
  unsigned FSR1H:4;
} FSR1Hbits;
extern volatile near unsigned char       PLUSW1;
extern volatile near unsigned char       PREINC1;
extern volatile near unsigned char       POSTDEC1;
extern volatile near unsigned char       POSTINC1;
extern          near unsigned char       INDF1;
extern          near unsigned char       WREG;
extern          near unsigned            FSR0;
extern          near unsigned char       FSR0L;
extern          near unsigned char       FSR0H;
extern          near struct {
  unsigned FSR0H:4;
} FSR0Hbits;
extern volatile near unsigned char       PLUSW0;
extern volatile near unsigned char       PREINC0;
extern volatile near unsigned char       POSTDEC0;
extern volatile near unsigned char       POSTINC0;
extern          near unsigned char       INDF0;
extern volatile near unsigned char       INTCON3;
extern volatile near union {
  struct {
    unsigned INT1IF:1;
    unsigned INT2IF:1;
    unsigned INT3IF:1;
    unsigned INT1IE:1;
    unsigned INT2IE:1;
    unsigned INT3IE:1;
    unsigned INT1IP:1;
    unsigned INT2IP:1;
  };
  struct {
    unsigned INT1F:1;
    unsigned INT2F:1;
    unsigned INT3F:1;
    unsigned INT1E:1;
    unsigned INT2E:1;
    unsigned INT3E:1;
    unsigned INT1P:1;
    unsigned INT2P:1;
  };
} INTCON3bits;
extern volatile near unsigned char       INTCON2;
extern volatile near union {
  struct {
    unsigned RBIP:1;
    unsigned INT3IP:1;
    unsigned TMR0IP:1;
    unsigned INTEDG3:1;
    unsigned INTEDG2:1;
    unsigned INTEDG1:1;
    unsigned INTEDG0:1;
    unsigned NOT_RBPU:1;
  };
  struct {
    unsigned :1;
    unsigned INT3P:1;
    unsigned T0IP:1;
    unsigned :4;
    unsigned RBPU:1;
  };
} INTCON2bits;
extern volatile near unsigned char       INTCON1;
extern volatile near union {
  struct {
    unsigned RBIF:1;
    unsigned INT0IF:1;
    unsigned TMR0IF:1;
    unsigned RBIE:1;
    unsigned INT0IE:1;
    unsigned TMR0IE:1;
    unsigned PEIE_GIEL:1;
    unsigned GIE_GIEH:1;
  };
  struct {
    unsigned :1;
    unsigned INT0F:1;
    unsigned T0IF:1;
    unsigned :1;
    unsigned INT0E:1;
    unsigned T0IE:1;
    unsigned PEIE:1;
    unsigned GIE:1;
  };
  struct {
    unsigned :6;
    unsigned GIEL:1;
    unsigned GIEH:1;
  };
} INTCON1bits;
extern          near unsigned            PROD;
extern          near unsigned char       PRODL;
extern          near unsigned char       PRODH;
extern volatile near unsigned char       TABLAT;
extern volatile near unsigned short long TBLPTR;
extern volatile near unsigned char       TBLPTRL;
extern volatile near unsigned char       TBLPTRH;
extern volatile near unsigned char       TBLPTRU;
extern volatile near struct {
  unsigned TBLPTRU:5;
} TBLPTRUbits;
extern volatile near unsigned short long PC;
extern volatile near unsigned char       PCL;
extern volatile near unsigned char       PCLATH;
extern volatile near unsigned char       PCLATU;
extern volatile near struct {
  unsigned PCU:5;
} PCLATUbits;
extern volatile near unsigned char       STKPTR;
extern volatile near union {
  struct {
    unsigned STKPTR:5;
    unsigned :1;
    unsigned STKUNF:1;
    unsigned STKFUL:1;
  };
  struct {
    unsigned SP0:1;
    unsigned SP1:1;
    unsigned SP2:1;
    unsigned SP3:1;
    unsigned SP4:1;
    unsigned :2;
    unsigned STKOVF:1;
  };
} STKPTRbits;
extern          near unsigned short long TOS;
extern          near unsigned char       TOSL;
extern          near unsigned char       TOSH;
extern          near unsigned char       TOSU;
extern          near struct {
  unsigned TOSU:5;
} TOSUbits;

#pragma varlocate 14 RXERRCNT
#pragma varlocate 14 TXERRCNT
#pragma varlocate 14 BRGCON1
#pragma varlocate 14 BRGCON1bits
#pragma varlocate 14 BRGCON2
#pragma varlocate 14 BRGCON2bits
#pragma varlocate 14 BRGCON3
#pragma varlocate 14 BRGCON3bits
#pragma varlocate 14 RXFCON0
#pragma varlocate 14 RXFCON0bits
#pragma varlocate 14 RXFCON1
#pragma varlocate 14 RXFCON1bits
#pragma varlocate 14 RXF6SIDH
#pragma varlocate 14 RXF6SIDL
#pragma varlocate 14 RXF6SIDLbits
#pragma varlocate 14 RXF6EIDH
#pragma varlocate 14 RXF6EIDL
#pragma varlocate 14 RXF7SIDH
#pragma varlocate 14 RXF7SIDL
#pragma varlocate 14 RXF7SIDLbits
#pragma varlocate 14 RXF7EIDH
#pragma varlocate 14 RXF7EIDL
#pragma varlocate 14 RXF8SIDH
#pragma varlocate 14 RXF8SIDL
#pragma varlocate 14 RXF8SIDLbits
#pragma varlocate 14 RXF8EIDH
#pragma varlocate 14 RXF8EIDL
#pragma varlocate 14 RXF9SIDH
#pragma varlocate 14 RXF9SIDL
#pragma varlocate 14 RXF9SIDLbits
#pragma varlocate 14 RXF9EIDH
#pragma varlocate 14 RXF9EIDL
#pragma varlocate 14 RXF10SIDH
#pragma varlocate 14 RXF10SIDL
#pragma varlocate 14 RXF10SIDLbits
#pragma varlocate 14 RXF10EIDH
#pragma varlocate 14 RXF10EIDL
#pragma varlocate 14 RXF11SIDH
#pragma varlocate 14 RXF11SIDL
#pragma varlocate 14 RXF11SIDLbits
#pragma varlocate 14 RXF11EIDH
#pragma varlocate 14 RXF11EIDL
#pragma varlocate 14 RXF12SIDH
#pragma varlocate 14 RXF12SIDL
#pragma varlocate 14 RXF12SIDLbits
#pragma varlocate 14 RXF12EIDH
#pragma varlocate 14 RXF12EIDL
#pragma varlocate 14 RXF13SIDH
#pragma varlocate 14 RXF13SIDL
#pragma varlocate 14 RXF13SIDLbits
#pragma varlocate 14 RXF13EIDH
#pragma varlocate 14 RXF13EIDL
#pragma varlocate 14 RXF14SIDH
#pragma varlocate 14 RXF14SIDL
#pragma varlocate 14 RXF14SIDLbits
#pragma varlocate 14 RXF14EIDH
#pragma varlocate 14 RXF14EIDL
#pragma varlocate 14 RXF15SIDH
#pragma varlocate 14 RXF15SIDL
#pragma varlocate 14 RXF15SIDLbits
#pragma varlocate 14 RXF15EIDH
#pragma varlocate 14 RXF15EIDL
#pragma varlocate 14 SDFLC
#pragma varlocate 14 SDFLCbits
#pragma varlocate 14 RXFBCON0
#pragma varlocate 14 RXFBCON0bits
#pragma varlocate 14 RXFBCON1
#pragma varlocate 14 RXFBCON1bits
#pragma varlocate 14 RXFBCON2
#pragma varlocate 14 RXFBCON2bits
#pragma varlocate 14 RXFBCON3
#pragma varlocate 14 RXFBCON3bits
#pragma varlocate 14 RXFBCON4
#pragma varlocate 14 RXFBCON4bits
#pragma varlocate 14 RXFBCON5
#pragma varlocate 14 RXFBCON5bits
#pragma varlocate 14 RXFBCON6
#pragma varlocate 14 RXFBCON6bits
#pragma varlocate 14 RXFBCON7
#pragma varlocate 14 RXFBCON7bits
#pragma varlocate 14 MSEL0
#pragma varlocate 14 MSEL0bits
#pragma varlocate 14 MSEL1
#pragma varlocate 14 MSEL1bits
#pragma varlocate 14 MSEL2
#pragma varlocate 14 MSEL2bits
#pragma varlocate 14 MSEL3
#pragma varlocate 14 MSEL3bits
#pragma varlocate 14 BSEL0
#pragma varlocate 14 BSEL0bits
#pragma varlocate 14 BIE0
#pragma varlocate 14 BIE0bits
#pragma varlocate 14 TXBIE
#pragma varlocate 14 TXBIEbits
#pragma varlocate 14 B0CON
#pragma varlocate 14 B0CONbits
#pragma varlocate 14 B0SIDH
#pragma varlocate 14 B0SIDL
#pragma varlocate 14 B0SIDLbits
#pragma varlocate 14 B0EIDH
#pragma varlocate 14 B0EIDL
#pragma varlocate 14 B0DLC
#pragma varlocate 14 B0DLCbits
#pragma varlocate 14 B0D0
#pragma varlocate 14 B0D1
#pragma varlocate 14 B0D2
#pragma varlocate 14 B0D3
#pragma varlocate 14 B0D4
#pragma varlocate 14 B0D5
#pragma varlocate 14 B0D6
#pragma varlocate 14 B0D7
#pragma varlocate 14 CANSTAT_RO9
#pragma varlocate 14 CANSTAT_RO9bits
#pragma varlocate 14 CANCON_RO9
#pragma varlocate 14 CANCON_RO9bits
#pragma varlocate 14 B1CON
#pragma varlocate 14 B1CONbits
#pragma varlocate 14 B1SIDH
#pragma varlocate 14 B1SIDL
#pragma varlocate 14 B1SIDLbits
#pragma varlocate 14 B1EIDH
#pragma varlocate 14 B1EIDL
#pragma varlocate 14 B1DLC
#pragma varlocate 14 B1DLCbits
#pragma varlocate 14 B1D0
#pragma varlocate 14 B1D1
#pragma varlocate 14 B1D2
#pragma varlocate 14 B1D3
#pragma varlocate 14 B1D4
#pragma varlocate 14 B1D5
#pragma varlocate 14 B1D6
#pragma varlocate 14 B1D7
#pragma varlocate 14 CANSTAT_RO8
#pragma varlocate 14 CANSTAT_RO8bits
#pragma varlocate 14 CANCON_RO8
#pragma varlocate 14 CANCON_RO8bits
#pragma varlocate 14 B2CON
#pragma varlocate 14 B2CONbits
#pragma varlocate 14 B2SIDH
#pragma varlocate 14 B2SIDL
#pragma varlocate 14 B2SIDLbits
#pragma varlocate 14 B2EIDH
#pragma varlocate 14 B2EIDL
#pragma varlocate 14 B2DLC
#pragma varlocate 14 B2DLCbits
#pragma varlocate 14 B2D0
#pragma varlocate 14 B2D1
#pragma varlocate 14 B2D2
#pragma varlocate 14 B2D3
#pragma varlocate 14 B2D4
#pragma varlocate 14 B2D5
#pragma varlocate 14 B2D6
#pragma varlocate 14 B2D7
#pragma varlocate 14 CANSTAT_RO7
#pragma varlocate 14 CANSTAT_RO7bits
#pragma varlocate 14 CANCON_RO7
#pragma varlocate 14 CANCON_RO7bits
#pragma varlocate 14 B3CON
#pragma varlocate 14 B3CONbits
#pragma varlocate 14 B3SIDH
#pragma varlocate 14 B3SIDL
#pragma varlocate 14 B3SIDLbits
#pragma varlocate 14 B3EIDH
#pragma varlocate 14 B3EIDL
#pragma varlocate 14 B3DLC
#pragma varlocate 14 B3DLCbits
#pragma varlocate 14 B3D0
#pragma varlocate 14 B3D1
#pragma varlocate 14 B3D2
#pragma varlocate 14 B3D3
#pragma varlocate 14 B3D4
#pragma varlocate 14 B3D5
#pragma varlocate 14 B3D6
#pragma varlocate 14 B3D7
#pragma varlocate 14 CANSTAT_RO6
#pragma varlocate 14 CANSTAT_RO6bits
#pragma varlocate 14 CANCON_RO6
#pragma varlocate 14 CANCON_RO6bits
#pragma varlocate 14 B4CON
#pragma varlocate 14 B4CONbits
#pragma varlocate 14 B4SIDH
#pragma varlocate 14 B4SIDL
#pragma varlocate 14 B4SIDLbits
#pragma varlocate 14 B4EIDH
#pragma varlocate 14 B4EIDL
#pragma varlocate 14 B4DLC
#pragma varlocate 14 B4DLCbits
#pragma varlocate 14 B4D0
#pragma varlocate 14 B4D1
#pragma varlocate 14 B4D2
#pragma varlocate 14 B4D3
#pragma varlocate 14 B4D4
#pragma varlocate 14 B4D5
#pragma varlocate 14 B4D6
#pragma varlocate 14 B4D7
#pragma varlocate 14 CANSTAT_RO5
#pragma varlocate 14 CANSTAT_RO5bits
#pragma varlocate 14 CANCON_RO5
#pragma varlocate 14 CANCON_RO5bits
#pragma varlocate 14 B5CON
#pragma varlocate 14 B5CONbits
#pragma varlocate 14 B5SIDH
#pragma varlocate 14 B5SIDL
#pragma varlocate 14 B5SIDLbits
#pragma varlocate 14 B5EIDH
#pragma varlocate 14 B5EIDL
#pragma varlocate 14 B5DLC
#pragma varlocate 14 B5DLCbits
#pragma varlocate 14 B5D0
#pragma varlocate 14 B5D1
#pragma varlocate 14 B5D2
#pragma varlocate 14 B5D3
#pragma varlocate 14 B5D4
#pragma varlocate 14 B5D5
#pragma varlocate 14 B5D6
#pragma varlocate 14 B5D7
#pragma varlocate 14 CANSTAT_RO4
#pragma varlocate 14 CANSTAT_RO4bits
#pragma varlocate 14 CANCON_RO4
#pragma varlocate 14 CANCON_RO4bits
#pragma varlocate 14 RXF0SIDH
#pragma varlocate 14 RXF0SIDL
#pragma varlocate 14 RXF0SIDLbits
#pragma varlocate 14 RXF0EIDH
#pragma varlocate 14 RXF0EIDL
#pragma varlocate 14 RXF1SIDH
#pragma varlocate 14 RXF1SIDL
#pragma varlocate 14 RXF1SIDLbits
#pragma varlocate 14 RXF1EIDH
#pragma varlocate 14 RXF1EIDL
#pragma varlocate 14 RXF2SIDH
#pragma varlocate 14 RXF2SIDL
#pragma varlocate 14 RXF2SIDLbits
#pragma varlocate 14 RXF2EIDH
#pragma varlocate 14 RXF2EIDL
#pragma varlocate 14 RXF3SIDH
#pragma varlocate 14 RXF3SIDL
#pragma varlocate 14 RXF3SIDLbits
#pragma varlocate 14 RXF3EIDH
#pragma varlocate 14 RXF3EIDL
#pragma varlocate 14 RXF4SIDH
#pragma varlocate 14 RXF4SIDL
#pragma varlocate 14 RXF4SIDLbits
#pragma varlocate 14 RXF4EIDH
#pragma varlocate 14 RXF4EIDL
#pragma varlocate 14 RXF5SIDH
#pragma varlocate 14 RXF5SIDL
#pragma varlocate 14 RXF5SIDLbits
#pragma varlocate 14 RXF5EIDH
#pragma varlocate 14 RXF5EIDL
#pragma varlocate 14 RXM0SIDH
#pragma varlocate 14 RXM0SIDL
#pragma varlocate 14 RXM0SIDLbits
#pragma varlocate 14 RXM0EIDH
#pragma varlocate 14 RXM0EIDL
#pragma varlocate 14 RXM1SIDH
#pragma varlocate 14 RXM1SIDL
#pragma varlocate 14 RXM1SIDLbits
#pragma varlocate 14 RXM1EIDH
#pragma varlocate 14 RXM1EIDL
#pragma varlocate 15 TXB2CON
#pragma varlocate 15 TXB2CONbits
#pragma varlocate 15 TXB2SIDH
#pragma varlocate 15 TXB2SIDL
#pragma varlocate 15 TXB2SIDLbits
#pragma varlocate 15 TXB2EIDH
#pragma varlocate 15 TXB2EIDL
#pragma varlocate 15 TXB2DLC
#pragma varlocate 15 TXB2DLCbits
#pragma varlocate 15 TXB2D0
#pragma varlocate 15 TXB2D1
#pragma varlocate 15 TXB2D2
#pragma varlocate 15 TXB2D3
#pragma varlocate 15 TXB2D4
#pragma varlocate 15 TXB2D5
#pragma varlocate 15 TXB2D6
#pragma varlocate 15 TXB2D7
#pragma varlocate 15 CANSTAT_RO3
#pragma varlocate 15 CANSTAT_RO3bits
#pragma varlocate 15 CANCON_RO3
#pragma varlocate 15 CANCON_RO3bits
#pragma varlocate 15 TXB1CON
#pragma varlocate 15 TXB1CONbits
#pragma varlocate 15 TXB1SIDH
#pragma varlocate 15 TXB1SIDL
#pragma varlocate 15 TXB1SIDLbits
#pragma varlocate 15 TXB1EIDH
#pragma varlocate 15 TXB1EIDL
#pragma varlocate 15 TXB1DLC
#pragma varlocate 15 TXB1DLCbits
#pragma varlocate 15 TXB1D0
#pragma varlocate 15 TXB1D1
#pragma varlocate 15 TXB1D2
#pragma varlocate 15 TXB1D3
#pragma varlocate 15 TXB1D4
#pragma varlocate 15 TXB1D5
#pragma varlocate 15 TXB1D6
#pragma varlocate 15 TXB1D7
#pragma varlocate 15 CANSTAT_RO2
#pragma varlocate 15 CANSTAT_RO2bits
#pragma varlocate 15 CANCON_RO2
#pragma varlocate 15 CANCON_RO2bits
#pragma varlocate 15 TXB0CON
#pragma varlocate 15 TXB0CONbits
#pragma varlocate 15 TXB0SIDH
#pragma varlocate 15 TXB0SIDL
#pragma varlocate 15 TXB0SIDLbits
#pragma varlocate 15 TXB0EIDH
#pragma varlocate 15 TXB0EIDL
#pragma varlocate 15 TXB0DLC
#pragma varlocate 15 TXB0DLCbits
#pragma varlocate 15 TXB0D0
#pragma varlocate 15 TXB0D1
#pragma varlocate 15 TXB0D2
#pragma varlocate 15 TXB0D3
#pragma varlocate 15 TXB0D4
#pragma varlocate 15 TXB0D5
#pragma varlocate 15 TXB0D6
#pragma varlocate 15 TXB0D7
#pragma varlocate 15 CANSTAT_RO1
#pragma varlocate 15 CANSTAT_RO1bits
#pragma varlocate 15 CANCON_RO1
#pragma varlocate 15 CANCON_RO1bits
#pragma varlocate 15 RXB1CON
#pragma varlocate 15 RXB1CONbits
#pragma varlocate 15 RXB1SIDH
#pragma varlocate 15 RXB1SIDL
#pragma varlocate 15 RXB1SIDLbits
#pragma varlocate 15 RXB1EIDH
#pragma varlocate 15 RXB1EIDL
#pragma varlocate 15 RXB1DLC
#pragma varlocate 15 RXB1DLCbits
#pragma varlocate 15 RXB1D0
#pragma varlocate 15 RXB1D1
#pragma varlocate 15 RXB1D2
#pragma varlocate 15 RXB1D3
#pragma varlocate 15 RXB1D4
#pragma varlocate 15 RXB1D5
#pragma varlocate 15 RXB1D6
#pragma varlocate 15 RXB1D7
#pragma varlocate 15 CANSTAT_RO0
#pragma varlocate 15 CANSTAT_RO0bits
#pragma varlocate 15 CANCON_RO0
#pragma varlocate 15 CANCON_RO0bits
#pragma varlocate 15 MDCARL
#pragma varlocate 15 MDCARLbits
#pragma varlocate 15 MDCARH
#pragma varlocate 15 MDCARHbits
#pragma varlocate 15 MDSRC
#pragma varlocate 15 MDSRCbits
#pragma varlocate 15 MDCON
#pragma varlocate 15 MDCONbits
#pragma varlocate 15 PSPCON
#pragma varlocate 15 PSPCONbits
#pragma varlocate 15 CCP5CON
#pragma varlocate 15 CCP5CONbits
#pragma varlocate 15 CCPR5
#pragma varlocate 15 CCPR5L
#pragma varlocate 15 CCPR5H
#pragma varlocate 15 CCP4CON
#pragma varlocate 15 CCP4CONbits
#pragma varlocate 15 CCPR4
#pragma varlocate 15 CCPR4L
#pragma varlocate 15 CCPR4H
#pragma varlocate 15 CCP3CON
#pragma varlocate 15 CCP3CONbits
#pragma varlocate 15 CCPR3
#pragma varlocate 15 CCPR3L
#pragma varlocate 15 CCPR3H
#pragma varlocate 15 CCP2CON
#pragma varlocate 15 CCP2CONbits
#pragma varlocate 15 ECCP2CON
#pragma varlocate 15 ECCP2CONbits
#pragma varlocate 15 CCPR2
#pragma varlocate 15 CCPR2L
#pragma varlocate 15 CCPR2H
#pragma varlocate 15 CTMUICON
#pragma varlocate 15 CTMUICONbits
#pragma varlocate 15 CTMUCONL
#pragma varlocate 15 CTMUCONLbits
#pragma varlocate 15 CTMUCONH
#pragma varlocate 15 CTMUCONHbits
#pragma varlocate 15 PADCFG1
#pragma varlocate 15 PADCFG1bits
#pragma varlocate 15 PMD3
#pragma varlocate 15 PMD3bits
#pragma varlocate 15 PMD2
#pragma varlocate 15 PMD2bits
#pragma varlocate 15 PMD1
#pragma varlocate 15 PMD1bits
#pragma varlocate 15 IOCB
#pragma varlocate 15 IOCBbits
#pragma varlocate 15 WPUB
#pragma varlocate 15 WPUBbits
#pragma varlocate 15 ANCON1
#pragma varlocate 15 ANCON1bits
#pragma varlocate 15 ANCON0
#pragma varlocate 15 ANCON0bits
#pragma varlocate 15 CM2CON
#pragma varlocate 15 CM2CONbits
#pragma varlocate 15 CM2CON1
#pragma varlocate 15 CM2CON1bits
#pragma varlocate 15 CM1CON
#pragma varlocate 15 CM1CONbits
#pragma varlocate 15 CM1CON1
#pragma varlocate 15 CM1CON1bits

/*-------------------------------------------------------------------------
 * Some useful defines for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define ACCESS 0
#define BANKED 1

/*-------------------------------------------------------------------------
 * Some useful macros for inline assembly stuff
 *-------------------------------------------------------------------------*/
#define Nop()    {_asm nop _endasm}
#define ClrWdt() {_asm clrwdt _endasm}
#define Sleep()  {_asm sleep _endasm}
#define Reset()  {_asm reset _endasm}

#define Rlcf(f,dest,access)  {_asm movlb f rlcf f,dest,access _endasm}
#define Rlncf(f,dest,access) {_asm movlb f rlncf f,dest,access _endasm}
#define Rrcf(f,dest,access)  {_asm movlb f rrcf f,dest,access _endasm}
#define Rrncf(f,dest,access) {_asm movlb f rrncf f,dest,access _endasm}
#define Swapf(f,dest,access) {_asm movlb f swapf f,dest,access _endasm }

/*-------------------------------------------------------------------------
 * A fairly inclusive set of registers to save for interrupts.
 * These are locations which are commonly used by the compiler.
 *-------------------------------------------------------------------------*/
#define INTSAVELOCS TBLPTR, TABLAT, PROD


#endif
