__int64 __fastcall sub_1B430(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[3] = __readfsqword(0x28u);
  result = 0;
  if ( a2 == 4 )
  {
    v4[0] = 0;
    v4[1] = -1;
    if ( (unsigned __int8)sub_18B00(a1, 0x10u, a3, 1u) )
    {
      result = sub_18D10(a1, (int *)v4);
      if ( (_BYTE)result )
      {
        if ( !LODWORD(v4[0]) )
          return result;
        if ( LODWORD(v4[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
          sub_BDA0((__int64)"Error in send message, packet code %x.\n", 16);
      }
    }
    return 0;
  }
  return result;
}

