// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*-
// vim: ts=8 sw=2 smarttab

#ifndef CEPH_LIBRBD_CACHE_TYPES_H
#define CEPH_LIBRBD_CACHE_TYPES_H

#include <list>

class Context;

namespace librbd {
namespace cache {

enum ImageCacheType {
  IMAGE_CACHE_TYPE_RWL = 1,
};

typedef std::list<Context *> Contexts;

} // namespace cache
} // namespace librbd

#endif // CEPH_LIBRBD_CACHE_TYPES_H
