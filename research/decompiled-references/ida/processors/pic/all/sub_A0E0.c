__int64 __fastcall sub_A0E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  int v5; // ecx
  __int64 v6; // rdx
  _QWORD *v7; // rdx

  result = a2;
  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 264);
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v7 = (_QWORD *)(v4 + 16 * v6);
      if ( *v7 == result )
        break;
      v6 = ++v5;
      if ( v5 >= v3 )
        return result;
    }
    return v7[1];
  }
  return result;
}

