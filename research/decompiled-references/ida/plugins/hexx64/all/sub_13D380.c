__int64 __fastcall sub_13D380(_QWORD *a1, double a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rax

  LODWORD(v2) = a1[58] - 1;
  if ( (v2 & 0x80000000) != 0LL )
    return 0xFFFFFFFFLL;
  v2 = (unsigned int)v2;
  while ( 1 )
  {
    if ( v2 >= a1[58] || (v3 = *(int *)(a1[57] + 4 * v2), v3 >= a1[55]) )
    {
      if ( !under_debugger )
        sub_383060(0xC50Au, a2);
      BUG();
    }
    if ( (unsigned int)(*(_DWORD *)(a1[54] + 104 * v3) - 3) <= 1 )
      break;
    if ( (--v2 & 0x80000000) != 0LL )
      return 0xFFFFFFFFLL;
  }
  return *(unsigned int *)(a1[57] + 4 * v2);
}

