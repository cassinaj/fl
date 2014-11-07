/*
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2014 Max-Planck-Institute for Intelligent Systems,
 *                     University of Southern California
 *    Manuel Wuthrich (manuel.wuthrich@gmail.com)
 *    Jan Issac (jan.issac@gmail.com)
 *
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**
 * @date 05/25/2014
 * @author Manuel Wuthrich (manuel.wuthrich@gmail.com)
 * @author Jan Issac (jan.issac@gmail.com)
 * Max-Planck-Institute for Intelligent Systems, University of Southern California
 */

#ifndef FAST_FILTERING_DISTRIBUTIONS_INTERFACES_MOMENTS_HPP
#define FAST_FILTERING_DISTRIBUTIONS_INTERFACES_MOMENTS_HPP

#include <fast_filtering/distributions/interfaces/approximate_moments.hpp>

namespace ff
{

/**
 * \interface Moments
 * \brief Moments is the interface providing the first two moments
 *
 * \tparam Vector   Random variable type. This is equivalent to the first moment
 *                  type.
 * \tparam Operator Second moment type
 *
 * The Moments interface provides access to the exact first moments of
 * a distribution. The moments represent a subset of the approximate moments.
 */
template <typename Vector, typename Operator>
class Moments:
    public ApproximateMoments<Vector, Operator>
{
public:    

    /**
     * \return First moment of the underlying distribution, the mean
     */
    virtual Vector Mean() const = 0;

    /**
     * \return Second centered moment of the underlying distribution,
     *         the covariance
     */
    virtual Operator Covariance() const = 0;

    /**
     * \{ApproximateMoments::ApproximateMean() const\}
     */
    virtual Vector ApproximateMean() const
    {
        return Mean();
    }

    /**
     * \{ApproximateMoments::ApproximateCovariance() const\}
     */
    virtual Operator ApproximateCovariance() const
    {
        return Covariance();
    }

    /**
     * \brief Overridable default destructor
     */
    virtual ~Moments() { }
};

}

#endif
