//
//  AbilityProfileMainViewController.h
//  iPokedex
//
//  Created by Timothy Oliver on 12/03/11.
//  Copyright 2011 UberGames. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#import <UIKit/UIKit.h>
#import "Ability.h"
#import "TextBoxContentView.h"
#import "TableHeaderContentView.h"
#import "UIColor+HexString.h"
#import "WebContentView.h"
#import "AbilityExternalLinksView.h"
#import "Generations.h"

@interface AbilityProfileMainViewController : UITableViewController <UIWebViewDelegate> {
	//Database content
	NSInteger dbID;
	Ability *ability;
    Generation *abilityGeneration;
    
    TextBoxContentView *flavorTextView;
    WebContentView *inBattleEffectView;
    WebContentView *outBattleEffectView;
    AbilityExternalLinksView *externalLinksView;
}

- (id)initWithDatabaseID: (NSInteger) databaseID;

@property (nonatomic, assign) NSInteger dbID;
@property (nonatomic, retain) Ability *ability;
@property (nonatomic, retain) Generation *abilityGeneration;
    
@property (nonatomic, retain) TextBoxContentView *flavorTextView;
@property (nonatomic, retain) WebContentView *inBattleEffectView;
@property (nonatomic, retain) WebContentView *outBattleEffectView;
@property (nonatomic, retain) AbilityExternalLinksView *externalLinksView;

@end
