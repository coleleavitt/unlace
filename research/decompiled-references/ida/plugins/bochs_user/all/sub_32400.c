void __fastcall sub_32400(__int64 a1, char a2)
{
  const char *v2; // rax

  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 2713) )
    {
      sub_46000(*(_QWORD *)(a1 + 2704));
      if ( **(_BYTE **)(a1 + 2704) )
      {
        v2 = (const char *)sub_44660();
        sub_EB00((__int64)"Exit script error: %s", v2);
      }
    }
  }
  else if ( *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 0x2000LL) )
  {
    if ( (unsigned __int8)qfileexist() )
      qunlink();
    if ( (unsigned __int8)qfileexist() )
      qunlink();
  }
}

