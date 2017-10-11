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


#import "DSErrorDetails.h"


@protocol DSCloudStorageProvider
@end

@interface DSCloudStorageProvider : DSObject

/* The authentication URL used for the cloud storage provider. This information is only included in the response if the user has not passed authentication for the cloud storage provider. If the redirectUrl query string is provided, the returnUrl is appended to the authenticationUrl.  [optional]
 */
@property(nonatomic) NSString* authenticationUrl;

@property(nonatomic) DSErrorDetails* errorDetails;
/* The URL the user is redirected to after the cloud storage provider authenticates the user. Using this will append the redirectUrl to the authenticationUrl.  The redirectUrl is restricted to URLs in the docusign.com or docusign.net domains. [optional]
 */
@property(nonatomic) NSString* redirectUrl;
/* The service name for the cloud storage provider. [optional]
 */
@property(nonatomic) NSString* service;
/* The DocuSign generated ID for the cloud storage provider [optional]
 */
@property(nonatomic) NSString* serviceId;

@end
