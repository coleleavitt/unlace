__int64 __fastcall sub_72A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // cx
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 5;
  v4 = (a4 >> 13) + 1;
  *(_WORD *)(a2 + 24) = 48;
  result = v4;
  *(_BYTE *)(a2 + 45) = 2;
  *(_QWORD *)(a2 + 48) = v4;
  if ( v4 == 1 )
    *(_BYTE *)(a2 + 44) &= ~8u;
  return result;
}

