__int64 __fastcall sub_111A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // esi

  if ( (unsigned __int8)sub_10FC0(a1, 3) )
    return 0;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL) )
    return 0;
  result = sub_10EF0(a1);
  if ( !(_BYTE)result )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
    ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v2 + 64);
  v3 = *(_QWORD *)(a1 + 376);
  v4 = *(unsigned __int16 *)(a1 + 102);
  *(_BYTE *)(v3 + 68) = *(_BYTE *)(a1 + 101);
  *(_DWORD *)(v3 + 64) = v4;
  return result;
}

