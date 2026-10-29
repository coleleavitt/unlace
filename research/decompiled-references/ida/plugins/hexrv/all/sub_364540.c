bool __fastcall sub_364540(
        const char *a1,
        __int64 a2,
        int a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 module_data; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  module_data = get_module_data();
  return sub_363C90(*(const __m128i **)(module_data + 800), nullptr, a1, a2, a3, a4, a5, a6, a7, v12, v13, a10);
}

