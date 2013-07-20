//
//  SDLAppDelegate.h
//  GitProject
//
//  Created by sang1022 on 13-7-20.
//  Copyright (c) 2013年 sang1022. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SDLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
