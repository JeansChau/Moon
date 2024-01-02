#include <iostream>
#include <luisa/luisa-compute.h>

using namespace luisa;
using namespace luisa::compute;
using luisa::compute::detail::FunctionBuilder;
int main(int argc, char* argv[])
{
	luisa::log_level_verbose();
	luisa::compute::Context ctx{argv[0]};
	auto device = ctx.create_device("cuda");
	Stream stream = device.create_stream();
	Buffer<int> buf = device.create_buffer<int>(100);
	auto h = 1.0_h;
	auto f = sin(h);
	LUISA_INFO("h = {}, f = {}, f * f = {}, f + h = {}", h, f, f * f, f + h);

	Kernel1D k1 = [&] {
		buf->write(1, 43);
		};

	Shader1D<> s = device.compile(k1);
	stream << s().dispatch(1024u);
	stream << synchronize();

	std::cout << "This is the \"Moon\" framework" << std::endl;
	return 0;
}