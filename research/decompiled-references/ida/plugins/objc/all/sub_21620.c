__int64 __fastcall sub_21620(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int tinfo; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // rbx
  size_t v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx
  void *v13; // rax
  __m128i v14; // xmm0
  void *v15; // rax
  __m128i v16; // xmm1
  int v17; // eax
  int v18; // ecx
  char v19; // dl
  char v20; // dl
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbp
  unsigned __int64 v27; // [rsp+38h] [rbp-150h] BYREF
  int v28; // [rsp+40h] [rbp-148h]
  __int64 v29; // [rsp+48h] [rbp-140h]
  void *v30; // [rsp+50h] [rbp-138h]
  size_t v31[2]; // [rsp+58h] [rbp-130h]
  void *src; // [rsp+68h] [rbp-120h]
  size_t n[2]; // [rsp+70h] [rbp-118h]
  __int64 v34; // [rsp+80h] [rbp-108h] BYREF
  int v35; // [rsp+88h] [rbp-100h]
  int v36; // [rsp+90h] [rbp-F8h]
  void *v37; // [rsp+A0h] [rbp-E8h]
  __m128i v38; // [rsp+A8h] [rbp-E0h] BYREF
  void *v39; // [rsp+B8h] [rbp-D0h]
  __m128i v40; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-B8h]
  int v42; // [rsp+D8h] [rbp-B0h]
  __int64 v43; // [rsp+E0h] [rbp-A8h]
  __int128 v44; // [rsp+E8h] [rbp-A0h]
  __int64 v45; // [rsp+F8h] [rbp-90h]
  __int64 v46[2]; // [rsp+100h] [rbp-88h] BYREF
  __int128 v47; // [rsp+110h] [rbp-78h]
  __int64 v48; // [rsp+120h] [rbp-68h]
  __int128 v49; // [rsp+128h] [rbp-60h]
  char v50; // [rsp+138h] [rbp-50h]
  unsigned __int64 v51; // [rsp+148h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v50 = 16;
  v27 = 0;
  v43 = 0;
  v45 = 0;
  v46[0] = 0;
  v46[1] = 0;
  v48 = 0;
  v44 = 0;
  v47 = 0;
  v49 = 0;
  tinfo = sub_1F890(a1, a2, v46, a4, &v27);
  if ( (_BYTE)tinfo )
  {
    v6 = a4[1];
    if ( v6 && v27 < v6 - 1 && *(_BYTE *)(*a4 + v27) == 63 )
      ++v27;
    sub_17060(0, a4, (__int64 *)&v27);
    v28 = 0;
    v29 = 0;
    v30 = 0;
    src = 0;
    v34 = 0;
    v35 = 0;
    *(_OWORD *)v31 = 0;
    *(_OWORD *)n = 0;
    while ( (unsigned __int8)sub_1F890(a1, a2, &v34, a4, &v27) )
    {
      v7 = a4[1];
      if ( v7 && v27 < v7 - 1 && *(_BYTE *)(*a4 + v27) == 63 )
        ++v27;
      sub_17060(0, a4, (__int64 *)&v27);
      v36 = 0;
      copy_argloc();
      v8 = v31[0];
      v37 = 0;
      v38 = 0;
      if ( v31[0] )
      {
        v37 = (void *)qalloc_or_throw();
        v38.m128i_i64[1] = v8;
        memcpy(v37, v30, v8);
        v38.m128i_i64[0] = v8;
      }
      v9 = n[0];
      v39 = 0;
      v40 = 0;
      if ( n[0] )
      {
        v39 = (void *)qalloc_or_throw();
        v40.m128i_i64[1] = v9;
        memcpy(v39, src, v9);
        v40.m128i_i64[0] = v9;
      }
      v41 = 0;
      copy_tinfo_t();
      v10 = v44;
      v11 = v43;
      v42 = v35;
      if ( *((_QWORD *)&v44 + 1) < (unsigned __int64)(v44 + 1) )
      {
        v43 = qvector_reserve();
        v10 = v44;
        v11 = v43;
      }
      v12 = v11 + 80 * v10;
      *(_DWORD *)v12 = 0;
      copy_argloc();
      v13 = v37;
      *(_QWORD *)(v12 + 64) = 0;
      v14 = _mm_loadu_si128(&v38);
      v37 = 0;
      *(_QWORD *)(v12 + 16) = v13;
      *(__m128i *)(v12 + 24) = v14;
      v15 = v39;
      v16 = _mm_load_si128(&v40);
      v39 = 0;
      *(_QWORD *)(v12 + 40) = v15;
      *(__m128i *)(v12 + 48) = v16;
      v38 = 0;
      v40 = 0;
      copy_tinfo_t();
      *(_QWORD *)&v44 = v44 + 1;
      *(_DWORD *)(v12 + 72) = v42;
      clear_tinfo_t();
      if ( v39 )
      {
        v40.m128i_i64[0] = 0;
        qfree();
      }
      if ( v37 )
      {
        v38.m128i_i64[0] = 0;
        qfree();
      }
      cleanup_argloc();
    }
    v17 = getinf();
    v18 = v17;
    v19 = v50 & 0xF;
    if ( (v17 & 0xFFFFFF0F) != 0 || v17 == 192 )
    {
      v20 = v19 | 0xC0;
    }
    else
    {
      v20 = v17 | v19;
      v18 = 0;
    }
    HIDWORD(v45) = v18;
    v50 = v20;
    tinfo = create_tinfo();
    clear_tinfo_t();
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    if ( v30 )
    {
      v31[0] = 0;
      qfree();
    }
    cleanup_argloc();
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v21 = v43;
  if ( v43 )
  {
    v22 = v44;
    if ( (_QWORD)v44 )
    {
      v23 = 0;
      do
      {
        v24 = (_QWORD *)(v21 + 80 * v23);
        clear_tinfo_t();
        if ( v24[5] )
        {
          v24[6] = 0;
          qfree();
        }
        if ( v24[2] )
        {
          v24[3] = 0;
          qfree();
        }
        ++v23;
        cleanup_argloc();
        v21 = v43;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  return tinfo;
}
