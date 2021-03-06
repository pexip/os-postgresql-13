/*-------------------------------------------------------------------------
 *
 * c_kwlist_d.h
 *    List of keywords represented as a ScanKeywordList.
 *
 * Portions Copyright (c) 1996-2020, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/tools/gen_keywordlist.pl
 *
 *-------------------------------------------------------------------------
 */

#ifndef C_KWLIST_D_H
#define C_KWLIST_D_H

#include "common/kwlookup.h"

static const char ScanCKeywords_kw_string[] =
	"VARCHAR\0"
	"auto\0"
	"bool\0"
	"char\0"
	"const\0"
	"enum\0"
	"extern\0"
	"float\0"
	"hour\0"
	"int\0"
	"long\0"
	"minute\0"
	"month\0"
	"register\0"
	"second\0"
	"short\0"
	"signed\0"
	"static\0"
	"struct\0"
	"to\0"
	"typedef\0"
	"union\0"
	"unsigned\0"
	"varchar\0"
	"volatile\0"
	"year";

static const uint16 ScanCKeywords_kw_offsets[] = {
	0,
	8,
	13,
	18,
	23,
	29,
	34,
	41,
	47,
	52,
	56,
	61,
	68,
	74,
	83,
	90,
	96,
	103,
	110,
	117,
	120,
	128,
	134,
	143,
	151,
	160,
};

#define SCANCKEYWORDS_NUM_KEYWORDS 26

static int
ScanCKeywords_hash_func(const void *key, size_t keylen)
{
	static const int8 h[53] = {
		    24,     14,      0,     10,     19,      2,     11,      3,
		     6,    127,    127,    127,    127,      2,      0,    127,
		     0,      9,    127,    127,    127,    127,     17,    127,
		     0,      1,      5,      0,      0,    -12,     21,     13,
		   127,    127,      0,    127,    127,      0,    127,      7,
		   127,     16,      2,      0,     10,      0,      0,      3,
		     0,      4,      0,     18,     20,
	};

	const unsigned char *k = (const unsigned char *) key;
	uint32		a = 1;
	uint32		b = 2;

	while (keylen--)
	{
		unsigned char c = *k++;

		a = a * 31 + c;
		b = b * 127 + c;
	}
	return h[a % 53] + h[b % 53];
}

static const ScanKeywordList ScanCKeywords = {
	ScanCKeywords_kw_string,
	ScanCKeywords_kw_offsets,
	ScanCKeywords_hash_func,
	SCANCKEYWORDS_NUM_KEYWORDS,
	8
};

#endif							/* C_KWLIST_D_H */
