// SDLNode.h

#ifndef SDLNODE_H
#define SDLNODE_H

#include <string>

class SDLNode {
public:
    SDLNode(const std::string& name);
    void setPosition(int x, int y);
    void getPosition(int& x, int& y) const;

private:
    std::string name;
    int posX;
    int posY;
};

#endif // SDLNODE_H