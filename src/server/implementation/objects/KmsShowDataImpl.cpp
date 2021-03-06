/* Autogenerated with kurento-module-creator */

#include <gst/gst.h>
#include "MediaPipeline.hpp"
#include "MediaPipelineImpl.hpp"
#include <KmsShowDataImplFactory.hpp>
#include "KmsShowDataImpl.hpp"
#include <jsonrpc/JsonSerializer.hpp>
#include <KurentoException.hpp>

#define GST_CAT_DEFAULT kurento_kms_show_data_impl
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);
#define GST_DEFAULT_NAME "KurentoKmsShowDataImpl"

#define FACTORY_NAME "kmsshowdata"

namespace kurento
{
namespace module
{
namespace datachannelexample
{

KmsShowDataImpl::KmsShowDataImpl (const boost::property_tree::ptree &config,
                                  std::shared_ptr<MediaPipeline> mediaPipeline)  :
  MediaElementImpl (config,
                    std::dynamic_pointer_cast<MediaPipelineImpl> (mediaPipeline),
                    FACTORY_NAME)
{
}

MediaObjectImpl *
KmsShowDataImplFactory::createObject (const boost::property_tree::ptree &config,
                                      std::shared_ptr<MediaPipeline> mediaPipeline) const
{
  return new KmsShowDataImpl (config, mediaPipeline);
}

KmsShowDataImpl::StaticConstructor KmsShowDataImpl::staticConstructor;

KmsShowDataImpl::StaticConstructor::StaticConstructor()
{
  GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, GST_DEFAULT_NAME, 0,
                           GST_DEFAULT_NAME);
}

} /* datachannelexample */
} /* module */
} /* kurento */
