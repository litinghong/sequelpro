//
//  $Id$
//
//  SPCSVExporter.h
//  sequel-pro
//
//  Created by Stuart Connolly (stuconnolly.com) on August 29, 2009
//  Copyright (c) 2009 Stuart Connolly. All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  More info at <http://code.google.com/p/sequel-pro/>

#import <Cocoa/Cocoa.h>

#import "SPExporter.h"

@class SPCSVExporter;

@interface SPCSVExporterDelegate

/**
 *
 */
- (void)csvExportProcessWillBegin:(SPCSVExporter *)exporter;

/**
 * 
 */
- (void)csvExportProcessComplete:(SPCSVExporter *)exporter;

/**
 *
 */
- (void)csvExportProcessProgressUpdated:(SPCSVExporter *)exporter;

/**
 *
 */
- (void)csvExportProcessWillBeginWritingData:(SPCSVExporter *)exporter;

@end

@interface SPCSVExporter : SPExporter
{		
	// CSV data
	NSArray *csvDataArray;
	
	// Table
	NSString *csvTableName;
	
	// CSV options
	BOOL csvOutputFieldNames;
	
	NSString *csvFieldSeparatorString;
	NSString *csvEnclosingCharacterString;
	NSString *csvEscapeString;
	NSString *csvLineEndingString;
	NSString *csvNULLString;
	NSArray  *csvTableColumnNumericStatus;
}

@property (readwrite, retain) NSArray *csvDataArray;
@property (readwrite, retain) NSString *csvTableName;

@property (readwrite, assign) BOOL csvOutputFieldNames;

@property (readwrite, retain) NSString *csvFieldSeparatorString;
@property (readwrite, retain) NSString *csvEnclosingCharacterString;
@property (readwrite, retain) NSString *csvEscapeString;
@property (readwrite, retain) NSString *csvLineEndingString;
@property (readwrite, retain) NSString *csvNULLString;
@property (readwrite, retain) NSArray  *csvTableColumnNumericStatus;

@end
