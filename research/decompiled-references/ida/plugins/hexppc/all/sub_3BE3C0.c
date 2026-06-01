__int64 __fastcall sub_3BE3C0(
        _QWORD *a1,
        __int64 a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10)
{
  const char *v11; // rcx
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int v14; // ebx
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 i; // rbx
  __int64 v21; // rax
  __m128i v22; // xmm2
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rax
  __m128i v27; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+10h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+18h] [rbp-A8h]
  __int64 v30; // [rsp+30h] [rbp-90h] BYREF
  size_t v31; // [rsp+38h] [rbp-88h]
  __int64 v32; // [rsp+50h] [rbp-70h]
  __int128 v33; // [rsp+58h] [rbp-68h]
  __int64 v34; // [rsp+70h] [rbp-50h] BYREF
  __m128i v35; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v29 = 0;
  v28 = 0;
  sub_3A9880(&v28, (__int64)a3, 0);
  sub_403400(&v30, &v28);
  v32 = 0;
  v33 = 0;
  get_ea_name();
  if ( !v31 )
  {
    sub_2B11F0((__int64)"No %ss to %a[%s] found from functions", "call", 0.0, a3);
LABEL_5:
    v14 = 0;
    goto LABEL_6;
  }
  v11 = (const char *)&unk_4060D9;
  if ( v31 == 1 )
    v11 = (const char *)&unk_405793;
  if ( (unsigned int)sub_338F10(
                       1u,
                       (__int64)"AUTOHIDE REGISTRY\nDecompile %zu function%s that %s %a[%s]?",
                       v31,
                       v11,
                       "call",
                       0.0,
                       a3) != 1 )
    goto LABEL_5;
  sub_3B4990((__int64)&v34, a2, (__int64)a3, (__int64)&v30, 0.0, a5, a6, a7, v12, v13, a10);
  v16 = _mm_loadu_si128(&v35);
  v17 = *a1;
  v18 = v34;
  v35 = 0;
  v34 = 0;
  v27 = v16;
  if ( v17 )
  {
    v19 = a1[1];
    if ( v19 )
    {
      for ( i = 0; i != v19; ++i )
      {
        v21 = v17 + 40 * i;
        if ( *(_QWORD *)(v21 + 16) )
        {
          *(_QWORD *)(v21 + 24) = 0;
          qfree();
          v17 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree();
    v22 = _mm_load_si128(&v27);
    v23 = v34;
    *a1 = v18;
    *(__m128i *)(a1 + 1) = v22;
    if ( v23 )
    {
      v24 = v35.m128i_i64[0];
      if ( v35.m128i_i64[0] )
      {
        v25 = 0;
        do
        {
          v26 = v23 + 40 * v25;
          if ( *(_QWORD *)(v26 + 16) )
          {
            *(_QWORD *)(v26 + 24) = 0;
            qfree();
            v23 = v34;
          }
          ++v25;
        }
        while ( v24 != v25 );
      }
      v35.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    *a1 = v18;
    *(__m128i *)(a1 + 1) = v16;
  }
  v14 = 1;
LABEL_6:
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  if ( v30 )
  {
    v31 = 0;
    qfree();
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  return v14;
}

