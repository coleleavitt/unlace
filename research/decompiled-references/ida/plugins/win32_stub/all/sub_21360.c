__int64 __fastcall sub_21360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  size_t v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  size_t v10; // r14
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  size_t v14; // rbp
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  unsigned __int64 v27; // [rsp+10h] [rbp-78h]
  size_t v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  unsigned __int64 v31; // [rsp+30h] [rbp-58h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v25 = a1;
  v26 = a5;
  v33 = __readfsqword(0x28u);
  sub_27550(&v29, 15);
  v5 = pack_dd() - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v30;
    v8 = v30 + v5;
    if ( __CFADD__(v30, v5) )
    {
      if ( v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v30 != 0x7FFFFFFFFFFFFFFFLL )
          v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v29), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = v29;
    v24 = v30;
    if ( v31 < v8 )
    {
      v28 = v6;
      v27 = v8;
      v29 = qvector_reserve();
      v23 = v29;
      v6 = v28;
      v24 = v30;
      v8 = v27;
    }
    v28 = v6;
    v27 = v8;
    memset((void *)(v23 + v24), 0, v8 - v24);
    v6 = v28;
    v30 = v27;
    goto LABEL_6;
  }
LABEL_7:
  v9 = pack_dd() - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_13;
  v11 = v30;
  v12 = v30 + v9;
  if ( !__CFADD__(v30, v9) )
    goto LABEL_26;
  if ( v30 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_26:
    v21 = v29;
    v22 = v30;
    if ( v31 < v12 )
    {
      v27 = v12;
      v29 = qvector_reserve();
      v21 = v29;
      v12 = v27;
      v22 = v30;
    }
    v27 = v12;
    memset((void *)(v21 + v22), 0, v12 - v22);
    v30 = v27;
    goto LABEL_12;
  }
  if ( v30 != 0x7FFFFFFFFFFFFFFFLL )
    v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v11 + v29), src, v10);
LABEL_13:
  v13 = pack_dd() - (_QWORD)src;
  v14 = v13;
  if ( !v13 )
    goto LABEL_19;
  v15 = v30;
  v16 = v30 + v13;
  if ( __CFADD__(v30, v13) )
  {
    if ( v30 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v30 != 0x7FFFFFFFFFFFFFFFLL )
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_18;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v17 = v29;
  v18 = v30;
  if ( v31 < v16 )
  {
    v29 = qvector_reserve();
    v17 = v29;
    v18 = v30;
  }
  memset((void *)(v17 + v18), 0, v16 - v18);
  v30 = v16;
LABEL_18:
  memcpy((void *)(v15 + v29), src, v14);
LABEL_19:
  v19 = sub_20720(v25, (__int64)&v29, v26);
  if ( v29 )
  {
    v30 = 0;
    qfree();
  }
  return v19;
}

