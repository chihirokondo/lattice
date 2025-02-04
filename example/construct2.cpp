/*
   Copyright (C) 2019 by Synge Todo <wistaria@phys.s.u-tokyo.ac.jp>

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include <iostream>
#include "lattice/graph.hpp"

int main() {
  lattice::basis_t bs(1, 1); bs << 1; // 1x1 matrix
  lattice::basis basis(bs);
  lattice::unitcell unitcell(1);
  unitcell.add_site(lattice::coordinate(0), 0);
  unitcell.add_bond(0, 0, lattice::offset(1), 0);
  lattice::span_t span(1, 1); span << 16; // 1x1 matrix
  std::vector<lattice::boundary_t> boundary(1, lattice::boundary_t::periodic);
  lattice::graph lat(basis, unitcell, span, boundary);
}
