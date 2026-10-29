__int64 __fastcall sub_19B90(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+0h] [rbp-28h] BYREF

  v2[3] = __readfsqword(0x28u);
  v2[0] = 0;
  v2[1] = -1;
  if ( (unsigned __int8)sub_18B00(a1, 0xDu, 0, 0) )
  {
    result = sub_18D10(a1, (int *)v2);
    if ( (_BYTE)result )
    {
      if ( !LODWORD(v2[0]) )
        return result;
      if ( LODWORD(v2[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      {
        sub_BDA0((__int64)"Error in send message, packet code %x.\n", 13);
        return 0;
      }
    }
  }
  return 0;
}

