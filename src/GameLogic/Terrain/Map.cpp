#include "Map.h"
#include <memory>

namespace Map {
Map::Map() {
	ChunkPtr firstWarrior(new TerrainUnits::Chunk);
	gen.setChunk(firstWarrior);
}

}
