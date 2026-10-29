__int64 __fastcall sub_722A0(_QWORD **a1, _QWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a1[1] )
  {
    v2 = ((__int64 (*)(void))(*a1)[37])();
    if ( v2 && (unsigned __int8)sub_6F820(a1[1], &v4, v2, 0) )
      return sub_55B00(a1[1], a2, v4);
    else
      return 1;
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30563);
    return sub_72360();
  }
}

