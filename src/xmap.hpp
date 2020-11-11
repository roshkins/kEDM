#ifndef __XMAP_HPP__
#define __XMAP_HPP__

#include <Kokkos_Core.hpp>

#include "types.hpp"

namespace edm
{

void lookup(MutableDataset result, Dataset ds, LUT lut, Targets targets, int E);

void _xmap(CrossMap result, Dataset ds, LUT lut, Targets targets, int E,
           int tau, int Tp);

void group_ts(std::vector<Targets> &groups, const std::vector<int> &edims,
              int E_max);

void xmap(CrossMap result, Dataset ds, TimeSeries library,
          const std::vector<Targets> &groups, std::vector<LUT> &luts,
          TmpDistances tmp, int E_max, int tau, int Tp);

} // namespace edm

#endif
