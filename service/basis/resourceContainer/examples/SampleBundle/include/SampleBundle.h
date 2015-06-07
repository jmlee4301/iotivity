//******************************************************************
//
// Copyright 2015 Samsung Electronics All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef SAMPLEBUNDLE_H_
#define SAMPLEBUNDLE_H_

#include <vector>

#include "ResourceContainerBundleAPI.h"
#include "BundleActivator.h"

using namespace RC;

class SampleBundle: public BundleActivator
{
    public:
        SampleBundle();
        ~SampleBundle();

        void activateBundle(ResourceContainerBundleAPI* resourceContainer);
        void deactivateBundle();

        void createResource();
        void destroyResource();

        ResourceContainerBundleAPI* m_ResourceContainer;
        std::vector<Resource *> m_vecResources;
};


class SampleBundleResource: public Resource
{
    public:
        SampleBundleResource();
        ~SampleBundleResource();
};

#endif /* SAMPLEBUNDLE_H_ */
