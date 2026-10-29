__int64 __fastcall sub_513F0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  bool v7; // zf
  __int64 v10; // rdi
  unsigned int v11; // r14d
  _DWORD *v12; // r8
  _DWORD *v13; // r14
  __int64 v14; // rdx
  char *v15; // rax
  char *v16; // rsi
  signed __int64 v17; // rdx
  char *v18; // rdx
  char *v19; // rcx
  __int64 v20; // rax
  char *v21; // r13
  size_t v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // edx
  __int16 v26; // ax
  __int64 v27; // rsi
  _DWORD *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  char *v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  char *v35; // rax
  void *v36; // rdi
  __int64 v37; // rax
  const char *v38; // rsi
  __int64 v39; // rdi
  char *v40; // rdx
  __int64 v41; // r15
  __int64 v42; // r14
  char *v43; // rax
  void *v44; // rdi
  char *v45; // rdi
  void *v46; // rbx
  __m128i v47; // xmm1
  __m128i v48; // xmm1
  void *v49; // rdi
  char *v50; // rdx
  __int64 v51; // rbp
  __int64 v52; // rbx
  char *v53; // rax
  void *v54; // rdi
  __m128i v55; // [rsp+0h] [rbp-168h] BYREF
  __int64 *v56; // [rsp+10h] [rbp-158h]
  size_t v57; // [rsp+18h] [rbp-150h]
  size_t n; // [rsp+20h] [rbp-148h]
  unsigned int **v59; // [rsp+28h] [rbp-140h]
  void *v60; // [rsp+30h] [rbp-138h] BYREF
  __int128 v61; // [rsp+38h] [rbp-130h]
  void *v62; // [rsp+50h] [rbp-118h] BYREF
  __m128i v63; // [rsp+58h] [rbp-110h] BYREF
  int v64; // [rsp+70h] [rbp-F8h] BYREF
  __int16 v65; // [rsp+74h] [rbp-F4h]
  __int64 v66; // [rsp+78h] [rbp-F0h]
  __int64 v67; // [rsp+80h] [rbp-E8h]
  __int64 v68; // [rsp+90h] [rbp-D8h] BYREF
  void *v69; // [rsp+98h] [rbp-D0h] BYREF
  __int128 v70; // [rsp+A0h] [rbp-C8h]
  void *v71; // [rsp+B0h] [rbp-B8h]
  __int128 v72; // [rsp+B8h] [rbp-B0h]
  void *v73; // [rsp+C8h] [rbp-A0h]
  __int128 v74; // [rsp+D0h] [rbp-98h]
  __int64 v75; // [rsp+E0h] [rbp-88h]
  void *ptr; // [rsp+E8h] [rbp-80h]
  __int128 v77; // [rsp+F0h] [rbp-78h]
  unsigned __int64 v78; // [rsp+128h] [rbp-40h]

  v7 = a1[54] == 0;
  v78 = __readfsqword(0x28u);
  if ( v7 && !(unsigned __int8)sub_4E5C0((__int64)a1, (char **)a3, 0) )
    return 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return 1;
  v10 = a1[54];
  v59 = (unsigned int **)&v60;
  v60 = nullptr;
  v61 = 0;
  v11 = sub_5E520(v10, a2, 1, &v60, a3);
  if ( v11 == 2 )
  {
    v38 = s1;
    if ( *(_QWORD *)(a3 + 8) )
      v38 = *(const char **)a3;
    if ( !(unsigned __int8)sub_4F560((__int64)a1, v38, 0) )
    {
LABEL_82:
      sub_4C550(v59, a4);
      sub_5ECD0(&v62, v11, 0);
      v45 = *(char **)a3;
      v46 = v62;
      v62 = nullptr;
      v47 = _mm_loadu_si128(&v63);
      v63 = 0;
      if ( v45 )
      {
        *(_QWORD *)(a3 + 8) = 0;
        v55 = v47;
        j__free(v45);
        v48 = _mm_load_si128(&v55);
        v49 = v62;
        *(_QWORD *)a3 = v46;
        *(__m128i *)(a3 + 8) = v48;
        if ( v49 )
        {
          v63.m128i_i64[0] = 0;
          j__free(v49);
        }
      }
      else
      {
        *(_QWORD *)a3 = v46;
        *(__m128i *)(a3 + 8) = v47;
      }
      v50 = (char *)v60;
      if ( v60 )
      {
        v51 = v61;
        if ( (_QWORD)v61 )
        {
          v52 = 0;
          do
          {
            v53 = &v50[32 * v52];
            v54 = *((void **)v53 + 1);
            if ( v54 )
            {
              *((_QWORD *)v53 + 2) = 0;
              j__free(v54);
              v50 = (char *)v60;
            }
            ++v52;
          }
          while ( v51 != v52 );
        }
        *(_QWORD *)&v61 = 0;
        j__free(v50);
        return 0;
      }
      return 0;
    }
    v39 = a1[54];
    if ( !v39 )
    {
      if ( !unk_2439A0 )
        sub_198E10(2704);
LABEL_103:
      BUG();
    }
    v40 = (char *)v60;
    if ( v60 )
    {
      v41 = v61;
      if ( (_QWORD)v61 )
      {
        v42 = 0;
        do
        {
          v43 = &v40[32 * v42];
          v44 = *((void **)v43 + 1);
          if ( v44 )
          {
            *((_QWORD *)v43 + 2) = 0;
            j__free(v44);
            v40 = (char *)v60;
          }
          ++v42;
        }
        while ( v41 != v42 );
      }
      *(_QWORD *)&v61 = 0;
      j__free(v40);
      v60 = nullptr;
      v39 = a1[54];
      *((_QWORD *)&v61 + 1) = 0;
    }
    v11 = sub_5E520(v39, a2, 1, v59, a3);
  }
  if ( v11 )
    goto LABEL_82;
  if ( (_QWORD)v61 != 2 || *((_DWORD *)v60 + 8) != 10 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3193);
    goto LABEL_103;
  }
  sub_4C550(v59, a4);
  v12 = *(_DWORD **)a2;
  v55.m128i_i64[0] = *(_QWORD *)a2 + 6LL * *(_QWORD *)(a2 + 8);
  if ( (_DWORD *)v55.m128i_i64[0] == v12 )
    goto LABEL_40;
  v13 = v12;
  v56 = &v68;
  do
  {
    v14 = a1[17];
    v15 = (char *)a1[16];
    v68 = 112;
    v69 = nullptr;
    v71 = nullptr;
    v73 = nullptr;
    v14 *= 152;
    v70 = 0;
    v16 = &v15[v14];
    v75 = 0;
    v17 = 0x86BCA1AF286BCA1BLL * (v14 >> 3);
    v72 = 0;
    ptr = nullptr;
    v74 = 0;
    v77 = 0;
    if ( v17 >> 2 > 0 )
    {
      v18 = &v15[608 * (v17 >> 2)];
      while ( *(_DWORD *)v15 != *v13 || *((_WORD *)v15 + 2) != *((_WORD *)v13 + 2) )
      {
        v19 = v15 + 152;
        if ( *((_DWORD *)v15 + 38) == *v13 && *((_WORD *)v15 + 78) == *((_WORD *)v13 + 2)
          || (v19 = v15 + 304, *((_DWORD *)v15 + 76) == *v13) && *((_WORD *)v15 + 154) == *((_WORD *)v13 + 2) )
        {
LABEL_51:
          v15 = v19;
          goto LABEL_18;
        }
        v19 = v15 + 456;
        if ( *((_DWORD *)v15 + 114) == *v13 )
        {
          if ( *((_WORD *)v15 + 230) == *((_WORD *)v13 + 2) )
            goto LABEL_51;
          v15 += 608;
          if ( v18 == v15 )
          {
LABEL_56:
            v17 = 0x86BCA1AF286BCA1BLL * ((v16 - v15) >> 3);
            goto LABEL_57;
          }
        }
        else
        {
          v15 += 608;
          if ( v18 == v15 )
            goto LABEL_56;
        }
      }
      goto LABEL_18;
    }
LABEL_57:
    if ( v17 == 2 )
      goto LABEL_63;
    if ( v17 == 3 )
    {
      if ( *(_DWORD *)v15 == *v13 && *((_WORD *)v15 + 2) == *((_WORD *)v13 + 2) )
        goto LABEL_18;
      v15 += 152;
LABEL_63:
      if ( *(_DWORD *)v15 == *v13 && *((_WORD *)v15 + 2) == *((_WORD *)v13 + 2) )
        goto LABEL_18;
      v15 += 152;
      goto LABEL_65;
    }
    if ( v17 != 1 )
      goto LABEL_60;
LABEL_65:
    if ( *(_DWORD *)v15 != *v13 || *((_WORD *)v15 + 2) != *((_WORD *)v13 + 2) )
LABEL_60:
      v15 = v16;
LABEL_18:
    v20 = *((int *)v15 + 3);
    if ( (int)v20 >= 7 )
      v20 = 0;
    v21 = off_23E8C0[v20];
    if ( v21 )
    {
      v22 = strlen(off_23E8C0[v20]);
      if ( v22 )
      {
        n = v22;
        v57 = v22 + 1;
        v16 = v21;
        v69 = (void *)sub_1987B0(&v69, 0, v22 + 1, 1);
        *(_QWORD *)&v70 = v57;
        v57 = n;
        memmove(v69, v21, n);
        *((_BYTE *)v69 + n) = 0;
      }
    }
    *(_DWORD *)((char *)&v68 + 2) = *v13;
    HIWORD(v68) = *((_WORD *)v13 + 2);
    sub_5A110(v56, v16);
    v23 = a1[58];
    v24 = v23 + 6LL * a1[59];
    if ( v23 != v24 )
    {
      while ( *v13 != *(_DWORD *)v23 || *((_WORD *)v13 + 2) != *(_WORD *)(v23 + 4) )
      {
        v23 += 6;
        if ( v24 == v23 )
          goto LABEL_30;
      }
      if ( v23 != v24 )
      {
        memmove((void *)v23, (const void *)(v23 + 6), v24 - v23 - 6);
        --a1[59];
      }
    }
LABEL_30:
    if ( ptr )
    {
      *(_QWORD *)&v77 = 0;
      j__free(ptr);
    }
    if ( v73 )
    {
      *(_QWORD *)&v74 = 0;
      j__free(v73);
    }
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      j__free(v71);
    }
    if ( v69 )
    {
      *(_QWORD *)&v70 = 0;
      j__free(v69);
    }
    v13 = (_DWORD *)((char *)v13 + 6);
  }
  while ( (_DWORD *)v55.m128i_i64[0] != v13 );
  v12 = *(_DWORD **)a2;
LABEL_40:
  v25 = *v12;
  v26 = *((_WORD *)v12 + 2);
  v66 = 0;
  LODWORD(v68) = v25;
  WORD2(v68) = v26;
  v64 = v25;
  v65 = v26;
  v67 = 0;
  v27 = sub_4CB80((__int64)a1, (__int64)&v64);
  if ( !v27 )
  {
    if ( !unk_2439A0 )
      sub_198E10(3194);
    goto LABEL_103;
  }
  sub_503C0((__int64)a1, v27, 0, 0, 0);
  v28 = *(_DWORD **)a2;
  v29 = a1[55];
  LODWORD(v68) = **(_DWORD **)a2;
  v30 = a1[56];
  WORD2(v68) = *((_WORD *)v28 + 2);
  if ( a1[57] < (unsigned __int64)(v30 + 1) )
  {
    v37 = sub_1987B0(a1 + 55, v29, v30 + 1, 6);
    a1[55] = v37;
    v30 = a1[56];
    v29 = v37;
  }
  v31 = v29 + 6 * v30;
  *(_DWORD *)v31 = v68;
  *(_WORD *)(v31 + 4) = WORD2(v68);
  v32 = (char *)v60;
  ++a1[56];
  if ( v32 )
  {
    v33 = v61;
    if ( (_QWORD)v61 )
    {
      v34 = 0;
      do
      {
        v35 = &v32[32 * v34];
        v36 = *((void **)v35 + 1);
        if ( v36 )
        {
          *((_QWORD *)v35 + 2) = 0;
          j__free(v36);
          v32 = (char *)v60;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v61 = 0;
    j__free(v32);
  }
  return 1;
}
