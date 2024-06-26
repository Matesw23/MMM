#include <ctime>
#include <functional>
#include <tuple>
#include <vector>

#include "SDL3/SDL_render.h"
#include "SDL3/SDL_video.h"
#include "common.h"
#include "imgui.h"

struct WindowOptions {
  bool  start_simulation = false;
  bool  auto_scroll      = true;
  int   inputType        = 0;
  float width            = 1;
  float amplitude        = 1;
  float time_step        = 0.01f;
  float offset           = 0;
};

class WindowManager {
  constexpr static auto background_color = ImVec4(0.55f, 0.55f, 0.60f, 1.00f);

  ImGuiIO                  io;
  SDL_Window*              window;
  SDL_Renderer*            renderer;
  std::vector<CircutState> states;
  std::vector<float>       timeSteps;
  WindowOptions            options;
  CircutParameters         params;

  auto                                   init_imgui();
  std::tuple<SDL_Window*, SDL_Renderer*> init_backend();

 public:
  WindowManager();
  void render();
  void render_plot_window();

  void render_parameters_window(std::function<void(void)> const& callback);
  void process_events(bool& done);
  void newFrame();
  void add_timeStep(float timeStep);
  void add_state(CircutState state);

  InputShape       getInputShape() const;
  CircutParameters getParams() const;
  WindowOptions    getOptions() const;
};
