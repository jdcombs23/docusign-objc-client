#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSPowerFormFormDataRecipient.h"


@protocol DSPowerFormFormDataEnvelope
@end

@interface DSPowerFormFormDataEnvelope : DSObject

/* The envelope ID of the envelope status that failed to post. [optional]
 */
@property(nonatomic) NSString* envelopeId;
/* An array of powerform recipients. [optional]
 */
@property(nonatomic) NSArray<DSPowerFormFormDataRecipient>* recipients;

@end
