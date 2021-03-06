//
//  PostCell.h
//  Instagram
//
//  Created by Eric Moran on 6/27/22.
//

#import <UIKit/UIKit.h>
#import "Post.h"

NS_ASSUME_NONNULL_BEGIN

@interface PostCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *postImage;
@property (weak, nonatomic) IBOutlet UILabel *postCaption;
@property (weak, nonatomic) IBOutlet UILabel *timestamp;

@property (weak, nonatomic) Post *post;

- (void)setData;

@end

NS_ASSUME_NONNULL_END
