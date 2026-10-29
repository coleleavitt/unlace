bool __fastcall sub_BA660(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v3; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v4[5]; // [rsp+10h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  if ( a1[1] != 2 )
  {
    if ( !under_debugger )
      sub_37EEE0(50962);
LABEL_15:
    BUG();
  }
  if ( !(unsigned __int8)sub_11C340(*a1, &v3, 0) )
  {
    if ( !under_debugger )
      sub_37EEE0(50961);
    goto LABEL_15;
  }
  v1 = v3;
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_37EEE0(50963);
    goto LABEL_15;
  }
  if ( !(unsigned __int8)sub_11C340(*a1 + 80LL, v4, 0) || v4[0] != SLODWORD(v4[0]) )
  {
    if ( !under_debugger )
      sub_37EEE0(50960);
    goto LABEL_15;
  }
  return sub_BA5B0(v1, v4[0]) != 0;
}

