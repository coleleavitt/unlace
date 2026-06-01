__int64 __fastcall sub_40A3A0(__int64 a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8

  v3 = *(_QWORD *)(a1 + 3752);
  result = a1 + 712;
  if ( v3 )
  {
    v6 = 0;
    while ( *(_DWORD *)(result + 28) <= a2 )
    {
      ++v6;
      v7 = result + 32;
      if ( v6 == v3 )
        goto LABEL_7;
      result += 32;
    }
    v7 = result;
    result -= 32;
  }
  else
  {
    v7 = a1 + 712;
    result = a1 + 680;
  }
LABEL_7:
  if ( *(_DWORD *)(v7 - 12) == 4 )
  {
    v8 = *(int *)(v7 - 4);
    v9 = a2;
    if ( a2 < v8 || !*(_WORD *)(v7 - 14) || *(unsigned __int16 *)(v7 - 14) + v8 - 1 < a3 + (__int64)a2 - 1 )
    {
      if ( (_DWORD)v8 != a2 )
        return v7 - 64;
      v10 = *(int *)(v7 - 36);
      if ( *(_WORD *)(v7 - 46) )
      {
        if ( v9 >= v10 && *(unsigned __int16 *)(v7 - 46) + v10 - 1 >= a3 + v9 - 1 )
          return v7 - 64;
      }
    }
  }
  return result;
}

