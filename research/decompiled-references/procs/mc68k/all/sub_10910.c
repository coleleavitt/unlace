__int64 __fastcall sub_10910(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r12
  __int64 result; // rax
  _BOOL4 v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // si

  while ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( under_debugger )
      BUG();
    a1 = 10316;
    interr(10316);
  }
  if ( (unsigned __int8)sub_E7D0(a1) )
    return 0;
  v5 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v5 + 81) )
    return 0;
  v7 = (*(_BYTE *)(v5 + 112) & 2) == 0;
  result = sub_107D0(a1, (*(_BYTE *)(v5 + 112) & 2) == 0, v1, v2, v3, v4);
  if ( !(_BYTE)result )
    return 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v5 + 104);
  if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
    ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
  v8 = *(_QWORD *)(a1 + 376);
  v9 = a1 + 40LL * v7;
  v10 = *(_BYTE *)(v9 + 61);
  LODWORD(v9) = *(unsigned __int16 *)(v9 + 62);
  *(_BYTE *)(v8 + 68) = v10;
  *(_DWORD *)(v8 + 64) = v9;
  return result;
}
