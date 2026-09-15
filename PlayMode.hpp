#include "Mode.hpp"

#include "Scene.hpp"
#include "Sound.hpp"

#include "BeatSequence.hpp"

#include <glm/glm.hpp>

#include <vector>
#include <deque>

struct PlayMode : Mode {
	PlayMode();
	virtual ~PlayMode();

	//functions called by main loop:
	virtual bool handle_event(SDL_Event const &, glm::uvec2 const &window_size) override;
	virtual void update(float elapsed) override;
	virtual void draw(glm::uvec2 const &drawable_size) override;

	//----- game state -----

	//input tracking:
	struct Button {
		uint8_t downs = 0;
		uint8_t pressed = 0;
	} left, right, down, up;

	//local copy of the game scene (so code can change it during gameplay):
	Scene scene;

	//tombstones
	Scene::Transform *Tombstone1 = nullptr;
	Scene::Transform *Tombstone2 = nullptr;
	Scene::Transform *Tombstone3 = nullptr;

	// glm::vec3 get_leg_tip_position();

	// //music coming from the tip of the leg (as a demonstration):
	// std::shared_ptr< Sound::PlayingSample > leg_tip_loop;

	// //car honk sound:
	// std::shared_ptr< Sound::PlayingSample > honk_oneshot;
	
	//camera:
	Scene::Camera *camera = nullptr;

	//motion:
	glm::vec2 motion;

	//beat sequences:
	BeatSequence beat1;
	BeatSequence beat2;
	BeatSequence beat3;

	//beat sequence bools:
	bool canDrawBeat1 = false;
	bool canDrawBeat2 = false;
	bool canDrawBeat3 = false;
};
