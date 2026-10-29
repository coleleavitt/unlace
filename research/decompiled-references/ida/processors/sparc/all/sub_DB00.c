__int64 __fastcall sub_DB00(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // esi

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
    if ( !(unsigned __int8)sub_DA20(a1)
      && *(_BYTE *)(*(_QWORD *)(a1 + 864) + 41LL)
      && *(_WORD *)(a1 + 40) == 157
      && *(_BYTE *)(a1 + 97) == 5
      && (result = same_value_jpt(a1, a1 + 56, 0), (_BYTE)result) )
    {
      *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = *(_QWORD *)(a1 + 104);
      v2 = *(_QWORD *)(a1 + 864);
      if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
        ++*(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 376) + 24LL) = *(_QWORD *)(v2 + 64);
      v3 = *(_QWORD *)(a1 + 376);
      v4 = *(unsigned __int16 *)(a1 + 62);
      *(_BYTE *)(v3 + 68) = *(_BYTE *)(a1 + 61);
      *(_DWORD *)(v3 + 64) = v4;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(10321);
    return sub_DBC0();
  }
  return result;
}

