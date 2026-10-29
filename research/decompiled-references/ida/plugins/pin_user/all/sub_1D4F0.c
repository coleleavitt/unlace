__int64 __fastcall sub_1D4F0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  v7 = -1;
  if ( !(unsigned __int8)sub_18B00(a1, 0xAu, 0, 0) || !(unsigned __int8)sub_18D10(a1, (int *)&v6) )
    return 0;
  if ( !(_DWORD)v6 )
    return sub_1CD70((__int64 *)a1, v7, a2, v2, v3, v4);
  if ( (_DWORD)v6 == 1 || *(_BYTE *)(a1 + 1289) )
    return 0;
  sub_BDA0((__int64)"Error in send message, packet code %x.\n", 10);
  return 0;
}

