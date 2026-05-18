__int64 __fastcall sub_DDED0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v10; // rsi
  __m128i *v11; // rax

  if ( **(_BYTE **)(a1 + 8) )
    return 1;
  result = 0;
  if ( *(_BYTE *)a2 != 0xA7 || (*(_BYTE *)(a2 + 4) & 9) != 0 )
    return result;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 <= 0 )
    return 1;
  v5 = 2 * v4;
  v6 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    v7 = (int)result;
    v8 = *(_QWORD *)(v6 + 8LL * (int)result);
    if ( a2 != v8 && *(_DWORD *)(v8 + 44) == *(_DWORD *)(a2 + 44) && *(_WORD *)(v8 + 48) == *(_WORD *)(a2 + 48) )
      break;
    LODWORD(result) = result + 2;
    if ( v5 == (_DWORD)result )
      return 1;
  }
  if ( a3 && (unsigned __int8)sub_C6820(*(unsigned __int8 **)(v6 + 8LL * (int)result)) == 65 )
    return 1;
  ++*(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 4) & 0xFF7FFFF7 | 8;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v7 + 8);
  v11 = nullptr;
  if ( v10 )
    v11 = sub_DD6E0(**(_QWORD **)a1, v10, 0, nullptr);
  *(_QWORD *)(a2 + 16) = v11;
  return 1;
}
