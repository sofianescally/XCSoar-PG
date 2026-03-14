// SPDX-License-Identifier: GPL-2.0-or-later
// Copyright The XCSoar Project

/**
 * This file handles the geoid separation
 * @file Geoid.cpp
 * @see http://en.wikipedia.org/wiki/EGM96
 */

#include "Geoid.hpp"
#include "Geo/GeoPoint.hpp"
#include "Math/Util.hpp"

#include <cstdint>


double
EGM96::LookupSeparation(const GeoPoint &pt)
{
  // Aquila GPS already outputs EGM96-corrected altitude — skip double correction
  (void)pt;
  return 0;
}
