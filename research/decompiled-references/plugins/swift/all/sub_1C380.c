__int64 __fastcall sub_1C380(__int64 a1, _DWORD *a2, char a3, __int64 a4)
{
  int v5; // r12d

  if ( a3 )
  {
    if ( !*(_DWORD *)(get_ph() + 4) )
    {
      v5 = sub_1E0F0(*(_QWORD *)(a1 + 16), a4);
LABEL_4:
      ++*(_QWORD *)(a1 + 16);
      goto LABEL_8;
    }
    if ( *(_DWORD *)(get_ph() + 4) == 13 )
    {
      v5 = sub_1E780(*(_QWORD *)(a1 + 16), a4);
      goto LABEL_4;
    }
    return 0;
  }
  if ( *(_DWORD *)(get_ph() + 4) )
  {
    if ( *(_DWORD *)(get_ph() + 4) != 13 )
      return 0;
    v5 = sub_1E730(*(_QWORD *)(a1 + 8), a4);
  }
  else
  {
    v5 = sub_1E0B0(*(_QWORD *)(a1 + 8), a4);
  }
  ++*(_QWORD *)(a1 + 8);
LABEL_8:
  if ( v5 != -2 )
  {
    if ( v5 != -1 )
    {
      cleanup_argloc(a2);
      a2[2] = v5;
      *a2 = 3;
      return 1;
    }
    return 0;
  }
  if ( under_debugger )
    BUG();
  interr(30735);
  return sub_1C480();
}
