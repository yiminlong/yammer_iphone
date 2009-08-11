//
//  FeedsTableDataSource.h
//  Yammer
//
//  Created by aa on 1/28/09.
//  Copyright 2009 Yammer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FeedDataSource.h"

@interface FeedDataSource : NSObject <UITableViewDataSource> {
  NSMutableArray *messages;
  BOOL olderAvailable;
  BOOL fetchingMore;
  NSString *statusMessage;
  NSFetchedResultsController *fetcher;
}

@property (nonatomic,retain) NSMutableArray *messages;
@property BOOL olderAvailable;
@property BOOL fetchingMore;
@property (nonatomic,retain) NSString *statusMessage;
@property (nonatomic,retain) NSFetchedResultsController *fetcher;

- (id)initWithEmpty;
- (id)initWithFetch;
- (id)initWithMessages:(NSMutableArray *)cachedMessages feed:(NSMutableDictionary *)feed more:(BOOL)hasMore;
+ (FeedDataSource *)getMessages:(NSMutableDictionary *)feed;
- (NSMutableDictionary *)proccesMessages:(NSMutableDictionary *)dict feed:(NSMutableDictionary *)feed;
- (void)processImagesAndTime:(NSMutableArray *)listToUpdate;


@end
