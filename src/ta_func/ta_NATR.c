/* TA-LIB Copyright (c) 1999-2006, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *
 * Change history:
 *
 *  MMDDYY BY     Description
 *  -------------------------------------------------------------------
 *  060306 MF     Initial Version
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */    namespace TicTacTec { namespace TA { namespace Lib {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::NATR_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int NATR_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #else
/* Generated */ int TA_NATR_Lookback( int           optInTimePeriod )  /* From 1 to 100000 */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   /* The ATR lookback is the sum of:
    *    1 + (optInTimePeriod - 1)
    *
    * Where 1 is for the True Range, and
    * (optInTimePeriod-1) is for the simple
    * moving average.
    */
   return optInTimePeriod + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_NATR);
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_NATR - Normalized Average True Range
 * 
 * Input  = High, Low, Close
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::NATR( int    startIdx,
/* Generated */                                         int    endIdx,
/* Generated */                                         cli::array<double>^ inHigh,
/* Generated */                                         cli::array<double>^ inLow,
/* Generated */                                         cli::array<double>^ inClose,
/* Generated */                                         int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                         [Out]int%    outBegIdx,
/* Generated */                                         [Out]int%    outNbElement,
/* Generated */                                         cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode NATR( int    startIdx,
/* Generated */                         int    endIdx,
/* Generated */                         double       inHigh[],
/* Generated */                         double       inLow[],
/* Generated */                         double       inClose[],
/* Generated */                         int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                         MInteger     outBegIdx,
/* Generated */                         MInteger     outNbElement,
/* Generated */                         double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_NATR( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     const double inHigh[],
/* Generated */                     const double inLow[],
/* Generated */                     const double inClose[],
/* Generated */                     int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                     int          *outBegIdx,
/* Generated */                     int          *outNbElement,
/* Generated */                     double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   TA_RetCode retCode;
   int outIdx, today, lookbackTotal;
   int nbATR;
   VALUE_HANDLE_INT(outBegIdx1);
   VALUE_HANDLE_INT(outNbElement1);

   double prevATR, tempValue;
   ARRAY_REF( tempBuffer );
   ARRAY_LOCAL(prevATRTemp,1);

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh||!inLow||!inClose)
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 14;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* This function is very similar as ATR, except
    * it is being normalized as follow:
    *
    *    NATR = (ATR(period) / Close) * 100
    *
    *
    * Normalization make the ATR function more relevant
    * in the folllowing scenario:
    *    - Long term analysis where the price changes drastically.
    *    - Cross-market or cross-security ATR comparison.
    *
    * More Info: 
    *      Technical Analysis of Stock & Commodities (TASC)
    *      May 2006 by John Forman
    */

   /* Average True Range is the greatest of the following: 
    *
    *  val1 = distance from today's high to today's low.
    *  val2 = distance from yesterday's close to today's high.
    *  val3 = distance from yesterday's close to today's low.   
    *
    * These value are averaged for the specified period using
    * Wilder method. This method have an unstable period comparable
    * to an Exponential Moving Average (EMA).
    */
   VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
   VALUE_HANDLE_DEREF_TO_ZERO(outNbElement);

   /* Adjust startIdx to account for the lookback period. */
   lookbackTotal = LOOKBACK_CALL(NATR)( optInTimePeriod );

   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
      return NAMESPACE(TA_RetCode)TA_SUCCESS;

   /* Trap the case where no smoothing is needed. */
   if( optInTimePeriod <= 1 )
   {
      /* No smoothing needed. Just do a TRANGE. */
      return FUNCTION_CALL(TRANGE)( startIdx, endIdx,
                                    inHigh, inLow, inClose,
                                    outBegIdx, outNbElement, outReal );
   }

   /* Allocate an intermediate buffer for TRANGE. */
   ARRAY_ALLOC(tempBuffer, lookbackTotal+(endIdx-startIdx)+1 );

   /* Do TRANGE in the intermediate buffer. */
   retCode = FUNCTION_CALL(TRANGE)( (startIdx-lookbackTotal+1), endIdx,
                                    inHigh, inLow, inClose,
                                    VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
								    tempBuffer );

   if( retCode != NAMESPACE(TA_RetCode)TA_SUCCESS )
   {
      ARRAY_FREE( tempBuffer );
      return retCode;
   }

   /* First value of the ATR is a simple Average of
    * the TRANGE output for the specified period.
    */
   retCode = FUNCTION_CALL_DOUBLE(INT_SMA)( optInTimePeriod-1,
                                            optInTimePeriod-1,
                                            tempBuffer, optInTimePeriod,
                                            VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
						                    prevATRTemp );

   if( retCode != NAMESPACE(TA_RetCode)TA_SUCCESS )
   {
      ARRAY_FREE( tempBuffer );
      return retCode;    
   }
   prevATR = prevATRTemp[0];

   /* Subsequent value are smoothed using the
    * previous ATR value (Wilder's approach).
    *  1) Multiply the previous ATR by 'period-1'. 
    *  2) Add today TR value. 
    *  3) Divide by 'period'.
    */
   today = optInTimePeriod;
   outIdx = TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_NATR);
   /* Skip the unstable period. */
   while( outIdx != 0 )
   {      
      prevATR *= optInTimePeriod - 1;
      prevATR += tempBuffer[today++];
      prevATR /= optInTimePeriod;
      outIdx--;
   }

   /* Now start to write the final ATR in the caller 
    * provided outReal.
    */
   outIdx = 1;
   tempValue = inClose[today];
   if( !TA_IS_ZERO(tempValue) )
      outReal[0] = (prevATR/tempValue)*100.0;
   else
      outReal[0] = 0.0;

   /* Now do the number of requested ATR. */
   nbATR = (endIdx - startIdx)+1;
   
   while( --nbATR != 0 )
   {
      prevATR *= optInTimePeriod - 1;
      prevATR += tempBuffer[today++];
      prevATR /= optInTimePeriod;
      tempValue = inClose[today];
      if( !TA_IS_ZERO(tempValue) )
         outReal[outIdx] = (prevATR/tempValue)*100.0;
      else
         outReal[0] = 0.0;
      outIdx++;
   }

   VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
   VALUE_HANDLE_DEREF(outNbElement) = outIdx;
   
   ARRAY_FREE( tempBuffer );
    
   return retCode;
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::NATR( int    startIdx,
/* Generated */                                         int    endIdx,
/* Generated */                                         cli::array<float>^ inHigh,
/* Generated */                                         cli::array<float>^ inLow,
/* Generated */                                         cli::array<float>^ inClose,
/* Generated */                                         int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                         [Out]int%    outBegIdx,
/* Generated */                                         [Out]int%    outNbElement,
/* Generated */                                         cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode NATR( int    startIdx,
/* Generated */                         int    endIdx,
/* Generated */                         float        inHigh[],
/* Generated */                         float        inLow[],
/* Generated */                         float        inClose[],
/* Generated */                         int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                         MInteger     outBegIdx,
/* Generated */                         MInteger     outNbElement,
/* Generated */                         double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_NATR( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const float  inHigh[],
/* Generated */                       const float  inLow[],
/* Generated */                       const float  inClose[],
/* Generated */                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNbElement,
/* Generated */                       double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    TA_RetCode retCode;
/* Generated */    int outIdx, today, lookbackTotal;
/* Generated */    int nbATR;
/* Generated */    VALUE_HANDLE_INT(outBegIdx1);
/* Generated */    VALUE_HANDLE_INT(outNbElement1);
/* Generated */    double prevATR, tempValue;
/* Generated */    ARRAY_REF( tempBuffer );
/* Generated */    ARRAY_LOCAL(prevATRTemp,1);
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if(!inHigh||!inLow||!inClose)
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 14;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */    VALUE_HANDLE_DEREF_TO_ZERO(outNbElement);
/* Generated */    lookbackTotal = LOOKBACK_CALL(NATR)( optInTimePeriod );
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */       return NAMESPACE(TA_RetCode)TA_SUCCESS;
/* Generated */    if( optInTimePeriod <= 1 )
/* Generated */    {
/* Generated */       return FUNCTION_CALL(TRANGE)( startIdx, endIdx,
/* Generated */                                     inHigh, inLow, inClose,
/* Generated */                                     outBegIdx, outNbElement, outReal );
/* Generated */    }
/* Generated */    ARRAY_ALLOC(tempBuffer, lookbackTotal+(endIdx-startIdx)+1 );
/* Generated */    retCode = FUNCTION_CALL(TRANGE)( (startIdx-lookbackTotal+1), endIdx,
/* Generated */                                     inHigh, inLow, inClose,
/* Generated */                                     VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
/* Generated */ 								    tempBuffer );
/* Generated */    if( retCode != NAMESPACE(TA_RetCode)TA_SUCCESS )
/* Generated */    {
/* Generated */       ARRAY_FREE( tempBuffer );
/* Generated */       return retCode;
/* Generated */    }
/* Generated */    retCode = FUNCTION_CALL_DOUBLE(INT_SMA)( optInTimePeriod-1,
/* Generated */                                             optInTimePeriod-1,
/* Generated */                                             tempBuffer, optInTimePeriod,
/* Generated */                                             VALUE_HANDLE_OUT(outBegIdx1), VALUE_HANDLE_OUT(outNbElement1),
/* Generated */ 						                    prevATRTemp );
/* Generated */    if( retCode != NAMESPACE(TA_RetCode)TA_SUCCESS )
/* Generated */    {
/* Generated */       ARRAY_FREE( tempBuffer );
/* Generated */       return retCode;    
/* Generated */    }
/* Generated */    prevATR = prevATRTemp[0];
/* Generated */    today = optInTimePeriod;
/* Generated */    outIdx = TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_NATR);
/* Generated */    while( outIdx != 0 )
/* Generated */    {      
/* Generated */       prevATR *= optInTimePeriod - 1;
/* Generated */       prevATR += tempBuffer[today++];
/* Generated */       prevATR /= optInTimePeriod;
/* Generated */       outIdx--;
/* Generated */    }
/* Generated */    outIdx = 1;
/* Generated */    tempValue = inClose[today];
/* Generated */    if( !TA_IS_ZERO(tempValue) )
/* Generated */       outReal[0] = (prevATR/tempValue)*100.0;
/* Generated */    else
/* Generated */       outReal[0] = 0.0;
/* Generated */    nbATR = (endIdx - startIdx)+1;
/* Generated */    while( --nbATR != 0 )
/* Generated */    {
/* Generated */       prevATR *= optInTimePeriod - 1;
/* Generated */       prevATR += tempBuffer[today++];
/* Generated */       prevATR /= optInTimePeriod;
/* Generated */       tempValue = inClose[today];
/* Generated */       if( !TA_IS_ZERO(tempValue) )
/* Generated */          outReal[outIdx] = (prevATR/tempValue)*100.0;
/* Generated */       else
/* Generated */          outReal[0] = 0.0;
/* Generated */       outIdx++;
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */    VALUE_HANDLE_DEREF(outNbElement) = outIdx;
/* Generated */    ARRAY_FREE( tempBuffer );
/* Generated */    return retCode;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
