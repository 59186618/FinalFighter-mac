
#import "Box2D.h"
#import <vector>
#import <algorithm>

struct GameContact
{
    b2Body *bodyA;
    b2Body *bodyB;
    b2Fixture *fixtureA;
    b2Fixture *fixtureB;
    bool begin;
//    bool operator == (const MyContact& other) const {
//        return (fixtureA == other.fixtureA) && (fixtureB == other.fixtureB);
//    }
};

class GameContactListener : public b2ContactListener
{
public:
    std::vector<GameContact>_contacts;
    
    GameContactListener();
    ~GameContactListener();
    
	virtual void BeginContact(b2Contact* contact);
	virtual void EndContact(b2Contact* contact);
//	virtual void PreSolve(b2Contact* contact, const b2Manifold* oldManifold);    
//	virtual void PostSolve(b2Contact* contact, const b2ContactImpulse* impulse);
};
