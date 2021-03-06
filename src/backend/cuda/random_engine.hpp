/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#pragma once

#include <Array.hpp>
#include <af/defines.h>
#include <backend.hpp>

namespace cuda
{
    Array<uint> initMersenneState(const uintl seed, Array<uint> tbl);

    void initMersenneState(Array<uint> &state, const uintl seed, const Array<uint> tbl);

    template<typename T>
    Array<T> uniformDistribution(const af::dim4 &dims, const af_random_engine_type type, const uintl &seed, uintl &counter);

    template<typename T>
    Array<T> normalDistribution(const af::dim4 &dims, const af_random_engine_type type, const uintl &seed, uintl &counter);

    template<typename T>
    Array<T> uniformDistribution(const af::dim4 &dims,
            Array<uint> pos, Array<uint> sh1, Array<uint> sh2, uint mask,
            Array<uint> recursion_table, Array<uint> temper_table, Array<uint> state);

    template<typename T>
    Array<T> normalDistribution(const af::dim4 &dims,
            Array<uint> pos, Array<uint> sh1, Array<uint> sh2, uint mask,
            Array<uint> recursion_table, Array<uint> temper_table, Array<uint> state);
}
