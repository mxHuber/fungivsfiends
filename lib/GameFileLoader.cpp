#include "GameFileLoader.hpp"
#include <fstream>
#include <nlohmann/json.hpp>

void GameFileLoader::loadFile(const std::string &FilePath,
                              mlh::Renderer &Renderer) {
  std::ifstream FileStream(FilePath);
  nlohmann::json FileData = nlohmann::json::parse(FileStream);

  for (const auto Quad : FileData["Quads"]) {
    mlh::Quad ToAdd = mlh::Quad();
    ToAdd.A.Position[0] = Quad["Vertex1"]["Position"][0];
    ToAdd.A.Position[1] = Quad["Vertex1"]["Position"][1];
    ToAdd.A.Position[2] = Quad["Vertex1"]["Position"][2];
    ToAdd.A.Color[0] = Quad["Vertex1"]["Color"][0];
    ToAdd.A.Color[1] = Quad["Vertex1"]["Color"][1];
    ToAdd.A.Color[2] = Quad["Vertex1"]["Color"][2];
    ToAdd.A.Color[3] = Quad["Vertex1"]["Color"][2];
    ToAdd.A.TexCoords[0] = Quad["Vertex1"]["TexCoords"][2];
    ToAdd.A.TexCoords[1] = Quad["Vertex1"]["TexCoords"][2];
    ToAdd.A.TexCoords[2] = Quad["Vertex1"]["TexCoords"][2];

    ToAdd.B.Position[0] = Quad["Vertex2"]["Position"][0];
    ToAdd.B.Position[1] = Quad["Vertex2"]["Position"][1];
    ToAdd.B.Position[2] = Quad["Vertex2"]["Position"][2];
    ToAdd.B.Color[0] = Quad["Vertex2"]["Color"][0];
    ToAdd.B.Color[1] = Quad["Vertex2"]["Color"][1];
    ToAdd.B.Color[2] = Quad["Vertex2"]["Color"][2];
    ToAdd.B.Color[3] = Quad["Vertex2"]["Color"][2];
    ToAdd.B.TexCoords[0] = Quad["Vertex2"]["TexCoords"][2];
    ToAdd.B.TexCoords[1] = Quad["Vertex2"]["TexCoords"][2];
    ToAdd.B.TexCoords[2] = Quad["Vertex2"]["TexCoords"][2];

    ToAdd.C.Position[0] = Quad["Vertex3"]["Position"][0];
    ToAdd.C.Position[1] = Quad["Vertex3"]["Position"][1];
    ToAdd.C.Position[2] = Quad["Vertex3"]["Position"][2];
    ToAdd.C.Color[0] = Quad["Vertex3"]["Color"][0];
    ToAdd.C.Color[1] = Quad["Vertex3"]["Color"][1];
    ToAdd.C.Color[2] = Quad["Vertex3"]["Color"][2];
    ToAdd.C.Color[3] = Quad["Vertex3"]["Color"][2];
    ToAdd.C.TexCoords[0] = Quad["Vertex3"]["TexCoords"][2];
    ToAdd.C.TexCoords[1] = Quad["Vertex3"]["TexCoords"][2];
    ToAdd.C.TexCoords[2] = Quad["Vertex3"]["TexCoords"][2];

    ToAdd.D.Position[0] = Quad["Vertex4"]["Position"][0];
    ToAdd.D.Position[1] = Quad["Vertex4"]["Position"][1];
    ToAdd.D.Position[2] = Quad["Vertex4"]["Position"][2];
    ToAdd.D.Color[0] = Quad["Vertex4"]["Color"][0];
    ToAdd.D.Color[1] = Quad["Vertex4"]["Color"][1];
    ToAdd.D.Color[2] = Quad["Vertex4"]["Color"][2];
    ToAdd.D.Color[3] = Quad["Vertex4"]["Color"][2];
    ToAdd.D.TexCoords[0] = Quad["Vertex4"]["TexCoords"][2];
    ToAdd.D.TexCoords[1] = Quad["Vertex4"]["TexCoords"][2];
    ToAdd.D.TexCoords[2] = Quad["Vertex4"]["TexCoords"][2];

    Renderer.addQuad(ToAdd);
  }
}
