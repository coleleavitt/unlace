__int64 __fastcall sub_129C50(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, double a6, __m128 a7)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 result; // rax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  char v19; // r15
  char v20; // al
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v26[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v27[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v28[3]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v29; // [rsp+68h] [rbp-60h]
  __int64 v30; // [rsp+70h] [rbp-58h]
  char v31; // [rsp+78h] [rbp-50h]
  __int64 v32; // [rsp+80h] [rbp-48h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v9 = a3;
  v33 = __readfsqword(0x28u);
  *(_BYTE *)(a5 + 24) = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v28[0] = &off_4DD728;
  *(_QWORD *)(a5 + 32) = a2;
  v32 = a5;
  v28[2] = a1;
  if ( a3 == a4 )
    return 0;
  while ( 1 )
  {
    if ( (unsigned __int8)sub_64880(a2) && !a2[3] )
      return 0;
    v10 = a1[62];
    v11 = a1[61];
    if ( a1[63] < (unsigned __int64)(v10 + 1) )
    {
      v23 = qvector_reserve((__int64)(a1 + 61), v11, v10 + 1, 8);
      a1[61] = v23;
      v11 = v23;
      v10 = a1[62];
    }
    *(_QWORD *)(v11 + 8 * v10) = v9;
    ++a1[62];
    v29 = v9;
    result = sub_11E900((_BYTE *)v9, (__int64)v28);
    if ( (_DWORD)result )
      break;
    sub_127A20((__int64)v26, (__int64)a1, v9, 1, v13, v14, a6, a7);
    v19 = sub_64640(a2, v26, v15, v16, v17, v18);
    v20 = sub_317C60(a2 + 2, (__int64)v27);
    if ( v19 || v20 )
      *(_BYTE *)(a5 + 24) = 1;
    v21 = *(_QWORD *)(v9 + 8);
    if ( v27[0] )
    {
      v27[1] = 0;
      qfree(v27[0]);
    }
    qfree(v26[0]);
    v22 = a1[62];
    if ( !v22 || *(_QWORD *)(a1[61] + 8 * v22 - 8) != v9 )
    {
      if ( !under_debugger )
        sub_383060(0xCD23u, a6);
      goto LABEL_24;
    }
    a1[62] = v22 - 1;
    if ( a4 == v21 )
      return 0;
    v9 = v21;
  }
  v24 = a1[62];
  if ( !v24 || v9 != *(_QWORD *)(a1[61] + 8 * v24 - 8) )
  {
    if ( !under_debugger )
      sub_383060(0xCD23u, a6);
LABEL_24:
    BUG();
  }
  a1[62] = v24 - 1;
  return result;
}

