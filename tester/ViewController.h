//
//  ViewController.h
//  MapTest
//
//  Created by Bryan Bonczek on 6/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KPTreeController.h"

@interface ViewController : UIViewController <MKMapViewDelegate, KPTreeControllerDelegate>
 
@property (nonatomic, weak) IBOutlet MKMapView *mapView;
@property (nonatomic, weak) IBOutlet UISwitch *animationSwitch;

- (IBAction)resetAnnotations:(id)sender;
- (IBAction)toggleClustering:(id)sender;

@end
