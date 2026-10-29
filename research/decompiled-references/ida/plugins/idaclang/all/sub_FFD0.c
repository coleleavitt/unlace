__int64 __fastcall sub_FFD0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __int128 a9,
        __int64 a10)
{
  unsigned __int8 v11; // r14
  __int128 v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v20; // rsi
  unsigned int v21; // eax
  const char *v22; // rdi
  const char *v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  const char *v27; // rdx
  const char *v28; // [rsp+20h] [rbp-70h] BYREF
  __m128i v29; // [rsp+28h] [rbp-68h] BYREF
  const char *v30; // [rsp+40h] [rbp-50h] BYREF
  __int64 v31; // [rsp+48h] [rbp-48h]
  unsigned __int64 v32; // [rsp+58h] [rbp-38h]

  v11 = a3;
  v32 = __readfsqword(0x28u);
  v29 = 0;
  v14 = (__int128)_mm_loadu_si128((const __m128i *)&a9);
  v28 = nullptr;
  v17 = sub_D270((__int64)&v28, *(double *)&v14, a8, (__int64)a2, a3, (__int64)a4, a5, a6, v14, a10);
  if ( (_BYTE)v17 )
  {
    v20 = s1;
    if ( v29.m128i_i64[0] )
      v20 = v28;
    v21 = sub_E9F0(a2, v20, v11, a4);
    v22 = v28;
    v17 = v21;
    if ( (_BYTE)v21 && a1 )
    {
      v23 = *(const char **)a1;
      v24 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = v28;
      v25 = _mm_loadu_si128(&v29);
      v28 = v23;
      v22 = v23;
      v29.m128i_i64[1] = v24;
      *(__m128i *)(a1 + 8) = v25;
    }
  }
  else
  {
    sub_E8A0((__int64)&v30, (__int64)a2, v15, v16, v18, v19, (__int128)_mm_loadu_si128((const __m128i *)&a9));
    v27 = s1;
    if ( v31 )
      v27 = v30;
    sub_67C0(a4 + 10, (__int64)"can't forward declare type: %s", v27);
    if ( v30 )
    {
      v31 = 0;
      qfree(v30);
    }
    ++a4[17];
    v22 = v28;
  }
  if ( v22 )
  {
    v29.m128i_i64[0] = 0;
    qfree(v22);
  }
  return v17;
}

