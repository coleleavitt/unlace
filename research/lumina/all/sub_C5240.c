__int64 __fastcall sub_C5240(__int64 a1)
{
  __int64 result; // rax
  unsigned __int16 v2; // si
  int v3; // edx
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // r8d
  bool v8; // cc

  result = *(_QWORD *)(a1 + 968);
  v2 = *(_WORD *)(result + 22);
  if ( *(_BYTE *)(a1 + 72) > 1u )
  {
    v3 = 1;
    do
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(a1 + 112LL * v3 + 968);
        v5 = *(_DWORD *)(v4 + 48);
        if ( (v5 & 0x800001) == 0x800001 && (v5 & 0x300) != 0 )
        {
          v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL * *(unsigned __int8 *)(v4 + 16) + 40);
          v7 = *(_DWORD *)(v6 + 48);
          v8 = *(_WORD *)(v6 + 58) < v2;
          *(_DWORD *)(v6 + 48) = v7 | 0x100;
          if ( v8 && (v7 & 0x10) != 0 )
            break;
        }
        v2 += *(_WORD *)(v4 + 22);
        result = *(unsigned __int8 *)(a1 + 72);
        if ( (int)result <= ++v3 )
          return result;
      }
      v2 += *(_WORD *)(v4 + 22);
      ++v3;
      *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 48) & 0xFFBFFFBF | 0x400000;
      result = *(unsigned __int8 *)(a1 + 72);
    }
    while ( (int)result > v3 );
  }
  return result;
}
