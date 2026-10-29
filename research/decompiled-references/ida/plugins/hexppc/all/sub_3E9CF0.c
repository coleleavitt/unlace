unsigned __int64 __fastcall sub_3E9CF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  int dtype_size; // eax
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _DWORD vars10[6]; // [rsp+10h] [rbp+10h] BYREF
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  v4 = *(_QWORD *)(a1 + 40);
  vars28 = __readfsqword(0x28u);
  vars0[0] = 0xFFFFFFFF00000000LL;
  vars0[1] = 0;
  dtype_size = get_dtype_size();
  sub_11CFD0((__int64)vars0, *(_QWORD *)(a1 + 832), a2, dtype_size, v4, 0);
  vars10[0] = 1;
  *(_QWORD *)&vars10[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(vars0[0])), _mm_cvtsi32_si128(a4)).m128i_u64[0];
  sub_1D2850(a1, 4, (unsigned __int8 *)vars0, nullptr, (unsigned __int8 *)vars10);
  sub_119360((__int64)vars10);
  sub_119360((__int64)vars0);
  return vars28 - __readfsqword(0x28u);
}

