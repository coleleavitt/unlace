__int64 __fastcall sub_10D580(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // r13
  __int64 v5; // rbx
  int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // r12d
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned __int32 v26; // r8d
  unsigned int v27; // edx
  unsigned __int32 v28; // ecx
  unsigned __int32 *i; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rsi
  bool v32; // r8
  int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // r14d
  bool v37; // bp
  __int64 v38; // rbp
  bool v39; // dl
  __int64 v40; // rdi
  bool v41; // dl
  int v42; // ebx
  __int16 v43; // ax
  unsigned int *v44; // rdi
  __int64 (*v45)(void); // rax
  Elf64_Rela *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // r15
  __int16 v50; // ax
  __int64 v51; // r12
  __int64 v52; // r14
  int v53; // eax
  unsigned __int64 v54; // rcx
  __int64 *v55; // rsi
  unsigned int v56; // eax
  unsigned int v57; // edx
  __int64 v58; // rdi
  unsigned int v59; // r12d
  unsigned int v60; // eax
  bool v61; // cl
  __int64 v62; // [rsp+8h] [rbp-F0h]
  __int64 v63; // [rsp+8h] [rbp-F0h]
  __int64 v64; // [rsp+10h] [rbp-E8h]
  unsigned int v65; // [rsp+18h] [rbp-E0h]
  unsigned __int8 v66; // [rsp+20h] [rbp-D8h]
  bool v67; // [rsp+20h] [rbp-D8h]
  __int64 v68; // [rsp+20h] [rbp-D8h]
  unsigned int v70; // [rsp+28h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-C8h]
  bool v73; // [rsp+38h] [rbp-C0h]
  unsigned int v74; // [rsp+38h] [rbp-C0h]
  unsigned int v75; // [rsp+40h] [rbp-B8h]
  __int64 v76; // [rsp+48h] [rbp-B0h]
  __int64 v77; // [rsp+50h] [rbp-A8h]
  __int64 v78; // [rsp+58h] [rbp-A0h] BYREF
  unsigned int v79; // [rsp+6Ch] [rbp-8Ch] BYREF
  __int64 v80; // [rsp+70h] [rbp-88h] BYREF
  __int64 v81; // [rsp+78h] [rbp-80h]
  __int64 v82; // [rsp+80h] [rbp-78h]
  int v83; // [rsp+88h] [rbp-70h]
  int v84; // [rsp+8Ch] [rbp-6Ch]
  __int64 v85; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int32 v86; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int32 v87; // [rsp+9Ch] [rbp-5Ch]
  __int64 v88; // [rsp+A0h] [rbp-58h]
  _DWORD v89[4]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+B8h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  v90 = __readfsqword(0x28u);
  v6 = 0;
  v78 = a2;
  if ( !a4 )
  {
    ++*(_DWORD *)(a1 + 256);
    if ( *(_DWORD *)(a2 + 48) != 1 )
      goto LABEL_8;
    goto LABEL_33;
  }
  if ( a2 )
  {
    a2 = a3;
    v7 = &v78;
    do
    {
      if ( *(_DWORD *)(v4 + 48) <= (unsigned int)a2 )
      {
        v7 = (__int64 *)(v4 + 32);
        ++v6;
      }
      v4 = *(_QWORD *)(v4 + 32);
      *v7 = v4;
    }
    while ( v4 );
    v4 = v78;
    *(_DWORD *)(a1 + 256) += v6;
    if ( *(_DWORD *)(v4 + 48) == 1 )
    {
LABEL_33:
      if ( v4 )
      {
        a1 = v4;
        sub_D5B40(v4);
      }
    }
  }
LABEL_8:
  v8 = *(_QWORD *)(v5 + 296);
  v66 = *(_BYTE *)(v5 + 15);
  v64 = *(_QWORD *)(v5 + 200);
  v9 = **(_QWORD **)(v8 + 48);
  if ( *(_OWORD *)v9 == *(_OWORD *)(v8 + 72)
    && *(_OWORD *)(v9 + 16) == *(_OWORD *)(v8 + 88)
    && *(_OWORD *)(v9 + 32) == *(_OWORD *)(v8 + 104) )
  {
    v10 = 0;
  }
  else
  {
    a1 = *(unsigned int *)(v9 + 16);
    v10 = a1 + 1;
  }
  if ( *(_WORD *)(v8 + 60) )
    goto LABEL_20;
  if ( !*(_DWORD *)(v9 + 96) )
    goto LABEL_13;
  if ( !(unsigned int)sub_FEBD0(a1, a2) )
    sub_FF240(4, (const char *)&v80);
  if ( !*(_BYTE *)(v8 + 63) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v8 + 8) + 112LL))(
               *(_QWORD *)(v8 + 8),
               4,
               4,
               10);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 5 )
        return result;
LABEL_13:
      v11 = *(_BYTE *)(v8 + 63);
      v12 = *(_QWORD *)(v8 + 8);
      goto LABEL_14;
    }
  }
  sub_C7FB0(v8, v80);
  if ( *(_BYTE *)(v8 + 63) )
    goto LABEL_16;
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(v8 + 8) + 112LL))(
    *(_QWORD *)(v8 + 8),
    4,
    4,
    9);
  v12 = *(_QWORD *)(v8 + 8);
  v11 = *(_BYTE *)(v8 + 63);
LABEL_14:
  if ( !v11 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v12 + 112LL))(v12, 3, 1, 5);
LABEL_16:
  v13 = 0xFFFFFFFFLL;
  v14 = 0;
  *(_WORD *)(v8 + 60) = -1;
  do
  {
    ++v14;
    a2 = (__int64)&v80;
    result = sub_101440((unsigned int *)v8, &v80, 1, v14, v13);
  }
  while ( (_DWORD)result == -1 );
  if ( (_DWORD)result )
    return result;
LABEL_20:
  v65 = *(_DWORD *)(v8 + 88);
  if ( !v65 )
  {
    v24 = -1696027593;
    v85 = 0x18E22D0082067F37LL;
    v25 = -2113503433;
    v26 = _byteswap_ulong(v64);
    v86 = v26;
    v27 = *(_DWORD *)(v8 + 136);
    v28 = _byteswap_ulong(v27);
    v87 = v28;
    if ( !v27 )
    {
      if ( !(unsigned int)sub_FEBD0(2598939703LL, a2) )
        sub_FF240(8, (const char *)(v8 + 104));
      v25 = v85;
      v26 = v86;
      v28 = v87;
      v24 = v85 + HIDWORD(v85);
    }
    v88 = *(_QWORD *)(v8 + 104);
    for ( i = &v86; ; v28 = i[1] )
    {
      i += 2;
      v25 += v24 + v26;
      v24 += v25 + v28;
      if ( i >= v89 )
        break;
      v26 = *i;
    }
    v89[0] = _byteswap_ulong(v25);
    v89[1] = _byteswap_ulong(v24);
    *(_DWORD *)(v8 + 100) = v24;
    v40 = *(_QWORD *)(v8 + 16);
    *(_DWORD *)(v8 + 56) = v64;
    *(_BYTE *)(v8 + 85) = 0;
    *(_DWORD *)(v8 + 96) = v25;
    *(_BYTE *)(v8 + 67) = 1;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD))(*(_QWORD *)v40 + 24LL))(v40, &v85, 32, 0);
    if ( (_DWORD)result )
      return result;
    if ( *(_BYTE *)(v8 + 68) )
    {
      if ( (((int)v66 >> 2) & 3) != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 16) + 40LL))(*(_QWORD *)(v8 + 16));
        if ( (_DWORD)result )
          return result;
      }
    }
  }
  v80 = v8;
  v16 = *(_QWORD *)(v8 + 16);
  v83 = v66;
  v82 = 0;
  v84 = v64;
  v81 = v16;
  v62 = (int)v64 + 24;
  v17 = v62 * v65 + 32;
  if ( v4 )
  {
    v18 = v10;
    v77 = v5;
    v76 = v4;
    v19 = v65;
    v20 = 0;
    while ( 1 )
    {
      v21 = *(_DWORD *)(v4 + 48);
      if ( !v18 )
        goto LABEL_42;
      if ( *(_QWORD *)(v4 + 32) || (((unsigned __int8)a4 ^ 1) & 1) != 0 )
        break;
      ++v19;
      v30 = a3;
LABEL_43:
      result = sub_D5AB0((__int64)&v80, *(char **)(v4 + 8), v21, v30, v17);
      if ( (_DWORD)result )
        return result;
      v17 += v62;
      *(_WORD *)(v4 + 52) |= 0x40u;
      v20 = v4;
LABEL_45:
      v4 = *(_QWORD *)(v4 + 32);
      if ( !v4 )
      {
        v72 = v20;
        v65 = v19;
        v4 = v76;
        v5 = v77;
        if ( a4 )
          goto LABEL_47;
        v36 = *(_DWORD *)(v8 + 88);
        v33 = 0;
        v67 = 0;
LABEL_57:
        v38 = v4;
        do
        {
          if ( (*(_BYTE *)(v38 + 52) & 0x40) != 0 )
          {
            result = sub_EC8D0(v8, ++v36, *(_DWORD *)(v38 + 48));
            v39 = (_DWORD)result == 0;
          }
          else
          {
            v39 = 1;
            result = 0;
          }
          v38 = *(_QWORD *)(v38 + 32);
        }
        while ( v38 && v39 );
        v41 = v67 && v39;
        v37 = 1;
        goto LABEL_84;
      }
    }
    v79 = 0;
    sub_EC5B0(v8, v21, &v79);
    if ( v18 <= v79 )
    {
      v22 = *(_DWORD *)(v8 + 124);
      v23 = v62 * (v79 - 1) + 56;
      if ( v79 < v22 || !v22 )
        *(_DWORD *)(v8 + 124) = v79;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(v8 + 16) + 24LL))(
                 *(_QWORD *)(v8 + 16),
                 *(_QWORD *)(v4 + 8),
                 (unsigned int)v64,
                 v23);
      if ( (_DWORD)result )
        return result;
      *(_WORD *)(v4 + 52) &= ~0x40u;
      goto LABEL_45;
    }
    v21 = *(_DWORD *)(v4 + 48);
LABEL_42:
    ++v19;
    v30 = 0;
    if ( a4 && !*(_QWORD *)(v4 + 32) )
      v30 = a3;
    goto LABEL_43;
  }
  if ( !a4 )
  {
    HIBYTE(v50) = BYTE1(v64);
    v37 = 0;
    LOBYTE(v50) = 0;
    *(_WORD *)(v8 + 86) = WORD1(v64) | v50;
LABEL_92:
    v44 = *(unsigned int **)(v5 + 112);
    if ( v44 && v37 )
    {
      while ( 1 )
      {
        if ( v44 )
          sub_10D4F0(v44, *(_DWORD *)(v4 + 48), *(_QWORD *)(v4 + 8));
        v4 = *(_QWORD *)(v4 + 32);
        if ( !v4 )
          break;
        v44 = *(unsigned int **)(v5 + 112);
      }
    }
    return 0;
  }
  v72 = 0;
LABEL_47:
  v31 = *(unsigned int *)(v8 + 124);
  if ( (_DWORD)v31 )
  {
    v51 = (unsigned int)(*(_DWORD *)(v8 + 56) + 24);
    v52 = sub_FFAA0(v51, v31);
    result = 7;
    if ( !v52 )
      return result;
    v53 = *(_DWORD *)(v8 + 124);
    v54 = 24;
    if ( v53 != 1 )
      v54 = (int)v51 * (unsigned __int64)(unsigned int)(v53 - 2) + 48;
    v55 = (__int64 *)v52;
    v56 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64))(**(_QWORD **)(v8 + 16) + 16LL))(
            *(_QWORD *)(v8 + 16),
            v52,
            8,
            v54);
    *(_DWORD *)(v8 + 96) = _byteswap_ulong(*(_DWORD *)v52);
    *(_DWORD *)(v8 + 100) = _byteswap_ulong(*(_DWORD *)(v52 + 4));
    v57 = *(_DWORD *)(v8 + 124);
    *(_DWORD *)(v8 + 124) = 0;
    if ( v57 <= v65 && !v56 )
    {
      v58 = (int)v51;
      v59 = v57 - 1;
      while ( 1 )
      {
        v60 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v8 + 16) + 16LL))(
                *(_QWORD *)(v8 + 16),
                v52,
                (unsigned int)v58,
                v58 * v59 + 32);
        if ( v60 )
          break;
        sub_C7F20(
          v8,
          _byteswap_ulong(*(_DWORD *)v52),
          _byteswap_ulong(*(_DWORD *)(v52 + 4)),
          (char *)(v52 + 24),
          (__int64)&v85);
        v55 = &v85;
        v56 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64, __int64))(**(_QWORD **)(v8 + 16) + 24LL))(
                *(_QWORD *)(v8 + 16),
                &v85,
                24,
                v58 * v59 + 32);
        v61 = v65 >= v59 + 2;
        ++v59;
        if ( v56 != 0 || !v61 )
          goto LABEL_122;
      }
      v70 = v60;
      sub_C91C0(v52, v52);
      return v70;
    }
LABEL_122:
    v74 = v56;
    sub_C91C0(v52, (__int64)v55);
    result = v74;
    if ( v74 )
      return result;
  }
  if ( (v66 & 3) == 0 )
    goto LABEL_49;
  if ( !*(_BYTE *)(v8 + 69) )
    goto LABEL_125;
  v45 = *(__int64 (**)(void))(**(_QWORD **)(v8 + 16) + 88LL);
  if ( v45 )
  {
    LODWORD(v46) = v45();
    v47 = 512;
    if ( (int)v46 > 31 )
    {
      if ( (int)v46 > (int)&stru_10000 )
        v46 = &stru_10000;
      v47 = (int)v46;
    }
  }
  else
  {
    v47 = 4096;
  }
  v48 = v47 * ((v17 + v47 - 1) / v47);
  v82 = v48;
  if ( v48 > v17 )
  {
    v68 = v8;
    v49 = v17;
    v33 = 0;
    while ( 1 )
    {
      result = sub_D5AB0((__int64)&v80, *(char **)(v72 + 8), *(_DWORD *)(v72 + 48), a3, v49);
      if ( (_DWORD)result )
        return result;
      v49 += v62;
      ++v33;
      if ( v49 >= v82 )
      {
        v8 = v68;
        v67 = v33 > 0;
        v32 = 1;
        goto LABEL_50;
      }
    }
  }
  if ( v48 == v17 )
  {
LABEL_125:
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v81 + 40LL))(v81, v66 & 3);
    v67 = 0;
    v32 = (_DWORD)result == 0;
    v33 = 0;
  }
  else
  {
LABEL_49:
    v67 = 0;
    v32 = 1;
    v33 = 0;
    result = 0;
  }
LABEL_50:
  if ( *(_BYTE *)(v8 + 67) )
  {
    v34 = *(_QWORD *)(v8 + 32);
    if ( v34 >= 0 )
    {
      v75 = result;
      v73 = v32;
      v35 = v62 * (v33 + v65) + 32;
      if ( v35 < v34 )
        v35 = *(_QWORD *)(v8 + 32);
      sub_EA4D0((_QWORD *)(v8 + 16), (const char **)(v8 + 128), v35, v34);
      v32 = v73;
      result = v75;
      *(_BYTE *)(v8 + 67) = 0;
    }
  }
  v36 = *(_DWORD *)(v8 + 88);
  v37 = v4 != 0;
  if ( v4 && v32 )
    goto LABEL_57;
  v41 = v32 && v67;
LABEL_84:
  if ( v41 )
  {
    v63 = v5;
    v42 = v33;
    do
    {
      ++v36;
      --v42;
      result = sub_EC8D0(v8, v36, *(_DWORD *)(v72 + 48));
    }
    while ( !(_DWORD)result && v42 > 0 );
    v5 = v63;
  }
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(v8 + 88) = v36;
    HIBYTE(v43) = BYTE1(v64);
    LOBYTE(v43) = 0;
    *(_WORD *)(v8 + 86) = WORD1(v64) | v43;
    if ( a4 )
    {
      ++*(_DWORD *)(v8 + 80);
      *(_DWORD *)(v8 + 92) = a3;
      sub_C6BA0(v8);
      *(_DWORD *)(v8 + 24) = v36;
    }
    goto LABEL_92;
  }
  return result;
}
