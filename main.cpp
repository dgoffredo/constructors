#include <string>

enum class Color { RED, GREEN, BLUE };

struct Point2D {
  double x;
  double y;
};

struct Options {
  std::string host = "localhost";
  int port = 8080;
  Color shade = Color::BLUE;
  Point2D origin = {0, 0};
};

struct Options2 {
  std::string host;
  int port;
  Color shade;
  Point2D origin;

  explicit Options2(std::string host = "localhost", int port = 8080, Color shade = Color::BLUE,
                    Point2D origin = {0, 0});
};

inline Options2::Options2(std::string host, int port, Color shade, Point2D origin)
    : host(host), port(port), shade(shade), origin(origin) {}

int main() {
  Options instance1;
  (void)instance1;

  Options instance2{};
  (void)instance2;

  Options instance3 = {};
  (void)instance3;

  /* Doesn't compile:
  Options instance4{
      "remote",
      1337,
      Color::GREEN,
      {1.2, 2.1}
  };
  (void) instance4;
  */

  Options2 instance5{"remote", 1337, Color::GREEN, {1.2, 2.1}};
  (void)instance5;

  Options2 instance6{"remote", 12345};
  (void)instance6;
}