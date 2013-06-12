/*
 Copyright (c) 2013, salesforce.com, inc. All rights reserved.
 
 Redistribution and use of this software in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this list of conditions
 and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of
 conditions and the following disclaimer in the documentation and/or other materials provided
 with the distribution.
 * Neither the name of salesforce.com, inc. nor the names of its contributors may be used to
 endorse or promote products derived from this software without specific prior written
 permission of salesforce.com, inc.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 Created by Bharath Hariharan on 6/11/13.
 */

#import <Foundation/Foundation.h>
#import "JSONKit.h"

@class SFSmartStore;

@interface SmartStoreInterface : NSObject {
    SFSmartStore *_store;
}

@property (nonatomic, strong) SFSmartStore *store;

/**
 * Creates a soup for accounts.
 */
- (void)createAccountsSoup;

/**
 * Creates a soup for opportunities.
 */
- (void)createOpportunitiesSoup;

/**
 * Deletes the accounts soup.
 */
- (void)deleteAccountsSoup;

/**
 * Deletes the opportunities soup.
 */
- (void)deleteOpportunitiesSoup;

/**
 * Inserts accounts into the accounts soup.
 */
- (void)insertAccounts:(NSArray*)accounts;

/**
 * Inserts opportunities into the opportunities soup.
 */
- (void)insertOpportunities:(NSArray*)opportunities;

/**
 * Inserts a single account into the accounts soup.
 */
- (void)insertAccount:(NSArray*)account;

/**
 * Inserts a single opportunity into the opportunities soup.
 */
- (void)insertOpportunity:(NSArray*)opportunity;

/**
 * Returns saved accounts.
 */
- (NSArray*)getAccounts;

/**
 * Returns saved opportunities.
 */
- (NSArray*)getOpportunities;

/**
 * Runs a smart SQL query against the smartstore and returns results.
 */
- (NSArray*)query:(NSString*)queryString;

@end
