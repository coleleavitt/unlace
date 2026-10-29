__int64 __fastcall sub_18D10(__int64 a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  const char *v5; // rdx

  while ( 1 )
  {
    v3 = sub_18C50(a1, (__int64)a2, 16);
    if ( !(_BYTE)v3 )
      return 0;
    v2 = *a2;
    if ( (_DWORD)v2 != 5 )
      break;
    sub_18640(a1, (__int64)"PACKET %d: event %x received\n", a2[2], a2[1]);
    if ( *(_DWORD *)(a1 + 84) )
    {
      if ( under_debugger )
        BUG();
      interr();
      return sub_18DF0(1179);
    }
    if ( !(unsigned __int8)sub_18C50(a1, a1 + 84, 1065) )
      return 0;
  }
  v5 = "?";
  if ( (unsigned int)v2 <= 0x1D )
    v5 = off_38B20[v2];
  sub_18640(a1, (__int64)"RECV %s\n", v5);
  return v3;
}

