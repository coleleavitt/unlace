_BOOL8 __fastcall sub_14B060(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result; // rax
  _BYTE *v4; // rax
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  v5[7] = __readfsqword(0x28u);
  result = true;
  if ( *(_BYTE *)a3 == 4 && !a2 )
  {
    v4 = *(_BYTE **)(a3 + 8);
    v5[5] = a1;
    memset(&v5[1], 0, 32);
    v5[0] = off_4BE480;
    if ( (unsigned int)sub_11B560(v4, v5) )
      return false;
  }
  return result;
}

