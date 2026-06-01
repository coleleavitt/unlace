__int64 __fastcall sub_19C30(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int v3; // ebp
  __int64 v4; // rcx
  unsigned int v5; // ecx
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v2 = *(_DWORD *)(a2 + 20);
  v9 = __readfsqword(0x28u);
  v3 = v2 & 0xFFFFFFF;
  if ( *(_BYTE *)(a1 + 83) && v3 == 11 )
  {
    v4 = *(int *)(a1 + 1292);
    v3 = 1;
    if ( !(_DWORD)v4 )
      goto LABEL_9;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 81) && v3 - 5 > 1 && v3 != 1 )
      return 1;
    v4 = *(int *)(a1 + 1292);
    if ( !(_DWORD)v4 )
      goto LABEL_9;
  }
  v7 = 0;
  v8 = -1;
  if ( !(unsigned __int8)sub_18DF0(a1, (int *)&v7, 0x17u, v4, 0) )
    return 0;
  *(_DWORD *)(a1 + 1292) = 0;
LABEL_9:
  v5 = *(unsigned __int8 *)(a2 + 16);
  v7 = 0;
  v8 = -1;
  if ( !(unsigned __int8)sub_18B00(a1, 0xEu, v3, v5) || !(unsigned __int8)sub_18D10(a1, (int *)&v7) )
    return 0;
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 && !*(_BYTE *)(a1 + 1289) )
      sub_BDA0((__int64)"Error in send message, packet code %x.\n", 14);
    return 0;
  }
  *(_DWORD *)(a1 + 76) = 2;
  *(_BYTE *)(a1 + 82) = 0;
  return 1;
}

