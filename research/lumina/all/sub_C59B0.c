__int64 __fastcall sub_C59B0(__int64 a1, signed int a2, int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // edi

  if ( (unsigned int)a2 > 0xB )
    return 0xFFFFFFFFLL;
  v3 = a1 + 4LL * a2;
  result = *(unsigned int *)(v3 + 136);
  if ( a3 >= 0 )
  {
    v5 = *((_DWORD *)&xmmword_1BAEE0 + a2);
    if ( v5 >= a3 && (a3 > 0 || (v5 = 1, a2)) )
      *(_DWORD *)(v3 + 136) = a3;
    else
      *(_DWORD *)(v3 + 136) = v5;
  }
  return result;
}
