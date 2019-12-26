/* TA-LIB Copyright (c) 1999-2008, Mario Fortier
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
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode::InternalError)
/* Generated */    namespace TicTacTec { namespace TA { namespace Library {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #include "ta_java_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (RetCode.InternalError)
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
/* Generated */ int Core::EmaLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int emaLookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */
/* Generated */ #else
/* Generated */ TA_LIB_API int TA_EMA_Lookback( int           optInTimePeriod )  /* From 2 to 100000 */
/* Generated */
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( (int)optInTimePeriod < 2 || (int)optInTimePeriod > 100000 )
/* Generated */       return -1;
/* Generated */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */
   return optInTimePeriod - 1 + TA_GLOBALS_UNSTABLE_PERIOD(TA_FUNC_UNST_EMA,Ema);
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_EMA - Exponential Moving Average
 *
 * Input  = double
 * Output = double
 *
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 2 to 100000)
 *    Number of period
 *
 *
 */
/* Generated */
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Ema( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<double>^ inReal,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ema( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<double>^ inReal,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ema( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     double       inReal[],
/* Generated */                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_LIB_API TA_RetCode TA_EMA( int    startIdx,
/* Generated */                               int    endIdx,
/* Generated */                                          const double inReal[],
/* Generated */                                          int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                          int          *outBegIdx,
/* Generated */                                          int          *outNBElement,
/* Generated */                                          double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */    if( endIdx < 0 || endIdx < startIdx)
/* Generated */       return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */    #endif /* !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( (int)optInTimePeriod < 2 || (int)optInTimePeriod > 100000 )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */
/* Generated */    #if !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */
/* Generated */    #endif /* !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* Simply call the internal implementation of the EMA. */
   return FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inReal,
                                  optInTimePeriod,
                                  PER_TO_K( optInTimePeriod ),
                                  outBegIdx, outNBElement, outReal );
}

#if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
  // No INT function
#else
/* Internal implementation can be called from any other TA function.
 *
 * Faster because there is no parameter check, but it is a double
 * edge sword.
 *
 * The optInK_1 and optInTimePeriod are usually tightly coupled:
 *
 *    optInK_1  = 2 / (optInTimePeriod + 1).
 *
 * These values are going to be related by this equation 99.9% of the
 * time... but there is some exception, this is why both must be provided.
 *
 * The macro PER_TO_K is equivalent to the above formula.
 */
#if defined( _MANAGED ) && defined( USE_SUBARRAY )
 enum class Core::RetCode Core::TA_INT_EMA( int            startIdx,
                                            int           endIdx,
                                            SubArray<double>^     inReal,
                                            int           optInTimePeriod,
                                            double        optInK_1,
                                            [Out]int% outBegIdx,
                                            [Out]int% outNBElement,
                                            SubArray<double>^ outReal )
#elif defined( _MANAGED )
 enum class Core::RetCode Core::TA_INT_EMA( int           startIdx,
                                            int           endIdx,
                                            cli::array<INPUT_TYPE>^ inReal,
                                            int           optInTimePeriod,
                                            double        optInK_1,
                                            [Out]int% outBegIdx,
                                            [Out]int% outNBElement,
                                            cli::array<double>^ outReal )
#elif defined( _JAVA )
public RetCode TA_INT_EMA( int               startIdx,
                           int               endIdx,
                           INPUT_TYPE      []inReal,
                           int               optInTimePeriod, /* From 1 to TA_INTEGER_MAX */
                           double            optInK_1,          /* Ratio for calculation of EMA. */
                           MInteger          outBegIdx,
                           MInteger          outNBElement,
                           double          []outReal )

#else
TA_RetCode TA_PREFIX(INT_EMA)( int               startIdx,
                               int               endIdx,
                               const INPUT_TYPE *inReal,
                               int               optInTimePeriod, /* From 1 to TA_INTEGER_MAX */
                               double            optInK_1,          /* Ratio for calculation of EMA. */
                               int              *outBegIdx,
                               int              *outNBElement,
                               double           *outReal )
#endif
{
   double tempReal, prevMA;
   int i, today, outIdx, lookbackTotal;

   /* Usually, optInK_1 = 2 / (optInTimePeriod + 1),
    * but sometime there is exception. This
    * is why both value are parameters.
    */

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    */
   lookbackTotal = LOOKBACK_CALL(EMA)( optInTimePeriod );

   /* Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < lookbackTotal )
      startIdx = lookbackTotal;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
      VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
      return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
   }
   VALUE_HANDLE_DEREF(outBegIdx) = startIdx;

   /* Do the EMA calculation using tight loops. */

   /* The first EMA is calculated differently. It
    * then become the seed for subsequent EMA.
    *
    * The algorithm for this seed vary widely.
    * Only 3 are implemented here:
    *
    * TA_MA_CLASSIC:
    *    Use a simple MA of the first 'period'.
    *    This is the approach most widely documented.
    *
    * TA_MA_METASTOCK:
    *    Use first price bar value as a seed
    *    from the beginning of all the available
    *    data.
    *
    * TA_MA_TRADESTATION:
    *    Use 4th price bar as a seed, except when
    *    period is 1 who use 2th price bar or something
    *    like that... (not an obvious one...).
    */
   if( TA_GLOBALS_COMPATIBILITY == ENUM_VALUE(Compatibility,TA_COMPATIBILITY_DEFAULT,Default) )
   {
      today = startIdx-lookbackTotal;
      i = optInTimePeriod;
      tempReal = 0.0;
      while( i-- > 0 )
         tempReal += inReal[today++];

      prevMA = tempReal / optInTimePeriod;
   }
   else
   {
      prevMA = inReal[0];
      today = 1;

      /* !!! Tradestation not supported yet.
      case TA_MA_TRADESTATION:
         prevMA = inReal[startIdx-1];
         if( optInTimePeriod == 1 )
            VALUE_HANDLE_DEREF(outBegIdx)_0 = 1;
         else
            VALUE_HANDLE_DEREF(outBegIdx)_0 = 3;
       */
   }

   /* At this point, prevMA is the first EMA (the seed for
    * the rest).
    * 'today' keep track of where the processing is within the
    * input.
    */

   /* Skip the unstable period. Do the processing
    * but do not write it in the output.
    */
   while( today <= startIdx )
      prevMA = (inReal[today++]-prevMA)*optInK_1 + prevMA;

   /* Write the first value. */
   outReal[0] = prevMA;
   outIdx = 1;

   /* Calculate the remaining range. */
   while( today <= endIdx )
   {
      prevMA = (inReal[today++]-prevMA)*optInK_1 + prevMA;
      outReal[outIdx++] = prevMA;
   }

   VALUE_HANDLE_DEREF(outNBElement) = outIdx;

   return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
}
#endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #undef  TA_LIB_PRO
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */ enum class Core::RetCode Core::Ema( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     SubArray<float>^ inReal,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     SubArray<double>^  outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */ enum class Core::RetCode Core::Ema( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     cli::array<float>^ inReal,
/* Generated */                                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                                     [Out]int%    outBegIdx,
/* Generated */                                     [Out]int%    outNBElement,
/* Generated */                                     cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode ema( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     float        inReal[],
/* Generated */                     int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                     MInteger     outBegIdx,
/* Generated */                     MInteger     outNBElement,
/* Generated */                     double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_EMA( int    startIdx,
/* Generated */                      int    endIdx,
/* Generated */                      const float  inReal[],
/* Generated */                      int           optInTimePeriod, /* From 2 to 100000 */
/* Generated */                      int          *outBegIdx,
/* Generated */                      int          *outNBElement,
/* Generated */                      double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_START_INDEX,OutOfRangeStartIndex);
/* Generated */     if( endIdx < 0 || endIdx < startIdx)
/* Generated */        return ENUM_VALUE(RetCode,TA_OUT_OF_RANGE_END_INDEX,OutOfRangeEndIndex);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !inReal ) return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 30;
/* Generated */     else if( (int)optInTimePeriod < 2 || (int)optInTimePeriod > 100000 )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #if !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return ENUM_VALUE(RetCode,TA_BAD_PARAM,BadParam);
/* Generated */     #endif
/* Generated */  #endif
/* Generated */    return FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inReal,
/* Generated */                                   optInTimePeriod,
/* Generated */                                   PER_TO_K( optInTimePeriod ),
/* Generated */                                   outBegIdx, outNBElement, outReal );
/* Generated */ }
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
/* Generated */   // No INT function
/* Generated */ #else
/* Generated */ #if defined( _MANAGED ) && defined( USE_SUBARRAY )
/* Generated */  enum class Core::RetCode Core::TA_INT_EMA( int            startIdx,
/* Generated */                                             int           endIdx,
/* Generated */                                             SubArray<double>^     inReal,
/* Generated */                                             int           optInTimePeriod,
/* Generated */                                             double        optInK_1,
/* Generated */                                             [Out]int% outBegIdx,
/* Generated */                                             [Out]int% outNBElement,
/* Generated */                                             SubArray<double>^ outReal )
/* Generated */ #elif defined( _MANAGED )
/* Generated */  enum class Core::RetCode Core::TA_INT_EMA( int           startIdx,
/* Generated */                                             int           endIdx,
/* Generated */ 								            cli::array<INPUT_TYPE>^ inReal,
/* Generated */                                             int           optInTimePeriod,
/* Generated */                                             double        optInK_1,
/* Generated */                                             [Out]int% outBegIdx,
/* Generated */                                             [Out]int% outNBElement,
/* Generated */                                             cli::array<double>^ outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public RetCode TA_INT_EMA( int               startIdx,
/* Generated */                            int               endIdx,
/* Generated */                            INPUT_TYPE      []inReal,
/* Generated */                            int               optInTimePeriod,
/* Generated */                            double            optInK_1,
/* Generated */                            MInteger          outBegIdx,
/* Generated */                            MInteger          outNBElement,
/* Generated */                            double          []outReal )
/* Generated */ #else
/* Generated */ TA_RetCode TA_PREFIX(INT_EMA)( int               startIdx,
/* Generated */                                int               endIdx,
/* Generated */                                const INPUT_TYPE *inReal,
/* Generated */                                int               optInTimePeriod,
/* Generated */                                double            optInK_1,
/* Generated */                                int              *outBegIdx,
/* Generated */                                int              *outNBElement,
/* Generated */                                double           *outReal )
/* Generated */ #endif
/* Generated */ {
/* Generated */    double tempReal, prevMA;
/* Generated */    int i, today, outIdx, lookbackTotal;
/* Generated */    lookbackTotal = LOOKBACK_CALL(EMA)( optInTimePeriod );
/* Generated */    if( startIdx < lookbackTotal )
/* Generated */       startIdx = lookbackTotal;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outBegIdx);
/* Generated */       VALUE_HANDLE_DEREF_TO_ZERO(outNBElement);
/* Generated */       return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outBegIdx) = startIdx;
/* Generated */    if( TA_GLOBALS_COMPATIBILITY == ENUM_VALUE(Compatibility,TA_COMPATIBILITY_DEFAULT,Default) )
/* Generated */    {
/* Generated */       today = startIdx-lookbackTotal;
/* Generated */       i = optInTimePeriod;
/* Generated */       tempReal = 0.0;
/* Generated */       while( i-- > 0 )
/* Generated */          tempReal += inReal[today++];
/* Generated */       prevMA = tempReal / optInTimePeriod;
/* Generated */    }
/* Generated */    else
/* Generated */    {
/* Generated */       prevMA = inReal[0];
/* Generated */       today = 1;
/* Generated */    }
/* Generated */    while( today <= startIdx )
/* Generated */       prevMA = (inReal[today++]-prevMA)*optInK_1 + prevMA;
/* Generated */    outReal[0] = prevMA;
/* Generated */    outIdx = 1;
/* Generated */    while( today <= endIdx )
/* Generated */    {
/* Generated */       prevMA = (inReal[today++]-prevMA)*optInK_1 + prevMA;
/* Generated */       outReal[outIdx++] = prevMA;
/* Generated */    }
/* Generated */    VALUE_HANDLE_DEREF(outNBElement) = outIdx;
/* Generated */    return ENUM_VALUE(RetCode,TA_SUCCESS,Success);
/* Generated */ }
/* Generated */ #endif // Not defined( _MANAGED ) && defined( USE_SUBARRAY ) && defined(USE_SINGLE_PRECISION_INPUT)
/* Generated */
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/

