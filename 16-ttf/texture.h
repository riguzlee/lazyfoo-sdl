#ifndef _TEXTURE_H_
#define _TEXTURE_H_

#include <string>
#include <inttypes.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

class Texture
{
	public:
		Texture();
		Texture(SDL_Renderer* renderer);
		~Texture();
	public:
		void setRenderer(SDL_Renderer* renderer);
		bool loadFromFile(const std::string& path);
		bool loadFromText(const std::string& text, TTF_Font* font,  SDL_Color color);
		void free();
		void setColor(uint8_t r, uint8_t g, uint8_t b);
		void setBlendMode(SDL_BlendMode blending);
		void setAlpha(uint8_t alpha);
		void render(int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE);
		int getWidth();
		int getHeight();
	private:
		SDL_Texture* _texture;
		SDL_Renderer* _renderer;
		int _width;
		int _height;
};

#endif
