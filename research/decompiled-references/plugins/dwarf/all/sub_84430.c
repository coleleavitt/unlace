__int64 __fastcall sub_84430(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  v5 = *(_QWORD *)(a1 + 136);
  if ( a3 )
  {
    v6 = *(int *)(v5 + 172);
    result = 0;
    if ( (int)v6 < 0 )
      return result;
  }
  else
  {
    v6 = *(int *)(v5 + 176);
    result = 0;
    if ( (int)v6 < 0 )
      return result;
  }
  v8 = *(_QWORD *)(v5 + 104) + 120 * v6;
  result = 0;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 8LL * (a3 ^ 1u) + 224);
    v10 = v9 + *(unsigned int *)(v8 + 8);
    LOBYTE(v10) = a2 < v10;
    LOBYTE(v9) = a2 >= v9;
    return (unsigned int)v9 & (unsigned int)v10;
  }
  return result;
}
