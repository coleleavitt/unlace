_QWORD *__fastcall sub_32C150(_QWORD *a1, __int64 a2, int a3, double a4)
{
  __int64 ph; // r12
  __int64 v7; // rax
  __int64 v8; // rax

  if ( a3 == 4 )
  {
    *a1 = 9;
    return a1;
  }
  else
  {
    if ( a3 == 8 )
    {
      *a1 = 25;
      return a1;
    }
    ph = get_ph();
    if ( (unsigned __int8)getinf() )
      v7 = (unsigned __int8)getinf();
    else
      v7 = *(_QWORD *)(ph + 120);
    if ( a3 != v7 )
    {
      v8 = 2;
      if ( (*(_BYTE *)(ph + 11) & 8) != 0 )
        v8 = *(_QWORD *)(ph + 120);
      if ( a3 == v8 )
      {
        *a1 = 57;
      }
      else
      {
        *a1 = 0;
        if ( a3 != 16 || (copy_tinfo_t(), !*(_BYTE *)a1) )
        {
          if ( !under_debugger )
            sub_383060(0xC5C8u, a4);
          BUG();
        }
      }
      return a1;
    }
    *a1 = 41;
    return a1;
  }
}

