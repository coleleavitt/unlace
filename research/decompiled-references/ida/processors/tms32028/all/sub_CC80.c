__int64 __fastcall sub_CC80(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // dx
  __int64 v4; // rax
  __int64 result; // rax

  v3 = *(_WORD *)(a3 + 8);
  *(_WORD *)(a2 + 24) = v3;
  v4 = *(unsigned __int8 *)(a1 + 248);
  if ( (_BYTE)v4 == 16 )
  {
    *(_WORD *)(a2 + 24) = 5 * (v3 == 27) + 35;
    return *(unsigned __int16 *)(a2 + 26);
  }
  else
  {
    *(_QWORD *)(a2 + 48) = v4;
    result = *(unsigned __int16 *)(a2 + 26);
    *(_BYTE *)(a2 + 41) = 10;
  }
  return result;
}

