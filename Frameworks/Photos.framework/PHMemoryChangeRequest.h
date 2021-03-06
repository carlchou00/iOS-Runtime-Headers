/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMemoryChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {
    BOOL  _clientEntitled;
    BOOL  _clientEntitledToMemoryMutation;
    NSString * _clientName;
    int  _clientProcessID;
    PHRelationshipChangeRequestHelper * _curatedAssetsHelper;
    PHChangeRequestHelper * _helper;
    PHRelationshipChangeRequestHelper * _keyAssetHelper;
    NSDictionary * _movieAssetState;
    PHRelationshipChangeRequestHelper * _movieCuratedAssetsHelper;
    PHRelationshipChangeRequestHelper * _representativeAssetsHelper;
}

@property (nonatomic) int category;
@property (getter=isClientEntitled, nonatomic, readonly) BOOL clientEntitled;
@property (nonatomic, readonly) BOOL clientEntitledToMemoryMutation;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) int clientProcessID;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *curatedAssetsHelper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFavorite, nonatomic) BOOL favorite;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PHChangeRequestHelper *helper;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (nonatomic, retain) NSDate *lastMoviePlayedDate;
@property (nonatomic, retain) NSDate *lastViewedDate;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSDictionary *movieAssetState;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *movieCuratedAssetsHelper;
@property (nonatomic, retain) NSData *movieData;
@property (getter=isMutated, readonly) BOOL mutated;
@property (getter=isNew, readonly) BOOL new;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (getter=isPending, nonatomic) BOOL pending;
@property (nonatomic, retain) NSData *photosGraphData;
@property (nonatomic) long long photosGraphVersion;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMemory;
@property (getter=isRejected, nonatomic) BOOL rejected;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *representativeAssetsHelper;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (getter=isUserCreated, nonatomic) BOOL userCreated;
@property (nonatomic, readonly) NSString *uuid;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_preferredAttributesForMemoryCreationFromObject:(id)arg1 withSuccess:(BOOL)arg2 title:(id)arg3 subtitle:(id)arg4 error:(id)arg5 proposedAttributes:(id)arg6;
+ (BOOL)_shouldAcceptProposedAttributes:(id)arg1;
+ (int)_titleFormatForProposedAttributes:(id)arg1;
+ (id)changeRequestForMemory:(id)arg1;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(int)arg4 assets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(int)arg4 representativeAssets:(id)arg5 curatedAssets:(id)arg6 keyAsset:(id)arg7;
+ (id)creationRequestForMemoryWithTitle:(id)arg1 subtitle:(id)arg2 creationDate:(id)arg3 category:(int)arg4 subcategory:(int)arg5 representativeAssets:(id)arg6 curatedAssets:(id)arg7 keyAsset:(id)arg8;
+ (void)deleteMemories:(id)arg1;
+ (id)preferredAttributesForMemoryCreationFromAssetCollection:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromCollectionList:(id)arg1 proposedAttributes:(id)arg2;
+ (id)preferredAttributesForMemoryCreationFromPeople:(id)arg1 proposedAttributes:(id)arg2;
+ (id)validateMemoryTitle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_mutableCuratedAssetObjectIDsAndUUIDs;
- (id)_mutableKeyAssetObjectIDsAndUUIDs;
- (id)_mutableRepresentativeAssetObjectIDsAndUUIDs;
- (void)_prepareAssetIDsIfNeeded;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (BOOL)canGenerateUUIDLocally;
- (int)category;
- (BOOL)clientEntitledToMemoryMutation;
- (id)clientName;
- (int)clientProcessID;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)creationDate;
- (id)curatedAssetsHelper;
- (id)description;
- (void)didMutate;
- (void)encodeToXPCDict:(id)arg1;
- (id)helper;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5;
- (BOOL)isClientEntitled;
- (BOOL)isFavorite;
- (BOOL)isMutated;
- (BOOL)isNew;
- (BOOL)isPending;
- (BOOL)isRejected;
- (BOOL)isUserCreated;
- (id)keyAssetHelper;
- (id)lastMoviePlayedDate;
- (id)lastViewedDate;
- (id)managedEntityName;
- (id)movieAssetState;
- (id)movieCuratedAssetsHelper;
- (id)movieData;
- (id)mutations;
- (id)objectID;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (id)photosGraphData;
- (long long)photosGraphVersion;
- (id)placeholderForCreatedMemory;
- (id)representativeAssetsHelper;
- (double)score;
- (void)setCategory:(int)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFavorite:(BOOL)arg1;
- (void)setLastMoviePlayedDate:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setMovieCuratedAssets:(id)arg1;
- (void)setMovieData:(id)arg1;
- (void)setMovieStateData:(id)arg1 forAsset:(id)arg2;
- (void)setPending:(BOOL)arg1;
- (void)setPhotosGraphData:(id)arg1;
- (void)setPhotosGraphVersion:(long long)arg1;
- (void)setQueryHintObject:(id)arg1;
- (void)setQueryHintObjects:(id)arg1;
- (void)setRejected:(BOOL)arg1;
- (void)setRepresentativeAssets:(id)arg1 curatedAssets:(id)arg2 keyAsset:(id)arg3;
- (void)setScore:(double)arg1;
- (void)setSubcategory:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserCreated:(BOOL)arg1;
- (int)subcategory;
- (id)subtitle;
- (id)title;
- (id)uuid;
- (BOOL)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_creationRequestForAssetCollection:(id)arg1;
+ (id)px_creationRequestForAssetCollection:(id)arg1 displayTitleInfo:(id)arg2 people:(id)arg3;

@end
