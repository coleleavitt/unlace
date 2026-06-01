__int64 __fastcall sub_185AA0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // r9d
  bool v7; // al
  bool v8; // [rsp+Fh] [rbp-51h]
  bool v9; // [rsp+Fh] [rbp-51h]
  __int64 v10[2]; // [rsp+10h] [rbp-50h] BYREF
  __int64 v11; // [rsp+20h] [rbp-40h]
  __int128 v12; // [rsp+28h] [rbp-38h]
  unsigned __int64 v13; // [rsp+38h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 64) != 5 )
    return 1;
  if ( *(_DWORD *)a2 == 1 )
    return 1;
  result = sub_1EF9B0(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(_DWORD *)(a2 + 68));
  if ( (_BYTE)result )
    return 1;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL) )
  {
    v10[0] = 0;
    v10[1] = 0;
    v11 = 0;
    v12 = 0;
    sub_127FE0(a1, v10, a2 + 64, 0, v5, v6, 0.0, a4);
    v7 = sub_17C4E0(
           *(__int64 **)(*(_QWORD *)(a1 + 64) + 784LL),
           (__int64)v10,
           *(_DWORD *)(a1 + 72),
           0xFFFFFFFF,
           *(_QWORD *)(a2 + 8),
           0,
           0.0,
           2u,
           0);
    if ( v11 )
    {
      v8 = v7;
      *(_QWORD *)&v12 = 0;
      qfree(v11);
      v7 = v8;
    }
    v9 = v7;
    qfree(v10[0]);
    return v9;
  }
  return result;
}

