__int64 __fastcall sub_137D90(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 result; // rax

  v4 = *(__int64 **)(a1 + 1336);
  if ( !v4 )
    return 0;
  if ( a3 == 9 )
    a3 = *(_DWORD *)(a1 + 312);
  if ( (int)a3 >= (unsigned __int64)v4[1] )
    return 0;
  v5 = *v4;
  v6 = 3LL * a3;
  v7 = (_QWORD *)(v5 + 8 * v6);
  if ( !v7 )
    return 0;
  result = sub_137CB0((__int64 *)(v5 + 8 * v6), a2, a4);
  if ( result == *v7 + 112LL * v7[1] )
    return 0;
  return result;
}

