__int64 __fastcall sub_A150(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned __int8 v4; // al
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  result = sub_82A0(a1, a2, a3);
  if ( (_DWORD)result )
  {
    v5[1] = 0;
    v5[0] = off_16A58;
    v5[2] = a1;
    v4 = getinf_flag(11, 4);
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))construct_macro)(v5, a2, v4) )
      *(_DWORD *)(a2 + 28) |= 0x8000u;
    return *(unsigned __int16 *)(a2 + 26);
  }
  return result;
}

