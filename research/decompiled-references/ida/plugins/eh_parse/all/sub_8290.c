unsigned __int64 __fastcall sub_8290(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  size_t v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  size_t v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  size_t v11; // r12
  __int64 v12; // r13
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+8h] [rbp-60h]
  _BYTE src[5]; // [rsp+23h] [rbp-45h] BYREF
  _QWORD v24[8]; // [rsp+28h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 104) == -1;
  v24[0] = __readfsqword(0x28u);
  if ( v1 )
    netnode_check(a1 + 104, "$ eh info", 0, 1);
  v22 = 0;
  v21 = 0;
  v2 = pack_dd(src, v24, 1) - (_QWORD)src;
  v3 = v2;
  if ( v2 )
  {
    v4 = v22;
    v5 = v22 + v2;
    if ( __CFADD__((_QWORD)v22, v2) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v4 + v21), src, v3);
        goto LABEL_9;
      }
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = v21;
    v20 = v22;
    if ( *((_QWORD *)&v22 + 1) < v5 )
    {
      v21 = qvector_reserve(&v21, v21, v5, 1);
      v19 = v21;
      v20 = v22;
    }
    memset((void *)(v19 + v20), 0, v5 - v20);
    *(_QWORD *)&v22 = v5;
    goto LABEL_8;
  }
LABEL_9:
  v6 = pack_dd(src, v24, *(unsigned int *)(a1 + 120)) - (_QWORD)src;
  v7 = v6;
  if ( !v6 )
    goto LABEL_15;
  v8 = v22;
  v9 = v22 + v6;
  if ( !__CFADD__((_QWORD)v22, v6) )
    goto LABEL_28;
  if ( (unsigned __int64)v22 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_28:
    v17 = v21;
    v18 = v22;
    if ( *((_QWORD *)&v22 + 1) < v9 )
    {
      v21 = qvector_reserve(&v21, v21, v9, 1);
      v17 = v21;
      v18 = v22;
    }
    memset((void *)(v17 + v18), 0, v9 - v18);
    *(_QWORD *)&v22 = v9;
    goto LABEL_14;
  }
  if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((void *)(v8 + v21), src, v7);
LABEL_15:
  v10 = pack_dd(src, v24, *(unsigned int *)(a1 + 124)) - (_QWORD)src;
  v11 = v10;
  if ( !v10 )
    goto LABEL_21;
  v12 = v22;
  v13 = v22 + v10;
  if ( __CFADD__((_QWORD)v22, v10) )
  {
    if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v22 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    v13 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v14 = v21;
  v15 = v22;
  if ( *((_QWORD *)&v22 + 1) < v13 )
  {
    v21 = qvector_reserve(&v21, v21, v13, 1);
    v14 = v21;
    v15 = v22;
  }
  memset((void *)(v14 + v15), 0, v13 - v15);
  *(_QWORD *)&v22 = v13;
LABEL_20:
  memcpy((void *)(v12 + v21), src, v11);
LABEL_21:
  netnode_setblob(*(_QWORD *)(a1 + 104), v21, v22, 0, 65);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v24[0] - __readfsqword(0x28u);
}

