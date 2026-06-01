__int64 __fastcall sub_6A520(unsigned __int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx

  result = get_fchunk();
  if ( result )
  {
    v3 = result;
    if ( *(char *)(result + 17) < 0 )
    {
      result = *a2;
      if ( *(_QWORD *)(v3 + 24) == *a2 && *(_DWORD *)(v3 + 32) == 1 )
        return remove_func_tail();
    }
    else if ( *(_QWORD *)result >= a1 )
    {
      set_abits();
      return del_func();
    }
    else
    {
      return set_func_end();
    }
  }
  return result;
}

