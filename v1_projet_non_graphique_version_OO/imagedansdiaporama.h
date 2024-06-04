#ifndef IMAGEDANSDIAPORAMA_H
#define IMAGEDANSDIAPORAMA_H
#include "image.h"
#include <vector>

class ImageDansDiaporama 
{
public:
    ImageDansDiaporama(Image *pImage, int pos, int rang);
    ImageDansDiaporama(const ImageDansDiaporama& other);
    ~ImageDansDiaporama();
    ImageDansDiaporama& operator=(const ImageDansDiaporama& other);
    //Getter
    int getPos() const;
    int getRang() const;
    Image* getImage() const;

    //Setter
    void setPos( int);
    void setRang(int);
    void setImage(Image* );

private :
    int m_pos;
    int m_rang;
    Image* m_image;
};

#endif // IMAGEDANSDIAPORAMA_H
