bool __fastcall sub_BE0A0(_QWORD *a1, double a2)
{
  __int64 v2; // rbp
  __int64 v4; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v5[5]; // [rsp+10h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( a1[1] != 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC712u, a2);
LABEL_15:
    BUG();
  }
  if ( !(unsigned __int8)sub_11FD80((char *)*a1, &v4, 0) )
  {
    if ( !under_debugger )
      sub_383060(0xC711u, a2);
    goto LABEL_15;
  }
  v2 = v4;
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(0xC713u, a2);
    goto LABEL_15;
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(*a1 + 80LL), v5, 0) || v5[0] != SLODWORD(v5[0]) )
  {
    if ( !under_debugger )
      sub_383060(0xC710u, a2);
    goto LABEL_15;
  }
  return sub_BDFF0(v2, v5[0], a2) != 0;
}

