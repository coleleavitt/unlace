__int64 __fastcall sub_32D9E0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  size_t v15; // r13
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rax
  void *v19; // rax
  void *v20; // rsi
  unsigned __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rbp
  unsigned __int64 v27; // r8
  size_t v28; // r9
  const void *v29; // r10
  void *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // rbp
  __int64 v34; // rax
  void *v35; // rax
  void *v36; // rsi
  unsigned __int8 tinfo_details; // [rsp+7h] [rbp-189h]
  unsigned __int64 v38; // [rsp+10h] [rbp-180h]
  unsigned __int64 v39; // [rsp+10h] [rbp-180h]
  size_t v40; // [rsp+18h] [rbp-178h]
  size_t v41; // [rsp+20h] [rbp-170h]
  size_t v42; // [rsp+20h] [rbp-170h]
  size_t n; // [rsp+40h] [rbp-150h]
  _QWORD v44[2]; // [rsp+48h] [rbp-148h] BYREF
  __m128i si128; // [rsp+58h] [rbp-138h]
  void *v46; // [rsp+68h] [rbp-128h]
  size_t v47[2]; // [rsp+70h] [rbp-120h]
  __int64 v48; // [rsp+80h] [rbp-110h]
  __int64 v49; // [rsp+88h] [rbp-108h]
  int v50; // [rsp+90h] [rbp-100h]
  unsigned __int8 v51[16]; // [rsp+98h] [rbp-F8h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-E8h]
  __int64 v53; // [rsp+B0h] [rbp-E0h]
  void *src; // [rsp+B8h] [rbp-D8h]
  __int128 v55; // [rsp+C0h] [rbp-D0h]
  int v56; // [rsp+D0h] [rbp-C0h]
  int v57; // [rsp+E0h] [rbp-B0h]
  __int64 v58; // [rsp+E8h] [rbp-A8h]
  __int128 v59; // [rsp+F0h] [rbp-A0h]
  __int64 v60; // [rsp+100h] [rbp-90h]
  __int64 v61; // [rsp+108h] [rbp-88h]
  __int64 v62; // [rsp+110h] [rbp-80h]
  __int128 v63; // [rsp+118h] [rbp-78h]
  __int64 v64; // [rsp+128h] [rbp-68h]
  __int128 v65; // [rsp+130h] [rbp-60h]
  char v66; // [rsp+140h] [rbp-50h]
  unsigned __int64 v67; // [rsp+150h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v58 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 16;
  v59 = 0;
  v63 = 0;
  v65 = 0;
  tinfo_details = get_tinfo_details();
  if ( tinfo_details && (get_tinfo_property() & 0x3F) == 1 )
  {
    v7 = v59;
    v8 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 8) = v59;
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 32);
      if ( v9 )
      {
        v10 = 0;
        do
        {
          v11 = v8 + 80 * v10;
          cleanup_argloc();
          if ( *(_QWORD *)(v11 + 32) )
          {
            *(_QWORD *)(v11 + 40) = 0;
            qfree();
          }
          ++v10;
          clear_tinfo_t();
          sub_1166E0(v11);
          v8 = *(_QWORD *)(a1 + 24);
        }
        while ( v10 != v9 );
      }
      *(_QWORD *)(a1 + 32) = 0;
      qfree();
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v12 = *(_QWORD *)(a1 + 32);
    if ( v7 != v12 )
    {
      v44[1] = 0;
      v44[0] = 0xFFFFFFFF00000000LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
      v46 = nullptr;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      *(_OWORD *)v47 = 0;
      if ( v7 < v12 )
      {
        v21 = v7;
        do
        {
          v22 = *(_QWORD *)(a1 + 24) + 80 * v21;
          cleanup_argloc();
          if ( *(_QWORD *)(v22 + 32) )
          {
            *(_QWORD *)(v22 + 40) = 0;
            qfree();
          }
          ++v21;
          clear_tinfo_t();
          sub_1166E0(v22);
        }
        while ( v21 < v12 );
        *(_QWORD *)(a1 + 32) = v7;
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 24);
        v14 = *(_QWORD *)(a1 + 40);
        if ( (unsigned __int64)v44 < v13 || (unsigned __int64)v44 >= v13 + 80 * v14 )
        {
          if ( v14 < v7 )
          {
            *(_QWORD *)(a1 + 24) = qvector_reserve();
            v12 = *(_QWORD *)(a1 + 32);
          }
          for ( ; v12 < v7; *(_DWORD *)(v33 + 72) = v50 )
          {
            v33 = *(_QWORD *)(a1 + 24) + 80 * v12;
            sub_11D380(v33, (unsigned __int8 *)v44);
            v34 = si128.m128i_i64[0];
            *(_QWORD *)(v33 + 24) = 0;
            *(_QWORD *)(v33 + 16) = v34;
            copy_tinfo_t();
            *(_QWORD *)(v33 + 32) = 0;
            *(_OWORD *)(v33 + 40) = 0;
            if ( v47[0] )
            {
              v41 = v47[0];
              v35 = (void *)qalloc_or_throw();
              *(_QWORD *)(v33 + 32) = v35;
              v36 = v46;
              *(_QWORD *)(v33 + 48) = v41;
              memcpy(v35, v36, v41);
              *(_QWORD *)(v33 + 40) = v41;
            }
            *(_DWORD *)(v33 + 56) = 0;
            copy_argloc();
            ++v12;
          }
          *(_QWORD *)(a1 + 32) = v7;
        }
        else
        {
          sub_11D380((__int64)v51, (unsigned __int8 *)v44);
          v53 = 0;
          v52 = si128.m128i_i64[0];
          copy_tinfo_t();
          v15 = v47[0];
          src = nullptr;
          v55 = 0;
          if ( v47[0] )
          {
            src = (void *)qalloc_or_throw();
            *((_QWORD *)&v55 + 1) = v15;
            memcpy(src, v46, v15);
            *(_QWORD *)&v55 = v15;
          }
          v56 = 0;
          copy_argloc();
          v57 = v50;
          if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)v7 )
            *(_QWORD *)(a1 + 24) = qvector_reserve();
          v16 = *(_QWORD *)(a1 + 32);
          if ( v16 < v7 )
          {
            do
            {
              v17 = *(_QWORD *)(a1 + 24) + 80 * v16;
              sub_11D380(v17, v51);
              v18 = v52;
              *(_QWORD *)(v17 + 24) = 0;
              *(_QWORD *)(v17 + 16) = v18;
              copy_tinfo_t();
              *(_QWORD *)(v17 + 32) = 0;
              *(_OWORD *)(v17 + 40) = 0;
              if ( (_QWORD)v55 )
              {
                n = v55;
                v19 = (void *)qalloc_or_throw();
                *(_QWORD *)(v17 + 32) = v19;
                v20 = src;
                *(_QWORD *)(v17 + 48) = n;
                memcpy(v19, v20, n);
                *(_QWORD *)(v17 + 40) = n;
              }
              *(_DWORD *)(v17 + 56) = 0;
              copy_argloc();
              ++v16;
              *(_DWORD *)(v17 + 72) = v57;
            }
            while ( v7 != v16 );
          }
          *(_QWORD *)(a1 + 32) = v7;
          cleanup_argloc();
          if ( src )
          {
            *(_QWORD *)&v55 = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_1166E0((__int64)v51);
        }
      }
      cleanup_argloc();
      if ( v46 )
      {
        v47[0] = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1166E0((__int64)v44);
    }
    if ( v7 > 0 )
    {
      v23 = 0;
      v24 = 16 * (5LL * (unsigned int)(v7 - 1) + 5);
      do
      {
        v25 = v23 + v58;
        v26 = v23 + *(_QWORD *)(a1 + 24);
        *(_DWORD *)(v26 + 4) = get_tinfo_size();
        copy_tinfo_t();
        if ( v26 + 32 != v25 + 16 )
        {
          v27 = *(_QWORD *)(v25 + 24);
          if ( !v27 || (v28 = v27 - 1, v27 == 1) )
          {
            *(_QWORD *)(v26 + 40) = 0;
          }
          else
          {
            v29 = *(const void **)(v25 + 16);
            v30 = *(void **)(v26 + 32);
            if ( *(_QWORD *)(v26 + 48) < v27 )
            {
              v42 = *(_QWORD *)(v25 + 16);
              v40 = v27 - 1;
              v39 = *(_QWORD *)(v25 + 24);
              v30 = (void *)qvector_reserve();
              v29 = (const void *)v42;
              v28 = v40;
              *(_QWORD *)(v26 + 32) = v30;
              v27 = v39;
            }
            *(_QWORD *)(v26 + 40) = v27;
            v38 = v27;
            memmove(v30, v29, v28);
            *(_BYTE *)(*(_QWORD *)(v26 + 32) + v38 - 1) = 0;
          }
        }
        copy_argloc();
        v23 += 80;
        *(_DWORD *)(v26 + 72) = *(_DWORD *)(v25 + 72);
      }
      while ( v24 != v23 );
    }
    v31 = v66 & 0xF0;
    if ( (v66 & 0xF0) == 0xC0 )
      v31 = HIDWORD(v60);
    if ( v31 <= 0x10 )
      v31 = getinf();
    *(_DWORD *)(a1 + 20) = v31;
    copy_argloc();
    copy_tinfo_t();
    v32 = v60;
    if ( (v60 & 4) != 0 )
      *(_DWORD *)(a1 + 280) |= 0x10u;
    if ( (v32 & 2) != 0 )
      *(_DWORD *)(a1 + 280) |= 8u;
  }
  else
  {
    tinfo_details = 0;
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v2 = v58;
  if ( v58 )
  {
    v3 = v59;
    if ( (_QWORD)v59 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 80 * v4);
        clear_tinfo_t();
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        ++v4;
        cleanup_argloc();
        v2 = v58;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return tinfo_details;
}

