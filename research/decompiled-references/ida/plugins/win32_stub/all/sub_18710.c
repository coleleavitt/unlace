__int64 __fastcall sub_18710(__int64 a1)
{
  __int64 v1; // rax
  size_t v2; // r12
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  size_t v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+0h] [rbp-78h]
  unsigned __int64 v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-60h]
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_27550(&v17, 23);
  v1 = pack_dd() - (_QWORD)src;
  v2 = v1;
  if ( v1 )
  {
    v3 = v18;
    v4 = v18 + v1;
    if ( __CFADD__(v18, v1) )
    {
      if ( v18 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v18 != 0x7FFFFFFFFFFFFFFFLL )
          v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v3 + v17), src, v2);
        goto LABEL_7;
      }
      v4 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = v17;
    v14 = v18;
    if ( v19 < v4 )
    {
      v16 = v18;
      v15 = v4;
      v17 = qvector_reserve();
      v13 = v17;
      v3 = v16;
      v14 = v18;
      v4 = v15;
    }
    v16 = v3;
    v15 = v4;
    memset((void *)(v13 + v14), 0, v4 - v14);
    v3 = v16;
    v18 = v15;
    goto LABEL_6;
  }
LABEL_7:
  v5 = pack_dd() - (_QWORD)src;
  v6 = v5;
  if ( !v5 )
    goto LABEL_13;
  v7 = v18;
  v8 = v18 + v5;
  if ( __CFADD__(v18, v5) )
  {
    if ( v18 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v18 != 0x7FFFFFFFFFFFFFFFLL )
        v18 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v8 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v9 = v17;
  v10 = v18;
  if ( v19 < v8 )
  {
    v17 = qvector_reserve();
    v9 = v17;
    v10 = v18;
  }
  memset((void *)(v9 + v10), 0, v8 - v10);
  v18 = v8;
LABEL_12:
  memcpy((void *)(v7 + v17), src, v6);
LABEL_13:
  v11 = sub_24140(a1 + 864, &v17, 4294967294LL, 0);
  if ( v17 )
  {
    v18 = 0;
    qfree();
  }
  return v11;
}

