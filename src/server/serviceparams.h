/*

Copyright 2018 technicianted

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

*/

#ifndef __SERVICEPARAMS_H__
#define __SERVICEPARAMS_H__

#include "serviceparameters.pb.h"

namespace gst_transformer {
namespace service {

/**
 * Add server specific functions.
 */
class ServiceParams : public ServiceParametersStruct
{
public:
    ServiceParams();

    /**
     * Load configurations from json stream.
     * 
     * \param stream json input stream.
     */
    void loadFromJsonStream(std::istream &stream);
    /**
     * Load configurations from json string.
     * 
     * \param json json string.
     */
    void loadFromJsonString(const std::string &json);
    /**
     * Load configurations from json file.
     * 
     * \param json file name.
     */
    void loadFromJsonFile(const std::string &json);
};

}
}

#endif
