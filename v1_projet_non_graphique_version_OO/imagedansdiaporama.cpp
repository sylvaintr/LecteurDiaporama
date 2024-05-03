#include "imagedansdiaporama.h"

ImageDansDiaporama::ImageDansDiaporama(Image *pImage, int pos, int rang) : m_pos(pos),
                                                                           m_rang(rang),
                                                                           m_image(pImage)
{
}
ImageDansDiaporama::~ImageDansDiaporama()
{
}
ImageDansDiaporama::ImageDansDiaporama(const ImageDansDiaporama& other)
        : m_pos(other.m_pos), m_rang(other.m_rang), m_image(other.m_image) {}

ImageDansDiaporama& ImageDansDiaporama::operator=(const ImageDansDiaporama& other) {
    if (this != &other) { // Vérifier que l'objet n'est pas identique à lui-même
        m_pos = other.m_pos;
        m_rang = other.m_rang;
        // Gérer la copie profonde du pointeur m_image
        if (m_image != nullptr) {
            delete m_image; // Libérer la mémoire de l'ancien objet Image
        }
        if (other.m_image != nullptr) {
            m_image = new Image(*other.m_image); // Allouer de la mémoire et copier l'objet Image
        } else {
            m_image = nullptr; // Si other.m_image est nullptr, alors m_image le sera aussi
        }
    }
    return *this; 
    }
int ImageDansDiaporama::getPos() const
{
    return this->m_pos;
}

int ImageDansDiaporama::getRang() const
{
    return this->m_rang;
}
Image * ImageDansDiaporama::getImage() const
{
    return this->m_image;
};

void ImageDansDiaporama::setPos(int newPos)
{
    (*this).m_pos = newPos;
}

void ImageDansDiaporama::setRang(int newRang)
{
    (*this).m_rang = newRang;
}
void ImageDansDiaporama::setImage(Image * newImage)
{
    (*this).m_image = newImage;
}
