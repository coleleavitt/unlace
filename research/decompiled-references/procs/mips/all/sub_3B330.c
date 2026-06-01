__int64 __fastcall sub_3B330(__int64 a1, __int64 a2, char a3)
{
  __int64 ioport; // rax

  if ( (*(_DWORD *)(a1 + 344) == 1) != a3 )
    return 0;
  ioport = find_ioport(a1 + 160);
  if ( ioport && *(_QWORD *)(ioport + 16) > 1u )
    return *(_QWORD *)(ioport + 8);
  else
    return 0;
}
