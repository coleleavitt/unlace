__int64 __fastcall sub_1B5C0(__int64 a1, int a2, unsigned int a3, size_t a4)
{
  _QWORD *v4; // rbp
  size_t v5; // rbx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r12d
  char v10; // r12
  int v11; // r13d
  char v12; // al
  int v13; // r8d
  char v14; // r11
  int *v15; // r15
  unsigned __int64 *v16; // rax
  int v17; // esi
  char v18; // cl
  __int16 *v19; // rax
  size_t v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r12
  char *v23; // r14
  unsigned __int8 v24; // al
  int *v25; // rcx
  unsigned __int64 i; // rsi
  __int64 v27; // rdi
  int v28; // edx
  size_t v29; // r13
  char *v30; // r9
  __int64 v31; // rcx
  int v32; // r8d
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // r9
  __int64 *v37; // r11
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rdx
  _QWORD *v44; // rax
  __int64 **v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  char *v49; // r13
  unsigned __int64 v50; // rax
  unsigned int j; // ecx
  _QWORD *v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rdx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  unsigned __int64 v58; // r10
  _QWORD *v59; // r11
  _QWORD *v60; // rax
  unsigned __int64 v61; // rcx
  __int64 v62; // r10
  __int64 *v63; // r11
  __int64 *v64; // rax
  __int64 ***v65; // r10
  __int64 **v66; // rax
  char *v67; // rbx
  unsigned __int8 v69; // [rsp+0h] [rbp-118h]
  char *v70; // [rsp+10h] [rbp-108h]
  __int64 v71; // [rsp+18h] [rbp-100h]
  char v72; // [rsp+28h] [rbp-F0h]
  unsigned __int8 v73; // [rsp+2Fh] [rbp-E9h]
  __int64 v74; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+38h] [rbp-E0h]
  int v76; // [rsp+40h] [rbp-D8h] BYREF
  size_t v77; // [rsp+44h] [rbp-D4h]
  __int128 v78; // [rsp+4Ch] [rbp-CCh]
  int v79; // [rsp+5Ch] [rbp-BCh]
  _QWORD v80[15]; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-40h] BYREF

  LODWORD(v4) = a3;
  v5 = a1;
  v81 = __readfsqword(0x28u);
  if ( (*(_DWORD *)(a1 + 1172) & 0xFFFFFFF) == 4 && *(_DWORD *)(a1 + 1156) == a2 )
    return 0;
  if ( a3 == -1 )
  {
    v6 = 3;
    v7 = 52;
    goto LABEL_55;
  }
  v6 = a3 & 1;
  if ( (a3 & 8) != 0 )
  {
    v7 = a3 & 0xFFFFFFF3 | 4;
    if ( (a3 & 1) != 0 )
    {
      if ( (a3 & 2) != 0 )
      {
        v6 = 7;
        v7 = a3 & 0xFFFFFFF0 | 4;
      }
      else
      {
        v6 = 5;
        v7 = a3 & 0xFFFFFFF2 | 4;
      }
    }
    else
    {
      v6 = 4;
      if ( (a3 & 2) != 0 )
      {
        v6 = 6;
        v7 = a3 & 0xFFFFFFF1;
        goto LABEL_10;
      }
    }
LABEL_56:
    v7 &= ~4u;
    goto LABEL_10;
  }
  if ( (a3 & 1) != 0 )
    v7 = a3 & 0xFFFFFFFE;
  else
    v7 = a3;
  if ( (a3 & 2) != 0 )
  {
    v6 |= 2u;
    v7 &= ~2u;
  }
  if ( (v7 & 4) != 0 )
  {
LABEL_55:
    v6 |= 4u;
    goto LABEL_56;
  }
LABEL_10:
  if ( (v7 & 0x10) != 0 )
  {
    v6 |= 0x10u;
    v7 &= ~0x10u;
  }
  if ( (v7 & 0x20) != 0 )
  {
    v6 |= 0x20u;
    v7 &= ~0x20u;
  }
  if ( v7 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v8 = v6;
  v74 = 0;
  v75 = -1;
  if ( !(unsigned __int8)sub_18DF0(a1, (int *)&v74, 0x13u, a2, v6) )
    return 0;
  if ( !(unsigned __int8)sub_18B00(a1, 0x14u, a2, v8) )
    return 0;
  v74 = 0;
  v75 = 0;
  v10 = sub_18D10(a1, (int *)&v74);
  if ( !v10 )
    return 0;
  if ( (_DWORD)v74 )
  {
    if ( (_DWORD)v74 != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 20);
    return 0;
  }
  v11 = HIDWORD(v74);
  if ( !HIDWORD(v74) )
    return 0;
  v12 = getinf_flag();
  v76 = 0;
  v13 = v75;
  v77 = 0;
  v14 = v12 ^ 1;
  v15 = &v76;
  v16 = v80;
  do
  {
    v16[1] = 0x1700000006LL;
    v16 += 3;
    *(v16 - 1) = 8;
    *(v16 - 3) = 0;
  }
  while ( &v81 != v16 );
  LOBYTE(v70) = v14;
  v17 = v76;
  v18 = 0;
  v79 = 0;
  v19 = (__int16 *)&unk_30730;
  v20 = v77;
  v78 = 0;
  do
  {
    v21 = *(unsigned int *)v19;
    if ( (v13 & (unsigned int)v21) != 0 )
    {
      v39 = v17;
      *((_DWORD *)&v78 + v17) = v21;
      switch ( v21 )
      {
        case 1LL:
          if ( v14 )
            v80[3 * v17 + 1] = 0xF00000006LL;
          else
            v80[3 * v17 + 1] = 0x1700000006LL;
          goto LABEL_81;
        case 2LL:
          v80[3 * v17 + 1] = 0x500000000LL;
LABEL_81:
          v41 = 8;
          goto LABEL_74;
        case 4LL:
          v80[3 * v17 + 1] = 0x2200000018LL;
          goto LABEL_78;
        case 16LL:
          if ( v14 )
            v80[3 * v17 + 1] = 0x2B00000023LL;
          else
            v80[3 * v17 + 1] = 0x3300000023LL;
LABEL_78:
          v41 = 16;
          goto LABEL_74;
        case 32LL:
          v40 = 3LL * v17;
          LODWORD(v80[v40 + 1]) = 60;
          HIDWORD(v80[v40 + 1]) = v14 == 0 ? 75 : 67;
          v41 = 32;
LABEL_74:
          v42 = 3LL * v17;
          v80[v42 + 2] = v41;
          v80[v42] = 0;
          break;
        default:
          break;
      }
      ++v17;
      v43 = v80[3 * v39 + 2] * (HIDWORD(v80[3 * v39 + 1]) + 1 - LODWORD(v80[3 * v39 + 1]));
      v18 = v10;
      v20 += v43;
    }
    v19 += 2;
  }
  while ( &word_30744 != v19 );
  if ( v18 )
  {
    v77 = v20;
    v76 = v17;
  }
  LODWORD(v22) = v11;
  v23 = (char *)qcalloc();
  v24 = sub_18C50(a1, (__int64)v23, v11);
  if ( !v24 )
  {
LABEL_90:
    qfree();
    return 0;
  }
  if ( v11 != v77 )
  {
    sub_BDA0((__int64)"unexpected register packet size %d (expected %zu)\n", v11, v77);
    goto LABEL_90;
  }
  if ( v76 <= 0 )
    goto LABEL_53;
  v25 = &v76;
  i = (unsigned __int64)v23;
  v27 = (__int64)(&v76 + 6 * v76);
  do
  {
    v28 = v25[11];
    *((_QWORD *)v25 + 4) = i;
    v25 += 6;
    i += *((_QWORD *)v25 + 3) * (v28 + 1 - v25[4]);
  }
  while ( (int *)v27 != v25 );
  v29 = a4;
  v30 = nullptr;
  v73 = v24;
  v72 = (char)v4;
  do
  {
    if ( *((_DWORD *)&v78 + (_QWORD)v30) != 4 )
    {
      LODWORD(v4) = v15[10];
      v31 = *((_QWORD *)v15 + 6);
      v32 = (int)v4;
      if ( v15[11] + 1 - (int)v4 > 0 )
      {
        v70 = v30;
        a4 = (int)v31;
        LOBYTE(v23) = (_DWORD)v31 == 8;
        LODWORD(v22) = 0;
        goto LABEL_37;
      }
      goto LABEL_51;
    }
    v44 = *(_QWORD **)(*(_QWORD *)v5 + 664LL);
    if ( v44[8] )
    {
      v61 = v44[6];
      v62 = v44[5];
      v63 = *(__int64 **)(v62 + 8 * (0x18 % v61));
      if ( !v63 )
        goto LABEL_69;
      v64 = (__int64 *)*v63;
      for ( i = *(_QWORD *)(*v63 + 8); i != 24; v64 = (__int64 *)*v64 )
      {
        v27 = *v64;
        if ( *v64 )
        {
          i = *(_QWORD *)(v27 + 8);
          v63 = v64;
          if ( 0x18 % v61 == i % v61 )
            continue;
        }
        goto LABEL_69;
      }
      if ( !v63 )
        goto LABEL_69;
      v27 = *v63;
      if ( !*v63 )
        goto LABEL_69;
      v65 = *(__int64 ****)(v62 + 8 * (0x34 % v61));
      if ( !v65 )
        goto LABEL_69;
      v66 = *v65;
      for ( i = (unsigned __int64)(*v65)[1]; i != 52; v66 = (__int64 **)*v66 )
      {
        if ( *v66 )
        {
          i = (*v66)[1];
          v65 = (__int64 ***)v66;
          if ( 0x34 % v61 == i % v61 )
            continue;
        }
        goto LABEL_69;
      }
      if ( !v65 )
        goto LABEL_69;
      v45 = *v65;
      v47 = *(_QWORD *)(v27 + 16);
      if ( !*v65 )
        goto LABEL_69;
    }
    else
    {
      v45 = (__int64 **)v44[7];
      if ( !v45 )
        goto LABEL_69;
      v46 = (_QWORD *)v44[7];
      while ( v46[1] != 24 )
      {
        v46 = (_QWORD *)*v46;
        if ( !v46 )
          goto LABEL_69;
      }
      while ( v45[1] != (__int64 *)&word_34 )
      {
        v45 = (__int64 **)*v45;
        if ( !v45 )
          goto LABEL_69;
      }
      v47 = v46[2];
    }
    v23 = *((char **)v15 + 4);
    v22 = v29 + 32 * v47;
    if ( (v72 & 4) != 0 )
    {
      a4 = v5;
      v4 = (_QWORD *)(v22 + 256);
      v67 = *((char **)v15 + 4);
      v23 = v30;
      do
      {
        sub_18450(v22, v67, 0xAu, -1);
        v22 += 32LL;
        v67 += *((_QWORD *)v15 + 6);
      }
      while ( v4 != (_QWORD *)v22 );
      v5 = a4;
      v30 = v23;
    }
    else
    {
      a4 = v5;
      v48 = v22 + 256;
      v70 = (char *)v29;
      v49 = v30;
      v71 = 32 * ((_QWORD)v45[2] - v47);
      LODWORD(v4) = v72 & 8;
      while ( (v72 & 8) != 0 )
      {
        v57 = v22 + v71;
        v22 += 32LL;
        sub_18450(v57, v23, 8u, 0);
        v23 += *((_QWORD *)v15 + 6);
        if ( v48 == v22 )
        {
          v30 = v49;
          v5 = a4;
          v29 = (size_t)v70;
          goto LABEL_106;
        }
      }
      v50 = v48;
      v30 = v49;
      v5 = a4;
      v29 = (size_t)v70;
      do
        v22 += 32LL;
      while ( v50 != v22 );
    }
LABEL_106:
    v27 = (__int64)&unk_30700;
    for ( j = 32; ; j = *(_DWORD *)v27 )
    {
      i = j;
      v52 = *(_QWORD **)(*(_QWORD *)v5 + 664LL);
      if ( !v52[8] )
      {
        v53 = (_QWORD *)v52[7];
        if ( !v53 )
          goto LABEL_69;
        while ( j != v53[1] )
        {
          v53 = (_QWORD *)*v53;
          if ( !v53 )
            goto LABEL_69;
        }
        goto LABEL_112;
      }
      v58 = v52[6];
      v59 = *(_QWORD **)(v52[5] + 8 * (j % v58));
      v22 = j % v58;
      if ( !v59 )
        goto LABEL_69;
      v60 = (_QWORD *)*v59;
      if ( j != *(_QWORD *)(*v59 + 8LL) )
        break;
LABEL_125:
      if ( !v59 )
        goto LABEL_69;
      v53 = (_QWORD *)*v59;
      if ( !*v59 )
        goto LABEL_69;
LABEL_112:
      v54 = v53[2];
      v55 = *((_QWORD **)v15 + 4);
      if ( v55 )
      {
        i = *((_QWORD *)v15 + 6);
        v56 = (int)(j - v15[10]);
        if ( i == 16 )
        {
          v55 += 2 * v56;
        }
        else if ( i == 32 )
        {
          v55 += 4 * v56;
        }
        else
        {
          v55 += v56;
        }
      }
      v27 += 4;
      *(_QWORD *)(v29 + 32 * v54 + 8) = *v55;
      if ( (_UNKNOWN *)v27 == &unk_3070C )
        goto LABEL_51;
    }
    while ( 1 )
    {
      v4 = (_QWORD *)*v60;
      if ( !*v60 )
        break;
      v59 = v60;
      if ( v22 != v4[1] % v58 )
        break;
      v60 = (_QWORD *)*v60;
      if ( j == v4[1] )
        goto LABEL_125;
    }
LABEL_69:
    v35 = sub_17CF0();
LABEL_70:
    i += 8 * v35;
    while ( 1 )
    {
      v27 = v29 + 32 * v27;
      if ( (_DWORD)v4 == 35 || (_BYTE)v23 )
        *(_QWORD *)(v27 + 8) = *(_QWORD *)i;
      else
        sub_18450(v27, (const void *)i, a4, 0);
      v32 = v15[10];
      LODWORD(v22) = v22 + 1;
      LODWORD(v4) = (_DWORD)v4 + 1;
      if ( (int)v22 >= v15[11] + 1 - v32 )
        break;
LABEL_37:
      i = *(_QWORD *)(*(_QWORD *)v5 + 664LL);
      if ( *(_QWORD *)(i + 64) )
      {
        v36 = *(_QWORD *)(i + 48);
        v37 = *(__int64 **)(*(_QWORD *)(i + 40) + 8 * ((unsigned int)v4 % v36));
        if ( !v37 )
          goto LABEL_69;
        v38 = (__int64 *)*v37;
        for ( i = *(_QWORD *)(*v37 + 8); (unsigned int)v4 != i; v38 = (__int64 *)*v38 )
        {
          v27 = *v38;
          if ( !*v38 )
            goto LABEL_69;
          i = *(_QWORD *)(v27 + 8);
          v37 = v38;
          if ( (unsigned int)v4 % v36 != i % v36 )
            goto LABEL_69;
        }
        if ( !v37 )
          goto LABEL_69;
        v33 = (_QWORD *)*v37;
        if ( !*v37 )
          goto LABEL_69;
      }
      else
      {
        v33 = *(_QWORD **)(i + 56);
        if ( !v33 )
          goto LABEL_69;
        while ( (unsigned int)v4 != v33[1] )
        {
          v33 = (_QWORD *)*v33;
          if ( !v33 )
            goto LABEL_69;
        }
      }
      i = *((_QWORD *)v15 + 4);
      v27 = v33[2];
      if ( i )
      {
        v34 = *((_QWORD *)v15 + 6);
        v35 = (int)v4 - v32;
        if ( v34 == 16 )
        {
          i += 16 * v35;
        }
        else
        {
          if ( v34 != 32 )
            goto LABEL_70;
          i += 32 * v35;
        }
      }
    }
    v30 = v70;
LABEL_51:
    ++v30;
    v15 += 6;
  }
  while ( v76 > (int)v30 );
  v24 = v73;
LABEL_53:
  v69 = v24;
  qfree();
  return v69;
}

