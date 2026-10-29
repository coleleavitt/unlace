__int64 sub_A930()
{
  int *v0; // rax
  int *v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rax
  void *v12; // rbx
  _QWORD **v13; // rbx
  void *v14; // rdi
  __m128i *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __m128i *v20; // rbx
  __int64 (__fastcall **v22)(); // [rsp+0h] [rbp-22A8h] BYREF
  __int64 v23; // [rsp+8h] [rbp-22A0h]
  __int128 v24; // [rsp+10h] [rbp-2298h]
  __int64 v25; // [rsp+20h] [rbp-2288h]
  const char *v26; // [rsp+28h] [rbp-2280h]
  int v27; // [rsp+30h] [rbp-2278h]
  __m128i v28; // [rsp+38h] [rbp-2270h] BYREF
  int v29; // [rsp+48h] [rbp-2260h]
  char v30; // [rsp+50h] [rbp-2258h] BYREF
  char v31; // [rsp+98h] [rbp-2210h] BYREF
  int v32; // [rsp+B0h] [rbp-21F8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-21F0h]
  __int128 v34; // [rsp+C0h] [rbp-21E8h]
  __int64 (__fastcall **v35)(); // [rsp+D0h] [rbp-21D8h]
  unsigned __int64 v36; // [rsp+D8h] [rbp-21D0h]
  __int128 v37; // [rsp+E0h] [rbp-21C8h]
  __int64 v38; // [rsp+F0h] [rbp-21B8h]
  const char *v39; // [rsp+F8h] [rbp-21B0h]
  int v40; // [rsp+100h] [rbp-21A8h]
  __m128i v41; // [rsp+108h] [rbp-21A0h] BYREF
  int v42; // [rsp+118h] [rbp-2190h]
  char v43; // [rsp+120h] [rbp-2188h] BYREF
  char v44; // [rsp+168h] [rbp-2140h] BYREF
  int v45; // [rsp+180h] [rbp-2128h] BYREF
  char v46; // [rsp+184h] [rbp-2124h]
  __int64 v47; // [rsp+1188h] [rbp-1120h]
  void *v48; // [rsp+1190h] [rbp-1118h]
  int v49; // [rsp+11A0h] [rbp-1108h] BYREF
  void *v50; // [rsp+11A8h] [rbp-1100h]
  int *v51; // [rsp+11B0h] [rbp-10F8h]
  int *v52; // [rsp+11B8h] [rbp-10F0h]
  __int64 v53; // [rsp+11C0h] [rbp-10E8h]
  __int64 (__fastcall **v54)(); // [rsp+11C8h] [rbp-10E0h]
  __int64 v55; // [rsp+11D0h] [rbp-10D8h]
  char v56; // [rsp+11D8h] [rbp-10D0h]
  __int64 v57; // [rsp+21D8h] [rbp-D0h]
  __int128 v58; // [rsp+21E0h] [rbp-C8h]
  __int64 v59; // [rsp+21F0h] [rbp-B8h]
  __int128 v60; // [rsp+21F8h] [rbp-B0h]
  __int64 v61; // [rsp+2208h] [rbp-A0h]
  __int128 v62; // [rsp+2210h] [rbp-98h]
  __int64 v63; // [rsp+2220h] [rbp-88h]
  __int128 v64; // [rsp+2228h] [rbp-80h]
  __int64 v65; // [rsp+2238h] [rbp-70h]
  __int128 v66; // [rsp+2240h] [rbp-68h]
  __int64 v67; // [rsp+2250h] [rbp-58h]
  __int16 v68; // [rsp+2258h] [rbp-50h]
  unsigned __int64 v69; // [rsp+2268h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v23 = 0x2FF000004LL;
  v26 = "SVD form files";
  v24 = -1;
  v0 = (int *)&v30;
  v25 = 0;
  v27 = 1;
  v29 = -1;
  v22 = (__int64 (__fastcall **)())&unk_1BC90;
  v28 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1BBA0), (__m128i)(unsigned __int64)off_1C2E0);
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 6;
    *((_OWORD *)v0 - 1) = 0;
  }
  while ( &v32 != v0 );
  v32 = 0;
  if ( ((HIDWORD(v23) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v23) != 0xFF )
      goto LABEL_59;
    BYTE3(v23) = ((HIDWORD(v23) >> 19) & 0x3F) - 1;
    HIDWORD(v23) &= 0xFE07FFFF;
  }
  v33 = 0;
  v22 = off_1BAC8;
  v36 = 0x8A000003FF010004LL;
  v34 = 0;
  v39 = "SVD selection";
  v37 = -1;
  v1 = (int *)&v43;
  v35 = (__int64 (__fastcall **)())&unk_1BC90;
  v38 = 0;
  v40 = 1;
  v42 = -1;
  v41 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1BBA8), (__m128i)(unsigned __int64)&off_1C2E8);
  do
  {
    *(_QWORD *)v1 = 0;
    v1 += 6;
    *((_OWORD *)v1 - 1) = 0;
  }
  while ( &v45 != v1 );
  v45 = 0;
  if ( ((HIDWORD(v36) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v36) == 0xFF )
    {
      BYTE3(v36) = ((HIDWORD(v36) >> 19) & 0x3F) - 1;
      HIDWORD(v36) &= 0xFE07FFFF;
      goto LABEL_11;
    }
    if ( under_debugger )
LABEL_61:
      BUG();
    interr();
LABEL_59:
    if ( !under_debugger )
      interr();
    goto LABEL_61;
  }
LABEL_11:
  v49 = 0;
  v35 = off_1BA08;
  v50 = nullptr;
  v51 = &v49;
  v52 = &v49;
  v53 = 0;
  v54 = off_1B960;
  v55 = 0;
  v56 = 0;
  v2 = operator new(0x78u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = &off_1B988;
  *(_QWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 80;
  *(_QWORD *)(v2 + 104) = v2 + 80;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_OWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  v47 = v2;
  v3 = (_QWORD *)operator new(8u);
  *v3 = create_dirtree();
  v48 = v3;
  v46 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 10;
  v68 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 0;
  sub_9FB0((__int64)&v22);
  v4 = v65;
  if ( v65 )
  {
    v5 = v66;
    if ( (_QWORD)v66 )
    {
      v6 = 0;
      do
      {
        v7 = (_QWORD *)(v4 + 24 * v6);
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
          v4 = v65;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  v8 = v61;
  if ( v61 )
  {
    v9 = v62;
    if ( (_QWORD)v62 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 24 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v61;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  v12 = v48;
  v35 = off_1BA08;
  if ( v48 )
  {
    delete_dirtree();
    operator delete(v12, 8u);
  }
  v54 = off_1B960;
  if ( v55 )
    qfclose();
  v13 = (_QWORD **)v50;
  if ( v50 )
  {
    do
    {
      sub_5060(v13[3]);
      v14 = v13;
      v13 = (_QWORD **)v13[2];
      operator delete(v14, 0x30u);
    }
    while ( v13 );
  }
  v35 = (__int64 (__fastcall **)())&unk_1BC90;
  v15 = (__m128i *)&v44;
  do
  {
    if ( v15->m128i_i64[0] )
    {
      v15->m128i_i64[1] = 0;
      qfree();
    }
    v15 = (__m128i *)((char *)v15 - 24);
  }
  while ( &v41 != v15 );
  v16 = v33;
  v22 = off_1BAC8;
  if ( v33 )
  {
    v17 = v34;
    if ( (_QWORD)v34 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        if ( v19[6] )
        {
          v19[7] = 0;
          qfree();
        }
        if ( v19[3] )
        {
          v19[4] = 0;
          qfree();
        }
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
        }
        ++v18;
        v16 = v33;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  v22 = (__int64 (__fastcall **)())&unk_1BC90;
  v20 = (__m128i *)&v31;
  do
  {
    if ( v20->m128i_i64[0] )
    {
      v20->m128i_i64[1] = 0;
      qfree();
    }
    v20 = (__m128i *)((char *)v20 - 24);
  }
  while ( &v28 != v20 );
  return 1;
}

