__int64 __fastcall sub_2EB40(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r13
  __int64 *v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // r13
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // r9
  __int64 **v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  bool v15; // zf
  unsigned __int64 v16; // rax
  __int16 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // [rsp+8h] [rbp-250h]
  __int64 v22; // [rsp+10h] [rbp-248h]
  __int64 v23; // [rsp+28h] [rbp-230h]
  __int64 v24; // [rsp+38h] [rbp-220h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-218h] BYREF
  __int128 v26; // [rsp+48h] [rbp-210h]
  char v27; // [rsp+58h] [rbp-200h]
  __int64 v28; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1F0h]
  __int64 v30; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v31; // [rsp+78h] [rbp-1E0h]
  _BYTE v32[8]; // [rsp+88h] [rbp-1D0h]
  __int64 v33; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v34; // [rsp+98h] [rbp-1C0h]
  char v35; // [rsp+A8h] [rbp-1B0h]
  __int128 v36; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-198h]
  __int64 v38; // [rsp+C8h] [rbp-190h]
  __int64 v39; // [rsp+D0h] [rbp-188h]
  char v40; // [rsp+D8h] [rbp-180h] BYREF
  char v41; // [rsp+D9h] [rbp-17Fh]
  __int16 v42; // [rsp+DEh] [rbp-17Ah]
  _BYTE v43[8]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v44; // [rsp+108h] [rbp-150h]
  unsigned __int64 v45; // [rsp+218h] [rbp-40h] BYREF

  v45 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf() & 0x1006) == 0x1002 )
    return sub_2B170(a1, a2);
  v3 = *(_QWORD *)(a2 + 16);
  v27 = 0;
  v25 = nullptr;
  v26 = 0;
  sub_81F70(a1, &v25, v3, 14, 0, 0);
  if ( (unsigned __int8)(v27 - 10) > 1u )
  {
LABEL_10:
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    if ( v3 <= 0xB || *(_WORD *)(a2 + 26) != 4 )
      return 0;
    v37 = -1;
    v8 = (unsigned __int64 *)&v40;
    v38 = 0;
    v39 = 0;
    v36 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( v8 != &v45 );
    if ( (int)decode_insn() <= 0
      || (_WORD)v38 != 18
      || (v39 & 0xF) != 0xE
      || v41 != 1
      || *(_WORD *)(a2 + 46) != v42
      || v43[1] != 5
      || v44 != 1 )
    {
      return 0;
    }
    v31 = 0;
    v30 = 0;
    v32[0] = 0;
    v35 = 0;
    v21 = 2;
    v33 = 0;
    v34 = 0;
    while ( 1 )
    {
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (unsigned __int16)v38 > 0x2Cu )
        goto LABEL_32;
      v9 = 0xFFFFEFFFBF7FFFFFLL;
      if ( _bittest64((const __int64 *)&v9, (unsigned __int16)v38) )
        goto LABEL_32;
      if ( v41 != 1 )
        goto LABEL_32;
      if ( v42 != 14 )
        goto LABEL_32;
      v10 = v39 & 0xF;
      if ( (v39 & 0xE) != 0 )
        goto LABEL_32;
      v22 = v39 & 0xF;
      if ( v32[32 * v22] )
        goto LABEL_32;
      v23 = v10;
      v11 = (__int64 **)(&v30 + 4 * v10);
      sub_83660(a1, v11, &v36, v43, 0);
      v6 = sub_23CA0(v11, &v28 + v23);
      if ( !(_BYTE)v6 )
        goto LABEL_32;
      v12 = *(&v28 + v22);
      if ( v12 == -1 )
        goto LABEL_32;
      v13 = *(_QWORD *)(a1 + 32);
      *(&v28 + v22) = *(_QWORD *)(v13 + 16) & v12;
      if ( v21 == 1 )
        break;
      v21 = 1;
    }
    if ( v29 == v3 + 5 )
    {
      v19 = 0x100000000LL;
      if ( *(_DWORD *)(v13 + 24) == 8 )
        v19 = -1;
      v15 = v19 == 0x100000000LL;
      v20 = 4294967288LL;
      if ( !v15 )
        v20 = -9;
      if ( v20 < v3 || v28 != v3 + 8 || (unsigned __int16)get_word() != 18296 )
        goto LABEL_32;
      sub_25A70(a1, v3, v3 + 4, 1);
      sub_25A70(a1, v3, v3 + 8, 0);
    }
    else
    {
      if ( v28 != v3 + 4 )
        goto LABEL_32;
      v14 = 0x100000000LL;
      if ( *(_DWORD *)(v13 + 24) == 8 )
        v14 = -1;
      v15 = v14 == 0x100000000LL;
      v16 = 4294967284LL;
      if ( !v15 )
        v16 = -13;
      if ( v16 < v3 )
        goto LABEL_32;
      if ( v29 != v3 + 13 )
        goto LABEL_32;
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (_WORD)v38 != 41 )
        goto LABEL_32;
      if ( (v39 & 0xF) != 0xE )
        goto LABEL_32;
      v17 = *(_WORD *)(a2 + 46);
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (unsigned __int16)v38 > 0x2Cu )
        goto LABEL_32;
      v18 = 0xFFFFEFFFBF7FFFFFLL;
      if ( _bittest64((const __int64 *)&v18, (unsigned __int16)v38) || (v39 & 0xF) != 0xE || v41 != 1 || v17 != v42 )
        goto LABEL_32;
      v25 = nullptr;
      v27 = 0;
      v26 = 0;
      sub_83660(a1, &v25, &v36, v43, 0);
      if ( !(unsigned __int8)sub_23CA0(&v25, &v24)
        || v24 == -1
        || v24 != (v24 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)) )
      {
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree();
        }
LABEL_32:
        v6 = 0;
        goto LABEL_33;
      }
      sub_2A700(a1, (__int64)&v25);
      sub_25A70(a1, v3, v3 + 12, 1);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
    }
    sub_2A700(a1, (__int64)&v30);
    sub_2A700(a1, (__int64)&v33);
LABEL_33:
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    return v6;
  }
  v4 = *v25;
  if ( (_QWORD)v26 != 1 )
  {
    v5 = v25 + 3;
    if ( 24LL * (_QWORD)v26 != 24 )
    {
      while ( *v5 == v4 )
      {
        v5 += 3;
        if ( &v25[3 * (_QWORD)v26] == v5 )
          goto LABEL_15;
      }
      goto LABEL_10;
    }
  }
LABEL_15:
  v6 = 0;
  if ( v4 != -1 )
  {
    sub_2A700(a1, (__int64)&v25);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v4;
    sub_25A70(a1, v3, v7 & 0xFFFFFFFFFFFFFFFELL, v7 & 1);
    LOBYTE(v6) = v3 + *(unsigned __int16 *)(a2 + 26) == (v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( !v25 )
      return v6;
    goto LABEL_17;
  }
  if ( v25 )
  {
LABEL_17:
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  return v6;
}

