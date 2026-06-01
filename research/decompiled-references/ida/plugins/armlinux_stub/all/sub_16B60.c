__int64 __fastcall sub_16B60(__int64 a1, int a2)
{
  __int64 v2; // rax
  size_t v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r10
  __int64 v6; // rax
  size_t v7; // r13
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rax
  size_t v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // [rsp+8h] [rbp-80h]
  size_t v23; // [rsp+10h] [rbp-78h]
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  __int64 v25; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-60h]
  unsigned __int64 v27; // [rsp+30h] [rbp-58h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  LODWORD(v22) = a2;
  v29 = __readfsqword(0x28u);
  sub_24D10(&v25, 30);
  v2 = pack_dd() - (_QWORD)src;
  v3 = v2;
  if ( v2 )
  {
    v4 = v26;
    v5 = v26 + v2;
    if ( __CFADD__(v26, v2) )
    {
      if ( v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v26 != 0x7FFFFFFFFFFFFFFFLL )
          v26 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v4 + v25), src, v3);
        goto LABEL_7;
      }
      v5 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = v25;
    v21 = v26;
    if ( v27 < v5 )
    {
      v24 = v26;
      v23 = v3;
      v22 = v5;
      v25 = qvector_reserve();
      v20 = v25;
      v4 = v24;
      v21 = v26;
      v3 = v23;
      v5 = v22;
    }
    v24 = v4;
    v23 = v3;
    v22 = v5;
    memset((void *)(v20 + v21), 0, v5 - v21);
    v3 = v23;
    v4 = v24;
    v26 = v22;
    goto LABEL_6;
  }
LABEL_7:
  v6 = pack_dq() - (_QWORD)src;
  v7 = v6;
  if ( !v6 )
    goto LABEL_13;
  v8 = v26;
  v9 = v26 + v6;
  if ( !__CFADD__(v26, v6) )
    goto LABEL_26;
  if ( v26 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_26:
    v18 = v25;
    v19 = v26;
    if ( v27 < v9 )
    {
      v23 = v26;
      v22 = v9;
      v25 = qvector_reserve();
      v18 = v25;
      v8 = v23;
      v19 = v26;
      v9 = v22;
    }
    v23 = v8;
    v22 = v9;
    memset((void *)(v18 + v19), 0, v9 - v19);
    v8 = v23;
    v26 = v22;
    goto LABEL_12;
  }
  if ( v26 != 0x7FFFFFFFFFFFFFFFLL )
    v26 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v8 + v25), src, v7);
LABEL_13:
  v10 = pack_dd() - (_QWORD)src;
  v11 = v10;
  if ( !v10 )
    goto LABEL_19;
  v12 = v26;
  v13 = v26 + v10;
  if ( __CFADD__(v26, v10) )
  {
    if ( v26 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v26 != 0x7FFFFFFFFFFFFFFFLL )
        v26 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_18;
    }
    v13 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v14 = v25;
  v15 = v26;
  if ( v27 < v13 )
  {
    v25 = qvector_reserve();
    v14 = v25;
    v15 = v26;
  }
  memset((void *)(v14 + v15), 0, v13 - v15);
  v26 = v13;
LABEL_18:
  memcpy((void *)(v12 + v25), src, v11);
LABEL_19:
  v16 = sub_21900(a1 + 864, &v25, 0xFFFFFFFFLL, 0);
  if ( v25 )
  {
    v26 = 0;
    qfree();
  }
  return v16;
}

