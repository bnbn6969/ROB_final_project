#ifndef PUBLISHER_SUBCRIBER_H
#define PUBLISHER_SUBCRIBER_H
#include<ros/ros.h>
#include<string.h>
template<typename PublishT, typename SubsrcibeT>
class PublisherSubsrciber
{
public:
PublisherSubsrciber(){};
PublisherSubsrciber(std::string PublishTopicName, std::string SubsrcibeTopicName, int queueSize){
ros::NodeHandle NH;
publisherObject = NH.advertise<PublishT>(PublishTopicName, queueSize);
subscriberObject = NH.subscribe<SubsrcibeT>(SubsrcibeTopicName, queueSize, &PublisherSubsrciber::subcriber_callback, this);

}
void subcriber_callback(const typename SubsrcibeT::ConstPtr& msg);
protected:
ros::Subscriber subscriberObject;
ros::Publisher publisherObject;

};
#endif