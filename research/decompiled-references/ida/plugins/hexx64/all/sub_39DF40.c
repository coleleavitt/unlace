unsigned __int64 __fastcall sub_39DF40(__int64 a1, __m128 a2)
{
  __int64 v3; // rbx
  int v4; // r12d
  __int64 v5; // rsi
  bool v6; // zf
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int i; // r12d
  int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r15
  unsigned __int64 *v24; // rax
  __m128i v25; // xmm0
  const char *v27; // rdi
  __int64 v28; // rdi
  bool v29; // sf
  bool v30; // of
  unsigned __int64 *v31; // rdx
  unsigned __int64 *j; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 *v36; // rdi
  __int64 *v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdx
  char *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // r14
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 *v45; // rcx
  unsigned __int64 v46; // rsi
  __int64 *v47; // rbx
  __int64 v48; // rdx
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  unsigned __int64 *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // [rsp+18h] [rbp-E8h]
  unsigned __int64 *v54; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v55; // [rsp+28h] [rbp-D8h]
  const void **v56; // [rsp+30h] [rbp-D0h]
  size_t n; // [rsp+40h] [rbp-C0h]
  int v58; // [rsp+48h] [rbp-B8h]
  int v59; // [rsp+4Ch] [rbp-B4h]
  int v60; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 *v61; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  void *src; // [rsp+70h] [rbp-90h] BYREF
  __int128 v66; // [rsp+78h] [rbp-88h]
  char *v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v71; // [rsp+C8h] [rbp-38h]

  v71 = __readfsqword(0x28u);
  v61 = nullptr;
  v62 = 0;
  sub_39CBC0((__int64 *)&v61, *(_QWORD *)(a1 + 32), 1);
  v3 = (__int64)v61;
  v63 = nullptr;
  v64 = 0;
  v53 = v62;
  v54 = v61;
  sub_38B9C0(*(_QWORD *)(a1 + 32), &v63, a1, a2);
  if ( !v3 )
  {
    v21 = v63;
    if ( !v63 )
      return v71 - __readfsqword(0x28u);
    v22 = *v63;
    v23 = *v63;
    if ( !v64 )
      goto LABEL_31;
    goto LABEL_93;
  }
  if ( !v53 )
  {
    v21 = v63;
    if ( !v63 )
      goto LABEL_36;
    goto LABEL_30;
  }
  v55 = (unsigned __int64 *)v54[1];
  if ( v54 == v55 )
    goto LABEL_61;
  do
  {
    v4 = 0;
    v5 = 0;
    v66 = 0;
    v6 = v55[5] == 0;
    src = nullptr;
    if ( v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        if ( !v63 )
          goto LABEL_12;
        v7 = (unsigned __int64 *)(*v63 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v7 )
          break;
        v10 = 24;
LABEL_73:
        v39 = 4 * v66;
        v60 = *(_DWORD *)(v10 + 8);
        v40 = (char *)src;
        if ( 4LL * (_QWORD)v66 )
        {
          do
          {
            if ( *(_DWORD *)(v10 + 8) < *(_DWORD *)v40 )
            {
              v60 = *(_DWORD *)(v10 + 8);
              v42 = v40 - (_BYTE *)src;
              goto LABEL_78;
            }
            v40 += 4;
          }
          while ( v40 != (char *)src + 4 * (_QWORD)v66 );
          v60 = *(_DWORD *)(v10 + 8);
          v42 = 4 * v66;
          v41 = v66 + 1;
          if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)(v66 + 1) )
            goto LABEL_79;
        }
        else
        {
          v42 = 0;
LABEL_78:
          v41 = v66 + 1;
          if ( *((_QWORD *)&v66 + 1) >= (unsigned __int64)(v66 + 1) )
            goto LABEL_79;
        }
        src = (void *)qvector_reserve((__int64)&src, (__int64)src, v41, 4);
        v40 = (char *)src + v42;
        v39 = 4 * v66;
LABEL_79:
        ++v4;
        memmove(v40 + 4, v40, v39 - v42);
        v5 = v4;
        *(_DWORD *)v40 = v60;
        *(_QWORD *)&v66 = v66 + 1;
        if ( v4 >= v55[5] )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*v63 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_12;
      v8 = *(_QWORD *)(v55[4] + 8 * v5);
      while ( 1 )
      {
        v9 = v7[3];
        v10 = (__int64)(v7 + 3);
        if ( v8 >= v9 )
          break;
        v7 = (unsigned __int64 *)v7[1];
LABEL_11:
        if ( (*(_BYTE *)v7 & 2) != 0 )
          goto LABEL_12;
      }
      if ( v9 < v8 )
      {
        v7 = (unsigned __int64 *)v7[2];
        goto LABEL_11;
      }
      if ( v63 != v7 )
        goto LABEL_73;
LABEL_12:
      v5 = ++v4;
    }
    while ( v4 < v55[5] );
LABEL_13:
    v11 = 1000;
    delete_extra_cmts();
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 32);
    v58 = 0;
    for ( i = 1000; v58 < (unsigned __int64)v66; v12 = v58 )
    {
      v15 = 0;
      v16 = *((int *)src + v12);
      v59 = *((_DWORD *)src + v12);
      while ( 1 )
      {
        v17 = *(_QWORD *)(v13 + 128);
        v18 = 32 * v16;
        v67 = nullptr;
        v68 = 0;
        v19 = v18 + v17;
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 )
        {
          v56 = (const void **)v19;
          n = *(_QWORD *)(v19 + 8);
          v67 = (char *)qalloc_or_throw(n, v11, v20, v19);
          *((_QWORD *)&v68 + 1) = n;
          memcpy(v67, *v56, n);
          *(_QWORD *)&v68 = n;
          if ( n == 1 )
          {
            v69 = 0;
            v70 = 0;
          }
          else
          {
            v11 = (__int64)v67;
            if ( tag_remove() > 0 )
            {
              if ( v15 )
              {
                v27 = (const char *)skip_spaces();
                if ( ((*v27 - 123) & 0xFD) == 0 )
                  goto LABEL_50;
                v11 = (__int64)"while";
                if ( !strncmp(v27, "while", 5u) )
                  goto LABEL_50;
                v11 = (__int64)"else";
                if ( !strncmp(v27, "else", 4u) )
                  goto LABEL_50;
                v28 = *(_QWORD *)(a1 + 32);
                v11 = *(_QWORD *)(*(_QWORD *)(v13 + 128) + v18);
                v30 = __OFSUB__(v59, *(_DWORD *)(v28 + 152));
                v29 = v59 - *(_DWORD *)(v28 + 152) < 0;
                LODWORD(v69) = 0;
                sub_38A790(v28, (_BYTE *)v11, 0, v29 == v30, 0, (__int64)&v69, 0);
                if ( (_DWORD)v69 )
                {
                  if ( (_DWORD)v69 != 1 || *(int *)(v70 + 8) > 69 )
                    goto LABEL_50;
                }
              }
            }
            v69 = 0;
            v70 = 0;
          }
        }
        else
        {
          v69 = 0;
          v70 = 0;
        }
        ++v59;
        sub_6B870(&v69);
        v11 = i;
        update_extra_cmt();
        if ( (unsigned __int64)v68 <= 1 || v67[(_QWORD)v68 - 2] != 58 )
          ++v15;
        v16 = v59;
        if ( (unsigned __int64)v59 >= *(_QWORD *)(v13 + 136) )
          break;
        if ( v69 )
        {
          *(_QWORD *)&v70 = 0;
          qfree(v69);
        }
        if ( v67 )
        {
          *(_QWORD *)&v68 = 0;
          qfree((__int64)v67);
        }
        ++i;
      }
      if ( v69 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(v69);
      }
      ++i;
LABEL_50:
      if ( v67 )
      {
        *(_QWORD *)&v68 = 0;
        qfree((__int64)v67);
      }
      ++v58;
    }
    if ( src )
    {
      *(_QWORD *)&v66 = 0;
      qfree((__int64)src);
    }
    if ( (*v55 & 2) == 0 )
    {
      v31 = (unsigned __int64 *)v55[2];
      if ( (*(_BYTE *)v31 & 2) != 0 )
      {
        v43 = (unsigned __int64 *)(*v55 & 0xFFFFFFFFFFFFFFFCLL);
        v44 = *v43;
        if ( (*v43 & 2) == 0 )
        {
          v45 = v55;
          while ( (unsigned __int64 *)v43[2] == v45 )
          {
            v45 = v43;
            v46 = v44 & 0xFFFFFFFFFFFFFFFCLL;
            v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v44 & 2) != 0 )
            {
              v55 = (unsigned __int64 *)v46;
              goto LABEL_60;
            }
            v43 = (unsigned __int64 *)v46;
          }
        }
        v55 = v43;
      }
      else
      {
        for ( j = (unsigned __int64 *)v31[1]; (*(_BYTE *)j & 2) == 0; j = (unsigned __int64 *)j[1] )
          v31 = j;
        v55 = v31;
      }
    }
LABEL_60:
    ;
  }
  while ( v55 != v54 );
LABEL_61:
  v21 = v63;
  if ( !v63 )
  {
LABEL_62:
    v33 = *v54;
    v34 = *v54 & 0xFFFFFFFFFFFFFFFCLL;
    v35 = (_QWORD *)v34;
    if ( (*(_BYTE *)v34 & 2) == 0 )
    {
      v36 = *(__int64 **)(v34 + 8);
      if ( (*(_BYTE *)v36 & 2) != 0 )
      {
        v37 = *(__int64 **)(v34 + 16);
        if ( (*(_BYTE *)v37 & 2) != 0 )
          goto LABEL_65;
LABEL_103:
        sub_385990(v37);
      }
      else
      {
        sub_385990(v36);
        v37 = (__int64 *)v35[2];
        if ( (*(_BYTE *)v37 & 2) == 0 )
          goto LABEL_103;
      }
      if ( (*(_BYTE *)v35 & 2) == 0 )
      {
LABEL_65:
        v38 = v35[4];
        if ( v38 )
        {
          v35[5] = 0;
          qfree(v38);
        }
        *v35 |= 2uLL;
      }
      if ( v33 > 3 )
        qfree((__int64)v35);
    }
LABEL_36:
    qfree((__int64)v54);
    return v71 - __readfsqword(0x28u);
  }
LABEL_30:
  v22 = *v21;
  v23 = *v21;
  if ( !v64 )
  {
LABEL_31:
    *v21 = v22 & 3 | (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
    v24 = v63;
    v25 = (__m128i)(unsigned __int64)v63;
    *v63 &= ~1uLL;
    *(__m128i *)(v24 + 1) = _mm_unpacklo_epi64(v25, v25);
    *v63 |= 2u;
    goto LABEL_32;
  }
LABEL_93:
  v47 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
  v48 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v48 & 2) == 0 )
  {
    v49 = (__int64 *)v47[1];
    if ( (*(_BYTE *)v49 & 2) != 0 )
    {
      v50 = (__int64 *)v47[2];
      if ( (*(_BYTE *)v50 & 2) == 0 )
      {
LABEL_96:
        sub_3855A0(v50);
        goto LABEL_97;
      }
    }
    else
    {
      sub_3855A0(v49);
      v50 = (__int64 *)v47[2];
      if ( (*(_BYTE *)v50 & 2) == 0 )
        goto LABEL_96;
LABEL_97:
      v48 = *v47;
      if ( (*v47 & 2) != 0 )
      {
LABEL_98:
        if ( v23 > 3 )
          qfree(v22 & 0xFFFFFFFFFFFFFFFCLL);
        v21 = v63;
        goto LABEL_101;
      }
    }
    *v47 = v48 | 2;
    goto LABEL_98;
  }
LABEL_101:
  *v21 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL | *v21 & 3;
  v51 = v63;
  v52 = (__m128i)(unsigned __int64)v63;
  *v63 &= ~1uLL;
  *(__m128i *)(v51 + 1) = _mm_unpacklo_epi64(v52, v52);
  *v63 |= 2u;
  v64 = 0;
LABEL_32:
  if ( v63 )
    qfree((__int64)v63);
  if ( v54 )
  {
    if ( v53 )
      goto LABEL_62;
    goto LABEL_36;
  }
  return v71 - __readfsqword(0x28u);
}

