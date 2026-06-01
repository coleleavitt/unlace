__int64 __fastcall sub_3C6CA0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *fchunk; // rax
  __int64 *v5; // rbx
  __int64 *next_func; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 *prev_func; // rax

  switch_dbctx();
  if ( a3 == 1 )
  {
LABEL_7:
    while ( 1 )
    {
      next_func = (__int64 *)get_next_func();
      v5 = next_func;
      if ( !next_func )
        break;
      if ( sub_2B0CC0(*next_func, 0) != -1 )
        return *v5;
    }
    return -1;
  }
  else if ( a3 == 2 )
  {
    fchunk = (__int64 *)get_fchunk();
    v5 = fchunk;
    if ( !fchunk || *fchunk >= a2 || sub_2B0CC0(*fchunk, 0) == -1 )
    {
      while ( 1 )
      {
        prev_func = (__int64 *)get_prev_func();
        v5 = prev_func;
        if ( !prev_func )
          break;
        if ( sub_2B0CC0(*prev_func, 0) != -1 )
          return *v5;
      }
      return -1;
    }
    else
    {
      return *v5;
    }
  }
  else
  {
    if ( !get_func() )
      goto LABEL_7;
    v8 = sub_2B0CC0(a2, 0);
    result = a2;
    if ( v8 == -1 )
      goto LABEL_7;
  }
  return result;
}

