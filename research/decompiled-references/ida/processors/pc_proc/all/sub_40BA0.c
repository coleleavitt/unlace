__int64 __fastcall sub_40BA0(__int64 a1, unsigned __int64 a2, _QWORD *a3, int a4)
{
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r8d

  v6 = 0;
  if ( a2 < a4 + 2 )
    return v6;
  v7 = a1 + 24LL * a4;
  if ( *(_QWORD *)(v7 + 8) )
    return v6;
  v8 = a1 + 24LL * (a4 + 1);
  if ( *(__int64 *)(v8 + 8) >= 0 )
    return v6;
  if ( (unsigned __int16)(*(_WORD *)(*a3 + 32LL * *(int *)(v7 + 16) + 24) - 16) > 2u )
    return v6;
  v9 = 32LL * *(int *)(v8 + 16) + *a3;
  if ( *(_BYTE *)(v9 + 27) )
    return v6;
  v6 = 1;
  if ( *(_WORD *)(v9 + 24) == 6 )
    return v6;
  LOBYTE(v10) = (unsigned __int8)get_byte() == 89;
  return v10;
}

