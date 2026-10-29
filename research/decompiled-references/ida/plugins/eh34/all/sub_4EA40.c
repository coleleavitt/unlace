unsigned __int64 __fastcall sub_4EA40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  size_t v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  size_t v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  size_t v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+0h] [rbp-70h]
  __int64 v24; // [rsp+8h] [rbp-68h] BYREF
  __int128 v25; // [rsp+10h] [rbp-60h]
  _BYTE src[5]; // [rsp+26h] [rbp-4Ah] BYREF
  _BYTE v27[5]; // [rsp+2Bh] [rbp-45h] BYREF
  _QWORD v28[8]; // [rsp+30h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  v3 = pack_dq(src, v28, a1 + 1 - *a2) - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v5 = v25;
    v6 = v25 + v3;
    if ( __CFADD__((_QWORD)v25, v3) )
    {
      if ( (unsigned __int64)v25 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v25 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v25 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v5 + v24), src, v4);
        goto LABEL_7;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v21 = v24;
    v22 = v25;
    if ( *((_QWORD *)&v25 + 1) < v6 )
    {
      v23 = v6;
      v24 = qvector_reserve(&v24, v24, v6, 1);
      v21 = v24;
      v6 = v23;
      v22 = v25;
    }
    v23 = v6;
    memset((void *)(v21 + v22), 0, v6 - v22);
    *(_QWORD *)&v25 = v23;
    goto LABEL_6;
  }
LABEL_7:
  v7 = pack_dd(src, v27, (unsigned int)a2[1] - *(_DWORD *)a2) - (_QWORD)src;
  v8 = v7;
  if ( !v7 )
    goto LABEL_13;
  v9 = v25;
  v10 = v25 + v7;
  if ( !__CFADD__((_QWORD)v25, v7) )
    goto LABEL_26;
  if ( (unsigned __int64)v25 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_26:
    v19 = v24;
    v20 = v25;
    if ( *((_QWORD *)&v25 + 1) < v10 )
    {
      v23 = v10;
      v24 = qvector_reserve(&v24, v24, v10, 1);
      v19 = v24;
      v10 = v23;
      v20 = v25;
    }
    v23 = v10;
    memset((void *)(v19 + v20), 0, v10 - v20);
    *(_QWORD *)&v25 = v23;
    goto LABEL_12;
  }
  if ( (_QWORD)v25 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v25 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v9 + v24), src, v8);
LABEL_13:
  v11 = pack_dq(src, v28, a2[2] + 1 - a1) - (_QWORD)src;
  v12 = v11;
  if ( !v11 )
    goto LABEL_19;
  v13 = v25;
  v14 = v25 + v11;
  if ( __CFADD__((_QWORD)v25, v11) )
  {
    if ( (unsigned __int64)v25 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v25 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v25 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_18;
    }
    v14 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v15 = v24;
  v16 = v25;
  if ( *((_QWORD *)&v25 + 1) < v14 )
  {
    v24 = qvector_reserve(&v24, v24, v14, 1);
    v15 = v24;
    v16 = v25;
  }
  memset((void *)(v15 + v16), 0, v14 - v16);
  *(_QWORD *)&v25 = v14;
LABEL_18:
  memcpy((void *)(v13 + v24), src, v12);
LABEL_19:
  v17 = sub_1DD10();
  netnode_setblob(v17, v24, v25, a1, 357);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v28[0] - __readfsqword(0x28u);
}

