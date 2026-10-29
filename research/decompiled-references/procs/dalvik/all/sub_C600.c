char __fastcall sub_C600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  char result; // al
  unsigned int str_type; // eax
  __int64 v10; // rcx
  char v11; // [rsp+0h] [rbp-18h]

  v6 = (unsigned int)(a3 - 1);
  if ( v6 >= *(_QWORD *)(a1 + 56) )
  {
    sub_BBD0(a1, a2, a3, a4, a5, a6, v11);
    return sub_C690();
  }
  else
  {
    v7 = netnode_altval(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6), (unsigned int)a4, 595);
    result = 0;
    if ( v7 != -1 )
    {
      str_type = get_str_type(v7);
      v10 = str_type;
      if ( str_type == -1 )
        v10 = (unsigned int)getinf(52);
      return get_strlit_contents(a2, v7, -1, v10, 0, 0) != -1;
    }
  }
  return result;
}
