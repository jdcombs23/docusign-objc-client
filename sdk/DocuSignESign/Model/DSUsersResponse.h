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


#import "DSUserInfo.h"


@protocol DSUsersResponse
@end

@interface DSUsersResponse : DSObject

/* The last position in the result set.  [optional]
 */
@property(nonatomic) NSString* endPosition;
/* The URI to the next chunk of records based on the search request. If the endPosition is the entire results of the search, this is null.  [optional]
 */
@property(nonatomic) NSString* nextUri;
/* The postal code for the billing address. [optional]
 */
@property(nonatomic) NSString* previousUri;
/* The number of results returned in this response.  [optional]
 */
@property(nonatomic) NSString* resultSetSize;
/* Starting position of the current result set. [optional]
 */
@property(nonatomic) NSString* startPosition;
/* The total number of items available in the result set. This will always be greater than or equal to the value of the property returning the results in the in the response. [optional]
 */
@property(nonatomic) NSString* totalSetSize;
/*  [optional]
 */
@property(nonatomic) NSArray<DSUserInfo>* users;

@end
