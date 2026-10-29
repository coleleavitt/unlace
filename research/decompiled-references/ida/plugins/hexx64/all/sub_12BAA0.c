__int64 __fastcall sub_12BAA0(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned int *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  void *v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // rdi
  unsigned __int64 i; // r15
  int v27; // edx
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // rdi
  size_t v31; // r10
  int v32; // edx
  char v33; // al
  char v34; // al
  __int16 v35; // ax
  __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // edx
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // [rsp+10h] [rbp-E8h]
  __int64 v48; // [rsp+10h] [rbp-E8h]
  __int64 nc; // [rsp+20h] [rbp-D8h]
  size_t n; // [rsp+20h] [rbp-D8h]
  size_t na; // [rsp+20h] [rbp-D8h]
  int nb; // [rsp+20h] [rbp-D8h]
  __int64 v56; // [rsp+38h] [rbp-C0h]
  __int64 v57; // [rsp+38h] [rbp-C0h]
  __int64 v58; // [rsp+40h] [rbp-B8h]
  char *v59; // [rsp+40h] [rbp-B8h]
  int v60; // [rsp+40h] [rbp-B8h]
  __int64 v61; // [rsp+40h] [rbp-B8h]
  char *v62; // [rsp+40h] [rbp-B8h]
  int v63; // [rsp+48h] [rbp-B0h]
  __int64 v64; // [rsp+48h] [rbp-B0h]
  int v65; // [rsp+48h] [rbp-B0h]
  char v66; // [rsp+5Fh] [rbp-99h]
  unsigned int *v67; // [rsp+60h] [rbp-98h] BYREF
  __int64 v68; // [rsp+68h] [rbp-90h]
  __int64 v69; // [rsp+70h] [rbp-88h] BYREF
  __int128 v70; // [rsp+78h] [rbp-80h]
  __int64 v71[2]; // [rsp+90h] [rbp-68h] BYREF
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( !a3 )
  {
    LOBYTE(v8) = *(_QWORD *)(a6 + 16) == 0;
    return (unsigned int)v8;
  }
  v9 = a1[1];
  v69 = 0;
  v11 = a3;
  v70 = 0;
  if ( v9 )
  {
    v71[0] = 0;
    v71[1] = 0;
    src = nullptr;
    v73 = 0;
    v12 = qvector_reserve((__int64)&v69, 0, v9, 40);
    v13 = v70;
    v69 = v12;
    if ( (unsigned __int64)v70 < v9 )
    {
      while ( 1 )
      {
        v14 = v12 + 40 * v13;
        sub_64000((__int64 *)v14, (__int64)v71, 0.0);
        a8 = 0;
        *(_QWORD *)(v14 + 16) = 0;
        *(_OWORD *)(v14 + 24) = 0;
        if ( (_QWORD)v73 )
        {
          v47 = v73;
          nc = 16 * v73;
          v15 = (void *)qalloc_or_throw(16 * v73, (__int64)v71, 16 * v73, v73);
          *(_QWORD *)(v14 + 16) = v15;
          *(_QWORD *)(v14 + 32) = v47;
          memcpy(v15, src, nc);
          *(_QWORD *)(v14 + 24) = v47;
        }
        if ( v9 == ++v13 )
          break;
        v12 = v69;
      }
    }
    *(_QWORD *)&v70 = v9;
    if ( src )
    {
      *(_QWORD *)&v73 = 0;
      qfree((__int64)src);
    }
    v8 = 0;
    qfree(v71[0]);
    do
    {
      sub_123EA0(a2, (__int64 *)(v69 + 40 * v8), *a1 + 16 * v8, 1, 0xFFFF0000, 0.0);
      ++v8;
    }
    while ( v9 != v8 );
  }
  if ( *v11 == 1 )
    goto LABEL_52;
LABEL_14:
  sub_127A20((__int64)v71, a2, (__int64)v11, 1, a5, a6, 0.0, a8);
  v66 = 0;
  if ( v9 )
  {
    v16 = 0;
    while ( 1 )
    {
      v8 = v69 + 40 * v16;
      if ( !(unsigned __int8)sub_64780((_QWORD *)v8, v71)
        && !(unsigned __int8)sub_318470((unsigned __int64 **)(v8 + 16), (__int64)&src) )
      {
        goto LABEL_34;
      }
      if ( a4 != nullptr && a4 == v11 )
        goto LABEL_21;
      v17 = *v11;
      *(&v66 + (v16 >> 3)) |= 1 << (v16 & 7);
      v18 = *a1 + 16 * v16;
      v8 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      if ( (_DWORD)v17 == 62 )
      {
        if ( (*((_BYTE *)v11 + 5) & 0x10) != 0 )
          goto LABEL_21;
      }
      else if ( (unsigned int)v17 <= 0x3B )
      {
        v19 = 0xCFFFC0000000003LL;
        if ( _bittest64(&v19, v17) )
          goto LABEL_21;
        if ( *(_BYTE *)v18 != 1 && (unsigned __int8)(*(_BYTE *)v18 - 5) > 1u || a5 )
        {
LABEL_57:
          if ( (signed int)v11[17] < *(_DWORD *)(v18 + 4) )
            goto LABEL_21;
          n = *a1 + 16 * v16;
          if ( !sub_32ED70(v17) || !sub_1255D0((unsigned __int8 *)n, v8, (__int64)(v11 + 16), a5, 0.0) )
            goto LABEL_21;
          v68 = 0;
          v67 = (unsigned int *)0xFFFFFFFF00000000LL;
          sub_1262E0((__int64)&v67, (unsigned __int8 *)v11, 0.0);
          v31 = n;
          v32 = *(_DWORD *)(n + 4);
          if ( SHIDWORD(v67) > v32 )
          {
            if ( !(unsigned __int8)sub_12AB50(&v67, (unsigned __int64 *)v8, v32, 0, (__m128i)0LL) )
            {
              sub_11CDA0((__int64)&v67);
LABEL_21:
              LODWORD(v8) = 0;
LABEL_22:
              if ( src )
              {
                *(_QWORD *)&v73 = 0;
                qfree((__int64)src);
              }
              qfree(v71[0]);
              goto LABEL_25;
            }
            v31 = n;
            v32 = *(_DWORD *)(n + 4);
          }
          v33 = *(_BYTE *)v31;
          *(_BYTE *)v31 = (_BYTE)v67;
          LOBYTE(v67) = v33;
          v34 = *(_BYTE *)(v31 + 1);
          *(_BYTE *)(v31 + 1) = BYTE1(v67);
          BYTE1(v67) = v34;
          v35 = *(_WORD *)(v31 + 2);
          *(_WORD *)(v31 + 2) = WORD1(v67);
          WORD1(v67) = v35;
          *(_DWORD *)(v31 + 4) = HIDWORD(v67);
          v36 = *(_QWORD *)(v31 + 8);
          HIDWORD(v67) = v32;
          *(_QWORD *)(v31 + 8) = v68;
          v68 = v36;
          sub_11CDA0((__int64)&v67);
          goto LABEL_34;
        }
        if ( (_DWORD)v17 == 4 )
          goto LABEL_69;
        goto LABEL_68;
      }
      if ( *(_BYTE *)v18 == 1 || (unsigned __int8)(*(_BYTE *)v18 - 5) > 1u || a5 )
        goto LABEL_57;
LABEL_68:
      if ( (unsigned int)(v17 - 10) > 1 )
        goto LABEL_57;
LABEL_69:
      na = *a1 + 16 * v16;
      v37 = sub_121CD0(v8, (__int64)(v11 + 16), na, 0.0);
      if ( !v37 )
        goto LABEL_21;
      v38 = *v11;
      v39 = na;
      if ( *v11 == 10 )
      {
        if ( v37 == 3 )
          goto LABEL_21;
        v60 = v37;
        if ( (unsigned int *)na == v11 + 8 )
          goto LABEL_34;
        v42 = na;
        v64 = na;
        nb = *(_DWORD *)(na + 4);
        sub_11CDA0(v42);
        sub_123A40(v64, (unsigned __int8 *)v11 + 32, v43, v44);
        v39 = v64;
        if ( v60 != 2 )
          goto LABEL_34;
      }
      else
      {
        if ( v38 == 11 )
        {
          if ( v37 == 2 )
            goto LABEL_21;
          nb = *(_DWORD *)(na + 4);
          if ( (unsigned int *)v39 != v11 + 8 )
          {
            v65 = v37;
            v61 = v39;
            sub_11CDA0(v39);
            sub_123A40(v61, (unsigned __int8 *)v11 + 32, v45, v46);
            v39 = v61;
            v37 = v65;
          }
LABEL_88:
          if ( v37 == 3 && nb < *(_DWORD *)(v39 + 4) && nb > 0 )
          {
            v62 = (char *)v39;
            v57 = *((_QWORD *)v11 + 3);
            if ( !(unsigned __int8)sub_127850(v39, (unsigned __int64 *)v8, nb, 0, (__m128i)0LL) )
              sub_1207E0(v62, (unsigned __int64 *)v8, 11, v57, nb, (__m128i)0LL);
          }
          goto LABEL_34;
        }
        if ( v38 != 4 )
        {
          if ( !under_debugger )
            sub_383060(0xCDBCu, 0.0);
          BUG();
        }
        nb = *(_DWORD *)(na + 4);
        if ( (unsigned int *)v39 != v11 + 8 )
        {
          v63 = v37;
          v58 = v39;
          sub_11CDA0(v39);
          sub_123A40(v58, (unsigned __int8 *)v11 + 32, v40, v41);
          v37 = v63;
          v39 = v58;
        }
        if ( v37 != 2 )
          goto LABEL_88;
      }
      if ( *(_DWORD *)(v39 + 4) > nb && nb > 0 )
      {
        v59 = (char *)v39;
        v56 = *((_QWORD *)v11 + 3);
        if ( !(unsigned __int8)sub_1272B0(v39, (unsigned __int64 *)v8, nb, 0, 0.0) )
          sub_1207E0(v59, (unsigned __int64 *)v8, 10, v56, nb, (__m128i)0LL);
      }
LABEL_34:
      if ( v9 == ++v16 )
      {
        if ( v66 )
        {
          if ( *(_QWORD *)(a6 + 16) )
          {
            LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a6 + 24))(a6, a1);
            if ( (_BYTE)v8 )
              goto LABEL_22;
          }
        }
        if ( a4 == v11 || !*((_QWORD *)v11 + 2) )
          goto LABEL_96;
        for ( i = 0; i != v9; ++i )
        {
          while ( 1 )
          {
            v27 = (unsigned __int8)*(&v66 + (i >> 3));
            if ( _bittest(&v27, i & 7) )
              break;
            if ( v9 == ++i )
              goto LABEL_48;
          }
          v28 = 40 * i;
          v29 = (__int64 *)(40 * i + v69);
          v30 = v29[2];
          v29[1] = 0;
          if ( v30 )
          {
            v29[3] = 0;
            qfree(v30);
            v29[2] = 0;
            v28 = 40 * i;
            v29[4] = 0;
            v29 = (__int64 *)(40 * i + v69);
          }
          v48 = v28;
          sub_123EA0(a2, v29, *a1 + 16 * i, 1, 0xFFFF0000, 0.0);
          v8 = v69 + v48;
          if ( (unsigned __int8)sub_64780((_QWORD *)(v69 + v48), v71)
            || (unsigned __int8)sub_318470((unsigned __int64 **)(v8 + 16), (__int64)&src) )
          {
            goto LABEL_21;
          }
        }
LABEL_48:
        v11 = *((unsigned int **)v11 + 2);
LABEL_49:
        if ( src )
        {
          *(_QWORD *)&v73 = 0;
          qfree((__int64)src);
        }
        qfree(v71[0]);
        if ( *v11 == 1 )
        {
LABEL_52:
          LODWORD(v8) = 0;
          goto LABEL_25;
        }
        goto LABEL_14;
      }
    }
  }
  if ( a4 != v11 )
  {
    v11 = *((unsigned int **)v11 + 2);
    if ( v11 )
      goto LABEL_49;
  }
LABEL_96:
  if ( src )
  {
    *(_QWORD *)&v73 = 0;
    qfree((__int64)src);
  }
  qfree(v71[0]);
  LOBYTE(v8) = *(_QWORD *)(a6 + 16) == 0;
LABEL_25:
  v20 = v69;
  if ( v69 )
  {
    v21 = v70;
    if ( (_QWORD)v70 )
    {
      v22 = 0;
      do
      {
        v23 = (__int64 *)(v20 + 40 * v22);
        v24 = v23[2];
        if ( v24 )
        {
          v23[3] = 0;
          qfree(v24);
        }
        ++v22;
        qfree(*v23);
        v20 = v69;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v70 = 0;
    qfree(v20);
  }
  return (unsigned int)v8;
}

