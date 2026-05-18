__int64 __fastcall sub_CF3F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  bool v3; // zf
  _QWORD v4[19]; // [rsp+0h] [rbp-98h] BYREF

  v4[17] = __readfsqword(0x28u);
  result = 0;
  v3 = *(_QWORD *)(a1 + 24) == 0;
  memset(v4, 0, 0x80u);
  v4[5] = a2;
  if ( !v3 )
    return sub_CDAF0(a1 + 8, v4);
  return result;
}
