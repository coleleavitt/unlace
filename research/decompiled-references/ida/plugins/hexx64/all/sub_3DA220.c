unsigned __int64 __fastcall sub_3DA220(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rcx
  void *v17; // r8
  __m128i si128; // xmm0
  const void *v20; // rsi
  void *v21; // rax
  void *v22; // rax
  size_t v23; // [rsp+8h] [rbp-A0h]
  size_t v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 v29[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v30; // [rsp+50h] [rbp-58h] BYREF
  __m128i v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 64);
  v32 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 32);
  v28 = 0;
  v9 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v6 + 1496)), (__m128i)v6);
  v27 = v9;
  if ( v8 != -1 )
  {
    sub_FAAD0(a2);
    *a3 += 2;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a4 + 120)) || *(_QWORD *)(a4 + 144) )
  {
    sub_FAAD0(a2);
    sub_1B3C00((_QWORD *)(a4 + 120), a2, (__int64)&v27, *(double *)v9.m128i_i64);
    ++*a3;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a4 + 200)) || *(_QWORD *)(a4 + 224) )
  {
    sub_FAAD0(a2);
    sub_1B3C00((_QWORD *)(a4 + 200), a2, (__int64)&v27, *(double *)v9.m128i_i64);
    ++*a3;
  }
  sub_64000(v29, a4 + 160, *(double *)v9.m128i_i64);
  v13 = *(_QWORD *)(a4 + 184);
  v30 = nullptr;
  v31 = 0;
  if ( v13 )
  {
    v24 = v13;
    n[0] = 16 * v13;
    v30 = (void *)qalloc_or_throw(16 * v13, a4 + 160, 16 * v13, v13);
    v20 = *(const void **)(a4 + 176);
    v31.m128i_i64[1] = v24;
    memcpy(v30, v20, n[0]);
    v13 = v24;
    v31.m128i_i64[0] = v24;
  }
  sub_64640(v29, (__int64 *)(a4 + 120), v10, v13, v11, v12);
  sub_317C60((__int64 *)&v30, a4 + 136);
  if ( !(unsigned __int8)sub_64880(v29) || v31.m128i_i64[0] )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v29, a2, (__int64)&v27, 0.0);
    ++*a3;
  }
  sub_648D0(v29, (const void **)(a4 + 240), 0.0);
  v16 = *(_QWORD *)(a4 + 264);
  v17 = nullptr;
  if ( v16 )
  {
    n[0] = *(_QWORD *)(a4 + 264);
    v25 = 16 * v16;
    v21 = (void *)qalloc_or_throw(16 * v16, a4 + 240, 16 * v16, v16);
    v22 = memcpy(v21, *(const void **)(a4 + 256), v25);
    v16 = n[0];
    v17 = v22;
  }
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
  if ( v30 )
  {
    v23 = (size_t)v17;
    *(__m128i *)n = si128;
    v31.m128i_i64[0] = 0;
    qfree((__int64)v30);
    si128 = _mm_load_si128((const __m128i *)n);
    v17 = (void *)v23;
  }
  v30 = v17;
  v31 = si128;
  sub_64640(v29, (__int64 *)(a4 + 200), v14, v16, (__int64)v17, v15);
  sub_317C60((__int64 *)&v30, a4 + 216);
  if ( !(unsigned __int8)sub_64880(v29) || v31.m128i_i64[0] )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v29, a2, (__int64)&v27, *(double *)si128.m128i_i64);
    ++*a3;
  }
  if ( v30 )
  {
    v31.m128i_i64[0] = 0;
    qfree((__int64)v30);
  }
  qfree(v29[0]);
  return v32 - __readfsqword(0x28u);
}

