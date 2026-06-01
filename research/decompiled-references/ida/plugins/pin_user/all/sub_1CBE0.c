__int64 __fastcall sub_1CBE0(__int64 a1)
{
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  v2[3] = __readfsqword(0x28u);
  v2[0] = 0;
  v2[1] = -1;
  if ( !(unsigned __int8)sub_18B00(a1, 0x16u, 0, 0) || !(unsigned __int8)sub_18D10(a1, (int *)v2) )
    return 0;
  if ( LODWORD(v2[0]) )
  {
    if ( LODWORD(v2[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 22);
    return 0;
  }
  return sub_18280(a1);
}

