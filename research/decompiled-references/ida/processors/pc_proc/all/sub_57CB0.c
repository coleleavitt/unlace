char __fastcall sub_57CB0(__int64 a1, __int64 a2, int a3, double a4)
{
  char result; // al

  *(_BYTE *)(a1 + 5488) = a3 != 3;
  switch ( a3 )
  {
    case 2:
      if ( !(unsigned __int8)sub_56F90(a1, a2, 1, 0) )
      {
LABEL_11:
        sub_52730((__int64)"%a: can't find Borland's RTTI descriptor (type %d)\n", a4, a2);
        return 1;
      }
      return a3 == 2;
    case 3:
      if ( (unsigned __int8)sub_545A0(a1, a2, 1, 0, a4) )
        return a3 == 1;
      if ( !(unsigned __int8)sub_56F90(a1, a2, 1, 0) )
      {
        netnode_supdel();
        return 1;
      }
      return a3 == 2;
    case 1:
      if ( (unsigned __int8)get_byte() == 0x90 )
      {
        result = get_fixups();
        if ( !result )
          return result;
      }
      if ( (unsigned __int8)sub_545A0(a1, a2, 1, 0, a4) )
        return a3 == 1;
      goto LABEL_11;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_57DD0(10142);
}

