__int64 __fastcall sub_19AD0(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[5]; // [rsp+0h] [rbp-28h] BYREF

  v2[3] = __readfsqword(0x28u);
  *(_WORD *)(a1 + 80) = 257;
  v2[0] = 0;
  v2[1] = -1;
  if ( !(unsigned __int8)sub_18B00(a1, 9u, 0, 0) )
    return 0;
  result = sub_18D10(a1, (int *)v2);
  if ( !(_BYTE)result )
    return 0;
  if ( LODWORD(v2[0]) )
  {
    if ( LODWORD(v2[0]) == 1 )
    {
      *(_BYTE *)(a1 + 81) = 0;
    }
    else if ( !*(_BYTE *)(a1 + 1289) )
    {
      sub_BDA0((__int64)"Error detaching from the process.\n");
    }
    return 0;
  }
  *(_DWORD *)(a1 + 76) = 0;
  return result;
}

