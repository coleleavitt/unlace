__int64 __fastcall sub_382480(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(get_module_data() + 1008);
  v2 = *(__int64 **)(v1 + 40);
  v3 = &v2[*(_QWORD *)(v1 + 48)];
  if ( v2 == v3 )
    return 0;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( a1 == *(_QWORD *)(v4 + 8) || a1 == *(_QWORD *)(v4 + 16) )
        break;
    }
    if ( v3 == ++v2 )
      return 0;
  }
  return v4;
}

