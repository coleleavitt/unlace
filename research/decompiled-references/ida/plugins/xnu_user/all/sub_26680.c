__int64 __fastcall sub_26680(__int64 a1, const __m128i *a2)
{
  size_t v2; // rax
  size_t v3; // rbp
  __m128i v4; // xmm0
  void *v5; // rbx
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  size_t v8; // r12
  size_t v9; // r12
  size_t v10; // r12
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  size_t v16; // r13
  __m128i v17; // [rsp+0h] [rbp-128h] BYREF
  __m128i v18; // [rsp+10h] [rbp-118h]
  void *v19; // [rsp+20h] [rbp-108h]
  size_t v20[2]; // [rsp+28h] [rbp-100h]
  void *v21; // [rsp+38h] [rbp-F0h]
  size_t v22[2]; // [rsp+40h] [rbp-E8h]
  __int64 v23; // [rsp+50h] [rbp-D8h]
  void *src; // [rsp+58h] [rbp-D0h]
  size_t n[2]; // [rsp+60h] [rbp-C8h]
  int v26; // [rsp+70h] [rbp-B8h]
  _OWORD *v27; // [rsp+80h] [rbp-A8h] BYREF
  __m128i v28; // [rsp+88h] [rbp-A0h] BYREF
  void *v29; // [rsp+98h] [rbp-90h]
  __int128 v30; // [rsp+A0h] [rbp-88h]
  void *v31; // [rsp+B0h] [rbp-78h]
  __int128 v32; // [rsp+B8h] [rbp-70h]
  __int64 v33; // [rsp+C8h] [rbp-60h]
  void *v34; // [rsp+D0h] [rbp-58h]
  __int128 v35; // [rsp+D8h] [rbp-50h]
  int v36; // [rsp+E8h] [rbp-40h]
  unsigned __int64 v37; // [rsp+F8h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  *(_OWORD *)v20 = 0;
  *(_OWORD *)v22 = 0;
  *(_OWORD *)n = 0;
  v19 = nullptr;
  v21 = nullptr;
  src = nullptr;
  v26 = 25;
  v23 = 0xB00000019LL;
  v18 = _mm_loadu_si128(a2 + 5);
  if ( a2 )
  {
    v2 = strlen(a2->m128i_i8);
    v3 = v2;
    if ( v2 )
    {
      v16 = v2 + 1;
      v19 = (void *)qvector_reserve();
      v20[0] = v16;
      memmove(v19, a2, v3);
      *((_BYTE *)v19 + v3) = 0;
    }
  }
  v28 = 0;
  v27 = (_OWORD *)qvector_reserve();
  memset(v27, 0, sizeof(_OWORD));
  v4 = _mm_loadu_si128(a2 + 4);
  v28.m128i_i64[0] = 16;
  *v27 = v4;
  v5 = v27;
  v6 = _mm_loadu_si128(&v28);
  v27 = nullptr;
  v28 = 0;
  if ( v21 )
  {
    v17 = v6;
    v22[0] = 0;
    qfree();
    v6 = _mm_load_si128(&v17);
  }
  v21 = v5;
  *(__m128i *)v22 = v6;
  v7 = *(_QWORD **)(a1 + 8);
  v29 = nullptr;
  v8 = v20[0];
  v30 = 0;
  v27 = (_OWORD *)v18.m128i_i64[0];
  v28 = v18;
  if ( v20[0] )
  {
    v29 = (void *)qalloc_or_throw();
    *((_QWORD *)&v30 + 1) = v8;
    memcpy(v29, v19, v8);
    *(_QWORD *)&v30 = v8;
  }
  v9 = v22[0];
  v31 = nullptr;
  v32 = 0;
  if ( v22[0] )
  {
    v31 = (void *)qalloc_or_throw();
    *((_QWORD *)&v32 + 1) = v9;
    memcpy(v31, v21, v9);
    *(_QWORD *)&v32 = v9;
  }
  v10 = n[0];
  v34 = nullptr;
  v35 = 0;
  v33 = v23;
  if ( n[0] )
  {
    v34 = (void *)qalloc_or_throw();
    *((_QWORD *)&v35 + 1) = v10;
    memcpy(v34, src, v10);
    *(_QWORD *)&v35 = v10;
  }
  v11 = v7 + 1;
  v36 = v26;
  v12 = (_QWORD *)v7[2];
  if ( !v12 )
    goto LABEL_32;
  do
  {
    while ( 1 )
    {
      v13 = v12[2];
      v14 = v12[3];
      if ( v12[4] < (unsigned __int64)v27 )
        break;
      v11 = v12;
      v12 = (_QWORD *)v12[2];
      if ( !v13 )
        goto LABEL_17;
    }
    v12 = (_QWORD *)v12[3];
  }
  while ( v14 );
LABEL_17:
  if ( v7 + 1 == v11 || (unsigned __int64)v27 < v11[4] )
LABEL_32:
    sub_26100(v7, v11, (__int64)&v27);
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree();
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( v21 )
  {
    v22[0] = 0;
    qfree();
  }
  if ( v19 )
  {
    v20[0] = 0;
    qfree();
  }
  return 0;
}

