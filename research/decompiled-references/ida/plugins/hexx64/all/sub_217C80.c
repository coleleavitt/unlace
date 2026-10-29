__int64 __fastcall sub_217C80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        double a5,
        double a6,
        __m128i a7,
        double a8)
{
  _QWORD *v9; // r14
  _QWORD *v10; // rbp
  const char *v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rbp
  _QWORD *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *func; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // r13
  _QWORD *v26; // rbp
  const char *v27; // rdi
  __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 i; // rbx
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbp
  __int64 j; // rbx
  __int64 *v39; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rbp
  _QWORD *v42; // rdi
  _QWORD *v43; // rdi
  __int64 v45; // [rsp+18h] [rbp-A0h] BYREF
  __int64 *v46; // [rsp+20h] [rbp-98h] BYREF
  __int64 v47; // [rsp+28h] [rbp-90h]
  __int128 v48; // [rsp+30h] [rbp-88h]
  _QWORD *v49; // [rsp+40h] [rbp-78h] BYREF
  __int128 v50; // [rsp+48h] [rbp-70h]
  __int64 v51; // [rsp+58h] [rbp-60h]
  __int128 v52; // [rsp+60h] [rbp-58h]
  int v53; // [rsp+70h] [rbp-48h]
  unsigned __int64 v54; // [rsp+78h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v49 = nullptr;
  v51 = 0;
  v53 = 1;
  v50 = 0;
  v52 = 0;
  sub_2B86B0(a1, (__int64)&v49, a3);
  v9 = v49;
  v10 = &v49[12 * v50];
  if ( v49 == v10 )
  {
LABEL_24:
    func = (__int64 *)get_func();
    if ( !func )
    {
      v12 = 0;
      goto LABEL_9;
    }
    v46 = func;
    v48 = 0;
    v47 = 0;
    sub_14CDC0(&v45, a1, &v46, nullptr, 1, 0.0, a6, a7, a8);
    v23 = v45;
    if ( v45 )
    {
      v24 = *(_QWORD *)(v45 + 8);
      v25 = *(_QWORD **)(v24 + 432);
      v26 = &v25[13 * *(_QWORD *)(v24 + 440)];
      if ( v26 == v25 )
      {
LABEL_63:
        v12 = 0;
      }
      else
      {
        while ( 1 )
        {
          v27 = s1;
          if ( v25[5] )
            v27 = (const char *)v25[4];
          if ( !strcmp(v27, a4) )
            break;
          v25 += 13;
          if ( v25 == v26 )
            goto LABEL_63;
        }
        copy_argloc();
        v28 = v25[2];
        v23 = v45;
        v12 = 1;
        *(_QWORD *)(a2 + 16) = v28;
        if ( !v23 )
          goto LABEL_51;
      }
      if ( (*(_DWORD *)(v23 + 104))-- == 1 )
      {
        sub_258970((__int64 *)v23);
        v30 = *(_QWORD *)(v23 + 184);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v23 + 192);
          if ( v31 )
          {
            for ( i = 0; i != v31; ++i )
            {
              v33 = (__int64 *)(v30 + 24 * i);
              v34 = *v33;
              if ( *v33 )
              {
                v33[1] = 0;
                qfree(v34);
                v30 = *(_QWORD *)(v23 + 184);
              }
            }
          }
          *(_QWORD *)(v23 + 192) = 0;
          qfree(v30);
        }
        v35 = *(_QWORD *)(v23 + 160);
        if ( v35 )
        {
          *(_QWORD *)(v23 + 168) = 0;
          qfree(v35);
        }
        v36 = *(_QWORD *)(v23 + 128);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v23 + 136);
          if ( v37 )
          {
            for ( j = 0; j != v37; ++j )
            {
              v39 = (__int64 *)(v36 + 32 * j);
              v40 = *v39;
              if ( *v39 )
              {
                v39[1] = 0;
                qfree(v40);
                v36 = *(_QWORD *)(v23 + 128);
              }
            }
          }
          *(_QWORD *)(v23 + 136) = 0;
          qfree(v36);
        }
        sub_255050(v23 + 16);
        j__qfree(v23);
      }
    }
    else
    {
      v12 = 0;
    }
LABEL_51:
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    v11 = s1;
    if ( v9[4] )
      v11 = (const char *)v9[3];
    if ( !strcmp(v11, a4) )
      break;
    v9 += 12;
    if ( v10 == v9 )
      goto LABEL_24;
  }
  copy_argloc();
  v12 = 1;
  *(_QWORD *)(a2 + 16) = v9[2];
LABEL_9:
  v13 = v51;
  if ( v51 )
  {
    v14 = *(_QWORD *)v51;
    if ( !(_QWORD)v52 )
    {
      *(_QWORD *)v51 = *(_QWORD *)v51 & 3LL | v51 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)v51);
      *(_QWORD *)v51 &= ~1uLL;
      *(_QWORD *)v51 |= 2uLL;
      goto LABEL_12;
    }
    v41 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_62:
      *(_QWORD *)v13 = v14 & 3 | v13 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)v51);
      *(_QWORD *)v51 &= ~1uLL;
      *(_QWORD *)v51 |= 2uLL;
      *(_QWORD *)&v52 = 0;
LABEL_12:
      if ( v51 )
        qfree(v51);
      goto LABEL_14;
    }
    v42 = *(_QWORD **)(v41 + 8);
    if ( (*(_BYTE *)v42 & 2) != 0 )
    {
      v43 = *(_QWORD **)(v41 + 16);
      if ( (*(_BYTE *)v43 & 2) != 0 )
        goto LABEL_66;
    }
    else
    {
      sub_215D90(v42);
      v43 = *(_QWORD **)(v41 + 16);
      if ( (*(_BYTE *)v43 & 2) != 0 )
        goto LABEL_58;
    }
    sub_215D90(v43);
LABEL_58:
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
LABEL_59:
      if ( v14 > 3 )
        qfree(v14 & 0xFFFFFFFFFFFFFFFCLL);
      v13 = v51;
      v14 = *(_QWORD *)v51;
      goto LABEL_62;
    }
LABEL_66:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v41 |= 2uLL;
    goto LABEL_59;
  }
LABEL_14:
  v15 = (__int64)v49;
  if ( v49 )
  {
    v16 = v50;
    if ( (_QWORD)v50 )
    {
      v17 = 0;
      do
      {
        v18 = (_QWORD *)(v15 + 96 * v17);
        v19 = v18[7];
        if ( v19 )
        {
          v18[8] = 0;
          qfree(v19);
        }
        clear_tinfo_t();
        v20 = v18[3];
        if ( v20 )
        {
          v18[4] = 0;
          qfree(v20);
        }
        ++v17;
        cleanup_argloc();
        v15 = (__int64)v49;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v15);
  }
  return v12;
}

