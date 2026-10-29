unsigned __int64 __fastcall sub_C0E0(__int64 a1, __int64 a2, _BYTE *a3, double a4, double a5, double a6, __m128 a7)
{
  __int64 v7; // rax
  bool v10; // zf
  unsigned __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // r12
  const char *v13; // rax
  const char *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 *v18; // r12
  __int64 *v19; // r15
  const __m128i *v20; // r12
  const __m128i *v21; // r15
  __m128i v22; // xmm1
  __m128i v24; // [rsp+0h] [rbp-118h] BYREF
  __m128i v25; // [rsp+10h] [rbp-108h] BYREF
  const __m128i *v26; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+28h] [rbp-F0h]
  __int64 v28; // [rsp+38h] [rbp-E0h]
  int v29; // [rsp+40h] [rbp-D8h]
  __m128i v30; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-B8h]
  int v32; // [rsp+68h] [rbp-B0h]
  __int64 v33; // [rsp+70h] [rbp-A8h]
  __int128 v34; // [rsp+78h] [rbp-A0h]
  __int64 (__fastcall **v35)(); // [rsp+90h] [rbp-88h] BYREF
  __int64 v36; // [rsp+98h] [rbp-80h]
  __int128 v37; // [rsp+A0h] [rbp-78h]
  __int64 v38; // [rsp+B0h] [rbp-68h]
  int v39; // [rsp+B8h] [rbp-60h]
  const __m128i **v40; // [rsp+C0h] [rbp-58h]
  int v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 112);
  if ( *(_BYTE *)(v7 + 773) && *(_QWORD *)(v7 + 792) )
  {
    v10 = *a3 == 0;
    v11 = sub_5CB0;
    if ( !v10 )
      v11 = sub_5BE0;
    ((void (__fastcall *)(const char *, const char *))v11)("DSCU: %s", "Detecting global offset tables");
    *a3 = 1;
    v12 = *(_QWORD *)(a1 + 112);
    v13 = (const char *)(v12 + 23);
    v14 = (const char *)(v12 + 32);
    while ( *v13 == 32 )
    {
      if ( ++v13 == v14 )
        goto LABEL_8;
    }
    v14 = v13;
LABEL_8:
    v15 = strcmp(v14, "arm64_32");
    v26 = nullptr;
    v28 = 0;
    v29 = -1;
    v27 = 0;
    v36 = 0;
    v38 = 0;
    v39 = -1;
    v35 = off_1E900;
    v40 = &v26;
    v41 = v15 == 0 ? 4 : 8;
    v37 = 0;
    sub_9580(v12, (__int64)&v35);
    v16 = *(_QWORD *)(a1 + 112);
    v17 = *(__int64 **)(v16 + 784);
    v18 = &v17[*(_QWORD *)(v16 + 792)];
    if ( v18 != v17 )
    {
      v19 = *(__int64 **)(v16 + 784);
      do
        sub_9580(*v19++, (__int64)&v35);
      while ( v18 != v19 );
    }
    rangeset_t_intersect(&v26, a2);
    v20 = &v26[v27];
    if ( v20 != v26 )
    {
      v21 = v26;
      do
      {
        v22 = _mm_loadu_si128(v21);
        v33 = 0;
        v31 = 5;
        a7 = _mm_movehl_ps(a7, (__m128)v22);
        v32 = -1;
        v34 = 0;
        v30 = _mm_unpacklo_epi64(v22, (__m128i)(a7.m128_u64[0] - v22.m128i_i64[0]));
        if ( a7.m128_u64[0] != v22.m128i_i64[0] )
        {
          v24 = v22;
          sub_6130(a1, (__int64)&v30);
          v22 = _mm_load_si128(&v24);
        }
        v25 = v22;
        rangeset_t_sub(a2, &v25);
        ++v21;
      }
      while ( v20 != v21 );
    }
    v35 = off_1E298;
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  return v42 - __readfsqword(0x28u);
}

