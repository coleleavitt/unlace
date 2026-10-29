__int64 __fastcall sub_D50D0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rsi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2 - 1;
  v4 = -a2;
  result = v4 & ((int)v3 + *(_QWORD *)(a1 + 8));
  if ( v2 != -1 )
  {
    v6 = (v3 + v2) & v4;
    *(_QWORD *)(a1 + 16) = v6;
    if ( result < v6 )
      return v6;
  }
  return result;
}

