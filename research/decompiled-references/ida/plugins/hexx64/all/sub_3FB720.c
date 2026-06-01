unsigned __int64 __fastcall sub_3FB720(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  int dtype_size; // eax
  __int64 v12; // r8
  unsigned __int64 *v13; // rsi
  _DWORD v15[4]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  dtype_size = get_dtype_size();
  v15[2] = a3;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(unsigned __int64 **)(a1 + 832);
  v15[0] = 1;
  v15[1] = dtype_size;
  v16[0] = 0xFFFFFFFF00000000LL;
  v16[1] = 0;
  sub_120A10((__int64)v16, v13, 0, dtype_size, v12, 7);
  v18 = a5;
  v17 = 0x100000001LL;
  sub_1D6450(a1, a2, (unsigned __int8 *)v15, (unsigned __int8 *)v16, (unsigned __int8 *)&v17, a6, a7, a8);
  sub_11CDA0((__int64)&v17);
  sub_11CDA0((__int64)v16);
  sub_11CDA0((__int64)v15);
  return v19 - __readfsqword(0x28u);
}

