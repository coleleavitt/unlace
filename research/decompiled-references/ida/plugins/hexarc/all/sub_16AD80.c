__int64 __fastcall sub_16AD80(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // r13
  __m128i v5; // xmm0
  int v6; // r14d
  __m128i *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r9
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // r10
  __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 i; // rax
  __int64 v24; // rdi
  _QWORD *v25; // r13
  __int64 v26; // r14
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  char v31; // al
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __m128i *v37; // rdi
  _QWORD *v38; // r13
  int v39; // r14d
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rsi
  int v57; // eax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // r13
  __int64 v63; // r14
  __int64 v64; // r13
  int v65; // eax
  __int64 v66; // rax
  unsigned __int64 *v67; // [rsp+0h] [rbp-170h]
  __int64 v68; // [rsp+8h] [rbp-168h]
  int v69; // [rsp+14h] [rbp-15Ch]
  __int64 v70; // [rsp+18h] [rbp-158h]
  bool v71; // [rsp+28h] [rbp-148h]
  __int64 v72; // [rsp+30h] [rbp-140h]
  __int64 na; // [rsp+38h] [rbp-138h]
  size_t n; // [rsp+38h] [rbp-138h]
  __int64 v75; // [rsp+40h] [rbp-130h]
  size_t v76; // [rsp+50h] [rbp-120h]
  char v77; // [rsp+50h] [rbp-120h]
  unsigned __int8 v78; // [rsp+50h] [rbp-120h]
  size_t v79; // [rsp+50h] [rbp-120h]
  size_t v80; // [rsp+50h] [rbp-120h]
  __int64 v81; // [rsp+50h] [rbp-120h]
  _QWORD *v82; // [rsp+58h] [rbp-118h]
  _DWORD *v83; // [rsp+68h] [rbp-108h] BYREF
  __m128i v84; // [rsp+70h] [rbp-100h] BYREF
  __int64 v85[2]; // [rsp+80h] [rbp-F0h] BYREF
  void *src; // [rsp+90h] [rbp-E0h] BYREF
  __int128 v87; // [rsp+98h] [rbp-D8h]
  __int64 v88; // [rsp+B0h] [rbp-C0h] BYREF
  __int128 v89; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v90; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 v91; // [rsp+D8h] [rbp-98h]
  char v92; // [rsp+E0h] [rbp-90h]
  _QWORD v93[5]; // [rsp+F0h] [rbp-80h] BYREF
  char v94; // [rsp+118h] [rbp-58h]
  _QWORD v95[10]; // [rsp+11Ch] [rbp-54h]

  *(_QWORD *)((char *)&v95[3] + 4) = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return 0;
  if ( *(_DWORD *)v2 != 42 )
    return 0;
  if ( *(_BYTE *)(v2 + 32) != 4 )
    return 0;
  if ( (*(_BYTE *)(a1 + 25) & 0x10) != 0 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL);
  if ( !*(_DWORD *)(v4 + 52) )
    return 0;
  v93[0] = off_4AA608;
  memset(&v93[1], 0, 32);
  v94 = 0;
  v95[0] = 0xFFFFFFFF00000000LL;
  if ( (unsigned int)sub_1182F0(v2 + 32, (__int64)v93, 0, 0) || SLODWORD(v95[0]) <= 1 )
    return 0;
  v5 = 0;
  v85[0] = 0;
  v6 = 0;
  v85[1] = 0;
  src = nullptr;
  v87 = 0;
  do
  {
    v88 = 0;
    *(_QWORD *)&v89 = 0;
    sub_5D900(&v88, *((_DWORD *)v95 + v6 + 1), 1);
    *((_QWORD *)&v89 + 1) = 0;
    v90 = 0;
    sub_5DD00(v85, &v88);
    sub_30F930(&src, (char *)&v89 + 8);
    if ( *((_QWORD *)&v89 + 1) )
    {
      *(_QWORD *)&v90 = 0;
      qfree();
    }
    qfree();
    ++v6;
  }
  while ( SLODWORD(v95[0]) > v6 );
  v70 = sub_122A90(a1, v85, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0, nullptr, 0, 0x101u);
  if ( v70 )
  {
    v84 = 0u;
    v7 = &v84;
    v83 = (_DWORD *)(a1 + 72);
    v8 = sub_16AAE0(&v84, (int *)(a1 + 72), &v83);
    v9 = v84.m128i_i64[1];
    v82 = (_QWORD *)v84.m128i_i64[0];
    *(_QWORD *)(v8 + 32) = v70;
  }
  else
  {
    v68 = sub_109C80(v4, 0);
    if ( !v68 )
    {
      if ( !under_debugger )
        sub_37B760(50446);
      goto LABEL_140;
    }
    ++*(_DWORD *)(v68 + 24);
    v67 = (unsigned __int64 *)(*(_QWORD *)v68 + 24LL * *(int *)(a1 + 72));
    if ( SLODWORD(v95[0]) <= 0 )
    {
      v9 = 0;
      sub_FE750(v68);
      v82 = nullptr;
      goto LABEL_35;
    }
    v9 = 0;
    v82 = nullptr;
    v69 = 0;
    do
    {
      v88 = 0;
      v35 = *((int *)v95 + v69 + 1);
      BYTE8(v90) = 1;
      v92 = 1;
      *(_QWORD *)&v90 = v35;
      v89 = 0;
      v91 = 0xFFFFFFFF00000001LL;
      v36 = sub_FE730(v67, (__int64)&v88);
      v37 = (__m128i *)v88;
      v38 = v36;
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        qfree();
      }
      if ( !v38 )
      {
LABEL_86:
        sub_FE750(v68);
        v31 = 0;
        goto LABEL_54;
      }
      v39 = 0;
      v40 = 0;
      if ( v38[1] )
      {
LABEL_77:
        v46 = *(unsigned int *)(*v38 + 4 * v40);
        LODWORD(v83) = v46;
        if ( !(_DWORD)v46 )
          goto LABEL_86;
        if ( !v82 )
          goto LABEL_73;
        v41 = *v82 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v41 )
          goto LABEL_76;
        if ( (*(_BYTE *)(*v82 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
          goto LABEL_73;
        while ( 1 )
        {
          if ( (int)v46 < *(_DWORD *)(v41 + 24) )
          {
            v41 = *(_QWORD *)(v41 + 8);
          }
          else
          {
            if ( (int)v46 <= *(_DWORD *)(v41 + 24) )
            {
              if ( v82 == (_QWORD *)v41 )
              {
LABEL_73:
                v42 = *(_QWORD *)(a1 + 64);
                if ( (unsigned int)v46 >= *(_DWORD *)(v42 + 64) )
                  sub_161430(v37);
                v43 = *(_QWORD *)(*(_QWORD *)(v42 + 528) + 8 * v46);
                v44 = sub_122A90(v43, v85, *(_QWORD *)(v43 + 56), 0, nullptr, 0, 0x101u);
                if ( v44 )
                {
                  v79 = v44;
                  v37 = &v84;
                  v84.m128i_i64[1] = v9;
                  v88 = (__int64)&v83;
                  v84.m128i_i64[0] = (__int64)v82;
                  v45 = sub_16AAE0(&v84, (int *)&v83, (_DWORD **)&v88);
                  v9 = v84.m128i_i64[1];
                  v82 = (_QWORD *)v84.m128i_i64[0];
                  *(_QWORD *)(v45 + 32) = v79;
                  goto LABEL_76;
                }
                if ( !under_debugger )
                  sub_37B760(51682);
LABEL_140:
                BUG();
              }
LABEL_76:
              v40 = ++v39;
              if ( (unsigned __int64)v39 >= v38[1] )
                break;
              goto LABEL_77;
            }
            v41 = *(_QWORD *)(v41 + 16);
          }
          if ( (*(_BYTE *)v41 & 2) != 0 )
            goto LABEL_73;
        }
      }
      ++v69;
    }
    while ( SLODWORD(v95[0]) > v69 );
    v7 = (__m128i *)v68;
    sub_FE750(v68);
  }
  if ( v82 )
  {
    if ( v9 )
    {
      v10 = v82[1];
      while ( v82 != (_QWORD *)v10 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        v12 = *(unsigned int *)(v10 + 24);
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 64) )
          sub_161430(v7);
        v13 = *(_QWORD *)(v11 + 528);
        v14 = *(_QWORD *)(v10 + 32);
        v15 = (_QWORD *)(v11 + 1008);
        v16 = *(_QWORD **)(v11 + 1016);
        v17 = *(_QWORD *)(v13 + 8 * v12);
        v18 = *(_QWORD *)(v14 + 24);
        if ( v16 )
        {
          v19 = v15;
          do
          {
            while ( 1 )
            {
              v20 = v16[2];
              v21 = v16[3];
              if ( v16[4] < v18 )
                break;
              v19 = v16;
              v16 = (_QWORD *)v16[2];
              if ( !v20 )
                goto LABEL_24;
            }
            v16 = (_QWORD *)v16[3];
          }
          while ( v21 );
LABEL_24:
          if ( v15 != v19 && v18 >= v19[4] )
            goto LABEL_53;
        }
        sub_121360((__int64)&v88, v17, v14, 0);
        if ( !(unsigned __int8)sub_5E200(&v88, v85) && !(unsigned __int8)sub_3110F0((char *)&v89 + 8, &src) )
        {
          if ( *((_QWORD *)&v89 + 1) )
          {
            *(_QWORD *)&v90 = 0;
            qfree();
          }
          qfree();
          goto LABEL_53;
        }
        if ( *((_QWORD *)&v89 + 1) )
        {
          *(_QWORD *)&v90 = 0;
          qfree();
        }
        v7 = (__m128i *)v88;
        qfree();
        if ( (*(_QWORD *)v10 & 2) == 0 )
        {
          v22 = *(_QWORD *)(v10 + 16);
          if ( (*(_BYTE *)v22 & 2) != 0 )
          {
            v32 = (_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCLL);
            v33 = *v32;
            if ( (*v32 & 2) != 0 || v32[2] != v10 )
            {
LABEL_61:
              v10 = (unsigned __int64)v32;
            }
            else
            {
              while ( 1 )
              {
                v10 = v33 & 0xFFFFFFFFFFFFFFFCLL;
                v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v33 & 2) != 0 )
                  break;
                v34 = v32;
                v32 = (_QWORD *)v10;
                if ( *(_QWORD **)(v10 + 16) != v34 )
                  goto LABEL_61;
              }
            }
          }
          else
          {
            for ( i = *(_QWORD *)(v22 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
              v22 = i;
            v10 = v22;
          }
        }
      }
    }
  }
LABEL_35:
  v88 = 0;
  *(_QWORD *)&v89 = 0;
  sub_5D900(&v88, 5, 1);
  sub_5E350(v85, &v88);
  v24 = v88;
  qfree();
  if ( v82 )
  {
    if ( v9 )
    {
      v25 = (_QWORD *)v82[1];
      while ( v82 != v25 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        v29 = *((unsigned int *)v25 + 6);
        if ( (unsigned int)v29 >= *(_DWORD *)(v28 + 64) )
          sub_161430(v24);
        v30 = *(_QWORD *)(*(_QWORD *)(v28 + 528) + 8 * v29);
        v76 = *(_QWORD *)(v25[4] + 8LL);
        sub_5DA80(&v88, (__int64)v85);
        *((_QWORD *)&v89 + 1) = 0;
        v90 = 0;
        if ( (_QWORD)v87 )
        {
          v75 = v87;
          na = 16 * v87;
          *((_QWORD *)&v89 + 1) = qalloc_or_throw();
          *((_QWORD *)&v90 + 1) = v75;
          memcpy(*((void **)&v89 + 1), src, na);
          *(_QWORD *)&v90 = v75;
        }
        v26 = sub_A36D0(v30, &v88, v76, 0, 1u);
        if ( *((_QWORD *)&v89 + 1) )
        {
          *(_QWORD *)&v90 = 0;
          qfree();
        }
        v24 = v88;
        qfree();
        if ( v26 )
          goto LABEL_53;
        if ( (*v25 & 2) == 0 )
        {
          v27 = (_QWORD *)v25[2];
          if ( (*(_BYTE *)v27 & 2) != 0 )
          {
            v47 = (_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFFCLL);
            v48 = *v47;
            if ( (*v47 & 2) == 0 )
            {
              while ( (_QWORD *)v47[2] == v25 )
              {
                v25 = v47;
                v49 = v48 & 0xFFFFFFFFFFFFFFFCLL;
                v48 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v48 & 2) != 0 )
                {
                  v25 = (_QWORD *)v49;
                  goto LABEL_45;
                }
                v47 = (_QWORD *)v49;
              }
            }
            v25 = v47;
          }
          else
          {
            do
            {
              v25 = v27;
              v27 = (_QWORD *)v27[1];
            }
            while ( (*(_BYTE *)v27 & 2) == 0 );
          }
        }
LABEL_45:
        ;
      }
    }
  }
  if ( v70 )
    goto LABEL_94;
  v62 = *(_QWORD *)(a1 + 48);
  sub_5DA80(&v88, (__int64)v85);
  v63 = v87;
  v5 = 0;
  *((_QWORD *)&v89 + 1) = 0;
  v90 = 0;
  if ( (_QWORD)v87 )
  {
    v81 = 16 * v87;
    *((_QWORD *)&v89 + 1) = qalloc_or_throw();
    *((_QWORD *)&v90 + 1) = v63;
    memcpy(*((void **)&v89 + 1), src, v81);
    *(_QWORD *)&v90 = v63;
  }
  v64 = sub_A36D0(a1, &v88, v62, 0, 1u);
  if ( *((_QWORD *)&v89 + 1) )
  {
    *(_QWORD *)&v90 = 0;
    qfree();
  }
  v24 = v88;
  qfree();
  if ( !v64 )
  {
LABEL_94:
    *(_QWORD *)&v89 = 5;
    v88 = 0x100000001LL;
    v50 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v50 + 32) == 4 )
    {
      v71 = **(_DWORD **)(v50 + 40) == 6;
      n = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      if ( !v82 )
      {
LABEL_115:
        if ( v71 )
        {
          sub_11A120((char *)&v88, n, 6, *(_QWORD *)(v50 + 24), 1);
          v50 = *(_QWORD *)(a1 + 56);
        }
        goto LABEL_117;
      }
    }
    else
    {
      if ( !v82 )
      {
LABEL_117:
        sub_116350((char *)(v50 + 32), (char *)&v88);
        v61 = *(_QWORD *)(a1 + 64);
        if ( !v70 )
        {
          v65 = *(_DWORD *)(a1 + 24);
          BYTE1(v65) &= ~2u;
          LOBYTE(v65) = v65 | 0x80;
          *(_DWORD *)(a1 + 24) = v65;
          v66 = *(_QWORD *)(v61 + 784);
          if ( v66 )
          {
            *(_DWORD *)(v66 + 48) = 63;
            v61 = *(_QWORD *)(a1 + 64);
          }
        }
        *(_DWORD *)(a1 + 24) |= 0x1000u;
        sub_60A20(v61, 1u, (__int64)"BACKPROP_CC %d", *(_DWORD *)(a1 + 72));
        sub_1166E0((__int64)&v88);
        v31 = 1;
        goto LABEL_54;
      }
      v71 = 0;
      n = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    }
    if ( v9 )
    {
      v51 = v82[1];
      if ( v82 != (_QWORD *)v51 )
      {
        do
        {
          v53 = *(_QWORD *)(a1 + 64);
          v54 = *(unsigned int *)(v51 + 24);
          if ( (unsigned int)v54 >= *(_DWORD *)(v53 + 64) )
            sub_161430(v24);
          v72 = *(_QWORD *)(*(_QWORD *)(v53 + 528) + 8 * v54);
          v80 = *(_QWORD *)(v51 + 32);
          v55 = j__qalloc_or_throw();
          v56 = *(_QWORD *)(v80 + 24);
          *(_QWORD *)(v55 + 40) = 0;
          *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v55 + 56) = 0;
          *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v55 + 72) = 0;
          sub_329320(v55, v56);
          *(_DWORD *)v55 = 4;
          sub_11EAC0(v55 + 32, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
          if ( v71 )
            sub_11A120((char *)(v55 + 32), n, 6, *(_QWORD *)(v55 + 24), 1);
          sub_11EAC0(v55 + 64, (unsigned __int8 *)&v88);
          sub_1555B0((unsigned int *)v55, n, nullptr, 0, nullptr, nullptr, v5, 0);
          v24 = v72;
          sub_9CAA0(v72, (_QWORD *)v55, v80);
          v57 = *(_DWORD *)(v72 + 24);
          BYTE1(v57) &= ~2u;
          LOBYTE(v57) = v57 | 0x80;
          *(_DWORD *)(v72 + 24) = v57;
          if ( (*(_QWORD *)v51 & 2) == 0 )
          {
            v52 = *(_QWORD *)(v51 + 16);
            if ( (*(_BYTE *)v52 & 2) != 0 )
            {
              v58 = (_QWORD *)(*(_QWORD *)v51 & 0xFFFFFFFFFFFFFFFCLL);
              v59 = *v58;
              if ( (*v58 & 2) == 0 )
              {
                v60 = (_QWORD *)v51;
                while ( v60 == (_QWORD *)v58[2] )
                {
                  v60 = v58;
                  v51 = v59 & 0xFFFFFFFFFFFFFFFCLL;
                  v59 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v59 & 2) != 0 )
                    goto LABEL_101;
                  v58 = (_QWORD *)v51;
                }
              }
              v51 = (unsigned __int64)v58;
            }
            else
            {
              do
              {
                v51 = v52;
                v52 = *(_QWORD *)(v52 + 8);
              }
              while ( (*(_BYTE *)v52 & 2) == 0 );
            }
          }
LABEL_101:
          ;
        }
        while ( v82 != (_QWORD *)v51 );
        v50 = *(_QWORD *)(a1 + 56);
      }
    }
    goto LABEL_115;
  }
LABEL_53:
  v31 = 0;
LABEL_54:
  if ( src )
  {
    v77 = v31;
    *(_QWORD *)&v87 = 0;
    qfree();
    v31 = v77;
  }
  v78 = v31;
  qfree();
  v84.m128i_i64[1] = v9;
  v84.m128i_i64[0] = (__int64)v82;
  sub_16A1E0(v84.m128i_i64);
  return v78;
}

