unsigned __int64 __fastcall sub_C4C0(__int64 a1, int a2)
{
  unsigned __int64 v3; // [rsp+18h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)choose_ioport_device2() )
  {
    netnode_supset();
    if ( *(_QWORD *)(a1 + 232) )
      sub_B480(a1, a2);
  }
  return v3 - __readfsqword(0x28u);
}

