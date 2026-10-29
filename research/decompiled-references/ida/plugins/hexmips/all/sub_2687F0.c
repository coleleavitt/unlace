bool __fastcall sub_2687F0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  int v4; // edx
  char tinfo_property; // al

  if ( *(_DWORD *)(a1 + 436) )
  {
LABEL_18:
    if ( !*(_BYTE *)(a1 + 453) )
      return 1;
    return *(_DWORD *)(a1 + 444) != 3;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 444) & 2) != 0 )
    {
      v1 = *(_QWORD *)(a1 + 16);
      v2 = *(_DWORD *)(v1 + 8) - 1;
      if ( v2 >= 0 )
      {
        v3 = *(_QWORD *)v1 + 8LL * (unsigned int)v2;
        while ( *(_QWORD *)v3 )
        {
          v4 = *(_DWORD *)(*(_QWORD *)v3 + 8LL);
          if ( v4 == 51 )
          {
            if ( !*(_QWORD *)(a1 + 64) )
              goto LABEL_18;
            tinfo_property = get_tinfo_property();
            if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
              goto LABEL_18;
            return 0;
          }
          if ( v4 == 48 )
          {
            --v2;
            v3 -= 8;
            if ( v2 != -1 )
              continue;
          }
          break;
        }
      }
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        get_tinfo_property();
        copy_tinfo_t();
        do
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD && (get_tinfo_property() & 0xF) != 0xB )
            goto LABEL_24;
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            if ( (unsigned int)find_tinfo_udt_member() == -1 )
            {
              clear_tinfo_t();
LABEL_24:
              clear_tinfo_t();
              clear_tinfo_t();
              return 0;
            }
            clear_tinfo_t();
          }
          else
          {
            get_tinfo_property();
            copy_tinfo_t();
            clear_tinfo_t();
          }
        }
        while ( !(unsigned __int8)compare_tinfo() );
        clear_tinfo_t();
        clear_tinfo_t();
        return 1;
      }
    }
    return 0;
  }
}

