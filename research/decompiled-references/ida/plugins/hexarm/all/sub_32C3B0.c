__int64 *__fastcall sub_32C3B0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rax
  __int64 ph; // r13
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a3 == 4 )
  {
    v4 = 9;
  }
  else
  {
    v4 = 25;
    if ( a3 != 8 )
    {
      ph = get_ph();
      if ( (unsigned __int8)getinf() )
        v7 = (unsigned __int8)getinf();
      else
        v7 = *(_QWORD *)(ph + 120);
      if ( a3 == v7 )
      {
        v4 = 41;
      }
      else
      {
        v8 = 2;
        if ( (*(_BYTE *)(ph + 11) & 8) != 0 )
          v8 = *(_QWORD *)(ph + 120);
        if ( a3 == v8 )
        {
          v4 = 57;
        }
        else
        {
          v4 = 0;
          if ( a3 == 16 )
          {
            *a1 = 0;
            copy_tinfo_t();
            return a1;
          }
        }
      }
    }
  }
  *a1 = v4;
  return a1;
}

