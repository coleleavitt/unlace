__int64 __fastcall sub_24900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  const __m128i *v4; // rdi
  __m128i *v5; // rax
  __m128i *v6; // rdx
  __m128i *v7; // rcx
  __m128i *v8; // rdx
  __m128i *v9; // rcx
  __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __int64 v16; // rbp
  size_t v17; // rbp
  size_t v18; // rbp
  size_t v19; // rbp
  size_t v20; // rbp
  size_t v21; // rbp
  int v22; // eax
  char *v23; // rbx
  __int64 v24; // r13
  char *v26; // [rsp+10h] [rbp-898h]
  _QWORD v27[213]; // [rsp+60h] [rbp-848h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+708h] [rbp-1A0h]
  __int64 v29; // [rsp+710h] [rbp-198h]
  __int64 v30; // [rsp+718h] [rbp-190h]
  __int16 v31; // [rsp+720h] [rbp-188h]
  int v32; // [rsp+730h] [rbp-178h] BYREF
  void *v33; // [rsp+738h] [rbp-170h]
  __m128i *v34; // [rsp+740h] [rbp-168h]
  __m128i *v35; // [rsp+748h] [rbp-160h]
  __int64 v36; // [rsp+750h] [rbp-158h]
  __m128i v37; // [rsp+758h] [rbp-150h]
  __m128i v38; // [rsp+768h] [rbp-140h]
  __m128i v39; // [rsp+778h] [rbp-130h]
  __m128i v40; // [rsp+788h] [rbp-120h]
  __m128i v41; // [rsp+798h] [rbp-110h]
  __int64 v42; // [rsp+7A8h] [rbp-100h]
  char *v43; // [rsp+7B0h] [rbp-F8h]
  __int128 v44; // [rsp+7B8h] [rbp-F0h]
  __int64 v45; // [rsp+7C8h] [rbp-E0h]
  int v46; // [rsp+7D0h] [rbp-D8h]
  void *v47; // [rsp+7D8h] [rbp-D0h]
  __int128 v48; // [rsp+7E0h] [rbp-C8h]
  void *v49; // [rsp+7F0h] [rbp-B8h]
  __int128 v50; // [rsp+7F8h] [rbp-B0h]
  void *v51; // [rsp+808h] [rbp-A0h]
  __int128 v52; // [rsp+810h] [rbp-98h]
  void *v53; // [rsp+820h] [rbp-88h]
  __int128 v54; // [rsp+828h] [rbp-80h]
  void *v55; // [rsp+838h] [rbp-70h]
  __int128 v56; // [rsp+840h] [rbp-68h]
  int v57; // [rsp+850h] [rbp-58h]
  unsigned __int64 v58; // [rsp+868h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  idcv_object();
  v2 = sub_14890(a2, 0);
  sub_23730((__int64)v27, v2);
  v27[0] = off_8CFB8;
  v28 = &off_8C1D0;
  v29 = *(_QWORD *)(v2 + 1712);
  v30 = *(_QWORD *)(v2 + 1720);
  v3 = *(_WORD *)(v2 + 1728);
  v33 = nullptr;
  v34 = (__m128i *)&v32;
  v35 = (__m128i *)&v32;
  v36 = 0;
  v4 = *(const __m128i **)(v2 + 1752);
  v31 = v3;
  v32 = 0;
  if ( v4 )
  {
    v5 = sub_18D10(v4, (__int64)&v32);
    v6 = v5;
    do
    {
      v7 = v6;
      v6 = (__m128i *)v6[1].m128i_i64[0];
    }
    while ( v6 );
    v34 = v7;
    v8 = v5;
    do
    {
      v9 = v8;
      v8 = (__m128i *)v8[1].m128i_i64[1];
    }
    while ( v8 );
    v10 = *(_QWORD *)(v2 + 1776);
    v35 = v9;
    v33 = v5;
    v36 = v10;
  }
  v11 = _mm_loadu_si128((const __m128i *)(v2 + 1784));
  v38 = _mm_loadu_si128((const __m128i *)(v2 + 1800));
  v12 = _mm_loadu_si128((const __m128i *)(v2 + 1816));
  v28 = &off_8C258;
  v13 = *(_QWORD *)(v2 + 1864);
  v39 = v12;
  v14 = _mm_loadu_si128((const __m128i *)(v2 + 1832));
  v42 = v13;
  v40 = v14;
  v15 = _mm_loadu_si128((const __m128i *)(v2 + 1848));
  v37 = v11;
  v41 = v15;
  v44 = 0;
  v16 = *(_QWORD *)(v2 + 1880);
  v43 = nullptr;
  if ( v16 )
  {
    v43 = (char *)qalloc_or_throw();
    *((_QWORD *)&v44 + 1) = v16;
    memcpy(v43, *(const void **)(v2 + 1872), 16 * v16);
    *(_QWORD *)&v44 = v16;
  }
  v45 = 0;
  v48 = 0;
  v17 = *(_QWORD *)(v2 + 1920);
  v46 = -1;
  v47 = nullptr;
  if ( v17 )
  {
    v47 = (void *)qalloc_or_throw();
    *((_QWORD *)&v48 + 1) = v17;
    memcpy(v47, *(const void **)(v2 + 1912), v17);
    *(_QWORD *)&v48 = v17;
  }
  v49 = nullptr;
  v50 = 0;
  v18 = *(_QWORD *)(v2 + 1944);
  if ( v18 )
  {
    v49 = (void *)qalloc_or_throw();
    *((_QWORD *)&v50 + 1) = v18;
    memcpy(v49, *(const void **)(v2 + 1936), v18);
    *(_QWORD *)&v50 = v18;
  }
  v51 = nullptr;
  v52 = 0;
  v19 = *(_QWORD *)(v2 + 1968);
  if ( v19 )
  {
    v51 = (void *)qalloc_or_throw();
    *((_QWORD *)&v52 + 1) = v19;
    memcpy(v51, *(const void **)(v2 + 1960), v19);
    *(_QWORD *)&v52 = v19;
  }
  v53 = nullptr;
  v54 = 0;
  v20 = *(_QWORD *)(v2 + 1992);
  if ( v20 )
  {
    v53 = (void *)qalloc_or_throw();
    *((_QWORD *)&v54 + 1) = v20;
    memcpy(v53, *(const void **)(v2 + 1984), v20);
    *(_QWORD *)&v54 = v20;
  }
  v55 = nullptr;
  v56 = 0;
  v21 = *(_QWORD *)(v2 + 2016);
  if ( v21 )
  {
    v55 = (void *)qalloc_or_throw();
    *((_QWORD *)&v56 + 1) = v21;
    memcpy(v55, *(const void **)(v2 + 2008), v21);
    *(_QWORD *)&v56 = v21;
  }
  v22 = *(_DWORD *)(v2 + 2032);
  v23 = v43;
  v57 = v22;
  v26 = &v43[16 * v44];
  if ( v26 != v43 )
  {
    v24 = 0;
    do
    {
      idcv_object();
      free_idcv();
      set_idcv_attr();
      free_idcv();
      set_idcv_attr();
      qsnprintf();
      set_idcv_attr();
      v23 += 16;
      ++v24;
      free_idcv();
    }
    while ( v23 != v26 );
  }
  free_idcv();
  set_idcv_attr();
  free_idcv();
  v27[0] = off_8CFB8;
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  v28 = &off_8C258;
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  v28 = &off_8C1D0;
  sub_18C00((void **)v33);
  v27[0] = off_8D350;
  sub_49E50(v27);
  return 0;
}

