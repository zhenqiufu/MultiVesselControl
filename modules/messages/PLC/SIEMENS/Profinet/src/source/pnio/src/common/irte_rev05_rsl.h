//////////////////////////////////////////////////////////////////////
//// AHB Register Include File
//// Version:           0.5
//// Version RSL-Tools: 0.6.9B
//// Erstellungsdatum:  08.11.2010
////
//////////////////////////////////////////////////////////////////////

#ifndef IRTE_REV05_RSL_H                 /* ----- reinclude-protection ----- */
#define IRTE_REV05_RSL_H
#ifdef __cplusplus                       /* If C++ - compiler: Use C linkage */
extern "C"
{
#endif

/*****************************************************************************/
/*  Copyright (C) 2015 Siemens Aktiengesellschaft. All rights reserved.      */
/*****************************************************************************/
/*  This program is protected by German copyright law and international      */
/*  treaties. The use of this software including but not limited to its      */
/*  Source Code is subject to restrictions as agreed in the license          */
/*  agreement between you and Siemens.                                       */
/*  Copying or distribution is not allowed unless expressly permitted        */
/*  according to your license agreement with Siemens.                        */
/*****************************************************************************/
/*                                                                           */
/*  P r o j e c t         &P: PROFINET IO Runtime Software              :P&  */
/*                                                                           */
/*  P a c k a g e         &W: PROFINET IO Runtime Software              :W&  */
/*                                                                           */
/*  C o m p o n e n t     &C: PNExplorer [DefExtract]                   :C&  */
/*                                                                           */
/*  F i l e               &F: irte_rev05_rsl.h                          :F&  */
/*                                                                           */
/*  V e r s i o n         &V: BC_PNRUN_P05.04.00.00_00.02.00.40         :V&  */
/*                                                                           */
/*  D a t e  (YYYY-MM-DD) &D: 2015-07-28                                :D&  */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*  D e s c r i p t i o n:                                                   */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*  H i s t o r y :                                                          */
/*  ________________________________________________________________________ */
/*                                                                           */
/*  Date        Who   What                                                   */
#ifdef RSL_MESSAGE
/*  xx.xx.xx    xx    initial version.                                       */
/*  translated by: DefExtract, V 2.0!                                        */
#endif
/*****************************************************************************/
         
                                   
/*===========================================================================*/
/*                              constants                                    */
/*===========================================================================*/


/*===========================================================================*/
/*                                 defines                                   */
/*===========================================================================*/


// ------------------------------------------
// Makros for access to peripheral registers
// ------------------------------------------

//////////////////////////////////////////////////////////////////////
//Registers for Module IRTE
//////////////////////////////////////////////////////////////////////




#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0                                                                  0x00000008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_WRONG_SENDTIME                                           0x00010000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_WRONG_SENDTIME                                           16
// ACCESS__ENABLE_WRONG_SENDTIME: r,w
// DESCR__ENABLE_WRONG_SENDTIME: 1: Eintrag im  Trace-Buffer wenn der spezifizierte Zeitpunkt eines    RT-Telegramms ablaufen ist.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_NO_SENDDATA                                              0x00008000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_NO_SENDDATA                                              15
// ACCESS__ENABLE_NO_SENDDATA: r,w
// DESCR__ENABLE_NO_SENDDATA: 1: Zum spezifizierten Zeitpunkt ist kein RT-Telegramm zum     Versenden vorhanden sind.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_NO_SRT_ENTRY                                             0x00004000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_NO_SRT_ENTRY                                             14
// ACCESS__ENABLE_NO_SRT_ENTRY: r,w
// DESCR__ENABLE_NO_SRT_ENTRY: 1: In der NRT-Phase konnte beim Empfang eines SRT-    Telegramms kein Eintrag in der ACW-Liste gefunden werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_BUF_OVERLOAD                                             0x00002000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_BUF_OVERLOAD                                             13
// ACCESS__ENABLE_BUF_OVERLOAD: r,w
// DESCR__ENABLE_BUF_OVERLOAD: 1: Beim Telegrammempfang sind alle Datenpuffer �bergelaufen
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_NO_TABLE_ENTRY                                                  0x00001000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_NO_TABLE_ENTRY                                                  12
// ACCESS__NO_TABLE_ENTRY: r,w
// DESCR__NO_TABLE_ENTRY: 1: Sourceadresse kann nicht in die MAC-Adresstabelle eingetragen    werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_NO_ACW                                                   0x00000800
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_NO_ACW                                                   11
// ACCESS__ENABLE_NO_ACW: r,w
// DESCR__ENABLE_NO_ACW: 1: Empfang eines Zeit-Telegramms im IRT-Zeitbereich und dabei     kein ACW mit der richtigen FrameID und opt. MAC-Adresse     gefunden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_WRONG_LENGTH                                             0x00000400
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_WRONG_LENGTH                                             10
// ACCESS__ENABLE_WRONG_LENGTH: r,w
// DESCR__ENABLE_WRONG_LENGTH: 1: Empfang eines RT-Telegramms mit einer falschen L�nge.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_RCVBUFOVFL                                               0x00000200
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_RCVBUFOVFL                                               9
// ACCESS__ENABLE_RCVBUFOVFL: r,w
// DESCR__ENABLE_RCVBUFOVFL: 1: Puffer-�berlauf beim Empfang eines RT-Telegramms.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_CRC_ERROR                                                0x00000100
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_CRC_ERROR                                                8
// ACCESS__ENABLE_CRC_ERROR: r,w
// DESCR__ENABLE_CRC_ERROR: 1: Empfang eines Telegramms mit CRC-Fehler im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_WRONG_FRAMEID                                            0x00000080
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_WRONG_FRAMEID                                            7
// ACCESS__ENABLE_WRONG_FRAMEID: r,w
// DESCR__ENABLE_WRONG_FRAMEID: 1: Empfang eines RT-Telegramms mit der falschen FrameID    und opt. MAC-Adresse im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_IRT_TEL_ERROR                                            0x00000040
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_IRT_TEL_ERROR                                            6
// ACCESS__ENABLE_IRT_TEL_ERROR: r,w
// DESCR__ENABLE_IRT_TEL_ERROR: 1: Eintrag im  Trace-Buffer, wenn ein RT-Telegramm kleiner    als 20 Byte empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_NO_IRT_TEL                                               0x00000020
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_NO_IRT_TEL                                               5
// ACCESS__ENABLE_NO_IRT_TEL: r,w
// DESCR__ENABLE_NO_IRT_TEL: 1: Eintrag im  Trace-Buffer, wenn bis zum erwarteten Zeitpunkt kein RT-Telegramm empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_REC_NRT                                                  0x00000010
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_REC_NRT                                                  4
// ACCESS__ENABLE_REC_NRT: r,w
// DESCR__ENABLE_REC_NRT: 1: Eintrag im  Trace-Buffer beim Empfang eines NRT-Telegramms     (Type # H8892) im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_OUT_OF_BOUNDS                                            0x00000008
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_OUT_OF_BOUNDS                                            3
// ACCESS__ENABLE_OUT_OF_BOUNDS: r,w
// DESCR__ENABLE_OUT_OF_BOUNDS: 1: Eintrag im  Trace-Buffer beim Empfang eines iSRT-    Frames ausserhalb der iSRT-Zeitphase.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_REC_REPL_FRAME                                           0x00000004
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_REC_REPL_FRAME                                           2
// ACCESS__ENABLE_REC_REPL_FRAME: r,w
// DESCR__ENABLE_REC_REPL_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines    Ersatz-Telegramms im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_REC_TIME_FRAME                                           0x00000002
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_REC_TIME_FRAME                                           1
// ACCESS__ENABLE_REC_TIME_FRAME: r,w
// DESCR__ENABLE_REC_TIME_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines Zeittelegramms      im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0__MSK_ENABLE_REC_IRT_FRAME                                            0x00000001
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_SHFT_ENABLE_REC_IRT_FRAME                                            0
// ACCESS__ENABLE_REC_IRT_FRAME: r,w
// DESCR__ENABLE_REC_IRT_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines RT-Frames im     IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P0_RST__VAL                       0x00000000


#define IRTE_R5_REG_LINE_DELAY_P0                                                                           0x0000000C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LINE_DELAY_P0__MSK_LINE_DELAY0                                                              0xFFFFFFFF
#define IRTE_R5_REG_LINE_DELAY_P0_SHFT_LINE_DELAY0                                                              0
// ACCESS__LINE_DELAY0: r,w
// DESCR__LINE_DELAY0: Leitungsverz�gerung zum Nachbar-Switch (bzw. dem angeschlossenen Port des Nachbar-Switches)
#define IRTE_R5_REG_LINE_DELAY_P0_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_CONTROL_P0                                                                          0x00000010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_MONITOR_ACYCLIC                                                         0x00002000
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_MONITOR_ACYCLIC                                                         13
// ACCESS__MONITOR_ACYCLIC: r,w
// DESCR__MONITOR_ACYCLIC: 0: Der azyklische Verkehr auf diesem Port wird nicht beobachtet1: Der gesamte azyklische Verkehr auf diesem Port wird beobachtet, d.h. alle Telegramme ausser vom Typ 8892 mit Frame-ID 0080-FBFF.
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_SHORT_ENABLE                                                            0x00001000
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_SHORT_ENABLE                                                            12
// ACCESS__SHORT_ENABLE: r,w
// DESCR__SHORT_ENABLE: 0: Telegramme < 64 Byte werden beim Empfang gefiltert.1: keine Pr�fung auf Mindest-Telegramml�nge beim Empfang
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_MONITOR_CYCLIC                                                          0x00000800
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_MONITOR_CYCLIC                                                          11
// ACCESS__MONITOR_CYCLIC: r,w
// DESCR__MONITOR_CYCLIC: 0: Der zyklische Verkehr auf diesem Port wird nicht beobachtet1: Der zyklische Verkehr auf diesem Port wird beobachtet
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_REDUNDANCE_ENABLE                                                       0x00000400
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_REDUNDANCE_ENABLE                                                       10
// ACCESS__REDUNDANCE_ENABLE: r,w
// DESCR__REDUNDANCE_ENABLE: 0: Es wird kein redundanter Verkehr abgewickelt1: Es wird redundanter Verkehr abgewickelt
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_ISRT_ENABLE                                                             0x00000200
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_ISRT_ENABLE                                                             9
// ACCESS__ISRT_ENABLE: r,w
// DESCR__ISRT_ENABLE: 0: Es ist kein Zeitbereich f�r iSRT reserviert1: Es ist ein Zeitbereich f�r iSRT reserviert
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_EN_CHECK_SA                                                             0x00000100
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_EN_CHECK_SA                                                             8
// ACCESS__EN_CHECK_SA: r,w
// DESCR__EN_CHECK_SA: 0: Telegramme, deren Sourceadresse in der Adresstabelle     eingetragen sind, werden weitergeleitet.1: Telegramme, deren Sourceadresse nicht in der Adresstabelle     eingetragen sind werden gefiltert.
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_INGRESS_FILTERING                                                       0x00000080
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_INGRESS_FILTERING                                                       7
// ACCESS__INGRESS_FILTERING: r,w
// DESCR__INGRESS_FILTERING: 0: Im Tag Mode werden alle tagged Telegramme an diesem Port     empfangen. 1: Im Tag Mode wird ein Telegramm nur dann empfangen,     wenn die VLAN-Adresse des Telegramms mit dem VLAN-    Netzwerk am Empfangsport �bereinstimmt.
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_ENABLE_PADDING                                                          0x00000040
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_ENABLE_PADDING                                                          6
// ACCESS__ENABLE_PADDING: r,w
// DESCR__ENABLE_PADDING: 0: Port macht kein  Padding f�r Telegramme < 64 Bytes1: Port macht  Padding f�r Telegramme < 64 Bytes
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_MC_LEARNING_ENABLE                                                      0x00000020
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_MC_LEARNING_ENABLE                                                      5
// ACCESS__MC_LEARNING_ENABLE: r,w
// DESCR__MC_LEARNING_ENABLE: 0: Nur die Sourceadressen von Unicast-Telegrammen werden     zum Lernen der Unicast-Adresstabelle genutzt1: Die Sourceadressen aller Telegramme werden zum Lernen von      Eintr�gen der Unicast-Adresstabelle genutzt.
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_LEARNING_ENABLE                                                         0x00000010
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_LEARNING_ENABLE                                                         4
// ACCESS__LEARNING_ENABLE: r,w
// DESCR__LEARNING_ENABLE: 0: Es werden keine neuen Eintr�ge gelernt1: Dynamische Eintr�ge der Unicast-Adress-Tabelle k�nnen aus    den Sourceadressen von Telegrammen gelernt  werden
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_ENABLE_SRT_PRIORITAET                                                   0x00000008
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_ENABLE_SRT_PRIORITAET                                                   3
// ACCESS__ENABLE_SRT_PRIORITAET: r,w
// DESCR__ENABLE_SRT_PRIORITAET: 0: Telegramme mit einem Typ-Feld 8892H werden nicht besonders behandelt1: Telegramme mit den Typ-Feld 8892H erhalten beim Weiterleiten SRT-Priorit�t. Aufteilung auf zyklisch/azyklisch erfolgt durch die Frame-ID des Telegramms.
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_EN_CUT_THROUGH                                                          0x00000004
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_EN_CUT_THROUGH                                                          2
// ACCESS__EN_CUT_THROUGH: r,w
// DESCR__EN_CUT_THROUGH: 0: Die Telegramme an Port Px m�ssen im K-RAM zwischen-gespeichert werden (store-and-foreward) 1: Die Telegramme an Port Px m�ssen, wenn m�glich, direkt weitergeleitet werden (cut-through)
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_FULL_DUPLEX                                                             0x00000002
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_FULL_DUPLEX                                                             1
// ACCESS__FULL_DUPLEX: r,w
// DESCR__FULL_DUPLEX: 0: Halbduplex1: Vollduplex
#define IRTE_R5_REG_NRT_CONTROL_P0__MSK_BAUDRATE                                                                0x00000001
#define IRTE_R5_REG_NRT_CONTROL_P0_SHFT_BAUDRATE                                                                0
// ACCESS__BAUDRATE: r,w
// DESCR__BAUDRATE: 0: Der Port wird im 100MBit-Modus betrieben1: Der Port wird im 10MBit-Modus betrieben
#define IRTE_R5_REG_NRT_CONTROL_P0_RST__VAL                               0x00000000


#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1                                                                  0x00001008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_WRONG_SENDTIME                                           0x00010000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_WRONG_SENDTIME                                           16
// ACCESS__ENABLE_WRONG_SENDTIME: r,w
// DESCR__ENABLE_WRONG_SENDTIME: 1: Eintrag im  Trace-Buffer wenn der spezifizierte Zeitpunkt eines    RT-Telegramms ablaufen ist.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_NO_SENDDATA                                              0x00008000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_NO_SENDDATA                                              15
// ACCESS__ENABLE_NO_SENDDATA: r,w
// DESCR__ENABLE_NO_SENDDATA: 1: Zum spezifizierten Zeitpunkt ist kein RT-Telegramm zum     Versenden vorhanden sind.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_NO_SRT_ENTRY                                             0x00004000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_NO_SRT_ENTRY                                             14
// ACCESS__ENABLE_NO_SRT_ENTRY: r,w
// DESCR__ENABLE_NO_SRT_ENTRY: 1: In der NRT-Phase konnte beim Empfang eines SRT-    Telegramms kein Eintrag in der ACW-Liste gefunden werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_BUF_OVERLOAD                                             0x00002000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_BUF_OVERLOAD                                             13
// ACCESS__ENABLE_BUF_OVERLOAD: r,w
// DESCR__ENABLE_BUF_OVERLOAD: 1: Beim Telegrammempfang sind alle Datenpuffer �bergelaufen
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_NO_TABLE_ENTRY                                                  0x00001000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_NO_TABLE_ENTRY                                                  12
// ACCESS__NO_TABLE_ENTRY: r,w
// DESCR__NO_TABLE_ENTRY: 1: Sourceadresse kann nicht in die MAC-Adresstabelle eingetragen    werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_NO_ACW                                                   0x00000800
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_NO_ACW                                                   11
// ACCESS__ENABLE_NO_ACW: r,w
// DESCR__ENABLE_NO_ACW: 1: Empfang eines Zeit-Telegramms im IRT-Zeitbereich und dabei     kein ACW mit der richtigen FrameID und opt. MAC-Adresse     gefunden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_WRONG_LENGTH                                             0x00000400
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_WRONG_LENGTH                                             10
// ACCESS__ENABLE_WRONG_LENGTH: r,w
// DESCR__ENABLE_WRONG_LENGTH: 1: Empfang eines RT-Telegramms mit einer falschen L�nge.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_RCVBUFOVFL                                               0x00000200
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_RCVBUFOVFL                                               9
// ACCESS__ENABLE_RCVBUFOVFL: r,w
// DESCR__ENABLE_RCVBUFOVFL: 1: Puffer-�berlauf beim Empfang eines RT-Telegramms.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_CRC_ERROR                                                0x00000100
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_CRC_ERROR                                                8
// ACCESS__ENABLE_CRC_ERROR: r,w
// DESCR__ENABLE_CRC_ERROR: 1: Empfang eines Telegramms mit CRC-Fehler im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_WRONG_FRAMEID                                            0x00000080
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_WRONG_FRAMEID                                            7
// ACCESS__ENABLE_WRONG_FRAMEID: r,w
// DESCR__ENABLE_WRONG_FRAMEID: 1: Empfang eines RT-Telegramms mit der falschen FrameID    und opt. MAC-Adresse im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_IRT_TEL_ERROR                                            0x00000040
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_IRT_TEL_ERROR                                            6
// ACCESS__ENABLE_IRT_TEL_ERROR: r,w
// DESCR__ENABLE_IRT_TEL_ERROR: 1: Eintrag im  Trace-Buffer, wenn ein RT-Telegramm kleiner    als 20 Byte empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_NO_IRT_TEL                                               0x00000020
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_NO_IRT_TEL                                               5
// ACCESS__ENABLE_NO_IRT_TEL: r,w
// DESCR__ENABLE_NO_IRT_TEL: 1: Eintrag im  Trace-Buffer, wenn bis zum erwarteten Zeitpunkt kein RT-Telegramm empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_REC_NRT                                                  0x00000010
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_REC_NRT                                                  4
// ACCESS__ENABLE_REC_NRT: r,w
// DESCR__ENABLE_REC_NRT: 1: Eintrag im  Trace-Buffer beim Empfang eines NRT-Telegramms     (Type # H8892) im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_OUT_OF_BOUNDS                                            0x00000008
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_OUT_OF_BOUNDS                                            3
// ACCESS__ENABLE_OUT_OF_BOUNDS: r,w
// DESCR__ENABLE_OUT_OF_BOUNDS: 1: Eintrag im  Trace-Buffer beim Empfang eines iSRT-    Frames ausserhalb der iSRT-Zeitphase.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_REC_REPL_FRAME                                           0x00000004
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_REC_REPL_FRAME                                           2
// ACCESS__ENABLE_REC_REPL_FRAME: r,w
// DESCR__ENABLE_REC_REPL_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines    Ersatz-Telegramms im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_REC_TIME_FRAME                                           0x00000002
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_REC_TIME_FRAME                                           1
// ACCESS__ENABLE_REC_TIME_FRAME: r,w
// DESCR__ENABLE_REC_TIME_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines Zeittelegramms      im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1__MSK_ENABLE_REC_IRT_FRAME                                            0x00000001
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_SHFT_ENABLE_REC_IRT_FRAME                                            0
// ACCESS__ENABLE_REC_IRT_FRAME: r,w
// DESCR__ENABLE_REC_IRT_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines RT-Frames im     IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P1_RST__VAL                       0x00000000


#define IRTE_R5_REG_LINE_DELAY_P1                                                                           0x0000100C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LINE_DELAY_P1__MSK_LINE_DELAY1                                                              0xFFFFFFFF
#define IRTE_R5_REG_LINE_DELAY_P1_SHFT_LINE_DELAY1                                                              0
// ACCESS__LINE_DELAY1: r,w
// DESCR__LINE_DELAY1: Leitungsverz�gerung zum Nachbar-Switch (bzw. dem angeschlossenen Port des Nachbar-Switches)
#define IRTE_R5_REG_LINE_DELAY_P1_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_CONTROL_P1                                                                          0x00001010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_MONITOR_ACYCLIC                                                         0x00002000
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_MONITOR_ACYCLIC                                                         13
// ACCESS__MONITOR_ACYCLIC: r,w
// DESCR__MONITOR_ACYCLIC: 0: Der azyklische Verkehr auf diesem Port wird nicht beobachtet1: Der gesamte azyklische Verkehr auf diesem Port wird beobachtet, d.h. alle Telegramme ausser vom Typ 8892 mit Frame-ID 0080-FBFF.
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_SHORT_ENABLE                                                            0x00001000
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_SHORT_ENABLE                                                            12
// ACCESS__SHORT_ENABLE: r,w
// DESCR__SHORT_ENABLE: 0: Telegramme < 64 Byte werden beim Empfang gefiltert.1: keine Pr�fung auf Mindest-Telegramml�nge beim Empfang
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_MONITOR_CYCLIC                                                          0x00000800
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_MONITOR_CYCLIC                                                          11
// ACCESS__MONITOR_CYCLIC: r,w
// DESCR__MONITOR_CYCLIC: 0: Der zyklische Verkehr auf diesem Port wird nicht beobachtet1: Der zyklische Verkehr auf diesem Port wird beobachtet
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_REDUNDANCE_ENABLE                                                       0x00000400
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_REDUNDANCE_ENABLE                                                       10
// ACCESS__REDUNDANCE_ENABLE: r,w
// DESCR__REDUNDANCE_ENABLE: 0: Es wird kein redundanter Verkehr abgewickelt1: Es wird redundanter Verkehr abgewickelt
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_ISRT_ENABLE                                                             0x00000200
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_ISRT_ENABLE                                                             9
// ACCESS__ISRT_ENABLE: r,w
// DESCR__ISRT_ENABLE: 0: Es ist kein Zeitbereich f�r iSRT reserviert1: Es ist ein Zeitbereich f�r iSRT reserviert
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_EN_CHECK_SA                                                             0x00000100
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_EN_CHECK_SA                                                             8
// ACCESS__EN_CHECK_SA: r,w
// DESCR__EN_CHECK_SA: 0: Telegramme, deren Sourceadresse in der Adresstabelle     eingetragen sind, werden weitergeleitet.1: Telegramme, deren Sourceadresse nicht in der Adresstabelle     eingetragen sind werden gefiltert.
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_INGRESS_FILTERING                                                       0x00000080
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_INGRESS_FILTERING                                                       7
// ACCESS__INGRESS_FILTERING: r,w
// DESCR__INGRESS_FILTERING: 0: Im Tag Mode werden alle tagged Telegramme an diesem Port     empfangen. 1: Im Tag Mode wird ein Telegramm nur dann empfangen,     wenn die VLAN-Adresse des Telegramms mit dem VLAN-    Netzwerk am Empfangsport �bereinstimmt.
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_ENABLE_PADDING                                                          0x00000040
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_ENABLE_PADDING                                                          6
// ACCESS__ENABLE_PADDING: r,w
// DESCR__ENABLE_PADDING: 0: Port macht kein  Padding f�r Telegramme < 64 Bytes1: Port macht  Padding f�r Telegramme < 64 Bytes
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_MC_LEARNING_ENABLE                                                      0x00000020
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_MC_LEARNING_ENABLE                                                      5
// ACCESS__MC_LEARNING_ENABLE: r,w
// DESCR__MC_LEARNING_ENABLE: 0: Nur die Sourceadressen von Unicast-Telegrammen werden     zum Lernen der Unicast-Adresstabelle genutzt1: Die Sourceadressen aller Telegramme werden zum Lernen von      Eintr�gen der Unicast-Adresstabelle genutzt.
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_LEARNING_ENABLE                                                         0x00000010
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_LEARNING_ENABLE                                                         4
// ACCESS__LEARNING_ENABLE: r,w
// DESCR__LEARNING_ENABLE: 0: Es werden keine neuen Eintr�ge gelernt1: Dynamische Eintr�ge der Unicast-Adress-Tabelle k�nnen aus    den Sourceadressen von Telegrammen gelernt  werden
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_ENABLE_SRT_PRIORITAET                                                   0x00000008
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_ENABLE_SRT_PRIORITAET                                                   3
// ACCESS__ENABLE_SRT_PRIORITAET: r,w
// DESCR__ENABLE_SRT_PRIORITAET: 0: Telegramme mit einem Typ-Feld 8892H werden nicht besonders behandelt1: Telegramme mit den Typ-Feld 8892H erhalten beim Weiterleiten SRT-Priorit�t. Aufteilung auf zyklisch/azyklisch erfolgt durch die Frame-ID des Telegramms.
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_EN_CUT_THROUGH                                                          0x00000004
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_EN_CUT_THROUGH                                                          2
// ACCESS__EN_CUT_THROUGH: r,w
// DESCR__EN_CUT_THROUGH: 0: Die Telegramme an Port Px m�ssen im K-RAM zwischen-gespeichert werden (store-and-foreward) 1: Die Telegramme an Port Px m�ssen, wenn m�glich, direkt weitergeleitet werden (cut-through)
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_FULL_DUPLEX                                                             0x00000002
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_FULL_DUPLEX                                                             1
// ACCESS__FULL_DUPLEX: r,w
// DESCR__FULL_DUPLEX: 0: Halbduplex1: Vollduplex
#define IRTE_R5_REG_NRT_CONTROL_P1__MSK_BAUDRATE                                                                0x00000001
#define IRTE_R5_REG_NRT_CONTROL_P1_SHFT_BAUDRATE                                                                0
// ACCESS__BAUDRATE: r,w
// DESCR__BAUDRATE: 0: Der Port wird im 100MBit-Modus betrieben1: Der Port wird im 10MBit-Modus betrieben
#define IRTE_R5_REG_NRT_CONTROL_P1_RST__VAL                               0x00000000


#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2                                                                  0x00002008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_WRONG_SENDTIME                                           0x00010000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_WRONG_SENDTIME                                           16
// ACCESS__ENABLE_WRONG_SENDTIME: r,w
// DESCR__ENABLE_WRONG_SENDTIME: 1: Eintrag im  Trace-Buffer wenn der spezifizierte Zeitpunkt eines    RT-Telegramms ablaufen ist.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_NO_SENDDATA                                              0x00008000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_NO_SENDDATA                                              15
// ACCESS__ENABLE_NO_SENDDATA: r,w
// DESCR__ENABLE_NO_SENDDATA: 1: Zum spezifizierten Zeitpunkt ist kein RT-Telegramm zum     Versenden vorhanden sind.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_NO_SRT_ENTRY                                             0x00004000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_NO_SRT_ENTRY                                             14
// ACCESS__ENABLE_NO_SRT_ENTRY: r,w
// DESCR__ENABLE_NO_SRT_ENTRY: 1: In der NRT-Phase konnte beim Empfang eines SRT-    Telegramms kein Eintrag in der ACW-Liste gefunden werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_BUF_OVERLOAD                                             0x00002000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_BUF_OVERLOAD                                             13
// ACCESS__ENABLE_BUF_OVERLOAD: r,w
// DESCR__ENABLE_BUF_OVERLOAD: 1: Beim Telegrammempfang sind alle Datenpuffer �bergelaufen
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_NO_TABLE_ENTRY                                                  0x00001000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_NO_TABLE_ENTRY                                                  12
// ACCESS__NO_TABLE_ENTRY: r,w
// DESCR__NO_TABLE_ENTRY: 1: Sourceadresse kann nicht in die MAC-Adresstabelle eingetragen    werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_NO_ACW                                                   0x00000800
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_NO_ACW                                                   11
// ACCESS__ENABLE_NO_ACW: r,w
// DESCR__ENABLE_NO_ACW: 1: Empfang eines Zeit-Telegramms im IRT-Zeitbereich und dabei     kein ACW mit der richtigen FrameID und opt. MAC-Adresse     gefunden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_WRONG_LENGTH                                             0x00000400
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_WRONG_LENGTH                                             10
// ACCESS__ENABLE_WRONG_LENGTH: r,w
// DESCR__ENABLE_WRONG_LENGTH: 1: Empfang eines RT-Telegramms mit einer falschen L�nge.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_RCVBUFOVFL                                               0x00000200
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_RCVBUFOVFL                                               9
// ACCESS__ENABLE_RCVBUFOVFL: r,w
// DESCR__ENABLE_RCVBUFOVFL: 1: Puffer-�berlauf beim Empfang eines RT-Telegramms.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_CRC_ERROR                                                0x00000100
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_CRC_ERROR                                                8
// ACCESS__ENABLE_CRC_ERROR: r,w
// DESCR__ENABLE_CRC_ERROR: 1: Empfang eines Telegramms mit CRC-Fehler im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_WRONG_FRAMEID                                            0x00000080
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_WRONG_FRAMEID                                            7
// ACCESS__ENABLE_WRONG_FRAMEID: r,w
// DESCR__ENABLE_WRONG_FRAMEID: 1: Empfang eines RT-Telegramms mit der falschen FrameID    und opt. MAC-Adresse im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_IRT_TEL_ERROR                                            0x00000040
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_IRT_TEL_ERROR                                            6
// ACCESS__ENABLE_IRT_TEL_ERROR: r,w
// DESCR__ENABLE_IRT_TEL_ERROR: 1: Eintrag im  Trace-Buffer, wenn ein RT-Telegramm kleiner    als 20 Byte empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_NO_IRT_TEL                                               0x00000020
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_NO_IRT_TEL                                               5
// ACCESS__ENABLE_NO_IRT_TEL: r,w
// DESCR__ENABLE_NO_IRT_TEL: 1: Eintrag im  Trace-Buffer, wenn bis zum erwarteten Zeitpunkt kein RT-Telegramm empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_REC_NRT                                                  0x00000010
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_REC_NRT                                                  4
// ACCESS__ENABLE_REC_NRT: r,w
// DESCR__ENABLE_REC_NRT: 1: Eintrag im  Trace-Buffer beim Empfang eines NRT-Telegramms     (Type # H8892) im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_OUT_OF_BOUNDS                                            0x00000008
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_OUT_OF_BOUNDS                                            3
// ACCESS__ENABLE_OUT_OF_BOUNDS: r,w
// DESCR__ENABLE_OUT_OF_BOUNDS: 1: Eintrag im  Trace-Buffer beim Empfang eines iSRT-    Frames ausserhalb der iSRT-Zeitphase.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_REC_REPL_FRAME                                           0x00000004
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_REC_REPL_FRAME                                           2
// ACCESS__ENABLE_REC_REPL_FRAME: r,w
// DESCR__ENABLE_REC_REPL_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines    Ersatz-Telegramms im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_REC_TIME_FRAME                                           0x00000002
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_REC_TIME_FRAME                                           1
// ACCESS__ENABLE_REC_TIME_FRAME: r,w
// DESCR__ENABLE_REC_TIME_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines Zeittelegramms      im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2__MSK_ENABLE_REC_IRT_FRAME                                            0x00000001
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_SHFT_ENABLE_REC_IRT_FRAME                                            0
// ACCESS__ENABLE_REC_IRT_FRAME: r,w
// DESCR__ENABLE_REC_IRT_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines RT-Frames im     IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P2_RST__VAL                       0x00000000


#define IRTE_R5_REG_LINE_DELAY_P2                                                                           0x0000200C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LINE_DELAY_P2__MSK_LINE_DELAY2                                                              0xFFFFFFFF
#define IRTE_R5_REG_LINE_DELAY_P2_SHFT_LINE_DELAY2                                                              0
// ACCESS__LINE_DELAY2: r,w
// DESCR__LINE_DELAY2: Leitungsverz�gerung zum Nachbar-Switch (bzw. dem angeschlossenen Port des Nachbar-Switches)
#define IRTE_R5_REG_LINE_DELAY_P2_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_CONTROL_P2                                                                          0x00002010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_MONITOR_ACYCLIC                                                         0x00002000
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_MONITOR_ACYCLIC                                                         13
// ACCESS__MONITOR_ACYCLIC: r,w
// DESCR__MONITOR_ACYCLIC: 0: Der azyklische Verkehr auf diesem Port wird nicht beobachtet1: Der gesamte azyklische Verkehr auf diesem Port wird beobachtet, d.h. alle Telegramme ausser vom Typ 8892 mit Frame-ID 0080-FBFF.
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_SHORT_ENABLE                                                            0x00001000
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_SHORT_ENABLE                                                            12
// ACCESS__SHORT_ENABLE: r,w
// DESCR__SHORT_ENABLE: 0: Telegramme < 64 Byte werden beim Empfang gefiltert.1: keine Pr�fung auf Mindest-Telegramml�nge beim Empfang
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_MONITOR_CYCLIC                                                          0x00000800
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_MONITOR_CYCLIC                                                          11
// ACCESS__MONITOR_CYCLIC: r,w
// DESCR__MONITOR_CYCLIC: 0: Der zyklische Verkehr auf diesem Port wird nicht beobachtet1: Der zyklische Verkehr auf diesem Port wird beobachtet
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_REDUNDANCE_ENABLE                                                       0x00000400
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_REDUNDANCE_ENABLE                                                       10
// ACCESS__REDUNDANCE_ENABLE: r,w
// DESCR__REDUNDANCE_ENABLE: 0: Es wird kein redundanter Verkehr abgewickelt1: Es wird redundanter Verkehr abgewickelt
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_ISRT_ENABLE                                                             0x00000200
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_ISRT_ENABLE                                                             9
// ACCESS__ISRT_ENABLE: r,w
// DESCR__ISRT_ENABLE: 0: Es ist kein Zeitbereich f�r iSRT reserviert1: Es ist ein Zeitbereich f�r iSRT reserviert
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_EN_CHECK_SA                                                             0x00000100
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_EN_CHECK_SA                                                             8
// ACCESS__EN_CHECK_SA: r,w
// DESCR__EN_CHECK_SA: 0: Telegramme, deren Sourceadresse in der Adresstabelle     eingetragen sind, werden weitergeleitet.1: Telegramme, deren Sourceadresse nicht in der Adresstabelle     eingetragen sind werden gefiltert.
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_INGRESS_FILTERING                                                       0x00000080
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_INGRESS_FILTERING                                                       7
// ACCESS__INGRESS_FILTERING: r,w
// DESCR__INGRESS_FILTERING: 0: Im Tag Mode werden alle tagged Telegramme an diesem Port     empfangen. 1: Im Tag Mode wird ein Telegramm nur dann empfangen,     wenn die VLAN-Adresse des Telegramms mit dem VLAN-    Netzwerk am Empfangsport �bereinstimmt.
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_ENABLE_PADDING                                                          0x00000040
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_ENABLE_PADDING                                                          6
// ACCESS__ENABLE_PADDING: r,w
// DESCR__ENABLE_PADDING: 0: Port macht kein  Padding f�r Telegramme < 64 Bytes1: Port macht  Padding f�r Telegramme < 64 Bytes
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_MC_LEARNING_ENABLE                                                      0x00000020
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_MC_LEARNING_ENABLE                                                      5
// ACCESS__MC_LEARNING_ENABLE: r,w
// DESCR__MC_LEARNING_ENABLE: 0: Nur die Sourceadressen von Unicast-Telegrammen werden     zum Lernen der Unicast-Adresstabelle genutzt1: Die Sourceadressen aller Telegramme werden zum Lernen von      Eintr�gen der Unicast-Adresstabelle genutzt.
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_LEARNING_ENABLE                                                         0x00000010
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_LEARNING_ENABLE                                                         4
// ACCESS__LEARNING_ENABLE: r,w
// DESCR__LEARNING_ENABLE: 0: Es werden keine neuen Eintr�ge gelernt1: Dynamische Eintr�ge der Unicast-Adress-Tabelle k�nnen aus    den Sourceadressen von Telegrammen gelernt  werden
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_ENABLE_SRT_PRIORITAET                                                   0x00000008
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_ENABLE_SRT_PRIORITAET                                                   3
// ACCESS__ENABLE_SRT_PRIORITAET: r,w
// DESCR__ENABLE_SRT_PRIORITAET: 0: Telegramme mit einem Typ-Feld 8892H werden nicht besonders behandelt1: Telegramme mit den Typ-Feld 8892H erhalten beim Weiterleiten SRT-Priorit�t. Aufteilung auf zyklisch/azyklisch erfolgt durch die Frame-ID des Telegramms.
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_EN_CUT_THROUGH                                                          0x00000004
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_EN_CUT_THROUGH                                                          2
// ACCESS__EN_CUT_THROUGH: r,w
// DESCR__EN_CUT_THROUGH: 0: Die Telegramme an Port Px m�ssen im K-RAM zwischen-gespeichert werden (store-and-foreward) 1: Die Telegramme an Port Px m�ssen, wenn m�glich, direkt weitergeleitet werden (cut-through)
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_FULL_DUPLEX                                                             0x00000002
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_FULL_DUPLEX                                                             1
// ACCESS__FULL_DUPLEX: r,w
// DESCR__FULL_DUPLEX: 0: Halbduplex1: Vollduplex
#define IRTE_R5_REG_NRT_CONTROL_P2__MSK_BAUDRATE                                                                0x00000001
#define IRTE_R5_REG_NRT_CONTROL_P2_SHFT_BAUDRATE                                                                0
// ACCESS__BAUDRATE: r,w
// DESCR__BAUDRATE: 0: Der Port wird im 100MBit-Modus betrieben1: Der Port wird im 10MBit-Modus betrieben
#define IRTE_R5_REG_NRT_CONTROL_P2_RST__VAL                               0x00000000


#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3                                                                  0x00003008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_WRONG_SENDTIME                                           0x00010000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_WRONG_SENDTIME                                           16
// ACCESS__ENABLE_WRONG_SENDTIME: r,w
// DESCR__ENABLE_WRONG_SENDTIME: 1: Eintrag im  Trace-Buffer wenn der spezifizierte Zeitpunkt eines    RT-Telegramms ablaufen ist.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_NO_SENDDATA                                              0x00008000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_NO_SENDDATA                                              15
// ACCESS__ENABLE_NO_SENDDATA: r,w
// DESCR__ENABLE_NO_SENDDATA: 1: Zum spezifizierten Zeitpunkt ist kein RT-Telegramm zum     Versenden vorhanden sind.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_NO_SRT_ENTRY                                             0x00004000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_NO_SRT_ENTRY                                             14
// ACCESS__ENABLE_NO_SRT_ENTRY: r,w
// DESCR__ENABLE_NO_SRT_ENTRY: 1: In der NRT-Phase konnte beim Empfang eines SRT-    Telegramms kein Eintrag in der ACW-Liste gefunden werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_BUF_OVERLOAD                                             0x00002000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_BUF_OVERLOAD                                             13
// ACCESS__ENABLE_BUF_OVERLOAD: r,w
// DESCR__ENABLE_BUF_OVERLOAD: 1: Beim Telegrammempfang sind alle Datenpuffer �bergelaufen
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_NO_TABLE_ENTRY                                                  0x00001000
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_NO_TABLE_ENTRY                                                  12
// ACCESS__NO_TABLE_ENTRY: r,w
// DESCR__NO_TABLE_ENTRY: 1: Sourceadresse kann nicht in die MAC-Adresstabelle eingetragen    werden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_NO_ACW                                                   0x00000800
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_NO_ACW                                                   11
// ACCESS__ENABLE_NO_ACW: r,w
// DESCR__ENABLE_NO_ACW: 1: Empfang eines Zeit-Telegramms im IRT-Zeitbereich und dabei     kein ACW mit der richtigen FrameID und opt. MAC-Adresse     gefunden
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_WRONG_LENGTH                                             0x00000400
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_WRONG_LENGTH                                             10
// ACCESS__ENABLE_WRONG_LENGTH: r,w
// DESCR__ENABLE_WRONG_LENGTH: 1: Empfang eines RT-Telegramms mit einer falschen L�nge.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_RCVBUFOVFL                                               0x00000200
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_RCVBUFOVFL                                               9
// ACCESS__ENABLE_RCVBUFOVFL: r,w
// DESCR__ENABLE_RCVBUFOVFL: 1: Puffer-�berlauf beim Empfang eines RT-Telegramms.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_CRC_ERROR                                                0x00000100
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_CRC_ERROR                                                8
// ACCESS__ENABLE_CRC_ERROR: r,w
// DESCR__ENABLE_CRC_ERROR: 1: Empfang eines Telegramms mit CRC-Fehler im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_WRONG_FRAMEID                                            0x00000080
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_WRONG_FRAMEID                                            7
// ACCESS__ENABLE_WRONG_FRAMEID: r,w
// DESCR__ENABLE_WRONG_FRAMEID: 1: Empfang eines RT-Telegramms mit der falschen FrameID    und opt. MAC-Adresse im IRT-Zeitbereich
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_IRT_TEL_ERROR                                            0x00000040
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_IRT_TEL_ERROR                                            6
// ACCESS__ENABLE_IRT_TEL_ERROR: r,w
// DESCR__ENABLE_IRT_TEL_ERROR: 1: Eintrag im  Trace-Buffer, wenn ein RT-Telegramm kleiner    als 20 Byte empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_NO_IRT_TEL                                               0x00000020
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_NO_IRT_TEL                                               5
// ACCESS__ENABLE_NO_IRT_TEL: r,w
// DESCR__ENABLE_NO_IRT_TEL: 1: Eintrag im  Trace-Buffer, wenn bis zum erwarteten Zeitpunkt kein RT-Telegramm empfangen wird.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_REC_NRT                                                  0x00000010
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_REC_NRT                                                  4
// ACCESS__ENABLE_REC_NRT: r,w
// DESCR__ENABLE_REC_NRT: 1: Eintrag im  Trace-Buffer beim Empfang eines NRT-Telegramms     (Type # H8892) im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_OUT_OF_BOUNDS                                            0x00000008
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_OUT_OF_BOUNDS                                            3
// ACCESS__ENABLE_OUT_OF_BOUNDS: r,w
// DESCR__ENABLE_OUT_OF_BOUNDS: 1: Eintrag im  Trace-Buffer beim Empfang eines iSRT-    Frames ausserhalb der iSRT-Zeitphase.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_REC_REPL_FRAME                                           0x00000004
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_REC_REPL_FRAME                                           2
// ACCESS__ENABLE_REC_REPL_FRAME: r,w
// DESCR__ENABLE_REC_REPL_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines    Ersatz-Telegramms im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_REC_TIME_FRAME                                           0x00000002
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_REC_TIME_FRAME                                           1
// ACCESS__ENABLE_REC_TIME_FRAME: r,w
// DESCR__ENABLE_REC_TIME_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines Zeittelegramms      im IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3__MSK_ENABLE_REC_IRT_FRAME                                            0x00000001
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_SHFT_ENABLE_REC_IRT_FRAME                                            0
// ACCESS__ENABLE_REC_IRT_FRAME: r,w
// DESCR__ENABLE_REC_IRT_FRAME: 1: Eintrag im  Trace-Buffer beim Empfang eines RT-Frames im     IRT-Zeitbereich.
#define IRTE_R5_REG_IRT_DIAGNOSE_ENABLE_P3_RST__VAL                       0x00000000


#define IRTE_R5_REG_LINE_DELAY_P3                                                                           0x0000300C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LINE_DELAY_P3__MSK_LINE_DELAY3                                                              0xFFFFFFFF
#define IRTE_R5_REG_LINE_DELAY_P3_SHFT_LINE_DELAY3                                                              0
// ACCESS__LINE_DELAY3: r,w
// DESCR__LINE_DELAY3: Leitungsverz�gerung zum Nachbar-Switch (bzw. dem angeschlossenen Port des Nachbar-Switches)
#define IRTE_R5_REG_LINE_DELAY_P3_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_CONTROL_P3                                                                          0x00003010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_MONITOR_ACYCLIC                                                         0x00002000
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_MONITOR_ACYCLIC                                                         13
// ACCESS__MONITOR_ACYCLIC: r,w
// DESCR__MONITOR_ACYCLIC: 0: Der azyklische Verkehr auf diesem Port wird nicht beobachtet1: Der gesamte azyklische Verkehr auf diesem Port wird beobachtet, d.h. alle Telegramme ausser vom Typ 8892 mit Frame-ID 0080-FBFF.
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_SHORT_ENABLE                                                            0x00001000
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_SHORT_ENABLE                                                            12
// ACCESS__SHORT_ENABLE: r,w
// DESCR__SHORT_ENABLE: 0: Telegramme < 64 Byte werden beim Empfang gefiltert.1: keine Pr�fung auf Mindest-Telegramml�nge beim Empfang
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_MONITOR_CYCLIC                                                          0x00000800
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_MONITOR_CYCLIC                                                          11
// ACCESS__MONITOR_CYCLIC: r,w
// DESCR__MONITOR_CYCLIC: 0: Der zyklische Verkehr auf diesem Port wird nicht beobachtet1: Der zyklische Verkehr auf diesem Port wird beobachtet
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_REDUNDANCE_ENABLE                                                       0x00000400
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_REDUNDANCE_ENABLE                                                       10
// ACCESS__REDUNDANCE_ENABLE: r,w
// DESCR__REDUNDANCE_ENABLE: 0: Es wird kein redundanter Verkehr abgewickelt1: Es wird redundanter Verkehr abgewickelt
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_ISRT_ENABLE                                                             0x00000200
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_ISRT_ENABLE                                                             9
// ACCESS__ISRT_ENABLE: r,w
// DESCR__ISRT_ENABLE: 0: Es ist kein Zeitbereich f�r iSRT reserviert1: Es ist ein Zeitbereich f�r iSRT reserviert
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_EN_CHECK_SA                                                             0x00000100
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_EN_CHECK_SA                                                             8
// ACCESS__EN_CHECK_SA: r,w
// DESCR__EN_CHECK_SA: 0: Telegramme, deren Sourceadresse in der Adresstabelle     eingetragen sind, werden weitergeleitet.1: Telegramme, deren Sourceadresse nicht in der Adresstabelle     eingetragen sind werden gefiltert.
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_INGRESS_FILTERING                                                       0x00000080
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_INGRESS_FILTERING                                                       7
// ACCESS__INGRESS_FILTERING: r,w
// DESCR__INGRESS_FILTERING: 0: Im Tag Mode werden alle tagged Telegramme an diesem Port     empfangen. 1: Im Tag Mode wird ein Telegramm nur dann empfangen,     wenn die VLAN-Adresse des Telegramms mit dem VLAN-    Netzwerk am Empfangsport �bereinstimmt.
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_ENABLE_PADDING                                                          0x00000040
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_ENABLE_PADDING                                                          6
// ACCESS__ENABLE_PADDING: r,w
// DESCR__ENABLE_PADDING: 0: Port macht kein  Padding f�r Telegramme < 64 Bytes1: Port macht  Padding f�r Telegramme < 64 Bytes
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_MC_LEARNING_ENABLE                                                      0x00000020
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_MC_LEARNING_ENABLE                                                      5
// ACCESS__MC_LEARNING_ENABLE: r,w
// DESCR__MC_LEARNING_ENABLE: 0: Nur die Sourceadressen von Unicast-Telegrammen werden     zum Lernen der Unicast-Adresstabelle genutzt1: Die Sourceadressen aller Telegramme werden zum Lernen von      Eintr�gen der Unicast-Adresstabelle genutzt.
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_LEARNING_ENABLE                                                         0x00000010
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_LEARNING_ENABLE                                                         4
// ACCESS__LEARNING_ENABLE: r,w
// DESCR__LEARNING_ENABLE: 0: Es werden keine neuen Eintr�ge gelernt1: Dynamische Eintr�ge der Unicast-Adress-Tabelle k�nnen aus    den Sourceadressen von Telegrammen gelernt  werden
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_ENABLE_SRT_PRIORITAET                                                   0x00000008
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_ENABLE_SRT_PRIORITAET                                                   3
// ACCESS__ENABLE_SRT_PRIORITAET: r,w
// DESCR__ENABLE_SRT_PRIORITAET: 0: Telegramme mit einem Typ-Feld 8892H werden nicht besonders behandelt1: Telegramme mit den Typ-Feld 8892H erhalten beim Weiterleiten SRT-Priorit�t. Aufteilung auf zyklisch/azyklisch erfolgt durch die Frame-ID des Telegramms.
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_EN_CUT_THROUGH                                                          0x00000004
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_EN_CUT_THROUGH                                                          2
// ACCESS__EN_CUT_THROUGH: r,w
// DESCR__EN_CUT_THROUGH: 0: Die Telegramme an Port Px m�ssen im K-RAM zwischen-gespeichert werden (store-and-foreward) 1: Die Telegramme an Port Px m�ssen, wenn m�glich, direkt weitergeleitet werden (cut-through)
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_FULL_DUPLEX                                                             0x00000002
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_FULL_DUPLEX                                                             1
// ACCESS__FULL_DUPLEX: r,w
// DESCR__FULL_DUPLEX: 0: Halbduplex1: Vollduplex
#define IRTE_R5_REG_NRT_CONTROL_P3__MSK_BAUDRATE                                                                0x00000001
#define IRTE_R5_REG_NRT_CONTROL_P3_SHFT_BAUDRATE                                                                0
// ACCESS__BAUDRATE: r,w
// DESCR__BAUDRATE: 0: Der Port wird im 100MBit-Modus betrieben1: Der Port wird im 10MBit-Modus betrieben
#define IRTE_R5_REG_NRT_CONTROL_P3_RST__VAL                               0x00000000


#define IRTE_R5_REG_CONSBLOCKREQRD                                                                          0x0000A000
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CONSBLOCKREQRD__MSK_BLOCKREQUEST                                                            0x20000000
#define IRTE_R5_REG_CONSBLOCKREQRD_SHFT_BLOCKREQUEST                                                            29
// ACCESS__BLOCKREQUEST: r,w
// DESCR__BLOCKREQUEST: Block anfordern
#define IRTE_R5_REG_CONSBLOCKREQRD__MSK_BLOCKFREE                                                               0x10000000
#define IRTE_R5_REG_CONSBLOCKREQRD_SHFT_BLOCKFREE                                                               28
// ACCESS__BLOCKFREE: r,w
// DESCR__BLOCKFREE: Block freigeben
#define IRTE_R5_REG_CONSBLOCKREQRD__MSK_BLOCKLEN                                                                0x0FF00000
#define IRTE_R5_REG_CONSBLOCKREQRD_SHFT_BLOCKLEN                                                                20
// ACCESS__BLOCKLEN: r,w
// DESCR__BLOCKLEN: L�nge des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKREQRD__MSK_BLOCKSTART                                                              0x000FFFFF
#define IRTE_R5_REG_CONSBLOCKREQRD_SHFT_BLOCKSTART                                                              0
// ACCESS__BLOCKSTART: r,w
// DESCR__BLOCKSTART: Start-Adresse des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKREQRD_RST__VAL                               0x00000000


#define IRTE_R5_REG_CONSBLOCKACKRD                                                                          0x0000A004
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_CONSBLOCKACKRD__MSK_BLOCKERROR                                                              0x40000000
#define IRTE_R5_REG_CONSBLOCKACKRD_SHFT_BLOCKERROR                                                              30
// ACCESS__BLOCKERROR: r,
// DESCR__BLOCKERROR: Fehler bei der Bedienung der Auftrags-Schnittstelle
#define IRTE_R5_REG_CONSBLOCKACKRD__MSK_BLOCKOK                                                                 0x20000000
#define IRTE_R5_REG_CONSBLOCKACKRD_SHFT_BLOCKOK                                                                 29
// ACCESS__BLOCKOK: r,
// DESCR__BLOCKOK: Block ist bereitgestellt, SW darf zugreifen
#define IRTE_R5_REG_CONSBLOCKACKRD__MSK_BLOCKUSED                                                               0x10000000
#define IRTE_R5_REG_CONSBLOCKACKRD_SHFT_BLOCKUSED                                                               28
// ACCESS__BLOCKUSED: r,
// DESCR__BLOCKUSED: Block wird ben�tzt
#define IRTE_R5_REG_CONSBLOCKACKRD__MSK_BLOCKLEN                                                                0x0FF00000
#define IRTE_R5_REG_CONSBLOCKACKRD_SHFT_BLOCKLEN                                                                20
// ACCESS__BLOCKLEN: r,
// DESCR__BLOCKLEN: L�nge des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKACKRD__MSK_BLOCKSTART                                                              0x000FFFFF
#define IRTE_R5_REG_CONSBLOCKACKRD_SHFT_BLOCKSTART                                                              0
// ACCESS__BLOCKSTART: r,
// DESCR__BLOCKSTART: Start-Adresse des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKACKRD_RST__VAL                               0x00000000


#define IRTE_R5_REG_CONSBLOCKREQWR                                                                          0x0000A008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CONSBLOCKREQWR__MSK_BLOCKREQUEST                                                            0x20000000
#define IRTE_R5_REG_CONSBLOCKREQWR_SHFT_BLOCKREQUEST                                                            29
// ACCESS__BLOCKREQUEST: r,w
// DESCR__BLOCKREQUEST: Block anfordern
#define IRTE_R5_REG_CONSBLOCKREQWR__MSK_BLOCKFREE                                                               0x10000000
#define IRTE_R5_REG_CONSBLOCKREQWR_SHFT_BLOCKFREE                                                               28
// ACCESS__BLOCKFREE: r,w
// DESCR__BLOCKFREE: Block freigeben
#define IRTE_R5_REG_CONSBLOCKREQWR__MSK_BLOCKLEN                                                                0x0FF00000
#define IRTE_R5_REG_CONSBLOCKREQWR_SHFT_BLOCKLEN                                                                20
// ACCESS__BLOCKLEN: r,w
// DESCR__BLOCKLEN: L�nge des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKREQWR__MSK_BLOCKSTART                                                              0x000FFFFF
#define IRTE_R5_REG_CONSBLOCKREQWR_SHFT_BLOCKSTART                                                              0
// ACCESS__BLOCKSTART: r,w
// DESCR__BLOCKSTART: Start-Adresse des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKREQWR_RST__VAL                               0x00000000


#define IRTE_R5_REG_CONSBLOCKACKWR                                                                          0x0000A00C
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_CONSBLOCKACKWR__MSK_BLOCKERROR                                                              0x40000000
#define IRTE_R5_REG_CONSBLOCKACKWR_SHFT_BLOCKERROR                                                              30
// ACCESS__BLOCKERROR: r,
// DESCR__BLOCKERROR: Fehler bei der Bedienung der Auftrags-Schnittstelle
#define IRTE_R5_REG_CONSBLOCKACKWR__MSK_BLOCKOK                                                                 0x20000000
#define IRTE_R5_REG_CONSBLOCKACKWR_SHFT_BLOCKOK                                                                 29
// ACCESS__BLOCKOK: r,
// DESCR__BLOCKOK: Block ist bereitgestellt, SW darf zugreifen
#define IRTE_R5_REG_CONSBLOCKACKWR__MSK_BLOCKUSED                                                               0x10000000
#define IRTE_R5_REG_CONSBLOCKACKWR_SHFT_BLOCKUSED                                                               28
// ACCESS__BLOCKUSED: r,
// DESCR__BLOCKUSED: Block wird ben�tzt
#define IRTE_R5_REG_CONSBLOCKACKWR__MSK_BLOCKLEN                                                                0x0FF00000
#define IRTE_R5_REG_CONSBLOCKACKWR_SHFT_BLOCKLEN                                                                20
// ACCESS__BLOCKLEN: r,
// DESCR__BLOCKLEN: L�nge des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKACKWR__MSK_BLOCKSTART                                                              0x000FFFFF
#define IRTE_R5_REG_CONSBLOCKACKWR_SHFT_BLOCKSTART                                                              0
// ACCESS__BLOCKSTART: r,
// DESCR__BLOCKSTART: Start-Adresse des angeforderten Blockes
#define IRTE_R5_REG_CONSBLOCKACKWR_RST__VAL                               0x00000000


#define IRTE_R5_REG_PHASE_CORRECTION                                                                        0x00011034
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_PHASE_CORRECTION__MSK_I                                                                     0x80000000
#define IRTE_R5_REG_PHASE_CORRECTION_SHFT_I                                                                     31
// ACCESS__I: r,w
// DESCR__I: Inkrement-Bit;wenn 1, wird im Korrekturzyklus bei jeder Korrektur der Cycle-Timer um 2 inkrementiert;wenn 0, wird im Korrekturzyklus bei jeder Korrektur der Cycle-Timer nicht inkrementiert;
#define IRTE_R5_REG_PHASE_CORRECTION__MSK_RPHASEK                                                               0x7FFFFFFF
#define IRTE_R5_REG_PHASE_CORRECTION_SHFT_RPHASEK                                                               0
// ACCESS__RPHASEK: r,w
// DESCR__RPHASEK: Anzahl der 100 MHz Takte, nach denen im Korrekturzyklus eine Korrektur durchgef�hrt wird; steht hier z.B. eine 4, so wird bei jedem 4. Takt eine Korrektur durchgef�hrt.Beispiel: RPhaseK  31..0  = 80000004War die Zyklusl�nge vor dem Aktivieren der Korrektur 30000 Takte, so betr�gt sie jetzt 30000/5 * 4  = 24000 TakteBeispiel: RPhaseK  31..0  = 00000004War die Zyklusl�nge vor dem Aktivieren der Korrektur 30000 Takte, so betr�gt sie jetzt 30000/3 * 4  = 40000 Takte
#define IRTE_R5_REG_PHASE_CORRECTION_RST__VAL                             0x00000000


#define IRTE_R5_REG_CYCLE_CNT_ENTITY                                                                        0x00011038
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CYCLE_CNT_ENTITY__MSK_CYCLE_CNT_ENTITY                                                      0x0000FFFF
#define IRTE_R5_REG_CYCLE_CNT_ENTITY_SHFT_CYCLE_CNT_ENTITY                                                      0
// ACCESS__CYCLE_CNT_ENTITY: r,w
// DESCR__CYCLE_CNT_ENTITY: Anzahl der in einem Isochronzykus enthaltenen Basiszyklen (1 Basiszyklus  = 31,25�s).
#define IRTE_R5_REG_CYCLE_CNT_ENTITY_RST__VAL                             0x00000000


#define IRTE_R5_REG_CYCLE_CNT_VAL                                                                           0x00011400
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CYCLE_CNT_VAL__MSK_CYCLE_CNT_VAL                                                            0x0000FFFF
#define IRTE_R5_REG_CYCLE_CNT_VAL_SHFT_CYCLE_CNT_VAL                                                            0
// ACCESS__CYCLE_CNT_VAL: r,w
// DESCR__CYCLE_CNT_VAL: Anzahl der geregelten Isochronzyklen
#define IRTE_R5_REG_CYCLE_CNT_VAL_RST__VAL                                0x00000000


#define IRTE_R5_REG_CYCLE_TIME_VAL                                                                          0x00011404
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CYCLE_TIME_VAL__MSK_CYCLE_TIME_VAL                                                          0xFFFFFFFF
#define IRTE_R5_REG_CYCLE_TIME_VAL_SHFT_CYCLE_TIME_VAL                                                          0
// ACCESS__CYCLE_TIME_VAL: r,w
// DESCR__CYCLE_TIME_VAL: Wert innerhalb des geregelten Isochronzyklus in Anzahl von 100 MHz Takten
#define IRTE_R5_REG_CYCLE_TIME_VAL_RST__VAL                               0x00000000


#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_EXT                                                                 0x00011408
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_EXT__MSK_CLOCK_CNT_VAL_BEGIN_EXT                                        0xFFFFFFFF
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_EXT_SHFT_CLOCK_CNT_VAL_BEGIN_EXT                                        0
// ACCESS__CLOCK_CNT_VAL_BEGIN_EXT: r,w
// DESCR__CLOCK_CNT_VAL_BEGIN_EXT: abgespeicherter Wert des Clock-Counters; das Speichern wird durch eine fallende Flanke am externen Pin PLL_Ext_In des IRTE-Switch-Makros ausgel�st.
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_EXT_RST__VAL                      0x00000000


#define IRTE_R5_REG_APLCLK_TIMER                                                                            0x0001140C
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_APLCLK_TIMER__MSK_APLCLK_TIMER                                                              0xFFFFFFFF
#define IRTE_R5_REG_APLCLK_TIMER_SHFT_APLCLK_TIMER                                                              0
// ACCESS__APLCLK_TIMER: r,
// DESCR__APLCLK_TIMER: Zeitlicher Abstand zum Aplclk-Perioden-Beginn in 100 MHz-Schritten
#define IRTE_R5_REG_APLCLK_TIMER_RST__VAL                                 0x00000000


#define IRTE_R5_REG_CLKGEN_STATUS                                                                           0x00011410
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_CLKGEN_STATUS__MSK_STCLKCY_START                                                            0x00000002
#define IRTE_R5_REG_CLKGEN_STATUS_SHFT_STCLKCY_START                                                            1
// ACCESS__STCLKCY_START: r,
// DESCR__STCLKCY_START: StClkcy_Start: (verz�gerte) Antwort / Quittierung der Anforderung gem�� Bit Clkcy_StartStClkcy_Start  = 1: Takterzeugung gestartet / l�uftStClkcy_Start  = 0: Takterzeugung gestoppt / steht; keine Signalerzeugung
#define IRTE_R5_REG_CLKGEN_STATUS__MSK_STAPLCLK_START                                                           0x00000001
#define IRTE_R5_REG_CLKGEN_STATUS_SHFT_STAPLCLK_START                                                           0
// ACCESS__STAPLCLK_START: r,
// DESCR__STAPLCLK_START: StAplClk_Start: (verz�gerte) Antwort / Quittierung der Anforderung gem�� Bit AplClk _StartStAplClk_Start  = 1: Takterzeugung gestartet / l�uftStAplClk_Start  = 0: Takterzeugung gestoppt / steht; keine Signalerzeugung
#define IRTE_R5_REG_CLKGEN_STATUS_RST__VAL                                0x00000000


#define IRTE_R5_REG_CLOCK_CNT_VAL                                                                           0x00011414
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CLOCK_CNT_VAL__MSK_CLOCK_CNT_VAL                                                            0xFFFFFFFF
#define IRTE_R5_REG_CLOCK_CNT_VAL_SHFT_CLOCK_CNT_VAL                                                            0
// ACCESS__CLOCK_CNT_VAL: r,w
// DESCR__CLOCK_CNT_VAL: Wert eines freilaufenden (ungeregelten) Z�hlers in Anzahl von 100 MHz Takten. Die relativen Werte dieses Z�hlers dienen als Basis zur Regelung des Isochronzyklus
#define IRTE_R5_REG_CLOCK_CNT_VAL_RST__VAL                                0x00000000


#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN                                                                     0x00011418
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN__MSK_CLOCK_CNT_VAL_BEGIN                                                0xFFFFFFFF
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_SHFT_CLOCK_CNT_VAL_BEGIN                                                0
// ACCESS__CLOCK_CNT_VAL_BEGIN: r,w
// DESCR__CLOCK_CNT_VAL_BEGIN: abgespeicherter Wert des Clock-Counters; das Speichern wird durch den Beginn des Isochron-Zyklus ausgel�st.
#define IRTE_R5_REG_CLOCK_CNT_VAL_BEGIN_RST__VAL                          0x00000000


#define IRTE_R5_REG_ISRT_TIME                                                                               0x0001141C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_ISRT_TIME__MSK_ISRT_TIME                                                                    0x000FFFFF
#define IRTE_R5_REG_ISRT_TIME_SHFT_ISRT_TIME                                                                    0
// ACCESS__ISRT_TIME: r,w
// DESCR__ISRT_TIME: write:Ladewert des iSRT-Timers, nur �ber 32-Bit Zugriff beschreibbarread:Aktueller Wert des iSRT-Timers und damit die minimal zur Verf�gung stehende reservierte iSRT-Phase (in 100MHz)
#define IRTE_R5_REG_ISRT_TIME_RST__VAL                                    0x00000000


#define IRTE_R5_REG_MAX_ISRT_LENGTH                                                                         0x00011420
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_MAX_ISRT_LENGTH__MSK_MAX_ISRT_LENGTH                                                        0xFFFFFFFF
#define IRTE_R5_REG_MAX_ISRT_LENGTH_SHFT_MAX_ISRT_LENGTH                                                        0
// ACCESS__MAX_ISRT_LENGTH: r,
// DESCR__MAX_ISRT_LENGTH: read:Maximaler Wert des Cycle-Timers bis zu dem die iSRT-Phase verl�ngert worden ist (maximale iSRT-Phase �ber alle Zyklen hinweg). Der Registerinhalt wird mit dem Lesezugriff gel�scht.
#define IRTE_R5_REG_MAX_ISRT_LENGTH_RST__VAL                              0x00000000


#define IRTE_R5_REG_CLOCK_CNT_VAL_SND                                                                       0x00011424
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_CLOCK_CNT_VAL_SND__MSK_CLOCK_CNT_VAL_SND                                                    0xFFFFFFFF
#define IRTE_R5_REG_CLOCK_CNT_VAL_SND_SHFT_CLOCK_CNT_VAL_SND                                                    0
// ACCESS__CLOCK_CNT_VAL_SND: r,
// DESCR__CLOCK_CNT_VAL_SND: read:Abgespeicherter Wert von Clock_Cnt_Val beim Versenden eines im DMACW speziell markierten NRT-Telegramms (PT-Bit im DMACW gesetzt). Der Registerinhalt bleibt nach dem Auslesen erhalten.
#define IRTE_R5_REG_CLOCK_CNT_VAL_SND_RST__VAL                            0x00000000


#define IRTE_R5_REG_ISRT_OUTOFBOUND                                                                         0x00011428
// ACCESS__: r,
// DESCR__: 
#define IRTE_R5_REG_ISRT_OUTOFBOUND__MSK_ISRT_OUTOFBOUND                                                        0x000000FF
#define IRTE_R5_REG_ISRT_OUTOFBOUND_SHFT_ISRT_OUTOFBOUND                                                        0
// ACCESS__ISRT_OUTOFBOUND: r,
// DESCR__ISRT_OUTOFBOUND: read:Anzahl der iSRT-Telegramm, die ausserhalb der iSRT-Phase gesendet werden. Der Registerinhalt wird mit dem Lesezugriff gel�scht.
#define IRTE_R5_REG_ISRT_OUTOFBOUND_RST__VAL                              0x00000000


#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB                                                                     0x00012008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB__MSK_BACK_TO_BACK_MODE                                                  0x00000100
#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB_SHFT_BACK_TO_BACK_MODE                                                  8
// ACCESS__BACK_TO_BACK_MODE: r,w
// DESCR__BACK_TO_BACK_MODE: Polarit�t des Owner-Bits an den Sende-SS�en von Kanal B wird f�r die automatisch Kopplung zweier Makros zu einem Mehr-Port-Switch gedreht.0: Owner-Bit-Polarit�t  = Empfangs-SS�en von Kanal B1: Owner-Bit-Polarit�t / = Empfangs-SS�en von Kanal B
#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB__MSK_ENABLE_PERIOD                                                      0x000000FF
#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB_SHFT_ENABLE_PERIOD                                                      0
// ACCESS__ENABLE_PERIOD: r,w
// DESCR__ENABLE_PERIOD: Abstand in Einheiten von 640 ns (FPGA: 1280 ns) in dem periodisch die beiden Empfangs- und Sende-Schnittstellen des Kanals B freigegeben werden.Bei �0�h unterbleibt der periodische Anstoss.
#define IRTE_R5_REG_NRT_AUTO_ENABLE_CHB_RST__VAL                          0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_1                                                                        0x00013008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_1__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_1_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_1__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_1_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_1__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_1_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_1__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_1_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_1_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_2                                                                        0x0001300C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_2__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_2_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_2__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_2_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_2__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_2_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_2__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_2_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_2_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_3                                                                        0x00013010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_3__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_3_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_3__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_3_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_3__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_3_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_3__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_3_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_3_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_4                                                                        0x00013014
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_4__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_4_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_4__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_4_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_4__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_4_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_4__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_4_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_4_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_5                                                                        0x00013018
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_5__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_5_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_5__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_5_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_5__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_5_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_5__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_5_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_5_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_6                                                                        0x0001301C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_6__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_6_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_6__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_6_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_6__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_6_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_6__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_6_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_6_RST__VAL                             0x00000000


#define IRTE_R5_REG_APPLDATASTATUS_7                                                                        0x00013020
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_APPLDATASTATUS_7__MSK_STATUS7__4                                                            0x000000F0
#define IRTE_R5_REG_APPLDATASTATUS_7_SHFT_STATUS7__4                                                            4
// ACCESS__STATUS7__4: r,w
// DESCR__STATUS7__4: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_7__MSK_STANDBY                                                               0x00000008
#define IRTE_R5_REG_APPLDATASTATUS_7_SHFT_STANDBY                                                               3
// ACCESS__STANDBY: r,w
// DESCR__STANDBY: �0�: kein Redundanz-Master�1�: Sender ist Redundanz-Master
#define IRTE_R5_REG_APPLDATASTATUS_7__MSK_DATAVALID                                                             0x00000004
#define IRTE_R5_REG_APPLDATASTATUS_7_SHFT_DATAVALID                                                             2
// ACCESS__DATAVALID: r,w
// DESCR__DATAVALID: Ausgangsdatensatz ist konsistent und g�ltig. Durch die SW ver�nderbar.
#define IRTE_R5_REG_APPLDATASTATUS_7__MSK_STATUS1__0                                                            0x00000003
#define IRTE_R5_REG_APPLDATASTATUS_7_SHFT_STATUS1__0                                                            0
// ACCESS__STATUS1__0: r,w
// DESCR__STATUS1__0: SW-Status
#define IRTE_R5_REG_APPLDATASTATUS_7_RST__VAL                             0x00000000


#define IRTE_R5_REG_IRT_ASYNCMODE                                                                           0x00013024
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_ASYNCMODE__MSK_IRT_OUTFREEZE                                                            0x00000002
#define IRTE_R5_REG_IRT_ASYNCMODE_SHFT_IRT_OUTFREEZE                                                            1
// ACCESS__IRT_OUTFREEZE: r,w
// DESCR__IRT_OUTFREEZE: Die asynchrone Anwendung verschickt die Ausgangsdaten inkonsistent.
#define IRTE_R5_REG_IRT_ASYNCMODE__MSK_IRT_INFREEZE                                                             0x00000001
#define IRTE_R5_REG_IRT_ASYNCMODE_SHFT_IRT_INFREEZE                                                             0
// ACCESS__IRT_INFREEZE: r,w
// DESCR__IRT_INFREEZE: Die asynchrone Anwendung verschickt die Eingangsdaten inkonsistent.
#define IRTE_R5_REG_IRT_ASYNCMODE_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAINDESTADR0                                                                           0x00013028
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAINDESTADR0__MSK_DMAINDESTADR0                                                            0xFFFFFFFF
#define IRTE_R5_REG_DMAINDESTADR0_SHFT_DMAINDESTADR0                                                            0
// ACCESS__DMAINDESTADR0: r,w
// DESCR__DMAINDESTADR0: UserRAM-Byte-Adresse; zeigt auf das Ziel des ersten Empfangspuffers im UserRAM f�r die IRT-Eingangsdaten; mu� 64-Bit-aligned sein, d.h DMAInDestAdr0  2..0  = 000
#define IRTE_R5_REG_DMAINDESTADR0_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAINDESTADR1                                                                           0x0001302C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAINDESTADR1__MSK_DMAINDESTADR1                                                            0xFFFFFFFF
#define IRTE_R5_REG_DMAINDESTADR1_SHFT_DMAINDESTADR1                                                            0
// ACCESS__DMAINDESTADR1: r,w
// DESCR__DMAINDESTADR1: UserRAM-Byte-Adresse; zeigt auf das Ziel des zweiten Empfangspuffers im UserRAM f�r die IRT-Eingangsdaten; mu� 64-Bit-aligned sein, d.h DMAInDestAdr1  2..0  = 000
#define IRTE_R5_REG_DMAINDESTADR1_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAINSRCADR                                                                             0x00013030
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAINSRCADR__MSK_DMAINSRCADR                                                                0x001FFFFF
#define IRTE_R5_REG_DMAINSRCADR_SHFT_DMAINSRCADR                                                                0
// ACCESS__DMAINSRCADR: r,w
// DESCR__DMAINSRCADR: KRAM-Byte-Adresse; zeigt auf den Start des Abbildes der Eingangsdaten im KRAM; mu� 64-Bit-aligned sein, d.h DMAInSrcAdr  2..0  = 000
#define IRTE_R5_REG_DMAINSRCADR_RST__VAL                                  0x00000000


#define IRTE_R5_REG_DMAINLENGTH                                                                             0x00013034
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAINLENGTH__MSK_DMAINLENGTH                                                                0x0000FFFF
#define IRTE_R5_REG_DMAINLENGTH_SHFT_DMAINLENGTH                                                                0
// ACCESS__DMAINLENGTH: r,w
// DESCR__DMAINLENGTH: Ist die Anzahl der Bytes f�r die Gr��e des IRT-Eingangspuffers f�r die IRT-Eingangsdaten.
#define IRTE_R5_REG_DMAINLENGTH_RST__VAL                                  0x00000000


#define IRTE_R5_REG_DMAOUTSRCADR0                                                                           0x00013038
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAOUTSRCADR0__MSK_DMAOUTSRCADR0                                                            0xFFFFFFFF
#define IRTE_R5_REG_DMAOUTSRCADR0_SHFT_DMAOUTSRCADR0                                                            0
// ACCESS__DMAOUTSRCADR0: r,w
// DESCR__DMAOUTSRCADR0: UserRAM-Byte-Adresse; zeigt auf den Start des ersten Ausgangspuffers im UserRAM f�r die IRT-Ausgangsdaten; mu� 64-Bit-aligned sein, d.h DMAOutSrcAdr0  2..0  = 000
#define IRTE_R5_REG_DMAOUTSRCADR0_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAOUTSRCADR1                                                                           0x0001303C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAOUTSRCADR1__MSK_DMAOUTSRCADR1                                                            0xFFFFFFFF
#define IRTE_R5_REG_DMAOUTSRCADR1_SHFT_DMAOUTSRCADR1                                                            0
// ACCESS__DMAOUTSRCADR1: r,w
// DESCR__DMAOUTSRCADR1: UserRAM-Byte-Adresse; zeigt auf den Start des zweiten Ausgangspuffers im UserRAM f�r die IRT-Ausgangsdaten; mu� 64-Bit-aligned sein, d.h DMAOutSrcAdr1  2..0  = 000
#define IRTE_R5_REG_DMAOUTSRCADR1_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAOUTDESTADR                                                                           0x00013040
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAOUTDESTADR__MSK_DMAOUTDESTADR                                                            0x001FFFFF
#define IRTE_R5_REG_DMAOUTDESTADR_SHFT_DMAOUTDESTADR                                                            0
// ACCESS__DMAOUTDESTADR: r,w
// DESCR__DMAOUTDESTADR: KRAM-Byte-Adresse; zeigt auf das Ziel des Abbildes der Ausgangsdaten im KRAM; mu� 64-Bit-aligned sein, d.h DMAOutDestAdr 2..0  = 000
#define IRTE_R5_REG_DMAOUTDESTADR_RST__VAL                                0x00000000


#define IRTE_R5_REG_DMAOUTLENGTH                                                                            0x00013044
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_DMAOUTLENGTH__MSK_DMAOUTLENGTH                                                              0x0000FFFF
#define IRTE_R5_REG_DMAOUTLENGTH_SHFT_DMAOUTLENGTH                                                              0
// ACCESS__DMAOUTLENGTH: r,w
// DESCR__DMAOUTLENGTH: Ist die Anzahl der Bytes f�r die Gr��e des IRT-Ausgangspuffers f�r die IRT-Ausgangsdaten.
#define IRTE_R5_REG_DMAOUTLENGTH_RST__VAL                                 0x00000000


#define IRTE_R5_REG_IRT_TIMECOMPARE                                                                         0x00013048
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_TIMECOMPARE__MSK_IRT_TIMECOMPARE                                                        0xFFFFFFFF
#define IRTE_R5_REG_IRT_TIMECOMPARE_SHFT_IRT_TIMECOMPARE                                                        0
// ACCESS__IRT_TIMECOMPARE: r,w
// DESCR__IRT_TIMECOMPARE: Vergleichswert zur Bildung eines Interrupt und Start der Anwendung
#define IRTE_R5_REG_IRT_TIMECOMPARE_RST__VAL                              0x00000000


#define IRTE_R5_REG_NRT_FCW_LIMIT                                                                           0x00016000
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_FCW_LIMIT__MSK_NRT_FCW_LIMIT                                                            0x00000FFF
#define IRTE_R5_REG_NRT_FCW_LIMIT_SHFT_NRT_FCW_LIMIT                                                            0
// ACCESS__NRT_FCW_LIMIT: r,w
// DESCR__NRT_FCW_LIMIT: Die Anzahl der in der NRT-FCW-Leerliste minimal vorzuhaltenden FCWs
#define IRTE_R5_REG_NRT_FCW_LIMIT_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_DB_LIMIT                                                                            0x00016004
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_DB_LIMIT__MSK_NRT_DB_LIMIT                                                              0x00000FFF
#define IRTE_R5_REG_NRT_DB_LIMIT_SHFT_NRT_DB_LIMIT                                                              0
// ACCESS__NRT_DB_LIMIT: r,w
// DESCR__NRT_DB_LIMIT: Die Anzahl der in der NRT-DB-Leerliste minimal vorzuhaltenden Datenpuffer
#define IRTE_R5_REG_NRT_DB_LIMIT_RST__VAL                                 0x00000000


#define IRTE_R5_REG_HOL_LIMIT_CH                                                                            0x00016008
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_LIMIT_CH__MSK_HOL_LIMIT_API                                                             0x00000FFF
#define IRTE_R5_REG_HOL_LIMIT_CH_SHFT_HOL_LIMIT_API                                                             0
// ACCESS__HOL_LIMIT_API: r,w
// DESCR__HOL_LIMIT_API: Die Anzahl der f�r einen lokalen Kanal (CHA bzw. CHB) maximal zul�ssigen Datenpuffer
#define IRTE_R5_REG_HOL_LIMIT_CH_RST__VAL                                 0x00000000


#define IRTE_R5_REG_HOL_LIMIT_PORT                                                                          0x0001600C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_LIMIT_PORT__MSK_HOL_LIMIT_PORT                                                          0x00000FFF
#define IRTE_R5_REG_HOL_LIMIT_PORT_SHFT_HOL_LIMIT_PORT                                                          0
// ACCESS__HOL_LIMIT_PORT: r,w
// DESCR__HOL_LIMIT_PORT: Die Anzahl der f�r einen Port maximal zul�ssigen Datenpuffer
#define IRTE_R5_REG_HOL_LIMIT_PORT_RST__VAL                               0x00000000


#define IRTE_R5_REG_UCMC_TABLE_BASE                                                                         0x00016010
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_UCMC_TABLE_BASE__MSK_UCMC_TABLE_BASE                                                        0x001FFFFF
#define IRTE_R5_REG_UCMC_TABLE_BASE_SHFT_UCMC_TABLE_BASE                                                        0
// ACCESS__UCMC_TABLE_BASE: r,w
// DESCR__UCMC_TABLE_BASE: KRAM-Byte-Adresse; zeigt auf den Start der Uni-/Multicast-Adresstabelle;mu� 8-Byte-aligned sein, d.h. es mu� immer gelten: UCMC-Base-Address 2..0  = 000.
#define IRTE_R5_REG_UCMC_TABLE_BASE_RST__VAL                              0x00000000


#define IRTE_R5_REG_UCMC_TABLE_LENGTH                                                                       0x00016014
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_UCMC_TABLE_LENGTH__MSK_UCMC_TABLE_LENGTH                                                    0x00000FFF
#define IRTE_R5_REG_UCMC_TABLE_LENGTH_SHFT_UCMC_TABLE_LENGTH                                                    0
// ACCESS__UCMC_TABLE_LENGTH: r,w
// DESCR__UCMC_TABLE_LENGTH: L�nge der Uni-/Multicast-Adresstabelle in Anzahl der Eintr�ge - 1
#define IRTE_R5_REG_UCMC_TABLE_LENGTH_RST__VAL                            0x00000000


#define IRTE_R5_REG_UCMC_LFSR_MASK                                                                          0x00016018
// ACCESS__: ,
// DESCR__: 
#define IRTE_R5_REG_UCMC_LFSR_MASK__MSK_UCMC_LFSR_CTRL                                                          0x00000FFF
#define IRTE_R5_REG_UCMC_LFSR_MASK_SHFT_UCMC_LFSR_CTRL                                                          0
// ACCESS__UCMC_LFSR_CTRL: ,
// DESCR__UCMC_LFSR_CTRL: Maskierung der R�ckkopplungspfade des LFSR. Ein gesetztes Bit gibt den entsprechenden R�ckkopplungspfad frei.
#define IRTE_R5_REG_UCMC_LFSR_MASK_RST__VAL                               0x00000000


#define IRTE_R5_REG_UCMC_TABLE_RANGE                                                                        0x0001601C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_UCMC_TABLE_RANGE__MSK_UCMC_TABLE_RANGE                                                      0x0000000F
#define IRTE_R5_REG_UCMC_TABLE_RANGE_SHFT_UCMC_TABLE_RANGE                                                      0
// ACCESS__UCMC_TABLE_RANGE: r,w
// DESCR__UCMC_TABLE_RANGE: Gr��e des Nachbarschaftsbereichs beginnend ab Einsprung-Offset (der Offset wird durch das LFSR bestimmt).
#define IRTE_R5_REG_UCMC_TABLE_RANGE_RST__VAL                             0x00000000


#define IRTE_R5_REG_UC_DEFAULT_CTRL                                                                         0x00016020
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_DESTINATION_PORT3                                                      0x00000020
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_DESTINATION_PORT3                                                      5
// ACCESS__DESTINATION_PORT3: r,w
// DESCR__DESTINATION_PORT3: NRT-Telegramm an Port 3 weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_DESTINATION_PORT2                                                      0x00000010
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_DESTINATION_PORT2                                                      4
// ACCESS__DESTINATION_PORT2: r,w
// DESCR__DESTINATION_PORT2: NRT-Telegramm an Port 2 weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_DESTINATION_PORT1                                                      0x00000008
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_DESTINATION_PORT1                                                      3
// ACCESS__DESTINATION_PORT1: r,w
// DESCR__DESTINATION_PORT1: NRT-Telegramm an Port 1 weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_DESTINATION_PORT0                                                      0x00000004
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_DESTINATION_PORT0                                                      2
// ACCESS__DESTINATION_PORT0: r,w
// DESCR__DESTINATION_PORT0: NRT-Telegramm an Port 0 weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_CHB                                                                    0x00000002
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_CHB                                                                    1
// ACCESS__CHB: r,w
// DESCR__CHB: NRT-Telegramm an Kanal B weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL__MSK_CHA                                                                    0x00000001
#define IRTE_R5_REG_UC_DEFAULT_CTRL_SHFT_CHA                                                                    0
// ACCESS__CHA: r,w
// DESCR__CHA: NRT-Telegramm an Kanal A weiterleiten
#define IRTE_R5_REG_UC_DEFAULT_CTRL_RST__VAL                              0x00000000


#define IRTE_R5_REG_MC_DEFAULT_CTRL                                                                         0x00016024
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_DESTINATION_PORT3                                                      0x00000020
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_DESTINATION_PORT3                                                      5
// ACCESS__DESTINATION_PORT3: r,w
// DESCR__DESTINATION_PORT3: NRT-Telegramm an Port 3 weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_DESTINATION_PORT2                                                      0x00000010
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_DESTINATION_PORT2                                                      4
// ACCESS__DESTINATION_PORT2: r,w
// DESCR__DESTINATION_PORT2: NRT-Telegramm an Port 2 weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_DESTINATION_PORT1                                                      0x00000008
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_DESTINATION_PORT1                                                      3
// ACCESS__DESTINATION_PORT1: r,w
// DESCR__DESTINATION_PORT1: NRT-Telegramm an Port 1 weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_DESTINATION_PORT0                                                      0x00000004
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_DESTINATION_PORT0                                                      2
// ACCESS__DESTINATION_PORT0: r,w
// DESCR__DESTINATION_PORT0: NRT-Telegramm an Port 0 weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_CHB                                                                    0x00000002
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_CHB                                                                    1
// ACCESS__CHB: r,w
// DESCR__CHB: NRT-Telegramm an Kanal B weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL__MSK_CHA                                                                    0x00000001
#define IRTE_R5_REG_MC_DEFAULT_CTRL_SHFT_CHA                                                                    0
// ACCESS__CHA: r,w
// DESCR__CHA: NRT-Telegramm an Kanal A weiterleiten
#define IRTE_R5_REG_MC_DEFAULT_CTRL_RST__VAL                              0x00000000


#define IRTE_R5_REG_VLAN_TABLE_BASE                                                                         0x00016028
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_VLAN_TABLE_BASE__MSK_VLAN_TABLE_BASE                                                        0x001FFFFF
#define IRTE_R5_REG_VLAN_TABLE_BASE_SHFT_VLAN_TABLE_BASE                                                        0
// ACCESS__VLAN_TABLE_BASE: r,w
// DESCR__VLAN_TABLE_BASE: KRAM-Byte-Adresse; zeigt auf den Start der VLAN-Adresstabelle;mu� 8-Byte-aligned sein, d.h. es mu� immer gelten: VLAN-Base-Address 2..0  = 000.
#define IRTE_R5_REG_VLAN_TABLE_BASE_RST__VAL                              0x00000000


#define IRTE_R5_REG_VLAN_TABLE_LENGTH                                                                       0x0001602C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_VLAN_TABLE_LENGTH__MSK_VLAN_TABLE_LENGTH                                                    0x000000FF
#define IRTE_R5_REG_VLAN_TABLE_LENGTH_SHFT_VLAN_TABLE_LENGTH                                                    0
// ACCESS__VLAN_TABLE_LENGTH: r,w
// DESCR__VLAN_TABLE_LENGTH: L�nge der VLAN-Adresstabelle in Anzahl der Eintr�ge - 1
#define IRTE_R5_REG_VLAN_TABLE_LENGTH_RST__VAL                            0x00000000


#define IRTE_R5_REG_VLAN_LFSR_MASK                                                                          0x00016030
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_VLAN_LFSR_MASK__MSK_VLAN_LFSR_CTRL                                                          0x000000FF
#define IRTE_R5_REG_VLAN_LFSR_MASK_SHFT_VLAN_LFSR_CTRL                                                          0
// ACCESS__VLAN_LFSR_CTRL: r,w
// DESCR__VLAN_LFSR_CTRL: 
#define IRTE_R5_REG_VLAN_LFSR_MASK_RST__VAL                               0x00000000


#define IRTE_R5_REG_TIMER_SCOREBOARD_BASE                                                                   0x00016034
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TIMER_SCOREBOARD_BASE__MSK_TIMER_SCOREBOARD_BASE                                            0x001FFFFF
#define IRTE_R5_REG_TIMER_SCOREBOARD_BASE_SHFT_TIMER_SCOREBOARD_BASE                                            0
// ACCESS__TIMER_SCOREBOARD_BASE: r,w
// DESCR__TIMER_SCOREBOARD_BASE: Zeiger auf das Timer-Scoreboard .Die Zeiger ist ein 8-Byte granularer Offset in den IRT-Switch Adressraum.
#define IRTE_R5_REG_TIMER_SCOREBOARD_BASE_RST__VAL                        0x00000000


#define IRTE_R5_REG_TIMER_SCOREBOARD_ENTITY                                                                 0x00016038
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TIMER_SCOREBOARD_ENTITY__MSK_TIMER_SCOREBOARD_ENTRIES                                       0x000003FF
#define IRTE_R5_REG_TIMER_SCOREBOARD_ENTITY_SHFT_TIMER_SCOREBOARD_ENTRIES                                       0
// ACCESS__TIMER_SCOREBOARD_ENTRIES: r,w
// DESCR__TIMER_SCOREBOARD_ENTRIES: Gibt die Gesamtanzahl der m�glichen Entries im Timer-Scoreboard an (muss immer ein Vielfaches von 4 sein).
#define IRTE_R5_REG_TIMER_SCOREBOARD_ENTITY_RST__VAL                      0x00000000


#define IRTE_R5_REG_PS_SCOREBOARD_0_BASE                                                                    0x0001603C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_PS_SCOREBOARD_0_BASE__MSK_PS_SCOREBOARD_0_BASE                                              0x001FFFFF
#define IRTE_R5_REG_PS_SCOREBOARD_0_BASE_SHFT_PS_SCOREBOARD_0_BASE                                              0
// ACCESS__PS_SCOREBOARD_0_BASE: r,w
// DESCR__PS_SCOREBOARD_0_BASE: Zeiger auf das Producer-State-Scoreboard 0. Die Zeiger ist ein 8-Byte granularer Offset in den IRT-Switch Adressraum.
#define IRTE_R5_REG_PS_SCOREBOARD_0_BASE_RST__VAL                         0x00000000


#define IRTE_R5_REG_PS_SCOREBOARD_1_BASE                                                                    0x00016040
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_PS_SCOREBOARD_1_BASE__MSK_PS_SCOREBOARD_1_BASE                                              0x001FFFFF
#define IRTE_R5_REG_PS_SCOREBOARD_1_BASE_SHFT_PS_SCOREBOARD_1_BASE                                              0
// ACCESS__PS_SCOREBOARD_1_BASE: r,w
// DESCR__PS_SCOREBOARD_1_BASE: Zeiger auf das Producer-State-Scoreboard 1. Die Zeiger ist ein 8-Byte granularer Offset in den IRT-Switch Adressraum.
#define IRTE_R5_REG_PS_SCOREBOARD_1_BASE_RST__VAL                         0x00000000


#define IRTE_R5_REG_FC_MASK                                                                                 0x00016044
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_FC_MASK__MSK_FC_MASK                                                                        0x000003FF
#define IRTE_R5_REG_FC_MASK_SHFT_FC_MASK                                                                        0
// ACCESS__FC_MASK: r,w
// DESCR__FC_MASK: Bitmaske f�r das Empfangen von Telegrammen bei unterschreiten der Low-Water-Mark f�r NRT-FCWs oder NRT-DB an den Ports und am NRT-API.Bit n entspricht dabei der Priorit�t n.�0�: Telegramme mit dieser Priorit�t werden nicht angenommen.�1�: Telegramme mit dieser Priorit�t werden angenommen.
#define IRTE_R5_REG_FC_MASK_RST__VAL                                      0x00000000


#define IRTE_R5_REG_HOL_MASK_P0                                                                             0x00016048
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_MASK_P0__MSK_HOL_MASK_P0                                                                0x000003FF
#define IRTE_R5_REG_HOL_MASK_P0_SHFT_HOL_MASK_P0                                                                0
// ACCESS__HOL_MASK_P0: r,w
// DESCR__HOL_MASK_P0: Bitmaske f�r das Annehmen von Sendeauftr�gen bei erreichtem HOL-Limit an Port 0. Bit n entspricht dabei der Priorit�t n.�0�: Sendeauftr�ge mit dieser Priorit�t werden nicht angenommen.�1�: Sendeauftr�ge mit dieser Priorit�t werden angenommen.
#define IRTE_R5_REG_HOL_MASK_P0_RST__VAL                                  0x00000000


#define IRTE_R5_REG_HOL_MASK_P1                                                                             0x0001604C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_MASK_P1__MSK_HOL_MASK_P1                                                                0x000003FF
#define IRTE_R5_REG_HOL_MASK_P1_SHFT_HOL_MASK_P1                                                                0
// ACCESS__HOL_MASK_P1: r,w
// DESCR__HOL_MASK_P1: Bitmaske f�r das Annehmen von Sendeauftr�gen bei erreichtem HOL-Limit an Port 1. Bit n entspricht dabei der Priorit�t n.�0�: Sendeauftr�ge mit dieser Priorit�t werden nicht angenommen.�1�: Sendeauftr�ge mit dieser Priorit�t werden angenommen.
#define IRTE_R5_REG_HOL_MASK_P1_RST__VAL                                  0x00000000


#define IRTE_R5_REG_HOL_MASK_P2                                                                             0x00016050
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_MASK_P2__MSK_HOL_MASK_P2                                                                0x000003FF
#define IRTE_R5_REG_HOL_MASK_P2_SHFT_HOL_MASK_P2                                                                0
// ACCESS__HOL_MASK_P2: r,w
// DESCR__HOL_MASK_P2: Bitmaske f�r das Annehmen von Sendeauftr�gen bei erreichtem HOL-Limit an Port 2. Bit n entspricht dabei der Priorit�t n.�0�: Sendeauftr�ge mit dieser Priorit�t werden nicht angenommen.�1�: Sendeauftr�ge mit dieser Priorit�t werden angenommen.
#define IRTE_R5_REG_HOL_MASK_P2_RST__VAL                                  0x00000000


#define IRTE_R5_REG_HOL_MASK_P3                                                                             0x00016054
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_MASK_P3__MSK_HOL_MASK_P3                                                                0x000003FF
#define IRTE_R5_REG_HOL_MASK_P3_SHFT_HOL_MASK_P3                                                                0
// ACCESS__HOL_MASK_P3: r,w
// DESCR__HOL_MASK_P3: Bitmaske f�r das Annehmen von Sendeauftr�gen bei erreichtem HOL-Limit an Port 3. Bit n entspricht dabei der Priorit�t n.�0�: Sendeauftr�ge mit dieser Priorit�t werden nicht angenommen.�1�: Sendeauftr�ge mit dieser Priorit�t werden angenommen.
#define IRTE_R5_REG_HOL_MASK_P3_RST__VAL                                  0x00000000


#define IRTE_R5_REG_NRT_FCW_COUNT                                                                           0x00016420
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_FCW_COUNT__MSK_NRT_FCW_COUNT                                                            0x00000FFF
#define IRTE_R5_REG_NRT_FCW_COUNT_SHFT_NRT_FCW_COUNT                                                            0
// ACCESS__NRT_FCW_COUNT: r,w
// DESCR__NRT_FCW_COUNT: Die Anzahl der in der NRT-FCW-Leerliste noch verf�gbaren FCWs
#define IRTE_R5_REG_NRT_FCW_COUNT_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_DB_COUNT                                                                            0x00016424
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_DB_COUNT__MSK_NRT_DB_COUNT                                                              0x00000FFF
#define IRTE_R5_REG_NRT_DB_COUNT_SHFT_NRT_DB_COUNT                                                              0
// ACCESS__NRT_DB_COUNT: r,w
// DESCR__NRT_DB_COUNT: Die Anzahl der in der NRT-DB-Leerliste noch verf�gbaren Datenpuffer
#define IRTE_R5_REG_NRT_DB_COUNT_RST__VAL                                 0x00000000


#define IRTE_R5_REG_SRT_FCW_COUNT                                                                           0x00016428
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_SRT_FCW_COUNT__MSK_SRT_FCW_COUNT                                                            0x00000FFF
#define IRTE_R5_REG_SRT_FCW_COUNT_SHFT_SRT_FCW_COUNT                                                            0
// ACCESS__SRT_FCW_COUNT: r,w
// DESCR__SRT_FCW_COUNT: Die Anzahl der in der SRT-FCW-Leerliste noch verf�gbaren FCWs
#define IRTE_R5_REG_SRT_FCW_COUNT_RST__VAL                                0x00000000


#define IRTE_R5_REG_HOL_COUNT_CHA_SS0                                                                       0x0001642C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_CHA_SS0__MSK_HOL_CNT_CHA_SS0                                                      0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_CHA_SS0_SHFT_HOL_CNT_CHA_SS0                                                      0
// ACCESS__HOL_CNT_CHA_SS0: r,w
// DESCR__HOL_CNT_CHA_SS0: Die Anzahl der f�r das NRT-API CHA an SS0 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_CHA_SS0_RST__VAL                            0x00000000


#define IRTE_R5_REG_HOL_COUNT_CHA_SS1                                                                       0x00016430
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_CHA_SS1__MSK_HOL_CNT_CHA_SS1                                                      0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_CHA_SS1_SHFT_HOL_CNT_CHA_SS1                                                      0
// ACCESS__HOL_CNT_CHA_SS1: r,w
// DESCR__HOL_CNT_CHA_SS1: Die Anzahl der f�r das NRT-API CHA an SS1 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_CHA_SS1_RST__VAL                            0x00000000


#define IRTE_R5_REG_LIST_STATUS_CHA                                                                         0x00016434
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_CHA__MSK_LIST_STATUS                                                            0x000003FF
#define IRTE_R5_REG_LIST_STATUS_CHA_SHFT_LIST_STATUS                                                            0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am NRT-API-CHA. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_CHA_RST__VAL                              0x00000000


#define IRTE_R5_REG_HOL_COUNT_CHB_SS0                                                                       0x00016438
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_CHB_SS0__MSK_HOL_CNT_CHB_SS0                                                      0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_CHB_SS0_SHFT_HOL_CNT_CHB_SS0                                                      0
// ACCESS__HOL_CNT_CHB_SS0: r,w
// DESCR__HOL_CNT_CHB_SS0: Die Anzahl der f�r das NRT-API CHB an SS0 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_CHB_SS0_RST__VAL                            0x00000000


#define IRTE_R5_REG_HOL_COUNT_CHB_SS1                                                                       0x0001643C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_CHB_SS1__MSK_HOL_CNT_CHB_SS1                                                      0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_CHB_SS1_SHFT_HOL_CNT_CHB_SS1                                                      0
// ACCESS__HOL_CNT_CHB_SS1: r,w
// DESCR__HOL_CNT_CHB_SS1: Die Anzahl der f�r das NRT-API CHB an SS1 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_CHB_SS1_RST__VAL                            0x00000000


#define IRTE_R5_REG_LIST_STATUS_CHB                                                                         0x00016440
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_CHB__MSK_LIST_STATUS                                                            0x000003FF
#define IRTE_R5_REG_LIST_STATUS_CHB_SHFT_LIST_STATUS                                                            0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am NRT-API-CHB. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_CHB_RST__VAL                              0x00000000


#define IRTE_R5_REG_HOL_COUNT_P0                                                                            0x00016444
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_P0__MSK_HOL_CNT_                                                                  0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_P0_SHFT_HOL_CNT_                                                                  0
// ACCESS__HOL_CNT_: r,w
// DESCR__HOL_CNT_: Die Anzahl der f�r Port 0 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_P0_RST__VAL                                 0x00000000


#define IRTE_R5_REG_LIST_STATUS_P0                                                                          0x00016448
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_P0__MSK_LIST_STATUS                                                             0x000003FF
#define IRTE_R5_REG_LIST_STATUS_P0_SHFT_LIST_STATUS                                                             0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am Port 0. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_P0_RST__VAL                               0x00000000


#define IRTE_R5_REG_HOL_COUNT_P1                                                                            0x0001644C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_P1__MSK_HOL_CNT_                                                                  0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_P1_SHFT_HOL_CNT_                                                                  0
// ACCESS__HOL_CNT_: r,w
// DESCR__HOL_CNT_: Die Anzahl der f�r Port 1 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_P1_RST__VAL                                 0x00000000


#define IRTE_R5_REG_LIST_STATUS_P1                                                                          0x00016450
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_P1__MSK_LIST_STATUS                                                             0x000003FF
#define IRTE_R5_REG_LIST_STATUS_P1_SHFT_LIST_STATUS                                                             0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am Port 1. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_P1_RST__VAL                               0x00000000


#define IRTE_R5_REG_HOL_COUNT_P2                                                                            0x00016454
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_P2__MSK_HOL_CNT_                                                                  0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_P2_SHFT_HOL_CNT_                                                                  0
// ACCESS__HOL_CNT_: r,w
// DESCR__HOL_CNT_: Die Anzahl der f�r Port 2 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_P2_RST__VAL                                 0x00000000


#define IRTE_R5_REG_LIST_STATUS_P2                                                                          0x00016458
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_P2__MSK_LIST_STATUS                                                             0x000003FF
#define IRTE_R5_REG_LIST_STATUS_P2_SHFT_LIST_STATUS                                                             0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am Port 2. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_P2_RST__VAL                               0x00000000


#define IRTE_R5_REG_HOL_COUNT_P3                                                                            0x0001645C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_HOL_COUNT_P3__MSK_HOL_CNT_                                                                  0x00000FFF
#define IRTE_R5_REG_HOL_COUNT_P3_SHFT_HOL_CNT_                                                                  0
// ACCESS__HOL_CNT_: r,w
// DESCR__HOL_CNT_: Die Anzahl der f�r Port 3 in Gebrauch befindlichen Datenpuffer
#define IRTE_R5_REG_HOL_COUNT_P3_RST__VAL                                 0x00000000


#define IRTE_R5_REG_LIST_STATUS_P3                                                                          0x00016460
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_LIST_STATUS_P3__MSK_LIST_STATUS                                                             0x000003FF
#define IRTE_R5_REG_LIST_STATUS_P3_SHFT_LIST_STATUS                                                             0
// ACCESS__LIST_STATUS: r,w
// DESCR__LIST_STATUS: F�llstand der NRT-Sendeliste am Port 3. Jedem Bit ist dabei eine Priorit�t der Liste zugeordnet.�0�: keine Eintrag in der jeweiligen Warteschlange�1�: Eintrag / Eintr�ge in der jeweiligen Warteschlange
#define IRTE_R5_REG_LIST_STATUS_P3_RST__VAL                               0x00000000


#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST                                                     0x0001741C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_NO_TABLE_ENTRY                                 0x00400000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_NO_TABLE_ENTRY                                 22
// ACCESS__INT_NO_TABLE_ENTRY: r,w
// DESCR__INT_NO_TABLE_ENTRY: Die Sourceadresse konnte in die Adresstabelle nicht eingetragen werden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_NRT_DB_EMPTY                                       0x00200000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_NRT_DB_EMPTY                                       21
// ACCESS__NRT_DB_EMPTY: r,w
// DESCR__NRT_DB_EMPTY: Es sind keine Elemente in der NRT-DB-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_NRT_FCW_EMPTY                                      0x00100000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_NRT_FCW_EMPTY                                      20
// ACCESS__NRT_FCW_EMPTY: r,w
// DESCR__NRT_FCW_EMPTY: Es sind keine Elemente in der NRT-FCW-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_SRT_FCW_EMPTY                                      0x00080000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_SRT_FCW_EMPTY                                      19
// ACCESS__SRT_FCW_EMPTY: r,w
// DESCR__SRT_FCW_EMPTY: Es sind keine Elemente in der SRT-FCW-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_UNDERFLOW_NRT                                      0x00040000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_UNDERFLOW_NRT                                      18
// ACCESS__UNDERFLOW_NRT: r,w
// DESCR__UNDERFLOW_NRT: Die Elemente der NRT-FCW- oder NRT-DB-Leerliste fallen unter die parametrierte Schwelle
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_OVERFLOW_HOL                                       0x00020000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_OVERFLOW_HOL                                       17
// ACCESS__OVERFLOW_HOL: r,w
// DESCR__OVERFLOW_HOL: Die HOL-Schwelle eines Ports bzw. Kanals hat zugeschlagen.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INSTRUCTION_DONE                                   0x00010000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INSTRUCTION_DONE                                   16
// ACCESS__INSTRUCTION_DONE: r,w
// DESCR__INSTRUCTION_DONE: Der Auftrag an der Kommando-Schnittstelle wurde ausgef�hrt.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_TIME_STAMP                                     0x00008000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_TIME_STAMP                                     15
// ACCESS__INT_TIME_STAMP: r,w
// DESCR__INT_TIME_STAMP: Abspeichern des Sendezeitpunktes beim Versenden
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_HOST_ACCESS_ERROR                                  0x00004000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_HOST_ACCESS_ERROR                                  14
// ACCESS__HOST_ACCESS_ERROR: r,w
// DESCR__HOST_ACCESS_ERROR: Zugriffsverletzung am AHB / APB
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_SP_INT                                             0x00002000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_SP_INT                                             13
// ACCESS__SP_INT: r,w
// DESCR__SP_INT: Dieser Interrupt wird durch einen Schreibzugriff auf das Register Activate-SP-Interrupt ausgel�st.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_HP_INT                                             0x00001000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_HP_INT                                             12
// ACCESS__HP_INT: r,w
// DESCR__HP_INT: Dieser Interrupt wird durch einen Schreibzugriff auf das Register Activate-HP-Interrupt ausgel�st.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_TRIGGER_UNIT                                   0x00000400
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_TRIGGER_UNIT                                   10
// ACCESS__INT_TRIGGER_UNIT: r,w
// DESCR__INT_TRIGGER_UNIT: Monitor-Betrieb: bei K-Bus- / SC-Bus-FehlerTrigger-Betrieb: Triggerbedingung erf�llt
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_LINK_STATUS_CHANGE                                 0x00000200
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_LINK_STATUS_CHANGE                                 9
// ACCESS__LINK_STATUS_CHANGE: r,w
// DESCR__LINK_STATUS_CHANGE: An einem Port hat sich der Link Status ge�ndert
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_FATAL_NRTLIST_ERR                              0x00000100
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_FATAL_NRTLIST_ERR                              8
// ACCESS__INT_FATAL_NRTLIST_ERR: r,w
// DESCR__INT_FATAL_NRTLIST_ERR: In einem DMACW oder einer NRT-Listenstruktur ist ein fundamentaler Parametrierungsfehler (L�nge, Adresse) aufgetreten
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_RCV_CHB1                                       0x00000080
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_RCV_CHB1                                       7
// ACCESS__INT_RCV_CHB1: r,w
// DESCR__INT_RCV_CHB1: Die Rcv-DMACW-Kette von CHB SS1 ist fertig bearbeitet bzw. die Sendeliste von CHB SS1 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_SND_CHB1                                       0x00000040
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_SND_CHB1                                       6
// ACCESS__INT_SND_CHB1: r,w
// DESCR__INT_SND_CHB1: Ein Snd-DMACW von CHB SS1 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_RCV_CHB0                                       0x00000020
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_RCV_CHB0                                       5
// ACCESS__INT_RCV_CHB0: r,w
// DESCR__INT_RCV_CHB0: Die Rcv-DMACW-Kette von CHB SS0 ist fertig bearbeitet bzw. die Sendeliste von CHB SS0 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_SND_CHB0                                       0x00000010
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_SND_CHB0                                       4
// ACCESS__INT_SND_CHB0: r,w
// DESCR__INT_SND_CHB0: Ein Snd-DMACW von CHB SS0 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_RCV_CHA1                                       0x00000008
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_RCV_CHA1                                       3
// ACCESS__INT_RCV_CHA1: r,w
// DESCR__INT_RCV_CHA1: Die Rcv-DMACW-Kette von CHA SS1 ist fertig bearbeitet bzw. die Sendeliste von CHA SS1 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_SND_CHA1                                       0x00000004
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_SND_CHA1                                       2
// ACCESS__INT_SND_CHA1: r,w
// DESCR__INT_SND_CHA1: Ein Snd-DMACW von CHA SS1 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_RCV_CHA0                                       0x00000002
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_RCV_CHA0                                       1
// ACCESS__INT_RCV_CHA0: r,w
// DESCR__INT_RCV_CHA0: Die Rcv-DMACW-Kette von CHA SS0 ist fertig bearbeitet bzw. die Sendeliste von CHA SS0 ist leer,
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST__MSK_INT_SND_CHA0                                       0x00000001
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_SHFT_INT_SND_CHA0                                       0
// ACCESS__INT_SND_CHA0: r,w
// DESCR__INT_SND_CHA0: Ein Snd-DMACW von CHA SS0 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_HOST_RST__VAL          0x00000000


#define IRTE_R5_REG_EOI_IRQ0_REGISTER_HOST                                                                  0x00017420
// ACCESS__: ,w
// DESCR__: 
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_HOST__MSK_W                                                               0x0000000F
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_HOST_SHFT_W                                                               0
// ACCESS__W: ,w
// DESCR__W: Legt die Dauer der Deaktivierung des Interruptausgangs beim Schreiben auf dieses EOI-Register als Anzahl von 25MHz/50MHz Takten (FPGA/ASIC) fest. Mu� zur Deaktivierung jedes Interrupts geschrieben werden. Inaktivzeit  = (w+1)*20 ns. Nur �ber 32-Bit Zugriff beschreibbar.
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_HOST_RST__VAL                       0x00000000


#define IRTE_R5_REG_EOI_IRQ1_REGISTER_HOST                                                                  0x00017424
// ACCESS__: ,w
// DESCR__: 
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_HOST__MSK_W                                                               0x0000000F
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_HOST_SHFT_W                                                               0
// ACCESS__W: ,w
// DESCR__W: Legt die Dauer der Deaktivierung des Interruptausgangs beim Schreiben auf dieses EOI-Register als Anzahl von 25MHz/50MHz Takten (FPGA/ASIC) fest. Mu� zur Deaktivierung jedes Interrupts geschrieben werden. Inaktivzeit  = (w+1)*20 ns. Nur �ber 32-Bit Zugriff beschreibbar.
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_HOST_RST__VAL                       0x00000000


#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH                                                   0x00017444
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_NO_TABLE_ENTRY                               0x00400000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_NO_TABLE_ENTRY                               22
// ACCESS__INT_NO_TABLE_ENTRY: r,w
// DESCR__INT_NO_TABLE_ENTRY: Die Sourceadresse konnte in die Adresstabelle nicht eingetragen werden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_NRT_DB_EMPTY                                     0x00200000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_NRT_DB_EMPTY                                     21
// ACCESS__NRT_DB_EMPTY: r,w
// DESCR__NRT_DB_EMPTY: Es sind keine Elemente in der NRT-DB-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_NRT_FCW_EMPTY                                    0x00100000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_NRT_FCW_EMPTY                                    20
// ACCESS__NRT_FCW_EMPTY: r,w
// DESCR__NRT_FCW_EMPTY: Es sind keine Elemente in der NRT-FCW-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_SRT_FCW_EMPTY                                    0x00080000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_SRT_FCW_EMPTY                                    19
// ACCESS__SRT_FCW_EMPTY: r,w
// DESCR__SRT_FCW_EMPTY: Es sind keine Elemente in der SRT-FCW-Leerliste mehr vorhanden.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_UNDERFLOW_NRT                                    0x00040000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_UNDERFLOW_NRT                                    18
// ACCESS__UNDERFLOW_NRT: r,w
// DESCR__UNDERFLOW_NRT: Die Elemente der NRT-FCW- oder NRT-DB-Leerliste fallen unter die parametrierte Schwelle
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_OVERFLOW_HOL                                     0x00020000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_OVERFLOW_HOL                                     17
// ACCESS__OVERFLOW_HOL: r,w
// DESCR__OVERFLOW_HOL: Die HOL-Schwelle eines Ports bzw. Kanals hat zugeschlagen.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INSTRUCTION_DONE                                 0x00010000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INSTRUCTION_DONE                                 16
// ACCESS__INSTRUCTION_DONE: r,w
// DESCR__INSTRUCTION_DONE: Der Auftrag an der Kommando-Schnittstelle wurde ausgef�hrt.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_TIME_STAMP                                   0x00008000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_TIME_STAMP                                   15
// ACCESS__INT_TIME_STAMP: r,w
// DESCR__INT_TIME_STAMP: Abspeichern des Sendezeitpunktes beim Versenden
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_HOST_ACCESS_ERROR                                0x00004000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_HOST_ACCESS_ERROR                                14
// ACCESS__HOST_ACCESS_ERROR: r,w
// DESCR__HOST_ACCESS_ERROR: Zugriffsverletzung am AHB / APB
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_SP_INT                                           0x00002000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_SP_INT                                           13
// ACCESS__SP_INT: r,w
// DESCR__SP_INT: Dieser Interrupt wird durch einen Schreibzugriff auf das Register Activate-SP-Interrupt ausgel�st.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_HP_INT                                           0x00001000
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_HP_INT                                           12
// ACCESS__HP_INT: r,w
// DESCR__HP_INT: Dieser Interrupt wird durch einen Schreibzugriff auf das Register Activate-HP-Interrupt ausgel�st.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_TRIGGER_UNIT                                 0x00000400
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_TRIGGER_UNIT                                 10
// ACCESS__INT_TRIGGER_UNIT: r,w
// DESCR__INT_TRIGGER_UNIT: Monitor-Betrieb: bei K-Bus- / SC-Bus-FehlerTrigger-Betrieb: Triggerbedingung erf�llt
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_LINK_STATUS_CHANGE                               0x00000200
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_LINK_STATUS_CHANGE                               9
// ACCESS__LINK_STATUS_CHANGE: r,w
// DESCR__LINK_STATUS_CHANGE: An einem Port hat sich der Link Status ge�ndert
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_FATAL_NRTLIST_ERR                            0x00000100
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_FATAL_NRTLIST_ERR                            8
// ACCESS__INT_FATAL_NRTLIST_ERR: r,w
// DESCR__INT_FATAL_NRTLIST_ERR: In einem DMACW oder einer NRT-Listenstruktur ist ein fundamentaler Parametrierungsfehler (L�nge, Adresse) aufgetreten
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_RCV_CHB1                                     0x00000080
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_RCV_CHB1                                     7
// ACCESS__INT_RCV_CHB1: r,w
// DESCR__INT_RCV_CHB1: Die Rcv-DMACW-Kette von CHB SS1 ist fertig bearbeitet bzw. die Sendeliste von CHB SS1 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_SND_CHB1                                     0x00000040
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_SND_CHB1                                     6
// ACCESS__INT_SND_CHB1: r,w
// DESCR__INT_SND_CHB1: Ein Snd-DMACW von CHB SS1 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_RCV_CHB0                                     0x00000020
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_RCV_CHB0                                     5
// ACCESS__INT_RCV_CHB0: r,w
// DESCR__INT_RCV_CHB0: Die Rcv-DMACW-Kette von CHB SS0 ist fertig bearbeitet bzw. die Sendeliste von CHB SS0 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_SND_CHB0                                     0x00000010
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_SND_CHB0                                     4
// ACCESS__INT_SND_CHB0: r,w
// DESCR__INT_SND_CHB0: Ein Snd-DMACW von CHB SS0 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_RCV_CHA1                                     0x00000008
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_RCV_CHA1                                     3
// ACCESS__INT_RCV_CHA1: r,w
// DESCR__INT_RCV_CHA1: Die Rcv-DMACW-Kette von CHA SS1 ist fertig bearbeitet bzw. die Sendeliste von CHA SS1 ist leer.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_SND_CHA1                                     0x00000004
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_SND_CHA1                                     2
// ACCESS__INT_SND_CHA1: r,w
// DESCR__INT_SND_CHA1: Ein Snd-DMACW von CHA SS1 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_RCV_CHA0                                     0x00000002
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_RCV_CHA0                                     1
// ACCESS__INT_RCV_CHA0: r,w
// DESCR__INT_RCV_CHA0: Die Rcv-DMACW-Kette von CHA SS0 ist fertig bearbeitet bzw. die Sendeliste von CHA SS0 ist leer,
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH__MSK_INT_SND_CHA0                                     0x00000001
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_SHFT_INT_SND_CHA0                                     0
// ACCESS__INT_SND_CHA0: r,w
// DESCR__INT_SND_CHA0: Ein Snd-DMACW von CHA SS0 ist fertig bearbeitet.
#define IRTE_R5_REG_INTERRUPT_REQUEST_REGISTER_NRT_SWITCH_RST__VAL        0x00000000


#define IRTE_R5_REG_EOI_IRQ0_REGISTER_SWITCH                                                                0x00017448
// ACCESS__: ,w
// DESCR__: 
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_SWITCH__MSK_W                                                             0x0000000F
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_SWITCH_SHFT_W                                                             0
// ACCESS__W: ,w
// DESCR__W: Legt die Dauer der Deaktivierung des Interruptausgangs beim Schreiben auf dieses EOI-Register als Anzahl von 25MHz/50MHz Takten (FPGA/ASIC) fest. Mu� zur Deaktivierung jedes Interrupts geschrieben werden. Inaktivzeit  = (w+1)*20 ns. Nur �ber 32-Bit Zugriff beschreibbar.
#define IRTE_R5_REG_EOI_IRQ0_REGISTER_SWITCH_RST__VAL                     0x00000000


#define IRTE_R5_REG_EOI_IRQ1_REGISTER_SWITCH                                                                0x0001744C
// ACCESS__: ,w
// DESCR__: 
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_SWITCH__MSK_W                                                             0x0000000F
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_SWITCH_SHFT_W                                                             0
// ACCESS__W: ,w
// DESCR__W: Legt die Dauer der Deaktivierung des Interruptausgangs beim Schreiben auf dieses EOI-Register als Anzahl von 25MHz/50MHz Takten (FPGA/ASIC) fest. Mu� zur Deaktivierung jedes Interrupts geschrieben werden. Inaktivzeit  = (w+1)*20 ns. Nur �ber 32-Bit Zugriff beschreibbar.
#define IRTE_R5_REG_EOI_IRQ1_REGISTER_SWITCH_RST__VAL                     0x00000000


#define IRTE_R5_REG_IRT_DA_31_0                                                                             0x00019014
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DA_31_0__MSK_IRT_DEST_ADDRESS                                                           0xFFFFFFFF
#define IRTE_R5_REG_IRT_DA_31_0_SHFT_IRT_DEST_ADDRESS                                                           0
// ACCESS__IRT_DEST_ADDRESS: r,w
// DESCR__IRT_DEST_ADDRESS: IRT-Ziel-Adresse, die als Default-Adresse beim Versenden eines Ersatztelegramms (infolge eines ausgebliebenen IRT-Telegramms) eingesetzt wird.
#define IRTE_R5_REG_IRT_DA_31_0_RST__VAL                                  0x00000000


#define IRTE_R5_REG_IRT_DA_47_32                                                                            0x00019018
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_DA_47_32__MSK_IRT_DEST_ADDRESS                                                          0x0000FFFF
#define IRTE_R5_REG_IRT_DA_47_32_SHFT_IRT_DEST_ADDRESS                                                          0
// ACCESS__IRT_DEST_ADDRESS: r,w
// DESCR__IRT_DEST_ADDRESS: IRT-Ziel-Adresse, die als Default-Adresse beim Versenden eines Ersatztelegramms (infolge eines ausgebliebenen IRT-Telegramms) eingesetzt wird.
#define IRTE_R5_REG_IRT_DA_47_32_RST__VAL                                 0x00000000


#define IRTE_R5_REG_SA_31_0                                                                                 0x0001901C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_SA_31_0__MSK_SA                                                                             0xFFFFFFFF
#define IRTE_R5_REG_SA_31_0_SHFT_SA                                                                             0
// ACCESS__SA: r,w
// DESCR__SA: Eigene Stationsadresse
#define IRTE_R5_REG_SA_31_0_RST__VAL                                      0x00000000


#define IRTE_R5_REG_SA_47_32                                                                                0x00019020
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_SA_47_32__MSK_SA                                                                            0x0000FFFF
#define IRTE_R5_REG_SA_47_32_SHFT_SA                                                                            0
// ACCESS__SA: r,w
// DESCR__SA: Eigene Stationsadresse
#define IRTE_R5_REG_SA_47_32_RST__VAL                                     0x00000000


#define IRTE_R5_REG_IRT_CTRL_BASE                                                                           0x00019024
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_IRT_CTRL_BASE__MSK_IRT_CTRL_BASE                                                            0x001FFFFF
#define IRTE_R5_REG_IRT_CTRL_BASE_SHFT_IRT_CTRL_BASE                                                            0
// ACCESS__IRT_CTRL_BASE: r,w
// DESCR__IRT_CTRL_BASE: Adresse, die im K-RAM auf den Speicherbereich zeigt, im dem die Zeiger auf das erste zu sendenden bzw. zu empfangenden IRT-FCW abgelegt sind.(zum Aufbau diese Struktur im K-RAM, siehe Fehler! Verweisquelle konnte nicht gefunden werden. �IRT-Listen�)
#define IRTE_R5_REG_IRT_CTRL_BASE_RST__VAL                                0x00000000


#define IRTE_R5_REG_NRT_CTRL_BASE                                                                           0x00019028
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_CTRL_BASE__MSK_NRT_CTRL_BASIC_PTR                                                       0x001FFFFF
#define IRTE_R5_REG_NRT_CTRL_BASE_SHFT_NRT_CTRL_BASIC_PTR                                                       0
// ACCESS__NRT_CTRL_BASIC_PTR: r,w
// DESCR__NRT_CTRL_BASIC_PTR: Zeiger ins K-RAM, auf einen Bereich, in dem die Port- und NRT-API-spezifischen Zeiger auf den Beginn der priorisierten Sendeliste enthalten sind.
#define IRTE_R5_REG_NRT_CTRL_BASE_RST__VAL                                0x00000000


#define IRTE_R5_REG_FREE_CTRL_BASE                                                                          0x0001902C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_FREE_CTRL_BASE__MSK_FREE_CTRL_BASIC_PTR                                                     0x001FFFFF
#define IRTE_R5_REG_FREE_CTRL_BASE_SHFT_FREE_CTRL_BASIC_PTR                                                     0
// ACCESS__FREE_CTRL_BASIC_PTR: r,w
// DESCR__FREE_CTRL_BASIC_PTR: Zeiger ins K-RAM, auf einen Bereich, in dem die Zeiger auf den Beginn der NRT-FCW-, SRT-FCW und NRT-DB-Leerlisten enthalten sind.
#define IRTE_R5_REG_FREE_CTRL_BASE_RST__VAL                               0x00000000


#define IRTE_R5_REG_ACW_LIST_BASE                                                                           0x00019030
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_ACW_LIST_BASE__MSK_ACW_LIST__BASE                                                           0x001FFFFF
#define IRTE_R5_REG_ACW_LIST_BASE_SHFT_ACW_LIST__BASE                                                           0
// ACCESS__ACW_LIST__BASE: r,w
// DESCR__ACW_LIST__BASE: Basisadresse auf den Beginn der ACW-Liste
#define IRTE_R5_REG_ACW_LIST_BASE_RST__VAL                                0x00000000


#define IRTE_R5_REG_EN_ACW_OFFSET                                                                           0x00019034
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_EN_ACW_OFFSET__MSK_EN_ACW_OFFSET                                                            0x0000FFFF
#define IRTE_R5_REG_EN_ACW_OFFSET_SHFT_EN_ACW_OFFSET                                                            0
// ACCESS__EN_ACW_OFFSET: r,w
// DESCR__EN_ACW_OFFSET: Auswahl der Bits innerhalb der Frame-ID, zur Bestimmung der Offset-Adresse auf eine ACW-Empfangs-Liste.Achtung: Die Bits m�ssen zusammenh�ngend ab Bit 0 im Register liegen.
#define IRTE_R5_REG_EN_ACW_OFFSET_RST__VAL                                0x00000000


#define IRTE_R5_REG_SWITCH_CONTROL                                                                          0x00019038
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_PORT3_ENABLE                                                            0x00008000
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_PORT3_ENABLE                                                            15
// ACCESS__PORT3_ENABLE: r,w
// DESCR__PORT3_ENABLE: Freigabe von Port 3
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_PORT2_ENABLE                                                            0x00004000
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_PORT2_ENABLE                                                            14
// ACCESS__PORT2_ENABLE: r,w
// DESCR__PORT2_ENABLE: Freigabe von Port 2
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_PORT1_ENABLE                                                            0x00002000
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_PORT1_ENABLE                                                            13
// ACCESS__PORT1_ENABLE: r,w
// DESCR__PORT1_ENABLE: Freigabe von Port 1
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_PORT0_ENABLE                                                            0x00001000
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_PORT0_ENABLE                                                            12
// ACCESS__PORT0_ENABLE: r,w
// DESCR__PORT0_ENABLE: Freigabe von Port 0
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_CYCLESYNC_ENABLE                                                        0x00000800
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_CYCLESYNC_ENABLE                                                        11
// ACCESS__CYCLESYNC_ENABLE: r,w
// DESCR__CYCLESYNC_ENABLE: Freigabe der Zyklussynchronisation
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_INTRCTRL_ENABLE                                                         0x00000400
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_INTRCTRL_ENABLE                                                         10
// ACCESS__INTRCTRL_ENABLE: r,w
// DESCR__INTRCTRL_ENABLE: Freigabe des Interrupt-Controllers
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_TRIGGERUNIT_ENABLE                                                      0x00000200
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_TRIGGERUNIT_ENABLE                                                      9
// ACCESS__TRIGGERUNIT_ENABLE: r,w
// DESCR__TRIGGERUNIT_ENABLE: Freigabe der Trigger-Unit
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_NRTCTRL_ENABLE                                                          0x00000100
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_NRTCTRL_ENABLE                                                          8
// ACCESS__NRTCTRL_ENABLE: r,w
// DESCR__NRTCTRL_ENABLE: Freigabe der NRT-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_IRTCTRL_ENABLE                                                          0x00000080
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_IRTCTRL_ENABLE                                                          7
// ACCESS__IRTCTRL_ENABLE: r,w
// DESCR__IRTCTRL_ENABLE: Freigabe der IRT-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_SRTCTRL_ENABLE                                                          0x00000040
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_SRTCTRL_ENABLE                                                          6
// ACCESS__SRTCTRL_ENABLE: r,w
// DESCR__SRTCTRL_ENABLE: Freigabe der SRT-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_KRAMCTRL_ENABLE                                                         0x00000020
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_KRAMCTRL_ENABLE                                                         5
// ACCESS__KRAMCTRL_ENABLE: r,w
// DESCR__KRAMCTRL_ENABLE: Freigabe der K-RAM-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_TRCCTRL_ENABLE                                                          0x00000010
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_TRCCTRL_ENABLE                                                          4
// ACCESS__TRCCTRL_ENABLE: r,w
// DESCR__TRCCTRL_ENABLE: Freigabe der IRT-Trace-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_STATCTRL_ENABLE                                                         0x00000008
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_STATCTRL_ENABLE                                                         3
// ACCESS__STATCTRL_ENABLE: r,w
// DESCR__STATCTRL_ENABLE: Freigabe der Statistik-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_SMICTRL_ENABLE                                                          0x00000004
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_SMICTRL_ENABLE                                                          2
// ACCESS__SMICTRL_ENABLE: r,w
// DESCR__SMICTRL_ENABLE: Freigabe der PHY-/SMI-Control
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_SOFT_RESET                                                              0x00000002
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_SOFT_RESET                                                              1
// ACCESS__SOFT_RESET: r,w
// DESCR__SOFT_RESET: �0�: Bei der Umschaltung in den Konfigurationsmodus (Bit 0)      werden die Parameter-Register nicht zur�ckgesetzt.�1�: Bei der Umschaltung in den Konfigurationsmodus (Bit 0)      werden alle Parameter-Register zur�ckgesetzt.
#define IRTE_R5_REG_SWITCH_CONTROL__MSK_SWITCH_ENABLE                                                           0x00000001
#define IRTE_R5_REG_SWITCH_CONTROL_SHFT_SWITCH_ENABLE                                                           0
// ACCESS__SWITCH_ENABLE: r,w
// DESCR__SWITCH_ENABLE: �0�: Switch-Makro befindet sich im Konfigurationsmodus�1�: Switch-Makro befindet sich im Betriebsmodus
#define IRTE_R5_REG_SWITCH_CONTROL_RST__VAL                               0x00000000


#define IRTE_R5_REG_MIN_IDLE_TIME                                                                           0x0001903C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_MIN_IDLE_TIME__MSK_MIN_IDLE_TIME                                                            0xFFFFFFFF
#define IRTE_R5_REG_MIN_IDLE_TIME_SHFT_MIN_IDLE_TIME                                                            0
// ACCESS__MIN_IDLE_TIME: r,w
// DESCR__MIN_IDLE_TIME: Mindestwarte-Zeit in Systemtakten, nach der das n�chste Telegramm gesendet bzw. empfangen werden darf. Alle IRT-Telegramme, die innerhalb der Mindestwarte-Zeit versendet werden sollen, gehen verloren. Achtung: Bei einer Einstellung von kleineren Werten ist die �berwachung der Sendezeit bei IRT-Kommunikation nicht mehr gew�hrleistet25 MHz: 100MBit   Wert  = 08H10MBit   Wert  = C4H50 MHz: 100MBit   Wert  = 1DH10MBit   Wert  = 196H
#define IRTE_R5_REG_MIN_IDLE_TIME_RST__VAL                                0x00000000


#define IRTE_R5_REG_MAC_EMPTY_COUNT                                                                         0x00019040
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_MAC_EMPTY_COUNT__MSK_MAC_EMPTY_COUNT                                                        0x0000FFFF
#define IRTE_R5_REG_MAC_EMPTY_COUNT_SHFT_MAC_EMPTY_COUNT                                                        0
// ACCESS__MAC_EMPTY_COUNT: r,w
// DESCR__MAC_EMPTY_COUNT: Anzahl der Systemtakte, die maximal gewartet werden m�ssen nachdem die MAC �Fifo-Halffull� meldet, um selbst�ndig durch die Sende-HW der MAC Dummy-Telegramm-daten zu �bergeben. Dadurch wird ein Abriss des Telegrammstroms verhindert.25 MHz: 100MBit   Wert  = 8H10MBit   Wert  = xH50 MHz: 100MBit   Wert  = 10H10MBit   Wert  = xH
#define IRTE_R5_REG_MAC_EMPTY_COUNT_RST__VAL                              0x00000000


#define IRTE_R5_REG_NRT_TRANSFER_CONTROL                                                                    0x00019044
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_TRANSFER_CONTROL__MSK_NRT_CT_DELAY                                                      0x0000007E
#define IRTE_R5_REG_NRT_TRANSFER_CONTROL_SHFT_NRT_CT_DELAY                                                      1
// ACCESS__NRT_CT_DELAY: r,w
// DESCR__NRT_CT_DELAY: Anzahl der Eintr�ge in den NRT-Datenpuffern, bevor die Daten den NRT-Sendern �bergeben werden.(1 Eintrag  = 8 Byte)
#define IRTE_R5_REG_NRT_TRANSFER_CONTROL__MSK_TAG_MODE                                                          0x00000001
#define IRTE_R5_REG_NRT_TRANSFER_CONTROL_SHFT_TAG_MODE                                                          0
// ACCESS__TAG_MODE: r,w
// DESCR__TAG_MODE: �0�: beim Empfang Auswerten des Tags, ungetaggte Telegramme werden entsprechend der Adresstabelle verwaltet.�1�: ungetaggte empfangene Telegramme werden mit dem Default-Tag des Empfangsports versehen.
#define IRTE_R5_REG_NRT_TRANSFER_CONTROL_RST__VAL                         0x00000000


#define IRTE_R5_REG_NRT_SAFETYMARGIN                                                                        0x00019048
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_NRT_SAFETYMARGIN__MSK_NRT_SAFETYMARGIN                                                      0xFFFFFFFF
#define IRTE_R5_REG_NRT_SAFETYMARGIN_SHFT_NRT_SAFETYMARGIN                                                      0
// ACCESS__NRT_SAFETYMARGIN: r,w
// DESCR__NRT_SAFETYMARGIN: Aufschlag, der f�r die Berechnung der Sendezeit der NRT-/SRT-Telegramme f�r den aktuellen Zyklus bei 10/100 MBit-�bertragung mitber�cksichtigt werden muss (beinhaltet: Idle-Time, Preambel, MAC-Durchlaufzeit und Steuerwerk-Bearbeitungszeit).Der Wert ist in 10ns Cycle-Time-Intervallen anzugeben:100MBit   Wert  = A0H  10MBit   Wert  = 640H
#define IRTE_R5_REG_NRT_SAFETYMARGIN_RST__VAL                             0x00000000


#define IRTE_R5_REG_MONITOR_CONTROL                                                                         0x0001904C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_MONITOR_CONTROL__MSK_DESTINATION_PORTS                                                      0x0000003F
#define IRTE_R5_REG_MONITOR_CONTROL_SHFT_DESTINATION_PORTS                                                      0
// ACCESS__DESTINATION_PORTS: r,w
// DESCR__DESTINATION_PORTS: Spezifikation des Beobachterports. Destination-Port  = Aufbau wie in der UCMC-Adresstabelle0,1   : lokalen Kan�le A und B2...5 : Ethernet-Ports
#define IRTE_R5_REG_MONITOR_CONTROL_RST__VAL                              0x00000000


#define IRTE_R5_REG_STATISTIC_CTRL_BASE                                                                     0x00019050
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_STATISTIC_CTRL_BASE__MSK_STATISTIC_CTRL_BASE_PTR                                            0x001FFFFF
#define IRTE_R5_REG_STATISTIC_CTRL_BASE_SHFT_STATISTIC_CTRL_BASE_PTR                                            0
// ACCESS__STATISTIC_CTRL_BASE_PTR: r,w
// DESCR__STATISTIC_CTRL_BASE_PTR: Zeiger ins K-RAM, auf einen Bereich, ab dem die Port-spezifischen Statistikz�hler abgelegt sind.
#define IRTE_R5_REG_STATISTIC_CTRL_BASE_RST__VAL                          0x00000000


#define IRTE_R5_REG_SWITCH_SETUP                                                                            0x00019054
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_SWITCH_SETUP__MSK_NRT_RCVBUFFER_DISCHARGE_MODE                                              0x00000020
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_NRT_RCVBUFFER_DISCHARGE_MODE                                              5
// ACCESS__NRT_RCVBUFFER_DISCHARGE_MODE: r,w
// DESCR__NRT_RCVBUFFER_DISCHARGE_MODE: �0�: Der Receive-Buffer wird bereits w�hrend des NRT-Transfers      freigegeben.�1�: Der Receive-Buffer wird erst nach dem NRT-Transfer       freigegeben.
#define IRTE_R5_REG_SWITCH_SETUP__MSK_NRT_RCV_API_BUFFER_MODE                                                   0x00000010
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_NRT_RCV_API_BUFFER_MODE                                                   4
// ACCESS__NRT_RCV_API_BUFFER_MODE: r,w
// DESCR__NRT_RCV_API_BUFFER_MODE: Vorgehensweise bei zu kleinen bereitgestellten DMACW-Empfangs-Datenpuffern:�0�: �Transfer-only� solange die DMACW-Kette durchsuchen, bis ein Datenpuffer     passender L�nge gefunden wird. Alle anderen Puffer mit Result-     Status �DMACW-Datenpuffer zu klein� der SW zur�ckgeben.�1�: �Transfer-always� so viele Telegrammdaten wie m�glich in den Datenpuffer ein      tragen, die restlichen Daten verwerfen und den DMACW-      Datenpuffer mit Result-Status �DMACW-Datenpuffer zu klein�      der SW zur�ckgeben.
#define IRTE_R5_REG_SWITCH_SETUP__MSK_NRT_SND_API_LW_REACTION                                                   0x00000008
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_NRT_SND_API_LW_REACTION                                                   3
// ACCESS__NRT_SND_API_LW_REACTION: r,w
// DESCR__NRT_SND_API_LW_REACTION: Handhabung von NRT-Auftr�gen bei erreichter Low-Water-Mark am NRT-Sende-API:�0�: wiederholen, wenn Low-Water-Mark unterschritten�1�: verwerfen solange Low-Water-Mark unterschritten
#define IRTE_R5_REG_SWITCH_SETUP__MSK_IRT_DMA_ACCESS                                                            0x00000004
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_IRT_DMA_ACCESS                                                            2
// ACCESS__IRT_DMA_ACCESS: r,w
// DESCR__IRT_DMA_ACCESS: DMA-Transfer der synchronen API-Daten �ber:�0�: K-Bus�1�: IDA-Bus
#define IRTE_R5_REG_SWITCH_SETUP__MSK_MAC_CHARGE_MODE                                                           0x00000002
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_MAC_CHARGE_MODE                                                           1
// ACCESS__MAC_CHARGE_MODE: r,w
// DESCR__MAC_CHARGE_MODE: Lade-Modus der MAC:�0�: Slow-Mode (�MAC-Half-Full� wird beachtet)�1�: Quick-Mode (�MAC-Half-Full� wird nicht beachtet)
#define IRTE_R5_REG_SWITCH_SETUP__MSK_NRT_API_ACCESS                                                            0x00000001
#define IRTE_R5_REG_SWITCH_SETUP_SHFT_NRT_API_ACCESS                                                            0
// ACCESS__NRT_API_ACCESS: r,w
// DESCR__NRT_API_ACCESS: �0�: DMA-Sende- und DMA-Empfangs-Transfers arbeiten      �berlappend.�1�: DMA-Sende- und DMA-Empfangs-Transfers arbeiten      separat (nacheinander).
#define IRTE_R5_REG_SWITCH_SETUP_RST__VAL                                 0x00000000


#define IRTE_R5_REG_TRIGGER_CONTROL                                                                         0x0001A000
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_ENABLE_EXTERNAL_INTERRUPT                                              0x00000600
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_ENABLE_EXTERNAL_INTERRUPT                                              9
// ACCESS__ENABLE_EXTERNAL_INTERRUPT: r,w
// DESCR__ENABLE_EXTERNAL_INTERRUPT: 00 : kein zus�tzlicher Interrupt-Puls am Pin �int_new_entry�01 : Interrupt-Puls der Trace-Unit wird aufgeschaltet10 : Interrupt-Puls der Trigger-Unit wird aufgeschaltet11 : kein zus�tzlicher Interrupt-Puls am Pin �int_new_entry�
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_BYTEENABLE                                                  0x00000100
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_BYTEENABLE                                                  8
// ACCESS__TRIGGER_ON_BYTEENABLE: r,w
// DESCR__TRIGGER_ON_BYTEENABLE: Byteenablemuster als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_LOCK_CLASS                                                  0x00000080
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_LOCK_CLASS                                                  7
// ACCESS__TRIGGER_ON_LOCK_CLASS: r,w
// DESCR__TRIGGER_ON_LOCK_CLASS: Lock-Klasse als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_WRITE                                                       0x00000040
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_WRITE                                                       6
// ACCESS__TRIGGER_ON_WRITE: r,w
// DESCR__TRIGGER_ON_WRITE: Schreibvorgang als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_READ                                                        0x00000020
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_READ                                                        5
// ACCESS__TRIGGER_ON_READ: r,w
// DESCR__TRIGGER_ON_READ: Lesevorgang als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_MASTER                                                      0x00000010
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_MASTER                                                      4
// ACCESS__TRIGGER_ON_MASTER: r,w
// DESCR__TRIGGER_ON_MASTER: Busteilnehmer als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_WRITEDATA                                                   0x00000008
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_WRITEDATA                                                   3
// ACCESS__TRIGGER_ON_WRITEDATA: r,w
// DESCR__TRIGGER_ON_WRITEDATA: Datenvergleich als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_TRIGGER_ON_ADDRESS                                                     0x00000004
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_TRIGGER_ON_ADDRESS                                                     2
// ACCESS__TRIGGER_ON_ADDRESS: r,w
// DESCR__TRIGGER_ON_ADDRESS: Adressvergleich als Triggerbedingung selektiert
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_BUS_SELECT                                                             0x00000002
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_BUS_SELECT                                                             1
// ACCESS__BUS_SELECT: r,w
// DESCR__BUS_SELECT: 0 : triggern auf K-Bus, 1 : triggert auf IDA-Bus
#define IRTE_R5_REG_TRIGGER_CONTROL__MSK_MODE                                                                   0x00000001
#define IRTE_R5_REG_TRIGGER_CONTROL_SHFT_MODE                                                                   0
// ACCESS__MODE: r,w
// DESCR__MODE: 0 : Monitor-Betrieb : meldet K-Bus und SC-Bus-Adressfehler1 : Trigger-Betrieb  : meldet Eintreten der Triggerbedingungen
#define IRTE_R5_REG_TRIGGER_CONTROL_RST__VAL                              0x00000000


#define IRTE_R5_REG_TRIGGER_ADDRESS_MASK                                                                    0x0001A004
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_ADDRESS_MASK__MSK_ADDRESS_MASK                                                      0x001FFFFF
#define IRTE_R5_REG_TRIGGER_ADDRESS_MASK_SHFT_ADDRESS_MASK                                                      0
// ACCESS__ADDRESS_MASK: r,w
// DESCR__ADDRESS_MASK: Maske, mit der Busadresse und Vergleichswert und-verkn�pft werden
#define IRTE_R5_REG_TRIGGER_ADDRESS_MASK_RST__VAL                         0x00000000


#define IRTE_R5_REG_TRIGGER_UPPER_DATA_MASK                                                                 0x0001A00C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_UPPER_DATA_MASK__MSK_UPPER_DATA_MASK                                                0xFFFFFFFF
#define IRTE_R5_REG_TRIGGER_UPPER_DATA_MASK_SHFT_UPPER_DATA_MASK                                                0
// ACCESS__UPPER_DATA_MASK: r,w
// DESCR__UPPER_DATA_MASK: Maske, mit der Busdaten und Vergleichswert und-verkn�pft werden
#define IRTE_R5_REG_TRIGGER_UPPER_DATA_MASK_RST__VAL                      0x00000000


#define IRTE_R5_REG_TRIGGER_ADDRESS                                                                         0x0001A400
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_ADDRESS__MSK_TRIGGER_ADDRESS                                                        0x001FFFFF
#define IRTE_R5_REG_TRIGGER_ADDRESS_SHFT_TRIGGER_ADDRESS                                                        0
// ACCESS__TRIGGER_ADDRESS: r,w
// DESCR__TRIGGER_ADDRESS: Enth�lt Adresse des den Trigger ausl�senden Buszugriffs bzw. als Triggerbedingung den Vergleichswert (8-Byte-aligned).
#define IRTE_R5_REG_TRIGGER_ADDRESS_RST__VAL                              0x00000000


#define IRTE_R5_REG_TRIGGER_UPPER_DATA                                                                      0x0001A408
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_UPPER_DATA__MSK_TRIGGER_UPPER_DATA                                                  0xFFFFFFFF
#define IRTE_R5_REG_TRIGGER_UPPER_DATA_SHFT_TRIGGER_UPPER_DATA                                                  0
// ACCESS__TRIGGER_UPPER_DATA: r,w
// DESCR__TRIGGER_UPPER_DATA: Enth�lt Daten des den Trigger ausl�senden Buszugriffs bzw. als Triggerbedingung den Vergleichswert (nur Write-Daten)
#define IRTE_R5_REG_TRIGGER_UPPER_DATA_RST__VAL                           0x00000000


#define IRTE_R5_REG_TRIGGER_INFO                                                                            0x0001A40C
// ACCESS__: r,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_INFO__MSK_SC_BUS_ADDRESSERROR                                                       0x00200000
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_SC_BUS_ADDRESSERROR                                                       21
// ACCESS__SC_BUS_ADDRESSERROR: r,w
// DESCR__SC_BUS_ADDRESSERROR: 1: im Monitor-Betrieb wurde ein SC-Bus-Adressfehler gemeldet
#define IRTE_R5_REG_TRIGGER_INFO__MSK_K_BUS_ADDRESSERROR                                                        0x00100000
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_K_BUS_ADDRESSERROR                                                        20
// ACCESS__K_BUS_ADDRESSERROR: r,w
// DESCR__K_BUS_ADDRESSERROR: 1: im Monitor-Betrieb wurde ein K-Bus-Adressfehler gemeldet
#define IRTE_R5_REG_TRIGGER_INFO__MSK_BYTEENABLE                                                                0x000FF000
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_BYTEENABLE                                                                12
// ACCESS__BYTEENABLE: r,w
// DESCR__BYTEENABLE: Byteenable
#define IRTE_R5_REG_TRIGGER_INFO__MSK_LOCK_CLASS                                                                0x00000F00
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_LOCK_CLASS                                                                8
// ACCESS__LOCK_CLASS: r,w
// DESCR__LOCK_CLASS: Lockklasse
#define IRTE_R5_REG_TRIGGER_INFO__MSK_WRITE                                                                     0x00000080
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_WRITE                                                                     7
// ACCESS__WRITE: r,w
// DESCR__WRITE: Schreibzugriff
#define IRTE_R5_REG_TRIGGER_INFO__MSK_READ                                                                      0x00000040
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_READ                                                                      6
// ACCESS__READ: r,w
// DESCR__READ: Lesezugriff
#define IRTE_R5_REG_TRIGGER_INFO__MSK_BUSMASTER                                                                 0x0000003F
#define IRTE_R5_REG_TRIGGER_INFO_SHFT_BUSMASTER                                                                 0
// ACCESS__BUSMASTER: r,w
// DESCR__BUSMASTER: Nummer des den Zugriff ausl�senden BusmastersIDA-Bus selektiert : 0  :  Ethernet-Port 0 1  :  Ethernet-Port 12  :  Ethernet-Port 23  :  Ethernet-Port 34�:   KRAM_controlK-Bus selektiert oder K-Bus Fehler (im Monitor-Betrieb):0 : Zyklussynchronisation  1 : KRAM_control  2 : IRT_tracecontrol  3 : Statistikcontrol  4 : SC_Buskoppler  5 : SRT-Control: SRT_rcv_control  6 : SRT-Control: SRT_api_control  7 : NRT-Control: NRT_rcv_api_control  8 : NRT-Control: NRT_rcv_db_control  9 : NRT-Control: NRT_api_control (Rcv-Modul)10 : NRT-Control: NRT_api_control (Snd-Modul)11 : NRT-Control: NRT_snd_control12 : IRT-Control: IRT_dma_int_control13 : IRT-Control: IRT_dma_ext_control14 : Port 0 : Rcv_control15 : Port 0 : NRT_rcv_control16 : Port 0 : NRT_rcv_db_control17 : Port 0 : IRT_diag_control18 : Port 0 : IRT_snd_control19 : Port 0 : NRT_snd_control20 : Port 1 : Rcv_control21 : Port 1 : NRT_rcv_control22 : Port 1 : NRT_rcv_db_control23 : Port 1 : IRT_diag_control24 : Port 1 : IRT_snd_control25 : Port 1 : NRT_snd_control26 : Port 2 : Rcv_control27 : Port 2 : NRT_rcv_control28 : Port 2 : NRT_rcv_db_control29 : Port 2 : IRT_diag_control30 : Port 2 : IRT_snd_control31 : Port 2 : NRT_snd_control32 : Port 3 : Rcv_control33 : Port 3 : NRT_rcv_control34 : Port 3 : NRT_rcv_db_control35 : Port 3 : IRT_diag_control36 : Port 3 : IRT_snd_control37 : Port 3 : NRT_snd_control
#define IRTE_R5_REG_TRIGGER_INFO_RST__VAL                                 0x00000000


#define IRTE_R5_REG_TRIGGER_RESET                                                                           0x0001A410
// ACCESS__: ,w
// DESCR__: 
#define IRTE_R5_REG_TRIGGER_RESET__MSK_TRIGGER_RESET                                                            0xFFFFFFFF
#define IRTE_R5_REG_TRIGGER_RESET_SHFT_TRIGGER_RESET                                                            0
// ACCESS__TRIGGER_RESET: ,w
// DESCR__TRIGGER_RESET: Schreiben auf diese Adresse schaltet den Trigger wieder scharfWird immer als 0 gelesen
#define IRTE_R5_REG_TRIGGER_RESET_RST__VAL                                0x00000000

////////////////////////////////////////////////////////////////////////////////////
// Submodules for Module IRTE
////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////
// Memories for Module IRTE
////////////////////////////////////////////////////////////////////////////////////
#define IRTE_R5_RAM_K_START 0x00100000
#define IRTE_R5_RAM_K_END   0x0012FFFF
////////////////////////////////////////////////////////////////////////////////////





/*===========================================================================*/
/*                                  types                                    */
/*===========================================================================*/

/*===========================================================================*/
/*                                  macros                                   */
/*===========================================================================*/


/*****************************************************************************/
/*  end of file irte_rev05_rsl.h                                             */
/*****************************************************************************/

#ifdef __cplusplus  /* If C++ - compiler: End of C linkage */
}
#endif

/*---------------------------------------------------------------------------*/
#endif  // of IRTE_REV05_RSL_H
