#pragma once

#include "soro/infrastructure/infrastructure.h"
#include "soro/rolling_stock/freight.h"
#include "soro/timetable/stop_sequence.h"

namespace soro::tt {

std::optional<std::pair<soro::vector<infra::interlocking_route::id>,
                        soro::vector<sequence_point>>>
get_interlocking_route_path(stop_sequence const& stop_sequence,
                            rs::FreightTrain freight,
                            infra::infrastructure const& infra);

void print_ir_generating_failures();

}  // namespace soro::tt
