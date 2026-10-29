__int64 __fastcall sub_125090(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  char v15; // r15
  char v16; // al
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v23[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v24[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v25; // [rsp+68h] [rbp-60h]
  __int64 v26; // [rsp+70h] [rbp-58h]
  char v27; // [rsp+78h] [rbp-50h]
  __int64 v28; // [rsp+80h] [rbp-48h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v7 = a3;
  v29 = __readfsqword(0x28u);
  *(_BYTE *)(a5 + 24) = 0;
  v24[1] = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v24[0] = off_4B1108;
  *(_QWORD *)(a5 + 32) = a2;
  v28 = a5;
  v24[2] = a1;
  if ( a3 == a4 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_5FE00(a2) && !a2[3] )
      return 0;
    v8 = a1[62];
    v9 = a1[61];
    if ( a1[63] < (unsigned __int64)(v8 + 1) )
    {
      v19 = qvector_reserve();
      a1[61] = v19;
      v9 = v19;
      v8 = a1[62];
    }
    *(_QWORD *)(v9 + 8 * v8) = v7;
    ++a1[62];
    v25 = v7;
    result = sub_119D40((_BYTE *)v7, (__int64)v24);
    if ( (_DWORD)result )
      break;
    sub_122E60((__int64)v22, (__int64)a1, v7, 1);
    v15 = sub_5FBC0(a2, v22, v11, v12, v13, v14);
    v16 = sub_3123A0(a2 + 2, v23);
    if ( v15 || v16 )
      *(_BYTE *)(a5 + 24) = 1;
    v17 = *(_QWORD *)(v7 + 8);
    if ( v23[0] )
    {
      v23[1] = 0;
      qfree();
    }
    qfree();
    v18 = a1[62];
    if ( !v18 || *(_QWORD *)(a1[61] + 8 * v18 - 8) != v7 )
    {
      if ( !under_debugger )
        sub_37CFE0(52515);
      goto LABEL_24;
    }
    a1[62] = v18 - 1;
    if ( a4 == v17 )
      return 0;
    v7 = v17;
  }
  v20 = a1[62];
  if ( !v20 || v7 != *(_QWORD *)(a1[61] + 8 * v20 - 8) )
  {
    if ( !under_debugger )
      sub_37CFE0(52515);
LABEL_24:
    BUG();
  }
  a1[62] = v20 - 1;
  return result;
}

