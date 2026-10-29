__int64 __fastcall sub_206210(__int64 a1, unsigned int a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // r13
  int v9; // edx
  __int64 result; // rax
  int v11; // eax

  v6 = *(int *)(a3 + 44);
  if ( (_DWORD)v6 == -1 )
  {
    if ( *(_BYTE *)(a3 + 32) == 5 )
      return 0;
    if ( !under_debugger )
      sub_383060(0xC4A5u, a4);
    goto LABEL_21;
  }
  v7 = *(_QWORD **)(a1 + 64);
  *(_DWORD *)(a1 + 44) = v6;
  v8 = *v7 + 104 * v6;
  v9 = *(_DWORD *)(v8 + 24) & 8;
  if ( (*(_BYTE *)(a3 + 48) & 2) != 0 )
  {
    if ( v9 )
      return 0;
    if ( !under_debugger )
      sub_383060(0xCBE8u, a4);
LABEL_21:
    BUG();
  }
  if ( v9 && (*(_DWORD *)(v8 + 24) & 0x2000000) == 0 )
  {
    if ( (unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 56)) )
      return 0;
    if ( *(_DWORD *)v8 != 1
      || !(unsigned __int8)sub_1EF9B0(*(_QWORD *)(a1 + 56), *(_QWORD *)(v8 + 8), *(_DWORD *)(v8 + 88)) )
    {
      if ( !under_debugger )
        sub_383060(0xC4A6u, a4);
      goto LABEL_21;
    }
  }
  result = sub_205FE0(a1, a2, *(__m128i **)(a1 + 8), a3, 1, a4, a5);
  if ( (int)result < 0 )
    return result;
  v11 = *(_DWORD *)(v8 + 24);
  if ( (v11 & 8) == 0 )
    *(_DWORD *)(v8 + 24) = v11 | 8;
  return 0;
}

