unsigned __int64 __fastcall sub_F8530(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rbp
  int tinfo_size; // eax
  __int64 v5[5]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v6; // [rsp+38h] [rbp-70h]
  __m128i v7; // [rsp+40h] [rbp-68h] BYREF
  __int64 v8; // [rsp+50h] [rbp-58h]
  __int64 v9; // [rsp+58h] [rbp-50h]
  __int64 v10; // [rsp+60h] [rbp-48h]
  __m128i v11; // [rsp+68h] [rbp-40h]
  unsigned __int64 v12; // [rsp+78h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v5[0] = (__int64)&off_4DCFB0;
  memset(&v5[1], 0, 32);
  v6 = -1;
  sub_11F9E0(a1, v5);
  if ( v6 != -1 )
  {
    v2 = 13 * *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
    LOWORD(v8) = 256;
    v3 = v2;
    v7.m128i_i64[1] = (__int64)"SjLj_Function_Context";
    v7.m128i_i64[0] = get_idati();
    if ( (unsigned __int8)create_tinfo() )
    {
      tinfo_size = get_tinfo_size();
      if ( v2 >= tinfo_size )
        tinfo_size = v2;
      v3 = tinfo_size;
    }
    v7.m128i_i64[1] = 0;
    v8 = 0;
    v7.m128i_i64[0] = (__int64)&off_4DCFD8;
    v9 = 0;
    v10 = 0;
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)(v6 + v3));
    sub_11FC20(a1, (__int64)&v7);
    sub_190300(a1, &v7);
    clear_tinfo_t();
  }
  return v12 - __readfsqword(0x28u);
}

