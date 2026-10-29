__int64 __fastcall sub_5AC0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 result; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 insn; // rdx
  _BYTE v10[320]; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v11[2]; // [rsp+168h] [rbp-10h] BYREF

  v2 = *(_WORD *)(a2 + 24);
  v11[0] = __readfsqword(0x28u);
  if ( v2 != 1 )
  {
    if ( v2 == 7 )
    {
      if ( !*(_QWORD *)(a2 + 48) )
        return 0;
      v4 = v10;
      do
      {
        *(_WORD *)v4 = 0;
        v4 += 5;
        *((_WORD *)v4 - 19) = 0;
        *((_WORD *)v4 - 18) = 0;
        *((_DWORD *)v4 - 2) = 0;
        *((_WORD *)v4 - 17) = 0;
        *((_OWORD *)v4 - 2) = 0;
        *(v4 - 2) = 0;
      }
      while ( v11 != v4 );
      decode_insn();
      v2 = *(_WORD *)(a2 + 24);
    }
    if ( v2 == 8 && *(_BYTE *)(a2 + 41) == 1 && (unsigned __int16)(*(_WORD *)(a2 + 46) - 8) <= 3u )
    {
      v5 = v10;
      do
      {
        *(_WORD *)v5 = 0;
        v5 += 5;
        *((_WORD *)v5 - 19) = 0;
        *((_WORD *)v5 - 18) = 0;
        *((_DWORD *)v5 - 2) = 0;
        *((_WORD *)v5 - 17) = 0;
        *((_OWORD *)v5 - 2) = 0;
        *(v5 - 2) = 0;
      }
      while ( v5 != v11 );
      decode_prev_insn();
    }
    return 0;
  }
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( *(_WORD *)(a2 + 46) != 12 )
    return 0;
  if ( *(_BYTE *)(a2 + 81) != 5 )
    return 0;
  v6 = *(_QWORD *)(a2 + 88);
  if ( v6 > 6 )
    return 0;
  v7 = 84;
  if ( !_bittest64(&v7, v6) )
    return 0;
  v8 = v10;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( v11 != v8 );
  insn = decode_prev_insn();
  result = 100;
  if ( insn != -1 )
    return 100;
  return result;
}

