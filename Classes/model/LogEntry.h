//
//  LogEntry.h
//  iAbetes
//
//  Created by chris nielubowicz on 2/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LogEntry : NSObject
{
	NSMutableDictionary *information;	
}

-(void)setBloodSugar:(NSUInteger)bloodSugar;
-(void)setTime:(NSDate *)time;

-(void)setInsulinBolus:(double)units;
-(void)setInsulinBolus:(double)units overTimeInterval:(NSTimeInterval)bolusDuration;

-(void)addFoodItem:(Food *)item;
-(void)setExercize:(double)intensity duration:(NSTimeInterval)duration;


@end