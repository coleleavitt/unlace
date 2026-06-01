__int64 __fastcall sub_2A030(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // r12d
  int v5; // eax
  __int16 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v3 = equal_bytes();
  if ( (_BYTE)v3 )
  {
    v5 = sub_22C00(a2);
    v6 = *(_WORD *)(a2 + 46);
    v7 = *(_QWORD *)(a2 + 16);
    v8 = v5;
    v9 = sub_22F00((__int64)a1);
    v10 = a1[1];
    v11 = v9;
    v12 = a1[2];
    if ( a1[3] < (unsigned __int64)(v12 + 1) )
    {
      v15 = v11;
      v14 = qvector_reserve();
      v11 = v15;
      a1[1] = v14;
      v10 = v14;
      v12 = a1[2];
    }
    v13 = 32 * v12 + v10;
    *(_QWORD *)v13 = v7;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)(v13 + 16) = v8;
    *(_WORD *)(v13 + 24) = v6;
    *(_WORD *)(v13 + 26) = 0;
    ++a1[2];
    sub_29980((__int64)a1, *(_QWORD *)(a2 + 16), 6, 0);
  }
  return v3;
}
