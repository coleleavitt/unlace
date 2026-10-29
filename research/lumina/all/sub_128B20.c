__int64 __fastcall sub_128B20(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, int *a6, double a7)
{
  char v7; // r10
  __int64 result; // rax
  char *v9; // rax
  char **v10; // r8
  __int64 v11; // r10
  int v12; // r9d
  __int64 v13; // rsi

  v7 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 0xB0 )
  {
    v9 = sub_C4360((char *)a2, a3);
    *v10 = v9;
    return (unsigned int)(v12 + *(_DWORD *)(v11 + 44));
  }
  else if ( v7 == -118 )
  {
    *a5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 24LL * a3 + 8);
    return (unsigned int)(a3 + a4);
  }
  else
  {
    result = 0;
    if ( v7 == -79 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL * a3 + 8);
      *a5 = v13;
      return sub_1289B0(a1, v13, a6, a7);
    }
  }
  return result;
}
