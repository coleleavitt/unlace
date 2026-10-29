__int64 __fastcall sub_300FC0(_QWORD *a1)
{
  _BYTE *v1; // r12
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  __m128i si128; // xmm2
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  char v16; // bl
  __int64 *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r13
  _QWORD *v21; // rbp
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __m128i *v26; // r15
  __int64 v27; // r13
  __m128i *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  const void *v36; // r9
  void *v37; // rax
  const void *v38; // r9
  void *v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-148h]
  unsigned __int8 v41; // [rsp+8h] [rbp-148h]
  int v43; // [rsp+1Ch] [rbp-134h]
  _QWORD *v44; // [rsp+20h] [rbp-130h]
  __int64 v45; // [rsp+28h] [rbp-128h]
  const void *v46; // [rsp+28h] [rbp-128h]
  const void *v47; // [rsp+28h] [rbp-128h]
  __int64 v48; // [rsp+30h] [rbp-120h]
  __int64 *v49; // [rsp+40h] [rbp-110h]
  __int64 v50; // [rsp+58h] [rbp-F8h]
  __m128i v51; // [rsp+78h] [rbp-D8h] BYREF
  __m128i v52; // [rsp+88h] [rbp-C8h] BYREF
  _QWORD v53[2]; // [rsp+98h] [rbp-B8h] BYREF
  _BYTE v54[48]; // [rsp+A8h] [rbp-A8h] BYREF
  char v55; // [rsp+D8h] [rbp-78h] BYREF
  __int64 v56; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v57; // [rsp+F8h] [rbp-58h]
  __int64 v58; // [rsp+108h] [rbp-48h]
  unsigned __int64 v59; // [rsp+110h] [rbp-40h]

  v1 = v54;
  v59 = __readfsqword(0x28u);
  v2 = a1[22];
  v3 = a1[1];
  v53[1] = v2;
  v53[0] = v3;
  v4 = (__int64 *)v54;
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != &v56 );
  v56 = 0;
  v58 = 0;
  v57 = 0;
  if ( v2 )
  {
    v43 = 0;
    v40 = 0;
    do
    {
      v5 = a1[v40 + 19];
      if ( v5 )
      {
        v6 = (__int64 *)sub_2C7210(v5);
        v49 = v6;
        if ( v6 )
        {
          v7 = *v6;
          v44 = (_QWORD *)*v6;
          if ( *v6 )
          {
            if ( v6[1] )
            {
              v8 = *(_QWORD *)(v7 + 8);
              if ( v7 != v8 )
              {
                while ( 1 )
                {
                  v9 = *((_QWORD *)v1 + 1);
                  v10 = *((_QWORD *)v1 + 2);
                  if ( v10 < v9 + 1 )
                  {
                    v23 = qvector_reserve((__int64)v1, 0, v9 + 1, 200);
                    v24 = *((_QWORD *)v1 + 2);
                    v25 = *((_QWORD *)v1 + 1);
                    v45 = v23;
                    *((_QWORD *)v1 + 2) = v10;
                    v26 = *(__m128i **)v1;
                    v48 = v24;
                    v27 = v25 - 1;
                    if ( v27 >= 0 )
                    {
                      v28 = (__m128i *)v23;
                      do
                      {
                        sub_2CE310(v28, v26);
                        v29 = v26[12].m128i_i64[0];
                        v28->m128i_i64[0] = (__int64)off_4E2D28;
                        v28[12].m128i_i64[0] = v29;
                        v26->m128i_i64[0] = (__int64)&off_4E1528;
                        cleanup_argloc();
                        v30 = v26[6].m128i_i64[1];
                        if ( v30 )
                        {
                          v26[7].m128i_i64[0] = 0;
                          qfree(v30);
                        }
                        clear_tinfo_t();
                        v31 = v26[4].m128i_i64[1];
                        if ( v31 )
                        {
                          v26[5].m128i_i64[0] = 0;
                          qfree(v31);
                        }
                        v28 = (__m128i *)((char *)v28 + 200);
                        cleanup_argloc();
                        v26 = (__m128i *)((char *)v26 + 200);
                        cleanup_argloc();
                      }
                      while ( v27-- != 0 );
                      v26 = *(__m128i **)v1;
                    }
                    qfree((__int64)v26);
                    *(_QWORD *)v1 = v45;
                    *((_QWORD *)v1 + 2) = v48;
                    v9 = *((_QWORD *)v1 + 1);
                  }
                  v50 = _mm_load_si128((const __m128i *)&xmmword_424800).m128i_i64[1];
                  v11 = *(_QWORD *)v1 + 200 * v9;
                  *(_QWORD *)v11 = &off_4E1528;
                  *(_DWORD *)(v11 + 8) = 0;
                  copy_argloc();
                  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
                  *(_QWORD *)(v11 + 24) = v50;
                  *(_QWORD *)(v11 + 32) = 0;
                  *(_DWORD *)(v11 + 40) = 0;
                  memset((void *)(v11 + 48), 0, 0x60u);
                  *(__m128i *)(v11 + 56) = si128;
                  *(_QWORD *)(v11 + 128) = -1;
                  *(_DWORD *)(v11 + 144) = 0;
                  copy_argloc();
                  *(_DWORD *)(v11 + 184) = -2;
                  *(_QWORD *)(v11 + 160) = v50;
                  *(_QWORD *)(v11 + 168) = 0;
                  *(_DWORD *)(v11 + 176) = 0;
                  cleanup_argloc();
                  *(_QWORD *)v11 = off_4E2D28;
                  *(_QWORD *)(v11 + 192) = -1;
                  ++*((_QWORD *)v1 + 1);
                  copy_argloc();
                  *(_QWORD *)(v11 + 24) = *(_QWORD *)(v8 + 40);
                  *(_QWORD *)(v11 + 32) = *(_QWORD *)(v8 + 48);
                  *(_DWORD *)(v11 + 40) = *(_DWORD *)(v8 + 56);
                  copy_argloc();
                  *(_QWORD *)(v11 + 64) = *(_QWORD *)(v8 + 80);
                  if ( v11 + 72 != v8 + 88 )
                  {
                    v13 = *(_QWORD *)(v8 + 96);
                    if ( v13 > 1 )
                    {
                      v38 = *(const void **)(v8 + 88);
                      v39 = *(void **)(v11 + 72);
                      if ( *(_QWORD *)(v11 + 88) < v13 )
                      {
                        v47 = *(const void **)(v8 + 88);
                        v39 = (void *)qvector_reserve(v11 + 72, *(_QWORD *)(v11 + 72), *(_QWORD *)(v8 + 96), 1);
                        *(_QWORD *)(v11 + 72) = v39;
                        v38 = v47;
                      }
                      *(_QWORD *)(v11 + 80) = v13;
                      memmove(v39, v38, v13 - 1);
                      *(_BYTE *)(*(_QWORD *)(v11 + 72) + v13 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v11 + 80) = 0;
                    }
                  }
                  copy_tinfo_t();
                  if ( v11 + 104 != v8 + 120 )
                  {
                    v14 = *(_QWORD *)(v8 + 128);
                    if ( v14 > 1 )
                    {
                      v36 = *(const void **)(v8 + 120);
                      v37 = *(void **)(v11 + 104);
                      if ( *(_QWORD *)(v11 + 120) < v14 )
                      {
                        v46 = *(const void **)(v8 + 120);
                        v37 = (void *)qvector_reserve(v11 + 104, *(_QWORD *)(v11 + 104), *(_QWORD *)(v8 + 128), 1);
                        *(_QWORD *)(v11 + 104) = v37;
                        v36 = v46;
                      }
                      *(_QWORD *)(v11 + 112) = v14;
                      memmove(v37, v36, v14 - 1);
                      *(_BYTE *)(*(_QWORD *)(v11 + 104) + v14 - 1) = 0;
                    }
                    else
                    {
                      *(_QWORD *)(v11 + 112) = 0;
                    }
                  }
                  ++v43;
                  *(_QWORD *)(v11 + 128) = *(_QWORD *)(v8 + 144);
                  *(_DWORD *)(v11 + 136) = *(_DWORD *)(v8 + 152);
                  if ( (*(_QWORD *)v8 & 2) != 0 )
                    goto LABEL_20;
                  v15 = *(_QWORD *)(v8 + 16);
                  if ( (*(_BYTE *)v15 & 2) != 0 )
                  {
                    v33 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
                    v34 = *v33;
                    if ( (*v33 & 2) == 0 )
                    {
                      while ( v33[2] == v8 )
                      {
                        v8 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                        v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v34 & 2) != 0 )
                          goto LABEL_20;
                        v35 = v33;
                        v33 = (_QWORD *)v8;
                        v8 = (unsigned __int64)v35;
                      }
                    }
                    v8 = (unsigned __int64)v33;
                    if ( v44 == v33 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v8 = v15;
                      v15 = *(_QWORD *)(v15 + 8);
                    }
                    while ( (*(_BYTE *)v15 & 2) == 0 );
LABEL_20:
                    if ( v44 == (_QWORD *)v8 )
                      break;
                  }
                }
              }
            }
          }
          sub_2C3F80(v49);
          qfree((__int64)v49);
        }
      }
      ++v40;
      v1 += 24;
    }
    while ( v40 < a1[22] );
    if ( v43 )
    {
      v52 = 0u;
      v51 = 0;
      if ( sub_2BAA40 )
      {
        v51.m128i_i64[0] = (__int64)sub_2BAA40;
        v52 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DB8), (__m128i)(unsigned __int64)sub_2AD260);
      }
      sub_2FF620(v53, &v51, 1);
      sub_66C50((__int64)&v51);
      sub_2CF3B0(v53, a1 + 19, 1);
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56);
    }
  }
  else
  {
    v16 = 0;
  }
  v41 = v16;
  v17 = (__int64 *)&v55;
  do
  {
    if ( *v17 )
    {
      v18 = v17[1];
      v19 = 0;
      v20 = 0;
      if ( v18 )
      {
        do
        {
          ++v20;
          v21 = (_QWORD *)(v19 + *v17);
          v19 += 200;
          *v21 = &off_4E1528;
          cleanup_argloc();
          sub_2B9980(v21 + 6);
          cleanup_argloc();
        }
        while ( v18 != v20 );
      }
      v17[1] = 0;
      qfree(*v17);
    }
    v17 -= 3;
  }
  while ( &v52.m128i_u64[1] != (unsigned __int64 *)v17 );
  return v41;
}

