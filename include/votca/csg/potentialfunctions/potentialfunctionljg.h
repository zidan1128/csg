/*
 * Copyright 2009-2019 The VOTCA Development Team (http://www.votca.org)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef POTENTIALFUNCTIONLJG_H
#define POTENTIALFUNCTIONLJG_H
#include "potentialfunction.h"

namespace votca {
namespace csg {
// LJ 12-6 potential class
// with c12,c6 parameters
class PotentialFunctionLJG : public PotentialFunction {
public:
  PotentialFunctionLJG(const std::string &name_, const double min_ = 0.0,
                       const double max_ = 10.0);
  ~PotentialFunctionLJG(){};
  // calculate function value for given r
  double CalculateF(const double r) const;
  // calculate first derivative w.r.t. ith parameter
  double CalculateDF(const int i, const double r) const;
  // calculate second derivative w.r.t. ith parameter
  double CalculateD2F(const int i, const int j, const double r) const;
};
}
}
#endif /* POTFUNCTION_LJG_H */
