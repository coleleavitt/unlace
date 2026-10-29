__int64 sub_E420()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v6; // [rsp+8h] [rbp-50h]
  _BYTE v7[28]; // [rsp+18h] [rbp-40h]
  int v8; // [rsp+34h] [rbp-24h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  unsigned __int64 v10; // [rsp+48h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( !(unsigned __int8)getinf_flag() )
  {
    v8 = 0;
    v5[1] = 0;
    *(_OWORD *)&v7[12] = 0;
    v5[0] = 64;
    v6 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_70EA8), (__m128i)(unsigned __int64)"SEH list");
    v9 = 0xFFFFFFFFLL;
    *(__m128 *)v7 = _mm_loadh_ps((const double *)&PLUGIN_ptr);
    if ( (unsigned __int8)callui(127, v5, v0, v1) )
    {
      if ( !(unsigned __int8)callui(129, "Debugger/Debugger windows/Stack trace", "dbg:sehList", 1) )
        callui(128, "dbg:sehList", v3, v4);
    }
  }
  dword_73640 = -1;
  return 0;
}

