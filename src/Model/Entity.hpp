//
// Created by dederobert on 13/09/17.
//

#ifndef PETITRPG_ENTITY_HPP
#define PETITRPG_ENTITY_HPP

#include <string>
#include <sstream>
#include "../Utils/Vector2I.hpp"

class Entity {

    Vector2I position;

public:
    /**
     * Create an entity with position (0,0)
     */
    Entity() : position(Vector2I()) {}

    /**
     *
     * @param position
     */
    Entity(const Vector2I &position) : position(position) {}

    /**
     * Move the entity depending on delta
     * @param delta Position variation
     */
    virtual void move(const Vector2I &delta) {
        position += delta;
    }

    virtual std::string toString() const {
        std::ostringstream oss;
        oss << "Entity[position(" << position.x << "," << position.y << ")]";
        return oss.str();
    }

    friend std::ostream &operator<<(std::ostream &flux, const Entity &entity);
};

std::ostream &operator<<(std::ostream &flux, const Entity &entity) {
    return flux << entity.toString();
}

#endif //PETITRPG_ENTITY_HPP
