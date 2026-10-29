unsigned __int64 __fastcall sub_F590(__int64 a1)
{
  __int16 v1; // dx
  unsigned __int64 result; // rax

  v1 = *(_WORD *)(a1 + 184);
  result = 1072693272;
  if ( *(_QWORD *)(a1 + 160) == -1 )
    result = (-(__int64)((*(_WORD *)(a1 + 184) & 2) == 0) & 0xFFFFFFFFFFFFFFF0LL) + 1072693272;
  if ( *(_QWORD *)(a1 + 168) != -1 || (v1 & 4) != 0 )
  {
    result |= 0x20u;
    if ( *(_QWORD *)(a1 + 176) != -1 )
      goto LABEL_5;
  }
  else if ( *(_QWORD *)(a1 + 176) != -1 )
  {
    goto LABEL_5;
  }
  if ( (v1 & 8) != 0 )
  {
LABEL_5:
    result |= 0x40000000u;
    if ( (v1 & 0x10) != 0 )
      result |= 4u;
    return result;
  }
  if ( (v1 & 0x10) != 0 )
    result |= 4u;
  return result;
}

