__int64 __fastcall sub_54240(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v4; // r9d
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _DWORD *v8; // rax
  int v9; // r11d

  v2 = a2[1];
  if ( v2 < 0 )
    v4 = *(_DWORD *)(a1 + 276);
  else
    v4 = v2 == 0 ? 4 : 8;
  v5 = qword_9AC50;
  v6 = qword_9AC50 + 120 * xmmword_9AC58;
  if ( v6 == qword_9AC50 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v7 = *(int *)(v5 + 28);
    v8 = (_DWORD *)(qword_9AD30 + 144 * v7);
    if ( v8[30] == *a2 && v8[32] == v4 )
    {
      v9 = a2[2];
      if ( (v9 < 0 || v9 == v8[31]) && v8[33] == a2[3] )
        break;
    }
    v5 += 120;
    if ( v5 == v6 )
      return 0xFFFFFFFFLL;
  }
  return (unsigned int)v7;
}

