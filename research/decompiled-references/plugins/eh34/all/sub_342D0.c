__int64 __fastcall sub_342D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 hexdsp; // rax
  __int64 v5; // rdx
  __int64 (__fastcall *i)(__int64, __int64, __int64); // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx

  v2 = *(_QWORD *)(a1 + 560) + ((__int64)(int)a2 << 6);
  if ( (*(_BYTE *)(v2 + 16) & 1) == 0 )
  {
    if ( *(_DWORD *)(v2 + 20) )
      return 1;
    hexdsp = get_hexdsp(a1, a2);
    v5 = 0;
    for ( i = (__int64 (__fastcall *)(__int64, __int64, __int64))hexdsp;
          ;
          i = (__int64 (__fastcall *)(__int64, __int64, __int64))v7 )
    {
      v8 = i(227, v2 + 24, v5);
      v9 = v8;
      if ( *(_DWORD *)(v2 + 32) == v8 )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 608) + 4LL * v8) )
        return 1;
      v7 = get_hexdsp(227, v2 + 24);
      v5 = (unsigned int)(v9 + 1);
    }
  }
  return 0;
}
