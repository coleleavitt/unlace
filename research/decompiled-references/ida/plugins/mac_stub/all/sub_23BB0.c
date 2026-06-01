__int64 __fastcall sub_23BB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  size_t v6; // r15
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  size_t v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // [rsp+0h] [rbp-78h]
  unsigned __int64 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-60h]
  unsigned __int64 v23; // [rsp+20h] [rbp-58h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  sub_32790(&v21, 29);
  v5 = pack_dd() - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v22;
    v8 = v22 + v5;
    if ( __CFADD__(v22, v5) )
    {
      if ( v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v22 != 0x7FFFFFFFFFFFFFFFLL )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v21), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = v21;
    v18 = v22;
    if ( v23 < v8 )
    {
      v20 = v22;
      v19 = v8;
      v21 = qvector_reserve();
      v17 = v21;
      v7 = v20;
      v18 = v22;
      v8 = v19;
    }
    v20 = v7;
    v19 = v8;
    memset((void *)(v17 + v18), 0, v8 - v18);
    v7 = v20;
    v22 = v19;
    goto LABEL_6;
  }
LABEL_7:
  v9 = pack_dq() - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = v22;
  v12 = v22 + v9;
  if ( __CFADD__(v22, v9) )
  {
    if ( v22 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v22 != 0x7FFFFFFFFFFFFFFFLL )
        v22 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v12 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v13 = v21;
  v14 = v22;
  if ( v23 < v12 )
  {
    v19 = v12;
    v21 = qvector_reserve();
    v13 = v21;
    v12 = v19;
    v14 = v22;
  }
  v19 = v12;
  memset((void *)(v13 + v14), 0, v12 - v14);
  v22 = v19;
LABEL_12:
  memcpy((void *)(v11 + v21), src, v10);
LABEL_13:
  v15 = sub_2F380(a1 + 864, &v21, 4294967294LL, a4);
  if ( v21 )
  {
    v22 = 0;
    qfree();
  }
  return v15;
}

