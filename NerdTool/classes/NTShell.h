/*
 * NTShell.h
 * NerdTool
 * Created by Kevin Nygaard on 7/16/09.
 * Copyright 2009 MutableCode. All rights reserved.
 *
 * This file is part of NerdTool.
 * 
 * NerdTool is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NerdTool is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with NerdTool.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Cocoa/Cocoa.h>
#import "NTLog.h"
#import "LogProtocol.h"
#import "NTTextBasedLog.h"

enum printMode
{
    NTWaitForData = 0,
    NTAppendData,
    NTPrintOnlyNewData
};

@interface NTShell : NTTextBasedLog
{
    IBOutlet id commandOutlet;
    IBOutlet id refreshOutlet;
    IBOutlet id printModeOutlet;
    int oldPrintMode;
}

@property (nonatomic, retain) NSString * command;
@property (nonatomic, retain) NSNumber * printMode;
@property (nonatomic, retain) NSNumber * refresh;

@end

@interface NTShell (CoreDataGeneratedAccessors)
@end
