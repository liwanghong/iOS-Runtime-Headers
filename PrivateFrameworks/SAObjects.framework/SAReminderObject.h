/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAReminderPayload>, NSArray, NSDate, NSString, SAReminderRecurrence, SAReminderTrigger;

@interface SAReminderObject : SADomainObject {
}

@property(copy) NSString * alternateSubject;
@property bool completed;
@property(copy) NSDate * dueDate;
@property(copy) NSString * dueDateTimeZoneId;
@property bool important;
@property(copy) NSArray * lists;
@property(retain) <SAReminderPayload> * payload;
@property(retain) SAReminderRecurrence * recurrence;
@property(copy) NSString * subject;
@property(retain) SAReminderTrigger * trigger;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)alternateSubject;
- (bool)completed;
- (id)dueDate;
- (id)dueDateTimeZoneId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)important;
- (id)lists;
- (id)payload;
- (id)recurrence;
- (void)setAlternateSubject:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setDueDate:(id)arg1;
- (void)setDueDateTimeZoneId:(id)arg1;
- (void)setImportant:(bool)arg1;
- (void)setLists:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)subject;
- (id)trigger;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end