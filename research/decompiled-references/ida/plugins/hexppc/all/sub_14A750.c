_BOOL8 __fastcall sub_14A750(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BOOL8 result; // rax
  _QWORD v4[9]; // [rsp+0h] [rbp-48h] BYREF

  v4[7] = __readfsqword(0x28u);
  result = true;
  if ( !a2 )
  {
    v4[5] = a1;
    memset(&v4[1], 0, 32);
    v4[0] = off_4CAE60;
    if ( (unsigned int)sub_11BD20(a3, v4) )
      return false;
  }
  return result;
}

