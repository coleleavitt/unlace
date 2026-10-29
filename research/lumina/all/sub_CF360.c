__int64 __fastcall sub_CF360(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // r11d
  int v6; // esi
  __int64 v7; // r10
  int v8; // r11d
  __int64 result; // rax

  if ( *(int *)(a1 + 40) <= 0 )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v6 = v3 ^ 1;
    if ( v3 >= 2 )
      v6 = v3;
    v7 = *(_QWORD *)(a1 + 32) + 32LL * v6;
    if ( !a3 || (unsigned int)sub_CF2D0(a1, v6, a3) )
    {
      result = sub_C2AB0(*(_QWORD *)(v7 + 24) + 32LL, a2, nullptr)[2];
      if ( result )
        break;
    }
    v3 = v8 + 1;
    if ( *(_DWORD *)(a1 + 40) <= v3 )
      return 0;
  }
  return result;
}
