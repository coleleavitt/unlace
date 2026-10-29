__int64 __fastcall sub_394F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int16 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx

  result = *(_QWORD *)(a1 + 80);
  if ( !*(_BYTE *)(a2 + 248) )
  {
    if ( *(_WORD *)(a2 + 522) == 8 && *(_WORD *)(a2 + 520) == 0xFFA0 )
      return sub_30AC0();
LABEL_3:
    result += a3;
    return result;
  }
  v4 = *(_QWORD *)(a2 + 120);
  if ( v4 )
  {
    v5 = *(_WORD *)(a2 + 520);
    if ( v5 != 1 && (*(_WORD *)(a2 + 522) != 8 || v5 != -96) )
      goto LABEL_3;
    v6 = *(unsigned int *)(a1 + 88);
    if ( v6 < v4 )
    {
      v7 = *(_QWORD *)(a2 + 112) + (v6 << 6);
      if ( v7 )
        result += *(_QWORD *)(v7 + 16);
    }
  }
  else if ( *(_WORD *)(a2 + 522) != 8 || *(_WORD *)(a2 + 520) != 0xFFA0 )
  {
    goto LABEL_3;
  }
  return result;
}
