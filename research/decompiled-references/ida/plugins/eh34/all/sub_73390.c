__int64 sub_73390()
{
  int v1; // eax
  __int64 v2; // rbx

  if ( *(_DWORD *)(get_ph() + 4) )
    return 0;
  if ( !(unsigned __int8)getinf_flag(3, 4) )
    return 0;
  if ( (unsigned int)getinf(5) != 11 )
    return 0;
  v1 = getinf(99);
  if ( v1 == 176 || v1 == 256 || !find_plugin("hexx64", 1) )
    return 0;
  v2 = qalloc_or_throw(4072);
  sub_730C0(v2);
  return set_module_data(&dword_8D578, v2);
}

