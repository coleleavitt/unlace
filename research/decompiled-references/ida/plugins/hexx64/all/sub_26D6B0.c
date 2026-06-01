__int64 __fastcall sub_26D6B0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, double a5)
{
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rbx
  int tinfo_size; // ebp
  int v9; // eax

  v5 = a3;
  if ( a3 != a2 )
  {
    while ( (unsigned int)(*(_DWORD *)(v5 + 8) - 59) <= 1 && (!*a4 || !(unsigned __int8)sub_32A510(*(_QWORD *)a1)) )
    {
      v7 = *(_QWORD *)(v5 + 24);
      tinfo_size = get_tinfo_size();
      if ( *(_DWORD *)(v5 + 8) == 60 )
        get_tinfo_property();
      else
        copy_tinfo_t();
      v6 = get_tinfo_size();
      clear_tinfo_t();
      if ( tinfo_size != v6 )
        break;
      if ( *(_DWORD *)(v5 + 8) == 60 )
      {
        v9 = *(_DWORD *)(a1 + 440);
        if ( v9 <= 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC718u, a5);
          BUG();
        }
        *(_DWORD *)(a1 + 440) = v9 - 1;
      }
      *(_QWORD *)(v5 + 24) = 0;
      if ( v5 )
      {
        sub_255630(v5, a5);
        clear_tinfo_t();
        j__qfree(v5);
      }
      if ( a2 == v7 )
        return v7;
      v5 = v7;
    }
  }
  return v5;
}

