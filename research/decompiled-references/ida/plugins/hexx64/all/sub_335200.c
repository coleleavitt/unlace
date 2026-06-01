__int64 __fastcall sub_335200(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  int v9; // r15d
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rcx
  void *v28; // rax
  void *v29; // rsi
  unsigned __int64 v30; // rbp
  __int64 v31; // r12
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rbp
  unsigned __int64 v37; // r8
  size_t v38; // r9
  const void *v39; // r10
  void *v40; // rax
  unsigned int v41; // eax
  char v42; // al
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rcx
  void *v46; // rax
  void *v47; // rsi
  unsigned __int8 tinfo_details; // [rsp+7h] [rbp-189h]
  unsigned __int64 v49; // [rsp+10h] [rbp-180h]
  __int64 v50; // [rsp+10h] [rbp-180h]
  size_t v51; // [rsp+18h] [rbp-178h]
  size_t v52; // [rsp+20h] [rbp-170h]
  size_t v53; // [rsp+20h] [rbp-170h]
  size_t n; // [rsp+40h] [rbp-150h]
  _QWORD v55[2]; // [rsp+48h] [rbp-148h] BYREF
  __m128i si128; // [rsp+58h] [rbp-138h] BYREF
  void *v57; // [rsp+68h] [rbp-128h]
  size_t v58[2]; // [rsp+70h] [rbp-120h]
  __int64 v59; // [rsp+80h] [rbp-110h]
  __int64 v60; // [rsp+88h] [rbp-108h]
  int v61; // [rsp+90h] [rbp-100h]
  unsigned __int8 v62[16]; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-E8h]
  __int64 v64; // [rsp+B0h] [rbp-E0h] BYREF
  void *src; // [rsp+B8h] [rbp-D8h]
  __int128 v66; // [rsp+C0h] [rbp-D0h]
  int v67; // [rsp+D0h] [rbp-C0h]
  int v68; // [rsp+E0h] [rbp-B0h]
  __int64 v69; // [rsp+E8h] [rbp-A8h]
  __int128 v70; // [rsp+F0h] [rbp-A0h]
  __int64 v71; // [rsp+100h] [rbp-90h]
  __int64 v72; // [rsp+108h] [rbp-88h]
  __int64 v73; // [rsp+110h] [rbp-80h]
  __int128 v74; // [rsp+118h] [rbp-78h]
  __int64 v75; // [rsp+128h] [rbp-68h]
  __int128 v76; // [rsp+130h] [rbp-60h]
  char v77; // [rsp+140h] [rbp-50h]
  unsigned __int64 v78; // [rsp+150h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v69 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v75 = 0;
  v77 = 16;
  v70 = 0;
  v74 = 0;
  v76 = 0;
  tinfo_details = get_tinfo_details();
  if ( tinfo_details && (get_tinfo_property() & 0x3F) == 1 )
  {
    v9 = v70;
    v10 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 8) = v70;
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      if ( v11 )
      {
        v12 = 0;
        do
        {
          v13 = v10 + 80 * v12;
          cleanup_argloc();
          v14 = *(_QWORD *)(v13 + 32);
          if ( v14 )
          {
            *(_QWORD *)(v13 + 40) = 0;
            qfree(v14);
          }
          ++v12;
          clear_tinfo_t();
          sub_11CDA0(v13);
          v10 = *(_QWORD *)(a1 + 24);
        }
        while ( v12 != v11 );
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v10);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v15 = *(_QWORD *)(a1 + 32);
    if ( v9 != v15 )
    {
      v55[1] = 0;
      v55[0] = 0xFFFFFFFF00000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      v57 = nullptr;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      *(_OWORD *)v58 = 0;
      if ( v9 < v15 )
      {
        v30 = v9;
        do
        {
          v31 = *(_QWORD *)(a1 + 24) + 80 * v30;
          cleanup_argloc();
          v32 = *(_QWORD *)(v31 + 32);
          if ( v32 )
          {
            *(_QWORD *)(v31 + 40) = 0;
            qfree(v32);
          }
          ++v30;
          clear_tinfo_t();
          sub_11CDA0(v31);
        }
        while ( v30 < v15 );
        *(_QWORD *)(a1 + 32) = v9;
      }
      else
      {
        v16 = *(_QWORD *)(a1 + 24);
        v17 = v55;
        v18 = *(_QWORD *)(a1 + 40);
        if ( (unsigned __int64)v55 < v16 || (unsigned __int64)v55 >= v16 + 80 * v18 )
        {
          if ( v18 < v9 )
          {
            *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, v16, v9, 80);
            v15 = *(_QWORD *)(a1 + 32);
          }
          for ( ; v15 < v9; *(_DWORD *)(v43 + 72) = v61 )
          {
            v43 = *(_QWORD *)(a1 + 24) + 80 * v15;
            sub_123A40(v43, (unsigned __int8 *)v55, v18, (__int64)v17);
            v44 = si128.m128i_i64[0];
            *(_QWORD *)(v43 + 24) = 0;
            *(_QWORD *)(v43 + 16) = v44;
            copy_tinfo_t();
            *(_QWORD *)(v43 + 32) = 0;
            *(_OWORD *)(v43 + 40) = 0;
            if ( v58[0] )
            {
              v52 = v58[0];
              v46 = (void *)qalloc_or_throw(v58[0], (__int64)&si128.m128i_i64[1], v58[0], v45);
              *(_QWORD *)(v43 + 32) = v46;
              v47 = v57;
              *(_QWORD *)(v43 + 48) = v52;
              memcpy(v46, v47, v52);
              *(_QWORD *)(v43 + 40) = v52;
            }
            *(_DWORD *)(v43 + 56) = 0;
            copy_argloc();
            ++v15;
          }
          *(_QWORD *)(a1 + 32) = v9;
        }
        else
        {
          sub_123A40((__int64)v62, (unsigned __int8 *)v55, v18, (__int64)v55);
          v64 = 0;
          v63 = si128.m128i_i64[0];
          copy_tinfo_t();
          v21 = v58[0];
          src = nullptr;
          v66 = 0;
          if ( v58[0] )
          {
            src = (void *)qalloc_or_throw(v58[0], (__int64)&si128.m128i_i64[1], v19, v20);
            *((_QWORD *)&v66 + 1) = v21;
            memcpy(src, v57, v21);
            *(_QWORD *)&v66 = v21;
          }
          v67 = 0;
          copy_argloc();
          v68 = v61;
          if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v9 )
            *(_QWORD *)(a1 + 24) = qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), v9, 80);
          v24 = *(_QWORD *)(a1 + 32);
          if ( v24 < v9 )
          {
            do
            {
              v25 = *(_QWORD *)(a1 + 24) + 80 * v24;
              sub_123A40(v25, v62, v22, v23);
              v26 = v63;
              *(_QWORD *)(v25 + 24) = 0;
              *(_QWORD *)(v25 + 16) = v26;
              copy_tinfo_t();
              *(_QWORD *)(v25 + 32) = 0;
              *(_OWORD *)(v25 + 40) = 0;
              if ( (_QWORD)v66 )
              {
                n = v66;
                v28 = (void *)qalloc_or_throw(v66, (__int64)&v64, v66, v27);
                *(_QWORD *)(v25 + 32) = v28;
                v29 = src;
                *(_QWORD *)(v25 + 48) = n;
                memcpy(v28, v29, n);
                *(_QWORD *)(v25 + 40) = n;
              }
              *(_DWORD *)(v25 + 56) = 0;
              copy_argloc();
              ++v24;
              *(_DWORD *)(v25 + 72) = v68;
            }
            while ( v9 != v24 );
          }
          *(_QWORD *)(a1 + 32) = v9;
          cleanup_argloc();
          if ( src )
          {
            *(_QWORD *)&v66 = 0;
            qfree((__int64)src);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)v62);
        }
      }
      cleanup_argloc();
      if ( v57 )
      {
        v58[0] = 0;
        qfree((__int64)v57);
      }
      clear_tinfo_t();
      sub_11CDA0((__int64)v55);
    }
    if ( v9 > 0 )
    {
      v33 = 0;
      v34 = 16 * (5LL * (unsigned int)(v9 - 1) + 5);
      do
      {
        v35 = v33 + v69;
        v36 = v33 + *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v36 + 4) = get_tinfo_size();
        copy_tinfo_t();
        if ( v36 + 32 != v35 + 16 )
        {
          v37 = *(_QWORD *)(v35 + 24);
          if ( !v37 || (v38 = v37 - 1, v37 == 1) )
          {
            *(_QWORD *)(v36 + 40) = 0;
          }
          else
          {
            v39 = *(const void **)(v35 + 16);
            v40 = *(void **)(v36 + 32);
            if ( *(_QWORD *)(v36 + 48) < v37 )
            {
              v53 = *(_QWORD *)(v35 + 16);
              v51 = v37 - 1;
              v50 = *(_QWORD *)(v35 + 24);
              v40 = (void *)qvector_reserve(v36 + 32, *(_QWORD *)(v36 + 32), v50, 1);
              v39 = (const void *)v53;
              v38 = v51;
              *(_QWORD *)(v36 + 32) = v40;
              v37 = v50;
            }
            *(_QWORD *)(v36 + 40) = v37;
            v49 = v37;
            memmove(v40, v39, v38);
            *(_BYTE *)(*(_QWORD *)(v36 + 32) + v49 - 1) = 0;
          }
        }
        copy_argloc();
        v33 += 80;
        *(_DWORD *)(v36 + 72) = *(_DWORD *)(v35 + 72);
      }
      while ( v34 != v33 );
    }
    v41 = v77 & 0xF0;
    if ( (v77 & 0xF0) == 0xC0 )
      v41 = HIDWORD(v71);
    if ( v41 <= 0x10 )
      v41 = getinf();
    *(_DWORD *)(a1 + 20) = v41;
    copy_argloc();
    copy_tinfo_t();
    v42 = v71;
    if ( (v71 & 4) != 0 )
      *(_DWORD *)(a1 + 280) |= 0x10u;
    if ( (v42 & 2) != 0 )
      *(_DWORD *)(a1 + 280) |= 8u;
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v2 = v69;
  if ( v69 )
  {
    v3 = v70;
    if ( (_QWORD)v70 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 80 * v4);
        clear_tinfo_t();
        v6 = v5[5];
        if ( v6 )
        {
          v5[6] = 0;
          qfree(v6);
        }
        v7 = v5[2];
        if ( v7 )
        {
          v5[3] = 0;
          qfree(v7);
        }
        ++v4;
        cleanup_argloc();
        v2 = v69;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v2);
  }
  return tinfo_details;
}

