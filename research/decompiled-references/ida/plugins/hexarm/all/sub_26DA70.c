__int64 __fastcall sub_26DA70(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r15
  int v5; // r12d
  __int64 v6; // rbx
  int tinfo_size; // ebp
  int v8; // eax

  v4 = a3;
  if ( a3 != a2 )
  {
    while ( (unsigned int)(*(_DWORD *)(v4 + 8) - 59) <= 1
         && (!*a4 || !(unsigned __int8)sub_32A840(*(_QWORD *)a1, v4 + 48, a4)) )
    {
      v6 = *(_QWORD *)(v4 + 24);
      tinfo_size = get_tinfo_size();
      if ( *(_DWORD *)(v4 + 8) == 60 )
        get_tinfo_property();
      else
        copy_tinfo_t();
      v5 = get_tinfo_size();
      clear_tinfo_t();
      if ( tinfo_size != v5 )
        break;
      if ( *(_DWORD *)(v4 + 8) == 60 )
      {
        v8 = *(_DWORD *)(a1 + 440);
        if ( v8 <= 0 )
        {
          if ( !under_debugger )
            sub_3835A0(50968);
          BUG();
        }
        *(_DWORD *)(a1 + 440) = v8 - 1;
      }
      *(_QWORD *)(v4 + 24) = 0;
      if ( v4 )
      {
        sub_2559F0(v4);
        clear_tinfo_t();
        j__qfree();
      }
      if ( a2 == v6 )
        return v6;
      v4 = v6;
    }
  }
  return v4;
}

