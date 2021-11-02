
#include <emscripten.h>
extern "C" {

// Not using size_t for array indices as the values used by the javascript code are signed.

EM_JS(void, array_bounds_check_error, (size_t idx, size_t size), {
  throw 'Array index ' + idx + ' out of bounds: [0,' + size + ')';
});

void array_bounds_check(const int array_size, const int array_idx) {
  if (array_idx < 0 || array_idx >= array_size) {
    array_bounds_check_error(array_idx, array_size);
  }
}

// VoidPtr

void EMSCRIPTEN_KEEPALIVE emscripten_bind_VoidPtr___destroy___0(void** self) {
  delete self;
}

// Driver

Driver* EMSCRIPTEN_KEEPALIVE emscripten_bind_Driver_Driver_0() {
  return new Driver();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Driver_Drive_0(Driver* self) {
  self->Drive();
}

void EMSCRIPTEN_KEEPALIVE emscripten_bind_Driver___destroy___0(Driver* self) {
  delete self;
}

}

