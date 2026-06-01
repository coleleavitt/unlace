char __fastcall sub_34480(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char result; // al
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (unsigned __int64)(unsigned int)(a3 - 1) >= *(_QWORD *)(a1 + 56) )
  {
    sub_30F90(a1, a2);
    return sub_34510(a1, a2, v5, v6);
  }
  else
  {
    v3 = netnode_altval();
    result = 0;
    if ( v3 != -1 )
    {
      if ( (unsigned int)get_str_type() == -1 )
        getinf();
      return get_strlit_contents() != -1;
    }
  }
  return result;
}

