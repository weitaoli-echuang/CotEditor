/*
=================================================
CENavigationBarView
(for CotEditor)

 Copyright (C) 2004-2007 nakamuxu.
 Copyright (C) 2014 CotEditor Project
 http://coteditor.github.io
=================================================

encoding="UTF-8"
Created:2005.08.22

-------------------------------------------------

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. 


=================================================
*/

#import <Cocoa/Cocoa.h>

@class CESubSplitView;

@interface CENavigationBarView : NSView

@property (nonatomic, assign) CESubSplitView *masterView;
@property (nonatomic, assign) BOOL showNavigationBar;

// Public method
- (void)setOutlineMenuArray:(NSArray *)menus;
- (void)selectOutlineMenuItemWithRange:(NSRange)range;
- (void)selectOutlineMenuItemWithRangeValue:(NSValue *)rangeValue;
- (void)updatePrevNextButtonEnabled;
- (void)selectPrevItem;
- (void)selectNextItem;
- (BOOL)canSelectPrevItem;
- (BOOL)canSelectNextItem;
- (void)setCloseSplitButtonEnabled:(BOOL)enabled;

@end
