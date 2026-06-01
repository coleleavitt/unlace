_BOOL8 __fastcall sub_F820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v14; // [rsp+0h] [rbp-78h] BYREF
  __m128i v15; // [rsp+8h] [rbp-70h]
  __m128 v16; // [rsp+18h] [rbp-60h]
  __int128 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  unsigned __int64 v19; // [rsp+48h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v4 = callui(1067, a2, a3, a4);
  v5 = qalloc_or_throw();
  sub_F5D0(v5, v4);
  v14 = -1;
  v6 = callui(16, 0, v5, &v14);
  v9 = v6 == 0;
  if ( !v6 )
  {
    v12 = callui(60, *(_QWORD *)(v5 + 40), v7, v8);
    if ( v12 )
    {
      v14 = 64;
      v15 = _mm_unpacklo_epi64(
              (__m128i)(unsigned __int64)"x86seh:Stack",
              (__m128i)(unsigned __int64)"Follow in stack view");
      v16 = _mm_loadh_ps((const double *)&PLUGIN_ptr);
      v18 = 0xFFFFFFFFLL;
      v17 = 0;
      callui(127, &v14, v10, v11);
      callui(131, v12, 0, "x86seh:Stack");
    }
  }
  return v9;
}

