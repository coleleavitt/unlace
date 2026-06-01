unsigned __int64 __fastcall sub_1E9B0(__int64 a1)
{
  __int64 v2; // rax
  __m128i *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r12
  __int64 v7; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __m128i si128; // xmm1
  const char *v11; // rbp
  size_t v12; // r12
  __m128i v13; // kr00_16
  __int64 v14; // rdi
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rbp
  _WORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  const char *v24; // rax
  bool v25; // zf
  char **v26; // r14
  __int64 v27; // rbp
  const void *v28; // r13
  size_t v29; // rax
  size_t v30; // r15
  __int64 v31; // rax
  void *v32; // rbp
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // rsi
  const char *v44; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rax
  void *v49; // rbp
  __int64 v50; // rdi
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  void *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+8h] [rbp-A0h]
  __m128i v58; // [rsp+10h] [rbp-98h] BYREF
  __int64 v59; // [rsp+28h] [rbp-80h]
  const char *v60; // [rsp+30h] [rbp-78h]
  __int128 v61; // [rsp+38h] [rbp-70h]
  void *v62; // [rsp+50h] [rbp-58h]
  __m128i v63; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  sub_59370(a1);
  *(_QWORD *)(a1 + 928) = 0;
  *(_QWORD *)a1 = off_7E7C8;
  *(_QWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_OWORD *)(a1 + 936) = 0;
  *(_OWORD *)(a1 + 968) = 0;
  *(_OWORD *)(a1 + 992) = 0;
  v57 = a1 + 864;
  *(_QWORD *)(a1 + 888) = qmutex_create();
  v2 = operator new(0x50u);
  *(_QWORD *)v2 = 0;
  v3 = (__m128i *)v2;
  *(_QWORD *)(v2 + 8) = 8;
  *(_OWORD *)(v2 + 16) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_OWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 64) = 0;
  v4 = operator new(0x40u);
  v5 = v3->m128i_i64[1];
  v3->m128i_i64[0] = v4;
  v6 = (__int64 *)(v4 + ((4 * v5 - 4) & 0xFFFFFFFFFFFFFFF8LL));
  v7 = operator new(0x200u);
  *v6 = v7;
  *(_QWORD *)(a1 + 1008) = v3;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)(unsigned __int64)v7);
  v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(v7 + 512), (__m128i)(unsigned __int64)v6);
  v3[1] = v8;
  v3[2] = v9;
  v3[3] = v8;
  v3[4] = v9;
  sub_44380(a1 + 864);
  *(_QWORD *)(a1 + 1040) = a1;
  *(_QWORD *)(a1 + 1128) = a1 + 1112;
  *(_QWORD *)(a1 + 1136) = a1 + 1112;
  *(_QWORD *)(a1 + 1176) = a1 + 1160;
  *(_QWORD *)(a1 + 1184) = a1 + 1160;
  *(_QWORD *)(a1 + 1248) = a1 + 1232;
  *(_QWORD *)(a1 + 1256) = a1 + 1232;
  *(_QWORD *)(a1 + 1296) = a1 + 1280;
  *(_QWORD *)(a1 + 1304) = a1 + 1280;
  *(_QWORD *)(a1 + 1344) = a1 + 1328;
  *(_QWORD *)(a1 + 1352) = a1 + 1328;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_DWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_DWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  *(_DWORD *)(a1 + 1232) = 0;
  *(_QWORD *)(a1 + 1240) = 0;
  *(_QWORD *)(a1 + 1264) = 0;
  *(_DWORD *)(a1 + 1280) = 0;
  *(_QWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1312) = 0;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 0;
  *(_QWORD *)(a1 + 1360) = 0;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0;
  *(_OWORD *)(a1 + 1088) = 0;
  *(_OWORD *)(a1 + 1208) = 0;
  *(_QWORD *)(a1 + 1392) = a1 + 1376;
  *(_QWORD *)(a1 + 1400) = a1 + 1376;
  *(_QWORD *)(a1 + 1440) = a1 + 1424;
  *(_QWORD *)(a1 + 1448) = a1 + 1424;
  *(_QWORD *)(a1 + 1488) = a1 + 1472;
  *(_QWORD *)(a1 + 1496) = a1 + 1472;
  *(_QWORD *)(a1 + 1536) = a1 + 1520;
  *(_QWORD *)(a1 + 1544) = a1 + 1520;
  *(_QWORD *)(a1 + 1408) = 0;
  *(_DWORD *)(a1 + 1424) = 0;
  *(_QWORD *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1456) = 0;
  *(_DWORD *)(a1 + 1472) = 0;
  *(_QWORD *)(a1 + 1480) = 0;
  *(_QWORD *)(a1 + 1504) = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1528) = 0;
  *(_QWORD *)(a1 + 1552) = 0;
  *(_DWORD *)(a1 + 1568) = 0;
  *(_QWORD *)(a1 + 1576) = 0;
  *(_QWORD *)(a1 + 1584) = a1 + 1568;
  *(_QWORD *)(a1 + 1592) = a1 + 1568;
  *(_QWORD *)(a1 + 1600) = 0;
  *(_QWORD *)(a1 + 1048) = qmutex_create();
  si128 = _mm_load_si128((const __m128i *)&xmmword_6A3F0);
  *(_WORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 17;
  *(_QWORD *)(a1 + 1608) = -1;
  *(_QWORD *)(a1 + 1616) = 0;
  *(_QWORD *)(a1 + 1624) = 0;
  *(_QWORD *)(a1 + 1648) = -1;
  *(_QWORD *)(a1 + 1656) = 0;
  *(_DWORD *)(a1 + 1696) = 0;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1712) = a1 + 1696;
  *(_QWORD *)(a1 + 1720) = a1 + 1696;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0;
  *(_QWORD *)(a1 + 1760) = 0;
  *(_BYTE *)(a1 + 1784) = 0;
  *(_QWORD *)(a1 + 1792) = 0;
  *(_QWORD *)(a1 + 1816) = 0;
  *(_DWORD *)(a1 + 1824) = 100;
  *(_QWORD *)(a1 + 1848) = 0;
  *(_OWORD *)(a1 + 1632) = 0;
  *(_OWORD *)(a1 + 1664) = 0;
  *(_OWORD *)(a1 + 1744) = 0;
  *(_OWORD *)(a1 + 1768) = 0;
  *(_OWORD *)(a1 + 1800) = 0;
  *(__m128i *)(a1 + 1832) = si128;
  *(_OWORD *)(a1 + 1856) = 0;
  v60 = nullptr;
  v61 = 0;
  if ( (unsigned __int8)qgetenv() )
  {
    v11 = nptr;
    if ( (_QWORD)v61 )
      v11 = v60;
    v62 = nullptr;
    v63 = 0;
    if ( v11 )
    {
      v12 = strlen(v11);
      v63.m128i_i64[0] = v12 + 1;
      v62 = (void *)qvector_reserve();
      memmove(v62, v11, v12);
      *((_BYTE *)v62 + v12) = 0;
      v11 = (const char *)v62;
      v13 = v63;
    }
    else
    {
      v13 = 0u;
    }
    v14 = *(_QWORD *)(a1 + 1792);
    v62 = nullptr;
    v63 = 0;
    if ( v14 )
    {
      *(_QWORD *)(a1 + 1800) = 0;
      qfree();
      v15 = v62;
      *(_QWORD *)(a1 + 1792) = v11;
      *(__m128i *)(a1 + 1800) = v13;
      if ( v15 )
      {
        v63.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1792) = v11;
      *(__m128i *)(a1 + 1800) = v13;
    }
  }
  else
  {
    v63 = 0;
    v48 = (_BYTE *)qvector_reserve();
    v62 = v48;
    v63.m128i_i64[0] = 10;
    *(_QWORD *)v48 = 0x736F686C61636F6CLL;
    v48[8] = 116;
    v49 = v62;
    *((_BYTE *)v62 + 9) = 0;
    v50 = *(_QWORD *)(a1 + 1792);
    v62 = nullptr;
    v51 = _mm_loadu_si128(&v63);
    v63 = 0;
    if ( v50 )
    {
      *(_QWORD *)(a1 + 1800) = 0;
      v58 = v51;
      qfree();
      v52 = _mm_load_si128(&v58);
      v53 = v62;
      *(_QWORD *)(a1 + 1792) = v49;
      *(__m128i *)(a1 + 1800) = v52;
      if ( v53 )
      {
        v63.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *(_QWORD *)(a1 + 1792) = v49;
      *(__m128i *)(a1 + 1800) = v51;
    }
  }
  *(_QWORD *)(a1 + 1056) = v57;
  *(_QWORD *)(a1 + 1064) = a1 + 1608;
  sub_59140(a1, "dalvik");
  v16 = *(_QWORD *)(a1 + 704);
  v17 = *(_QWORD *)(a1 + 696);
  if ( *(_QWORD *)(a1 + 712) < (unsigned __int64)(v16 + 1) )
  {
    v56 = qvector_reserve();
    *(_QWORD *)(a1 + 696) = v56;
    v16 = *(_QWORD *)(a1 + 704);
    v17 = v56;
  }
  v18 = v17 + 24 * v16;
  *(_QWORD *)v18 = 0;
  *(_OWORD *)(v18 + 8) = 0;
  ++*(_QWORD *)(a1 + 704);
  v19 = *(_WORD **)v18;
  if ( *(_QWORD *)(v18 + 16) <= 2u )
  {
    v55 = qvector_reserve();
    *(_QWORD *)v18 = v55;
    v19 = (_WORD *)v55;
  }
  *(_QWORD *)(v18 + 8) = 3;
  *v19 = 20553;
  *(_BYTE *)(*(_QWORD *)v18 + 2LL) = 0;
  v20 = *(_QWORD *)(a1 + 680);
  v21 = *(_QWORD *)(a1 + 672);
  v22 = v20 + 1;
  if ( *(_QWORD *)(a1 + 688) < (unsigned __int64)(v20 + 1) )
  {
    v54 = qvector_reserve();
    *(_QWORD *)(a1 + 672) = v54;
    v21 = v54;
    v20 = *(_QWORD *)(a1 + 680);
    v22 = v20 + 1;
  }
  *(_QWORD *)(a1 + 680) = v22;
  v23 = 32 * v20 + v21;
  v24 = nptr;
  if ( *(_QWORD *)(v18 + 8) )
    v24 = *(const char **)v18;
  *(_QWORD *)v23 = v24;
  v25 = off_7F770 == nullptr;
  *(_DWORD *)(v23 + 8) = 19;
  *(_WORD *)(v23 + 12) = 513;
  *(_QWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 24) = 0;
  if ( v25 )
  {
    v35 = *(_QWORD *)(a1 + 728);
  }
  else
  {
    v26 = &off_7F770;
    do
    {
      v36 = *(_QWORD *)(a1 + 704);
      v37 = *(_QWORD *)(a1 + 696);
      if ( *(_QWORD *)(a1 + 712) < (unsigned __int64)(v36 + 1) )
      {
        v38 = qvector_reserve();
        *(_QWORD *)(a1 + 696) = v38;
        v36 = *(_QWORD *)(a1 + 704);
        v37 = v38;
      }
      ++v26;
      v27 = v37 + 24 * v36;
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v28 = *(v26 - 1);
      ++*(_QWORD *)(a1 + 704);
      if ( v28 && (v29 = strlen((const char *)v28), (v30 = v29) != 0) )
      {
        v40 = *(void **)v27;
        v41 = v29 + 1;
        if ( *(_QWORD *)(v27 + 16) < v29 + 1 )
        {
          v58.m128i_i64[0] = v29 + 1;
          v46 = qvector_reserve();
          *(_QWORD *)v27 = v46;
          v41 = v58.m128i_i64[0];
          v40 = (void *)v46;
        }
        *(_QWORD *)(v27 + 8) = v41;
        memmove(v40, v28, v30);
        *(_BYTE *)(*(_QWORD *)v27 + v30) = 0;
      }
      else
      {
        *(_QWORD *)(v27 + 8) = 0;
      }
      v31 = *(_QWORD *)(a1 + 728);
      v32 = *(void **)v27;
      v33 = *(_QWORD *)(a1 + 736);
      v34 = *(_QWORD *)(a1 + 720);
      v62 = v32;
      if ( v33 < v31 + 1 )
      {
        v39 = qvector_reserve();
        *(_QWORD *)(a1 + 720) = v39;
        v34 = v39;
        v31 = *(_QWORD *)(a1 + 728);
      }
      *(_QWORD *)(v34 + 8 * v31) = v32;
      v25 = *v26 == nullptr;
      v35 = *(_QWORD *)(a1 + 728) + 1LL;
      *(_QWORD *)(a1 + 728) = v35;
    }
    while ( !v25 );
  }
  v42 = *(_QWORD *)(a1 + 736);
  v59 = 0;
  v43 = *(_QWORD *)(a1 + 720);
  if ( v42 < v35 + 1 )
  {
    v47 = qvector_reserve();
    *(_QWORD *)(a1 + 720) = v47;
    v35 = *(_QWORD *)(a1 + 728);
    v43 = v47;
  }
  *(_QWORD *)(v43 + 8 * v35) = 0;
  v44 = v60;
  ++*(_QWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 768) = 1;
  if ( v44 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  return v64 - __readfsqword(0x28u);
}

