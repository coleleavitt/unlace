__int64 __fastcall sub_36480(_DWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( 2 * a4 >= a3 && (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    if ( (unsigned __int8)get_tinfo_details(*a2, 13) )
    {
      if ( a4 >= a3 )
      {
        *a1 = 3;
        a1[2] = 2;
        return 1;
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 4;
  }
}

