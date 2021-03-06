/* Autogenerated with kurento-module-creator */

#include <gst/gst.h>
#include "MediaPipeline.hpp"
#include "MediaPipelineImpl.hpp"
#include <KmsDetectFacesImplFactory.hpp>
#include "KmsDetectFacesImpl.hpp"
#include <jsonrpc/JsonSerializer.hpp>
#include <KurentoException.hpp>

#define GST_CAT_DEFAULT kurento_kms_detect_faces_impl
GST_DEBUG_CATEGORY_STATIC (GST_CAT_DEFAULT);
#define GST_DEFAULT_NAME "KurentoKmsDetectFacesImpl"

namespace kurento
{
namespace module
{
namespace datachannelexample
{

KmsDetectFacesImpl::KmsDetectFacesImpl (const boost::property_tree::ptree
                                        &config,
                                        std::shared_ptr<MediaPipeline> mediaPipeline) :
  FilterImpl (config,
              std::dynamic_pointer_cast<MediaObjectImpl> ( mediaPipeline) )
{
  g_object_set (element, "filter-factory", "facedetectormetadata", NULL);

  g_object_get (G_OBJECT (element), "filter", &faceDetector, NULL);

  if (faceDetector == NULL) {
    throw KurentoException (MEDIA_OBJECT_NOT_AVAILABLE,
                            "Media Object not available");
  }

  g_object_unref (faceDetector);
}

MediaObjectImpl *
KmsDetectFacesImplFactory::createObject (const boost::property_tree::ptree
    &config, std::shared_ptr<MediaPipeline> mediaPipeline) const
{
  return new KmsDetectFacesImpl (config, mediaPipeline);
}

KmsDetectFacesImpl::StaticConstructor KmsDetectFacesImpl::staticConstructor;

KmsDetectFacesImpl::StaticConstructor::StaticConstructor()
{
  GST_DEBUG_CATEGORY_INIT (GST_CAT_DEFAULT, GST_DEFAULT_NAME, 0,
                           GST_DEFAULT_NAME);
}

} /* datachannelexample */
} /* module */
} /* kurento */
