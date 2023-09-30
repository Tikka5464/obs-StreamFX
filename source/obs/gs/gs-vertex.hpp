// AUTOGENERATED COPYRIGHT HEADER START
// Copyright (C) 2017-2023 Michael Fabian 'Xaymar' Dirks <info@xaymar.com>
// AUTOGENERATED COPYRIGHT HEADER END

#pragma once
#include "common.hpp"
#include "gs-limits.hpp"

namespace streamfx::obs::gs {
	struct vertex {
		vec3*     position;
		vec3*     normal;
		vec3*     tangent;
		uint32_t* color;
		vec4*     uv[MAXIMUM_UVW_LAYERS];

		vertex();
		vertex(vec3* p, vec3* n, vec3* t, uint32_t* col, vec4* uv[MAXIMUM_UVW_LAYERS]);
		~vertex();

		private:
		bool  _has_store;
		void* _store;
	};
} // namespace streamfx::obs::gs
