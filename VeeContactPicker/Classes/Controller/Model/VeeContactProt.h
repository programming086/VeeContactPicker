//
//  Created by Andrea Cipriani on 14/12/15.
//  Copyright © 2015 Code Atlas SRL. All rights reserved.
//

#import "VeeSectionable.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol VeeContactProt <NSObject, VeeSectionable>

@property (nonatomic, copy) NSString* firstName;
@property (nonatomic, copy) NSString* lastName;
@property (nonatomic, copy) NSString* middleName;
@property (nonatomic, copy) NSString* nickname;
@property (nonatomic, copy) NSString* organizationName;
@property (nonatomic, copy) NSString* compositeName;
@property (nonatomic, strong) UIImage* thumbnailImage;

@property (nonatomic, strong) NSArray<NSString*>* phoneNumbers;
@property (nonatomic, strong) NSArray<NSString*>* emails;

- (NSString*)displayName;
- (NSString*)sectionIdentifier;

+ (NSPredicate*)searchPredicateForText:(NSString*)searchText;

@optional

@property (nonatomic, readonly, strong) NSArray<NSNumber*>* recordIds;

@end