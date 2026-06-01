unsigned __int64 __fastcall sub_1D6740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __m128i a7,
        __m128 a8,
        __m128 a9)
{
  _DWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  _DWORD v13[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a6 - 63 > 4 )
  {
    if ( !under_debugger )
      sub_383060(0xCC24u, *(double *)a7.m128i_i64);
    BUG();
  }
  v12[2] = a4;
  v12[0] = 1;
  v12[1] = get_dtype_size();
  v13[2] = a5;
  v13[0] = 1;
  v13[1] = get_dtype_size();
  sub_1D6450(a1, a6, (unsigned __int8 *)v12, nullptr, (unsigned __int8 *)v13, a7, a8, a9);
  sub_11CDA0((__int64)v13);
  sub_11CDA0((__int64)v12);
  return v14 - __readfsqword(0x28u);
}

