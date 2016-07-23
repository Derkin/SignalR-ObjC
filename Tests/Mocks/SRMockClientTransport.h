//
//  SRMockClientTransport.h
//  SignalR.Client.ObjC
//
//  Created by Alex Billingsley on 2/1/16.
//  Copyright © 2016 DyKnow LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRClientTransportInterface.h"
#import <URLMock/UMKMockURLProtocol.h>

@interface SRMockClientTransport : NSObject

+ (id <UMKMockURLResponder>)expectMockRequestWithHTTPMethod:(NSString *)method
                                                       path:(NSString *)path
                                                  responder:(id <UMKMockURLResponder>)responder;

+ (id <UMKMockURLResponder>)negotiateForTransport:(id <SRClientTransportInterface>)transport;

+ (id <UMKMockURLResponder>)negotiateForTransport:(id <SRClientTransportInterface>)transport
                                       statusCode:(NSNumber *)statusCode
                                             json:(id)json;

+ (id <UMKMockURLResponder>)negotiateForTransport:(id <SRClientTransportInterface>)transport
                 statusCode:(NSNumber *)statusCode
                      error:(NSError *)error;

+ (id <UMKMockURLResponder>)sendForTransport:(id <SRClientTransportInterface>)transport
                                  statusCode:(NSNumber *)statusCode
                                        json:(id)json;

+ (id <UMKMockURLResponder>)sendForTransport:(id <SRClientTransportInterface>)transport
                                  statusCode:(NSNumber *)statusCode
                                       error:(NSError *)error;

+ (id <UMKMockURLResponder>)abortForTransport:(id <SRClientTransportInterface>)transport
                                   statusCode:(NSNumber *)statusCode
                                         json:(id)json;

+ (id <UMKMockURLResponder>)abortForTransport:(id <SRClientTransportInterface>)transport
                                   statusCode:(NSNumber *)statusCode
                                        error:(NSError *)error;
@end
