// Copyright : ETH Zurich
// License   : three-clause BSD license
// Authors   : Witold Wolski
// for full text refer to files: LICENSE, AUTHORS and COPYRIGHT


#ifndef FEATURE_H
#define FEATURE_H

#include <vector>

#include <stdint.h>

namespace ralab{
  struct IFeatureProjection{
    ~IFeatureProjection(){}
    /// projections
    virtual char * getRTProjectionData(std::size_t & size) = 0;
    virtual char * getMZProjectionData(std::size_t & size) = 0;
    ///
    virtual std::vector<float> & getRTProjection() = 0;
    virtual std::vector<float> & getMZProjection() = 0;
  };

  struct IIsotopeFeature{
    ~IIsotopeFeature(){}
    virtual uint32_t getID()  = 0;

    virtual uint32_t getSwathId() = 0;

    //intensities
    virtual float getVolume() = 0;
    virtual float getMaximum() = 0;
    virtual uint32_t getCount() = 0;

    //location
    virtual float getApexMZ() = 0;
    virtual float getApexRT() = 0;
    virtual float getCenterOfMassMZ() = 0;
    virtual float getCenterOfMassRT() = 0;
    virtual float getMaxLocationMZ() = 0;
    virtual float getMaxLocationRT() = 0;

    //distribution infromation
    virtual float getSDRT() = 0;
    virtual float getSDMZ() = 0;
    virtual float getKurtosisRT() = 0;
    virtual float getKurtosisMZ() = 0;
    virtual float getSkewnessRT() = 0;
    virtual float getSkewnessMZ() = 0;

    //bounding box
    virtual uint32_t getMinRTIdx() = 0;
    virtual uint32_t getMinMZIdx() = 0;
    virtual uint32_t getMZExtend() = 0;
    virtual uint32_t getRTExtend() = 0;
  };

  struct IFeatureAccess : IIsotopeFeature, IFeatureProjection{};



}



#endif // FEATURE_H
