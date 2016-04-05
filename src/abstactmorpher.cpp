#include "abstactmorpher.h"

abstactMorpher::abstactMorpher(std::string path)
{
    ofxAssimpModelLoader loader = ofxAssimpModelLoader();
    loader.loadModel(path);
    m_svp_0 = loader.getMesh(0);
    m_vert_num = m_svp_0.getNumVertices();
}

abstactMorpher::~abstactMorpher()
{

}

int abstactMorpher::get_vert_num() const
{
    return m_vert_num;
}

void abstactMorpher::setW(int w)
{
        m_w = w;
}
