__int64 __fastcall sub_1B4D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD v4[7]; // [rsp+0h] [rbp-38h] BYREF

  v4[3] = __readfsqword(0x28u);
  v4[0] = 0;
  v4[1] = -1;
  if ( (unsigned __int8)sub_18B00(a1, 0x11u, a2, 0) && (unsigned __int8)sub_18D10(a1, (int *)v4) )
  {
    if ( !LODWORD(v4[0]) )
      return 1;
    if ( LODWORD(v4[0]) != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 17);
  }
  v2 = *(unsigned __int8 *)(a1 + 81);
  if ( (_BYTE)v2 )
    return 1;
  if ( !*(_BYTE *)(a1 + 1289) )
    sub_BDA0((__int64)"Error deleting a breakpoint from the PIN side.\n");
  return v2;
}

