//
// Created by lvalenty on 8/18/2022.
//

#include <log/log_level.hpp>
#include <sc/format.hpp>
#include <sc/string_constant.hpp>

#ifndef CIB_LOG_HPP
#define CIB_LOG_HPP

#ifndef LOG
#ifdef CIB_LOG_MIPI_CATALOG
#include <log/catalog/mipi_encoder.hpp>
#else
#include <log/fmt/logger.hpp>
#endif
#endif

#endif // CIB_LOG_HPP
