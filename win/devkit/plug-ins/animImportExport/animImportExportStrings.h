//-
// ==========================================================================
// Copyright (C) 1995 - 2007 Autodesk, Inc. and/or its licensors.  All 
// rights reserved.
//
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its 
// licensors, which is protected by U.S. and Canadian federal copyright 
// law and by international treaties.
//
// The Data is provided for use exclusively by You. You have the right 
// to use, modify, and incorporate this Data into other products for 
// purposes authorized by the Autodesk software license agreement, 
// without fee.
//
// The copyright notices in the Software and this entire statement, 
// including the above license grant, this restriction and the 
// following disclaimer, must be included in all copies of the 
// Software, in whole or in part, and all derivative works of 
// the Software, unless such copies or derivative works are solely 
// in the form of machine-executable object code generated by a 
// source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND. 
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED 
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF 
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR 
// PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE, OR 
// TRADE PRACTICE. IN NO EVENT WILL AUTODESK AND/OR ITS LICENSORS 
// BE LIABLE FOR ANY LOST REVENUES, DATA, OR PROFITS, OR SPECIAL, 
// DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK 
// AND/OR ITS LICENSORS HAS BEEN ADVISED OF THE POSSIBILITY 
// OR PROBABILITY OF SUCH DAMAGES.
//
// ==========================================================================
//+

//

// DISCLAIMER: THIS PLUGIN IS PROVIDED AS IS.  IT IS NOT SUPPORTED BY

//            AUTODESK, SO PLEASE USE AND MODIFY AT YOUR OWN RISK.

//

// DESCRIPTION: -String resources for "animImportExport" plugin

// MAYA HEADER FILES:

#include <maya/MStringResource.h>
#include <maya/MStringResourceId.h>

// MStringResourceIds contain plugin id, unique resource id for
// each string and the default value for the string. 

#define kPluginId  "animImportExport"

#define kNothingSelected MStringResourceId(kPluginId, "kNothingSelected", "Nothing is selected for anim curve import.")

#define kPasteFailed MStringResourceId(kPluginId, "kPasteFailed", "Could not paste the anim curves.")

#define kAnimCurveNotFound MStringResourceId(kPluginId, "kAnimCurveNotFound", "No anim curves were found.")

#define kInvalidAngleUnits MStringResourceId(kPluginId, "kInvalidAngleUnits", "'^1s' is not a valid angular unit. Use rad|deg|min|sec instead.")

#define kInvalidLinearUnits MStringResourceId(kPluginId, "kInvalidLinearUnits","'^1s' is not a valid linear unit. Use mm|cm|m|km|in|ft|yd|mi instead.")

#define kInvalidTimeUnits MStringResourceId(kPluginId, "kInvalidTimeUnits", "'^1s' is not a valid time unit. Use game|film|pal|ntsc|show|palf|ntscf|hour|min|sec|millisec instead.")

#define kInvalidVersion MStringResourceId(kPluginId, "kInvalidVersion", "Reading a version ^1s file with a version ^2d animImportPlugin.")

#define kSettingToUnit MStringResourceId(kPluginId, "kSettingToUnit", "Setting ^1s to ^2s.")

#define kMissingKeyword MStringResourceId(kPluginId, "kMissingKeyword", "Missing a required keyword: ^1s")

#define kCouldNotReadAnim MStringResourceId(kPluginId, "kCouldNotReadAnim", "Could not read an anim curve.")

#define kCouldNotCreateAnim MStringResourceId(kPluginId, "kCouldNotCreateAnim", "Could not create the anim curve node.")

#define kUnknownKeyword MStringResourceId(kPluginId, "kUnknownKeyword", "^1s is an unrecognized keyword.")

#define kClipboardFailure MStringResourceId(kPluginId, "kClipboardFailure","Could not add the anim curves to the clipboard.")

#define kSettingTanAngleUnit MStringResourceId(kPluginId, "kSettingTanAngleUnit","Setting the tanAngleUnit to ^1s.")

#define kUnknownNode MStringResourceId(kPluginId, "kUnknownNode","Encountered an unknown anim curve type.")

#define kCouldNotKey MStringResourceId(kPluginId, "kCouldNotKey","Could not add a keyframe.")

#define kMissingBrace MStringResourceId(kPluginId, "kMissingBrace","Did not find an expected '}'")

#define kCouldNotExport MStringResourceId(kPluginId, "kCouldNotExport", "Could not read the anim curve for export.")

#define kCouldNotReadStatic MStringResourceId(kPluginId, "kCouldNotReadStatic", "Could not apply the static anim value: ^1s.")




