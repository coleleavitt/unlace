__int64 __fastcall sub_18BF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  size_t v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  size_t v10; // r13
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-88h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  unsigned __int64 v21; // [rsp+10h] [rbp-78h]
  size_t v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-60h]
  unsigned __int64 v25; // [rsp+30h] [rbp-58h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v19 = a4;
  v20 = a5;
  v27 = __readfsqword(0x28u);
  sub_27550(&v23, 32);
  v5 = pack_dd() - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v24;
    v8 = v24 + v5;
    if ( __CFADD__(v24, v5) )
    {
      if ( v24 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v24 != 0x7FFFFFFFFFFFFFFFLL )
          v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v23), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = v23;
    v18 = v24;
    if ( v25 < v8 )
    {
      v22 = v6;
      v21 = v8;
      v23 = qvector_reserve();
      v17 = v23;
      v6 = v22;
      v18 = v24;
      v8 = v21;
    }
    v22 = v6;
    v21 = v8;
    memset((void *)(v17 + v18), 0, v8 - v18);
    v6 = v22;
    v24 = v21;
    goto LABEL_6;
  }
LABEL_7:
  v9 = pack_dd() - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = v24;
  v12 = v24 + v9;
  if ( __CFADD__(v24, v9) )
  {
    if ( v24 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v24 != 0x7FFFFFFFFFFFFFFFLL )
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v13 = v23;
  v14 = v24;
  if ( v25 < v12 )
  {
    v23 = qvector_reserve();
    v13 = v23;
    v14 = v24;
  }
  memset((void *)(v13 + v14), 0, v12 - v14);
  v24 = v12;
LABEL_12:
  memcpy((void *)(v11 + v23), src, v10);
LABEL_13:
  sub_25A90(&v23, v19, 1, 0);
  v15 = sub_24140(a1 + 864, &v23, 4294967294LL, v20);
  if ( v23 )
  {
    v24 = 0;
    qfree();
  }
  return v15;
}

