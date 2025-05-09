
/*
 * emsMkError:
 */

#include <cstdio>

#include "ems.h"

#ifdef TSIZE
#undef TSIZE
#define TSIZE 2048
#endif

emsError_t DEFEmsMsgTable[] = {
    {5000,
     EMS_NONE,
     "The 'defrRead' function has been called before the 'defrInit' "
     "function.\nThe 'defrInit' function should be called prior to the "
     "'defrRead' function.",
     -1,
     0},
    {5001,
     EMS_NONE,
     "DEF statement found in the def file with no callback set.",
     -1,
     0},
    {6000,
     EMS_NONE,
     "The syntax for an ALIAS statement is \"&ALIAS aliasName = "
     "aliasDefinition &ENDALIAS\". '=' is missing after the aliasName.",
     -1,
     0},
    {6001,
     EMS_NONE,
     "End of file is reached while parsing in the middle of an ALIAS "
     "statement.\nReview you def file and add '&ENDALIAS' in the ALIAS "
     "statement.",
     -1,
     0},
    {6002, EMS_NONE, "The def file is incomplete.", -1, 0},
    {6003,
     EMS_NONE,
     "The BEGINEXT tag is missing in the DEF file. Include the tag and then "
     "try again.",
     -1,
     0},
    {6004,
     EMS_NONE,
     "The BEGINEXT tag is empty. Specify a value for the tag and try again.",
     -1,
     0},
    {6005,
     EMS_NONE,
     "The '\"' is missing within the tag. Specify the '\"' in the tag and then "
     "try again.",
     -1,
     0},
    {6006,
     EMS_NONE,
     "The ending '\"' is missing in the tag. Specify the ending '\"' in the "
     "tag and then try again.",
     -1,
     0},
    {6007,
     EMS_NONE,
     "The ENDEXT statement is missing in the DEF file. Include the statement "
     "and then try again.",
     -1,
     0},
    {6008,
     EMS_NONE,
     "Invalid characters found in \'%s\'.\nThese characters might be using the "
     "character types other than English.\nCreate characters by specifying "
     "valid characters types.",
     -1,
     0},
    {6010, EMS_NONE, "An error has been reported in callback.", -1, 0},
    {6011, EMS_NONE, "Too many syntax errors have been reported.", -1, 0},
    {6030,
     EMS_NONE,
     "Invalid direction specified with FPC name. The valid direction is either "
     "'H' or 'V'. Specify a valid vale and then try again.",
     -1,
     0},
    {6060,
     EMS_NONE,
     "Invalid value specified for IOTIMING rise/fall. The valid value for rise "
     "is 'R' and for fall is 'F'. Specify a valid value and then try again.",
     -1,
     0},
    {6080,
     EMS_NONE,
     "An internal error has occurred. The index number for the SUBNET wires "
     "array is less then or equal to 0.\nContact Cadence Customer Support with "
     "this error information.",
     -1,
     0},
    {6081,
     EMS_NONE,
     "An internal error has occurred. The index number for the NET PATH wires "
     "array is less then or equal to 0.\nContact Cadence Customer Support with "
     "this error information.",
     -1,
     0},
    {6082,
     EMS_NONE,
     "An internal error has occurred. The index number for the NET SHIELDPATH "
     "wires array is less then or equal to 0.\nContact Cadence Customer "
     "Support with this error information.",
     -1,
     0},
    {6083,
     EMS_NONE,
     "The index number %d specified for the NET INSTANCE is invalid.\nValid "
     "index is from 0 to %d. Specify a valid index number and then try again.",
     -1,
     0},
    {6084,
     EMS_NONE,
     "The index number %d specified for the NET PIN is invalid.\nValid index "
     "is from 0 to %d. Specify a valid index number and then try again.",
     -1,
     0},
    {6085,
     EMS_NONE,
     "The index number %d specified for the NET POLYGON is invalid.\nValid "
     "index is from 0 to %d. Specify a valid index number and then try again.",
     -1,
     0},
    {6086,
     EMS_NONE,
     "The index number %d specified for the NET RECTANGLE is invalid.\nValid "
     "index is from 0 to %d. Specify a valid index number and then try again.",
     -1,
     0},
    {6090,
     EMS_NONE,
     "The index number %d specified for the NONDEFAULT LAYER is "
     "invalid.\nValid index is from 0 to %d. Specify a valid index number and "
     "then try again.",
     -1,
     0},
    {6091,
     EMS_NONE,
     "The index number %d specified for the NONDEFAULT PROPERTY is "
     "invalid.\nValid index is from 0 to %d. Specify a valid index number and "
     "then try again.",
     -1,
     0},
    {6100,
     EMS_NONE,
     "The value spefified for PARTITION SETUP is invalid. The valid value for "
     "SETUP is 'R' or 'F'. Specify a valid value for SETUP and then try again.",
     -1,
     0},
    {6101,
     EMS_NONE,
     "The value spefified for PARTITION HOLD is invalid. The valid value for "
     "HOLD is 'R' or 'F'. Specify a valid value for HOLD and then try again.",
     -1,
     0},
    {6120,
     EMS_NONE,
     "The index number %d specified for the PIN PROPERTY is invalide.\nValid "
     "index number is from 0 to %d. Specify a valid index number and then try "
     "again.",
     -1,
     0},
    {6130,
     EMS_NONE,
     "The index number %d specified for the REGION PROPERTY is "
     "invalide.\nValid index number is from 0 to %d. Specify a valid index "
     "number and then try again.",
     -1,
     0},
    {6131,
     EMS_NONE,
     "The index number %d specified for the REGION RECTANGLE is "
     "invalide.\nValid index number is from 0 to %d. Specify a valid index "
     "number and then try again.",
     -1,
     0},
    {6140,
     EMS_NONE,
     "The index number %d specified for the VIA LAYER RECTANGLE is "
     "invalide.\nValid index number is from 0 to %d. Specify a valid index "
     "number and then try again.",
     -1,
     0},
    {6150,
     EMS_NONE,
     "The START statement in the SCANCHAINS has defined more than one time in "
     "the SCANCHAINS statement.\nUpdate the DEF file to only one START "
     "statement and then try again.",
     -1,
     0},
    {6151,
     EMS_NONE,
     "The STOP statment in the SCANCHAINS has defined more than one time in "
     "the SCANCHAINS statement.\nUpdate the DEF file to only one STOP "
     "statement and then try again.",
     -1,
     0},
    {6160,
     EMS_NONE,
     "The index number %d specified for the SLOT RECTANGLE is invalid.\nValid "
     "index number is from 0 to %d. Specify a valid index number and then try "
     "again.",
     -1,
     0},
    {6170,
     EMS_NONE,
     "The TimingDisable type is invalid. The valid types are FROMPIN, & "
     "THRUPIN. Specify the valid type and then try again.",
     -1,
     0},
    {6180,
     EMS_NONE,
     "The index number %d specified for the VIA POLYGON is invalid.\nValid "
     "index is from 0 to %d. Specify a valid index number and then try again",
     -1,
     0},
    {6200,
     EMS_NONE,
     "The ASSERTION statement is invalid because it has an invalid operand "
     "rule.\nValid operand rule is either NET or PATH. Specify a valid operand "
     "and then try again.",
     -1,
     0},
    {6201,
     EMS_NONE,
     "Unable to process the DEF file. Both WIREDLOGIC and DELAY statements are "
     "defined in constraint/assertion.\nUpdate the DEF file to define either a "
     "WIREDLOGIC or DELAY statement only.",
     -1,
     0},
    {6202,
     EMS_NONE,
     "Unable to process the DEF file. Both SUM and DIFF statements are defined "
     "in constraint/assertion.\nUpdate the DEF file to define either a SUM or "
     "DIFF statement only.",
     -1,
     0},
    {6501,
     EMS_NONE,
     "An error has been found while processing the DEF file '%s'\nUnit %d is a "
     "5.6 or later syntax. Define the DEF file as 5.6 and then try again.",
     -1,
     0},
    {6502,
     EMS_NONE,
     "The value %d defined for DEF UNITS DISTANCE MICRON is invalid\n. The "
     "valid values are 100, 200, 1000, 2000, 10000, or 20000. Specify a valid "
     "value and then try again.",
     -1,
     0},
    {6503,
     EMS_NONE,
     "The execution has been stopped because the DEF parser 5.7 does not "
     "support DEF file with version %s.\nUpdate your DEF file to version 5.7 "
     "or earlier.",
     -1,
     0},
    {6504,
     EMS_NONE,
     "Def parser version 5.7 and later does not support NAMESCASESENSITIVE "
     "OFF.\nEither remove this optional construct or set it to ON.",
     -1,
     0},
    {6505,
     EMS_NONE,
     "The NONDEFAULTRULE statement is available in version 5.6 and "
     "later.\nHowever, your DEF file is defined with version %g.",
     -1,
     0},
    {6506,
     EMS_NONE,
     "The NETEXPR statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g.",
     -1,
     0},
    {6507,
     EMS_NONE,
     "The SUPPLYSENSITIVITY statement is available in version 5.6 and "
     "later.\nHowever, your DEF file is defined with version %g.",
     -1,
     0},
    {6508,
     EMS_NONE,
     "The GROUNDSENSITIVITY statement is available in version 5.6 and "
     "later.\nHowever, your DEF file is defined with version %g.",
     -1,
     0},
    {6509,
     EMS_NONE,
     "The POLYGON statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g.",
     -1,
     0},
    {6510,
     EMS_NONE,
     "The ANTENNAPINPARTIALMETALAREA statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g.",
     -1,
     0},
    {6511,
     EMS_NONE,
     "The ANTENNAPINPARTIALMETALSIDEAREA statement is available in version 5.4 "
     "and later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6512,
     EMS_NONE,
     "The ANTENNAPINGATEAREA statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6513,
     EMS_NONE,
     "The ANTENNAPINDIFFAREA statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6514,
     EMS_NONE,
     "The ANTENNAPINMAXAREACAR statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6515,
     EMS_NONE,
     "The ANTENNAPINMAXSIDEAREACAR statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6516,
     EMS_NONE,
     "The ANTENNAPINPARTIALCUTAREA statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6517,
     EMS_NONE,
     "The ANTENNAPINMAXCUTCAR statement is available in version 5.4 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6518,
     EMS_NONE,
     "The ANTENNAMODEL statement is available in version 5.5 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6519,
     EMS_NONE,
     "The SPACING statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6520,
     EMS_NONE,
     "The DESIGNRULEWIDTH statement is available in version 5.6 and "
     "later.\nHowever, your DEF file is defined with version %g",
     -1,
     0},
    {6523,
     EMS_NONE,
     "Invalid ROW statement defined in the DEF file. The DO statement which is "
     "required in the ROW statement is not defined.\nUpdate your DEF file with "
     "a DO statement.",
     -1,
     0},
    {6524,
     EMS_NONE,
     "Invalid syntax specified. The valid syntax is either \"DO 1 BY num or DO "
     "num BY 1\". Specify the valid syntax and try again.",
     -1,
     0},
    {6525,
     EMS_NONE,
     "The DO number %g in TRACK is invalid.\nThe number value has to be "
     "greater than 0. Specify the valid syntax and try again.",
     -1,
     0},
    {6526,
     EMS_NONE,
     "The STEP number %g in TRACK is invalid.\nThe number value has to be "
     "greater than 0. Specify the valid syntax and try again.",
     -1,
     0},
    {6527,
     EMS_NONE,
     "The DO number %g in GCELLGRID is invalid.\nThe number value has to be "
     "greater than 0. Specify the valid syntax and try again.",
     -1,
     0},
    {6528,
     EMS_NONE,
     "The STEP number %g in GCELLGRID is invalid.\nThe number value has to be "
     "greater than 0. Specify the valid syntax and try again.",
     -1,
     0},
    {6529,
     EMS_NONE,
     "The HALO statement is available in version 5.6 and later.\nHowever, your "
     "DEF file is defined with version %g",
     -1,
     0},
    {6530,
     EMS_NONE,
     "The FIXEDBUMP statement is available in version 5.5 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6531,
     EMS_NONE,
     "The layerName which is required in path is missing. Include the "
     "layerName in the path and then try again.",
     -1,
     0},
    {6532,
     EMS_NONE,
     "The VIA DO statement is available in version 5.5 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6533,
     EMS_NONE,
     "Either the numX or numY in the VIA DO statement has invalid value. The "
     "value specified is 0.\nUpdate your DEF file with the correct value and "
     "then try again.",
     -1,
     0},
    {6534,
     EMS_NONE,
     "The STYLE statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6535,
     EMS_NONE,
     "The POLYGON statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6536,
     EMS_NONE,
     "The RECT statement is available in version 5.6 and later.\nHowever, your "
     "DEF file is defined with version %g",
     -1,
     0},
    {6537,
     EMS_NONE,
     "The value %s for statement VOLTAGE is invalid. The value can only be "
     "integer.\nSpecify a valid value in units of millivolts",
     -1,
     0},
    {6538,
     EMS_NONE,
     "The PARTITION statement is available in version 5.5 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6539,
     EMS_NONE,
     "Invalid BLOCKAGE statement defined in the DEF file. The BLOCKAGE "
     "statment has both the LAYER and the PLACEMENT statements "
     "defined.\nUpdate your DEF file to have either BLOCKAGE or PLACEMENT "
     "statement only.",
     -1,
     0},
    {6540,
     EMS_NONE,
     "The SPACING statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6541,
     EMS_NONE,
     "The SPACING statement is defined in the LAYER statement,\nbut there is "
     "already either a SPACING statement or DESIGNRULEWIDTH  statement has "
     "defined in the LAYER statement.\nUpdate your DEF file to have either "
     "SPACING statement or a DESIGNRULEWIDTH statement.",
     -1,
     0},
    {6542,
     EMS_NONE,
     "The defined BLOCKAGES COMPONENT statement has either COMPONENT, SLOTS, "
     "FILLS, PUSHDOWN or EXCEPTPGNET defined.\nOnly one of these statements is "
     "allowed per LAYER. Updated the DEF file to define a valid BLOCKAGES "
     "COMPONENT statement per layer.",
     -1,
     0},
    {6543,
     EMS_NONE,
     "The defined BLOCKAGES PLACEMENT statement has either COMPONENT, "
     "PUSHDOWN, SOFT or PARTIAL defined.\nOnly one of these statements is "
     "allowed per LAYER. Updated the DEF file to define a valid BLOCKAGES "
     "PLACEMENT statement.",
     -1,
     0},
    {6544,
     EMS_NONE,
     "A POLYGON statement is defined in the BLOCKAGE statement,\nbut it is not "
     "defined in the BLOCKAGE LAYER statement.\nUpdate your DEF file to either "
     "remove the POLYGON statement from the BLOCKAGE statement or\ndefine the "
     "POLYGON statement in a BLOCKAGE LAYER statement.",
     -1,
     0},
    {6545,
     EMS_NONE,
     "The NONDEFAULTRULE statement is available in version 5.6 and "
     "later.\nHowever, your DEF file is defined with version %g.",
     -1,
     0},
    {6546,
     EMS_NONE,
     "The STYLES statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6547,
     EMS_NONE,
     "The PLACEMENT SOFT is available in version 5.7 or later.\nHowever, your "
     "DEF file is defined with version %g.",
     -1,
     0},
    {6548,
     EMS_NONE,
     "The PARTIAL is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6549,
     EMS_NONE,
     "The EXCEPTPGNET is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6550,
     EMS_NONE,
     "The HALO SOFT is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6551,
     EMS_NONE,
     "The ROUTEHALO is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6552,
     EMS_NONE,
     "The FILLWIREOPC is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6553,
     EMS_NONE,
     "The LAYER OPC is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6554,
     EMS_NONE,
     "The VIA OPC is available in version 5.7 or later.\nHowever, your DEF "
     "file is defined with version %g.",
     -1,
     0},
    {6555,
     EMS_NONE,
     "The PORT in PINS is available in version 5.7 or later.\nHowever, your "
     "DEF file is defined with version %g.",
     -1,
     0},
    {6556,
     EMS_NONE,
     "The PIN VIA statement is available in version 5.7 and later.\nHowever, "
     "your DEF file is defined with version %g.",
     -1,
     0},
    {6557,
     EMS_NONE,
     "The VIARULE statement is available in version 5.6 and later.\nHowever, "
     "your DEF file is defined with version %g,",
     -1,
     0},
    {6558,
     EMS_NONE,
     "The FREQUENCY statement is available in version 5.5 and later.\nHowever, "
     "your DEF file is defined with version %g",
     -1,
     0},
    {6559,
     EMS_NONE,
     "The ROWCOL statement is missing from the VIARULE statement. Ensure that "
     "it exists in the VIARULE statement.",
     -1,
     0},
    {6560,
     EMS_NONE,
     "The ORIGIN statement is missing from the VIARULE statement. Ensure that "
     "it exists in the VIARULE statement.",
     -1,
     0},
    {6561,
     EMS_NONE,
     " The OFFSET statement is missing from the VIARULE statement. Ensure that "
     "it exists in the VIARULE statement.",
     -1,
     0},
    {6562,
     EMS_NONE,
     "The PATTERN statement is missing from the VIARULE statement. Ensure that "
     "it exists in the VIARULE statement.",
     -1,
     0},
    {6563,
     EMS_NONE,
     "The TYPE statement already exists. It has been defined in the REGION "
     "statement.",
     -1,
     0},
    {6564,
     EMS_NONE,
     "POLYGON statement in FILLS LAYER is a version 5.6 and later "
     "syntax.\nYour def file is defined with version %g,",
     -1,
     0},
    {7000,
     EMS_NONE,
     "The specified string has exceeded 4096 characters. The extra characters "
     "will be truncated. Specify a string less than or equal to 4096 "
     "characters.",
     -1,
     0},
    {7010, EMS_NONE, "The PropName %s is not defined for %s.", -1, 0},
    {7011,
     EMS_NONE,
     "The NAMESCASESENSITIVE statement is obsolete in version 5.6 and "
     "later.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7012,
     EMS_NONE,
     "The DEF file is invalid because the VERSION statement is not defined in "
     "it.\nThe VERSION statement is required in DEF file. Define this "
     "statement by refering to the LEF/DEF Language Reference manual.",
     -1,
     0},
    {7013,
     EMS_NONE,
     "The DEF file is invalid if NAMESCASESENSITIVE is "
     "undefined.\nNAMESCASESENSITIVE is a mandatory statement in the DEF file "
     "with version 5.6 and earlier.\nTo define the NAMESCASESENSITIVE "
     "statement, refer to the LEF/DEF 5.5 and earlier Language Reference "
     "manual.",
     -1,
     0},
    {7014,
     EMS_NONE,
     "The DEF file is invalid if BUSBITCHARS is undefined.\nBUSBITCHARS is a "
     "mandatory statement in the DEF file with version 5.6 and earlier.\nTo "
     "define the BUSBITCHARS statement, refer to the LEF/DEF 5.5 and earlier "
     "Language Reference manual.",
     -1,
     0},
    {7015,
     EMS_NONE,
     "The DEF file is invalid if DIVIDERCHAR is undefined.\nDIVIDERCHAR is a "
     "mandatory statement in the DEF file with version 5.6 and earlier.\nTo "
     "define the DIVIDERCHAR statement, refer to the LEF/DEF 5.5 and earlier "
     "Language Reference manual.",
     -1,
     0},
    {7016,
     EMS_NONE,
     "DESIGN is a mandatory statement in the DEF file. Ensure that it exists "
     "in the file.",
     -1,
     0},
    {7017,
     EMS_NONE,
     "The DEFAULTCAP statement is obsolete in version 5.4 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7018,
     EMS_NONE,
     "The DO statement in the ROW statement with the name %s has invalid "
     "syntax.\nThe valid syntax is \"DO numX BY 1 STEP spaceX 0 | DO 1 BY numY "
     "STEP 0 spaceY\".\nSpecify the valid syntax and try again.",
     -1,
     0},
    {7019,
     EMS_NONE,
     "The PATTERNNAME statement is obsolete in version 5.6 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7020,
     EMS_NONE,
     "The REGION pt pt statement is obsolete in version 5.5 and later.\nThe "
     "DEF parser will ignore this statement.",
     -1,
     0},
    {7021,
     EMS_NONE,
     "The FOREIGN statement is obsolete in version 5.6 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7022,
     EMS_NONE,
     "In the COMPONENT UNPLACED statement, the point and orient are invalid in "
     "version 5.4 and later.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7023,
     EMS_NONE,
     "The SPECIAL NET statement, with type %s, does not have any net statement "
     "defined.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7024,
     EMS_NONE,
     "The ESTCAP statement is obsolete in version 5.5 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7025,
     EMS_NONE,
     "The SPECIAL NET SHIELD statement, does not have any shield net statement "
     "defined.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7026,
     EMS_NONE,
     "The WIDTH statement is obsolete in version 5.5 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7027,
     EMS_NONE,
     "The GROUP REGION pt pt statement is obsolete in version 5.5 and "
     "later.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7028,
     EMS_NONE,
     "The GROUP SOFT MAXX statement is obsolete in version 5.5 and later.\nThe "
     "DEF parser will ignore this statement.",
     -1,
     0},
    {7029,
     EMS_NONE,
     "The GROUP SOFT MAXY statement is obsolete in version 5.5 and later.\nThe "
     "DEF parser will ignore this statement.",
     -1,
     0},
    {7030,
     EMS_NONE,
     "The GROUP SOFT MAXHALFPERIMETER statement is obsolete in version 5.5 and "
     "later.\nThe DEF parser will ignore this statement.",
     -1,
     0},
    {7031,
     EMS_NONE,
     "The ASSERTIONS statement is obsolete in version 5.4 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7032,
     EMS_NONE,
     "The CONSTRAINTS statement is obsolete in version 5.4 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7035,
     EMS_NONE,
     "The IOTIMINGS statement is obsolete in version 5.4 and later.\nThe DEF "
     "parser will ignore this statement.",
     -1,
     0},
    {7500,
     EMS_NONE,
     "Unable to open the file defRWarning.log in %s.\nWarning messages will "
     "not be written out in the log file.\nCheck if you have write permission "
     "on the directory.",
     -1,
     0},
    {8000,
     EMS_NONE,
     "The data still exists after the END DESIGN statement. The DEF parser "
     "will ignore this data.",
     -1,
     0},
    {8500,
     EMS_NONE,
     "Unable to open the file defRWarning.log in %s.\nInfo messages will not "
     "be written out in the log file.\nCheck if you have write permission on "
     "the directory.",
     -1,
     0},
    {9000,
     EMS_NONE,
     "The DEF writer has detected that the function defwInitCbk has already "
     "been called and you are trying to call defwInit.\nOnly defwInitCbk or "
     "defwInit can be called but not both.\nUpdate your program and then try "
     "again.",
     -1,
     0},
    {9001,
     EMS_NONE,
     "The DEF writer has detected that the function defwInit has already been "
     "called and you are trying to call defwInitCbk.\nOnly defwInitCbk or "
     "defwInit can be called but not both.\nUpdate your program and then try "
     "again.",
     -1,
     0},
    {9010,
     EMS_NONE,
     "The function defwWrite is called before the function defwInitCbk.\nYou "
     "need to call defwInitCbk before calling any other functions.\nUpdate "
     "your program and then try again.",
     -1,
     0},
    {9011,
     EMS_NONE,
     "You program has called the function defwInit to initialize the "
     "writer.\nIf you want to use the callback option you need to use the "
     "function defwInitCbk.",
     -1,
     0},
    {9012,
     EMS_NONE,
     "You are calling the function defwPrintUnusedCallbacks but you did call "
     "the function defwSetRegisterUnusedCallbacks which is required before you "
     "can call defwPrintUnusedCallbacks.",
     -1,
     0},
    {-1, EMS_NONE, "", -1, 0}};

/*
 * End machine generated table.
 */
