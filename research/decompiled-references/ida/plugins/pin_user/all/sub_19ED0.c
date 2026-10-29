__int64 __fastcall sub_19ED0(__int64 a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[3] = __readfsqword(0x28u);
  v3[0] = 0;
  v3[1] = -1;
  if ( (unsigned __int8)sub_18B00(a1, 0x19u, a2, 0) )
  {
    result = sub_18D10(a1, (int *)v3);
    if ( (_BYTE)result )
    {
      if ( !LODWORD(v3[0]) )
        return result;
      if ( LODWORD(v3[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      {
        sub_BDA0((__int64)"Error in send message, packet code %x.\n", 25);
        return 0;
      }
    }
  }
  return 0;
}

