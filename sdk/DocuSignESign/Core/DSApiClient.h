#import <Foundation/Foundation.h>
#import <ISO8601/ISO8601.h>
#import <AFNetworking/AFNetworking.h>
#import "DSJSONResponseSerializer.h"
#import "DSJSONRequestSerializer.h"
#import "DSQueryParamCollection.h"
#import "DSConfiguration.h"
#import "DSResponseDeserializer.h"
#import "DSSanitizer.h"
#import "DSLogger.h"

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


#import "DSAccountAddress.h"
#import "DSAccountBillingPlan.h"
#import "DSAccountBillingPlanResponse.h"
#import "DSAccountInformation.h"
#import "DSAccountMinimumPasswordLength.h"
#import "DSAccountPasswordExpirePasswordDays.h"
#import "DSAccountPasswordLockoutDurationMinutes.h"
#import "DSAccountPasswordLockoutDurationType.h"
#import "DSAccountPasswordMinimumPasswordAgeDays.h"
#import "DSAccountPasswordQuestionsRequired.h"
#import "DSAccountPasswordRules.h"
#import "DSAccountPasswordStrengthType.h"
#import "DSAccountPasswordStrengthTypeOption.h"
#import "DSAccountRoleSettings.h"
#import "DSAccountSettingsInformation.h"
#import "DSAccountSharedAccess.h"
#import "DSAccountSignatureProvider.h"
#import "DSAccountSignatureProviderOption.h"
#import "DSAccountSignatureProviders.h"
#import "DSAddOn.h"
#import "DSAddressInformation.h"
#import "DSAddressInformationInput.h"
#import "DSAddressInformationV2.h"
#import "DSAgent.h"
#import "DSApiRequestLog.h"
#import "DSApiRequestLogsResult.h"
#import "DSAppStoreProduct.h"
#import "DSAppStoreReceipt.h"
#import "DSApprove.h"
#import "DSAttachment.h"
#import "DSAuthenticationMethod.h"
#import "DSAuthenticationStatus.h"
#import "DSBccEmailAddress.h"
#import "DSBillingCharge.h"
#import "DSBillingChargeResponse.h"
#import "DSBillingDiscount.h"
#import "DSBillingInvoice.h"
#import "DSBillingInvoiceItem.h"
#import "DSBillingInvoicesResponse.h"
#import "DSBillingInvoicesSummary.h"
#import "DSBillingPayment.h"
#import "DSBillingPaymentItem.h"
#import "DSBillingPaymentRequest.h"
#import "DSBillingPaymentResponse.h"
#import "DSBillingPaymentsResponse.h"
#import "DSBillingPlan.h"
#import "DSBillingPlanInformation.h"
#import "DSBillingPlanPreview.h"
#import "DSBillingPlanResponse.h"
#import "DSBillingPlanUpdateResponse.h"
#import "DSBillingPlansResponse.h"
#import "DSBillingPrice.h"
#import "DSBrand.h"
#import "DSBrandEmailContent.h"
#import "DSBrandLink.h"
#import "DSBrandLogos.h"
#import "DSBrandRequest.h"
#import "DSBrandResourceUrls.h"
#import "DSBrandResources.h"
#import "DSBrandResourcesList.h"
#import "DSBrandsRequest.h"
#import "DSBrandsResponse.h"
#import "DSBulkEnvelope.h"
#import "DSBulkEnvelopeStatus.h"
#import "DSBulkEnvelopesResponse.h"
#import "DSBulkRecipient.h"
#import "DSBulkRecipientSignatureProvider.h"
#import "DSBulkRecipientTabLabel.h"
#import "DSBulkRecipientsRequest.h"
#import "DSBulkRecipientsResponse.h"
#import "DSBulkRecipientsSummaryResponse.h"
#import "DSBulkRecipientsUpdateResponse.h"
#import "DSCaptiveRecipient.h"
#import "DSCaptiveRecipientInformation.h"
#import "DSCarbonCopy.h"
#import "DSCertifiedDelivery.h"
#import "DSCheckbox.h"
#import "DSChunkedUploadPart.h"
#import "DSChunkedUploadRequest.h"
#import "DSChunkedUploadResponse.h"
#import "DSCloudStorageProvider.h"
#import "DSCloudStorageProviders.h"
#import "DSCompany.h"
#import "DSCompositeTemplate.h"
#import "DSConnectConfigResults.h"
#import "DSConnectCustomConfiguration.h"
#import "DSConnectDebugLog.h"
#import "DSConnectFailureFilter.h"
#import "DSConnectFailureResult.h"
#import "DSConnectFailureResults.h"
#import "DSConnectLog.h"
#import "DSConnectLogs.h"
#import "DSConsoleViewRequest.h"
#import "DSConsumerDisclosure.h"
#import "DSContact.h"
#import "DSContactGetResponse.h"
#import "DSContactModRequest.h"
#import "DSContactPhoneNumber.h"
#import "DSContactUpdateResponse.h"
#import "DSCorrectViewRequest.h"
#import "DSCountry.h"
#import "DSCreditCardInformation.h"
#import "DSCreditCardTypes.h"
#import "DSCurrencyFeatureSetPrice.h"
#import "DSCurrencyPlanPrice.h"
#import "DSCustomField.h"
#import "DSCustomFieldV2.h"
#import "DSCustomFields.h"
#import "DSCustomFieldsEnvelope.h"
#import "DSCustomSettingsInformation.h"
#import "DSDateSigned.h"
#import "DSDateStampProperties.h"
#import "DSDecline.h"
#import "DSDiagnosticsSettingsInformation.h"
#import "DSDobInformationInput.h"
#import "DSDocument.h"
#import "DSDocumentFieldsInformation.h"
#import "DSDocumentTemplate.h"
#import "DSDocumentTemplateList.h"
#import "DSDocumentVisibility.h"
#import "DSDocumentVisibilityList.h"
#import "DSENoteConfiguration.h"
#import "DSEditor.h"
#import "DSEmail.h"
#import "DSEmailAddress.h"
#import "DSEmailSettings.h"
#import "DSEnvelope.h"
#import "DSEnvelopeAttachment.h"
#import "DSEnvelopeAttachmentsRequest.h"
#import "DSEnvelopeAttachmentsResult.h"
#import "DSEnvelopeAuditEvent.h"
#import "DSEnvelopeAuditEventResponse.h"
#import "DSEnvelopeDefinition.h"
#import "DSEnvelopeDocument.h"
#import "DSEnvelopeDocumentsResult.h"
#import "DSEnvelopeEvent.h"
#import "DSEnvelopeFormData.h"
#import "DSEnvelopeId.h"
#import "DSEnvelopeIdsRequest.h"
#import "DSEnvelopeNotificationRequest.h"
#import "DSEnvelopeSummary.h"
#import "DSEnvelopeTemplate.h"
#import "DSEnvelopeTemplateDefinition.h"
#import "DSEnvelopeTemplateResult.h"
#import "DSEnvelopeTemplateResults.h"
#import "DSEnvelopeTransactionStatus.h"
#import "DSEnvelopeUpdateSummary.h"
#import "DSEnvelopesInformation.h"
#import "DSErrorDetails.h"
#import "DSEventNotification.h"
#import "DSEventResult.h"
#import "DSExpirations.h"
#import "DSExternalDocServiceErrorDetails.h"
#import "DSExternalFile.h"
#import "DSExternalFolder.h"
#import "DSFeatureSet.h"
#import "DSFileType.h"
#import "DSFileTypeList.h"
#import "DSFilter.h"
#import "DSFirstName.h"
#import "DSFolder.h"
#import "DSFolderItem.h"
#import "DSFolderItemResponse.h"
#import "DSFolderItemV2.h"
#import "DSFolderItemsResponse.h"
#import "DSFoldersRequest.h"
#import "DSFoldersResponse.h"
#import "DSForgottenPasswordInformation.h"
#import "DSFormulaTab.h"
#import "DSFullName.h"
#import "DSGroup.h"
#import "DSGroupInformation.h"
#import "DSIdCheckInformationInput.h"
#import "DSInPersonSigner.h"
#import "DSInitialHere.h"
#import "DSInlineTemplate.h"
#import "DSIntegratedUserInfoList.h"
#import "DSIntermediary.h"
#import "DSLastName.h"
#import "DSList.h"
#import "DSListCustomField.h"
#import "DSListItem.h"
#import "DSLockInformation.h"
#import "DSLockRequest.h"
#import "DSLoginAccount.h"
#import "DSLoginInformation.h"
#import "DSMatchBox.h"
#import "DSMemberGroupSharedItem.h"
#import "DSMemberSharedItems.h"
#import "DSMergeField.h"
#import "DSMobileNotifierConfiguration.h"
#import "DSMobileNotifierConfigurationInformation.h"
#import "DSMoney.h"
#import "DSNameValue.h"
#import "DSNewAccountDefinition.h"
#import "DSNewAccountSummary.h"
#import "DSNewUser.h"
#import "DSNewUsersDefinition.h"
#import "DSNewUsersSummary.h"
#import "DSNotaryHost.h"
#import "DSNote.h"
#import "DSNotification.h"
#import "DSOauthAccess.h"
#import "DSOfflineAttributes.h"
#import "DSPage.h"
#import "DSPageImages.h"
#import "DSPageRequest.h"
#import "DSPaymentDetails.h"
#import "DSPaymentGatewayAccount.h"
#import "DSPaymentGatewayAccountsInfo.h"
#import "DSPaymentLineItem.h"
#import "DSPaymentProcessorInformation.h"
#import "DSPermissionProfile.h"
#import "DSPermissionProfileInformation.h"
#import "DSPlanInformation.h"
#import "DSPostTransactionsRequest.h"
#import "DSPostTransactionsResponse.h"
#import "DSPowerForm.h"
#import "DSPowerFormFormDataEnvelope.h"
#import "DSPowerFormFormDataRecipient.h"
#import "DSPowerFormRecipient.h"
#import "DSPowerFormSendersResponse.h"
#import "DSPowerFormsFormDataResponse.h"
#import "DSPowerFormsRequest.h"
#import "DSPowerFormsResponse.h"
#import "DSPropertyMetadata.h"
#import "DSProvince.h"
#import "DSProvisioningInformation.h"
#import "DSPurchasedEnvelopesInformation.h"
#import "DSRadio.h"
#import "DSRadioGroup.h"
#import "DSRecipientAttachment.h"
#import "DSRecipientDomain.h"
#import "DSRecipientEmailNotification.h"
#import "DSRecipientEvent.h"
#import "DSRecipientFormData.h"
#import "DSRecipientNamesResponse.h"
#import "DSRecipientPhoneAuthentication.h"
#import "DSRecipientSAMLAuthentication.h"
#import "DSRecipientSMSAuthentication.h"
#import "DSRecipientSignatureInformation.h"
#import "DSRecipientSignatureProvider.h"
#import "DSRecipientSignatureProviderOptions.h"
#import "DSRecipientUpdateResponse.h"
#import "DSRecipientViewRequest.h"
#import "DSRecipients.h"
#import "DSRecipientsUpdateSummary.h"
#import "DSReferralInformation.h"
#import "DSReminders.h"
#import "DSResourceInformation.h"
#import "DSReturnUrlRequest.h"
#import "DSSamlAssertionAttribute.h"
#import "DSSeatDiscount.h"
#import "DSSenderEmailNotifications.h"
#import "DSServerTemplate.h"
#import "DSServiceInformation.h"
#import "DSServiceVersion.h"
#import "DSSettingsMetadata.h"
#import "DSSharedItem.h"
#import "DSSignHere.h"
#import "DSSignatureProviderRequiredOption.h"
#import "DSSignatureType.h"
#import "DSSigner.h"
#import "DSSignerAttachment.h"
#import "DSSignerEmailNotifications.h"
#import "DSSigningGroup.h"
#import "DSSigningGroupInformation.h"
#import "DSSigningGroupUser.h"
#import "DSSigningGroupUsers.h"
#import "DSSocialAccountInformation.h"
#import "DSSocialAuthentication.h"
#import "DSSsn.h"
#import "DSSsn4InformationInput.h"
#import "DSSsn9InformationInput.h"
#import "DSSupportedLanguages.h"
#import "DSTabAccountSettings.h"
#import "DSTabMetadata.h"
#import "DSTabMetadataList.h"
#import "DSTabs.h"
#import "DSTemplateCustomFields.h"
#import "DSTemplateDocumentVisibilityList.h"
#import "DSTemplateDocumentsResult.h"
#import "DSTemplateInformation.h"
#import "DSTemplateMatch.h"
#import "DSTemplateNotificationRequest.h"
#import "DSTemplateRecipients.h"
#import "DSTemplateRole.h"
#import "DSTemplateSharedItem.h"
#import "DSTemplateSummary.h"
#import "DSTemplateTabs.h"
#import "DSTemplateUpdateSummary.h"
#import "DSText.h"
#import "DSTextCustomField.h"
#import "DSTitle.h"
#import "DSUsageHistory.h"
#import "DSUserAccountManagementGranularInformation.h"
#import "DSUserInfo.h"
#import "DSUserInfoList.h"
#import "DSUserInformation.h"
#import "DSUserInformationList.h"
#import "DSUserPasswordInformation.h"
#import "DSUserPasswordRules.h"
#import "DSUserProfile.h"
#import "DSUserSettingsInformation.h"
#import "DSUserSharedItem.h"
#import "DSUserSignature.h"
#import "DSUserSignatureDefinition.h"
#import "DSUserSignaturesInformation.h"
#import "DSUserSocialIdResult.h"
#import "DSUsersResponse.h"
#import "DSView.h"
#import "DSViewLinkRequest.h"
#import "DSViewUrl.h"
#import "DSWatermark.h"
#import "DSWorkspace.h"
#import "DSWorkspaceFolderContents.h"
#import "DSWorkspaceItem.h"
#import "DSWorkspaceItemList.h"
#import "DSWorkspaceList.h"
#import "DSWorkspaceUser.h"
#import "DSWorkspaceUserAuthorization.h"
#import "DSZip.h"
#import "DSDate.h"
#import "DSNumber.h"



@class DSConfiguration;

/**
 * A key for `NSError` user info dictionaries.
 *
 * The corresponding value is the parsed response body for an HTTP error.
 */
extern NSString *const DSResponseObjectErrorKey;

@interface DSApiClient : AFHTTPSessionManager

@property(nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property(nonatomic, assign) NSTimeInterval timeoutInterval;
@property(nonatomic, readonly) NSOperationQueue* queue;

/// In order to ensure the HTTPResponseHeaders are correct, it is recommended to initialize one DSApiClient instance per thread.
@property(nonatomic, readonly) NSDictionary* HTTPResponseHeaders;

@property(nonatomic, strong) id<DSResponseDeserializer> responseDeserializer;

@property(nonatomic, strong) id<DSSanitizer> sanitizer;
/**
 * Clears Cache
 */
+(void)clearCache;

/**
 * Turns on cache
 *
 * @param enabled If the cached is enable, must be `YES` or `NO`
 */
+(void)setCacheEnabled:(BOOL) enabled;

/**
 * Gets the request queue size
 *
 * @return The size of `queuedRequests` static variable.
 */
+(NSUInteger)requestQueueSize;

/**
 * Sets the client unreachable
 *
 * @param state off line state, must be `YES` or `NO`
 */
+(void) setOfflineState:(BOOL) state;

/**
 * Gets if the client is unreachable
 *
 * @return The client offline state
 */
+(BOOL) getOfflineState;

/**
 * Sets the client reachability, this may be overridden by the reachability manager if reachability changes
 *
 * @param status The client reachability status.
 */
+(void) setReachabilityStatus:(AFNetworkReachabilityStatus) status;

/**
 * Gets the client reachability
 *
 * @return The client reachability.
 */
+(AFNetworkReachabilityStatus) getReachabilityStatus;

/**
 * Gets the next request id
 *
 * @return The next executed request id.
 */
+(NSNumber*) nextRequestId;

/**
 * Generates request id and add it to the queue
 *
 * @return The next executed request id.
 */
+(NSNumber*) queueRequest;

/**
 * Removes request id from the queue
 *
 * @param requestId The request which will be removed.
 */
+(void) cancelRequest:(NSNumber*)requestId;

/**
 * Customizes the behavior when the reachability changed
 *
 * @param changeBlock The block will be executed when the reachability changed.
 */
+(void) setReachabilityChangeBlock:(void(^)(int))changeBlock;

/**
 * Sets the api client reachability strategy
 */
- (void)configureCacheReachibility;

/**
 * Sets header for request
 *
 * @param value The header value
 * @param forKey The header key
 */
-(void)setHeaderValue:(NSString*) value
               forKey:(NSString*) forKey;

/**
 * Updates header parameters and query parameters for authentication
 *
 * @param headers The header parameter will be updated, passed by pointer to pointer.
 * @param querys The query parameters will be updated, passed by pointer to pointer.
 * @param authSettings The authentication names NSArray.
 */
- (void) updateHeaderParams:(NSDictionary **)headers
                queryParams:(NSDictionary **)querys
           WithAuthSettings:(NSArray *)authSettings;

/**
 * Performs request
 *
 * @param path Request url.
 * @param method Request method.
 * @param pathParams Request path parameters.
 * @param queryParams Request query parameters.
 * @param body Request body.
 * @param headerParams Request header parameters.
 * @param authSettings Request authentication names.
 * @param requestContentType Request content-type.
 * @param responseContentType Response content-type.
 * @param completionBlock The block will be executed when the request completed.
 *
 * @return The request id.
 */
-(NSNumber*) requestWithPath:(NSString*) path
                      method:(NSString*) method
                  pathParams:(NSDictionary *) pathParams
                 queryParams:(NSDictionary*) queryParams
                  formParams:(NSDictionary *) formParams
                       files:(NSDictionary *) files
                        body:(id) body
                headerParams:(NSDictionary*) headerParams
                authSettings:(NSArray *) authSettings
          requestContentType:(NSString*) requestContentType
         responseContentType:(NSString*) responseContentType
                responseType:(NSString *) responseType
             completionBlock:(void (^)(id, NSError *))completionBlock;

/**
 * Custom security policy
 *
 * @return AFSecurityPolicy
 */
- (AFSecurityPolicy *) customSecurityPolicy;

/**
 * DSConfiguration return sharedConfig
 *
 * @return DSConfiguration
 */
- (DSConfiguration*) configuration;

/**
 * Sets up the ApiClient for JWT auth work flow
 *
 * @param client id.
 * @param user id.
 * @param oauth base path.
 * @param private key filename.
 * @param expires in seconds.
 */
-(void) configure_jwt_authorization_flow:(NSString*) clientId
                                  userId:(NSString*) userId
                           oauthBasePath:(NSString*) oauthBasePath
                      privateKeyFilename:(NSString*) privateKeyFilename
                               expiresIn:(NSInteger) expiresIn;

@end
