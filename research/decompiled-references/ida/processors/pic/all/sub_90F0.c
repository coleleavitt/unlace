__int64 __fastcall sub_90F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const char *a5)
{
  unsigned int v5; // r12d
  __int64 v6; // r15

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(v6 + 246) == 2 )
  {
    if ( !strcmp(a5, "CODE") )
    {
      sub_8B80(a2);
      return 1;
    }
    if ( !strcmp(a5, "DATA") )
    {
      if ( *(_QWORD *)(v6 + 232) == -1 )
      {
        *(_QWORD *)(v6 + 232) = find_free_chunk();
        ea2node();
        netnode_supset();
      }
      stristr();
      sub_8B80(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + a2);
      return 1;
    }
  }
  return v5;
}

