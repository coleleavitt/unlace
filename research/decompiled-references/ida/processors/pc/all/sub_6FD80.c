unsigned __int64 __fastcall sub_6FD80(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // r12
  __int64 v3; // r13
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  size_t v6; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  __int128 v15; // [rsp+8h] [rbp-60h]
  _BYTE src[3]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v14 = 0;
  v15 = 0;
  v1 = pack_dw() - (_QWORD)src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v15;
    v4 = v15 + v1;
    if ( __CFADD__((_QWORD)v15, v1) )
    {
      if ( (unsigned __int64)v15 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v15 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + v14), src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v12 = v14;
    v13 = v15;
    if ( *((_QWORD *)&v15 + 1) < v4 )
    {
      v14 = qvector_reserve();
      v12 = v14;
      v13 = v15;
    }
    memset((void *)(v12 + v13), 0, v4 - v13);
    *(_QWORD *)&v15 = v4;
    goto LABEL_6;
  }
LABEL_7:
  sub_6FB30(a1, &v14);
  v5 = pack_dq() - (_QWORD)src;
  v6 = v5;
  if ( !v5 )
    goto LABEL_13;
  v7 = v15;
  v8 = v15 + v5;
  if ( __CFADD__((_QWORD)v15, v5) )
  {
    if ( (unsigned __int64)v15 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v15 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v15 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v8 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v9 = v14;
  v10 = v15;
  if ( *((_QWORD *)&v15 + 1) < v8 )
  {
    v14 = qvector_reserve();
    v9 = v14;
    v10 = v15;
  }
  memset((void *)(v9 + v10), 0, v8 - v10);
  *(_QWORD *)&v15 = v8;
LABEL_12:
  memcpy((void *)(v7 + v14), src, v6);
LABEL_13:
  netnode_setblob();
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v17 - __readfsqword(0x28u);
}
