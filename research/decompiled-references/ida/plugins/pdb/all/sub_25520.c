__int64 __fastcall sub_25520(__int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64 *); // rax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (__int64 *)a1[6];
  v3 = *a1;
  a1[11] = 0;
  a1[10] = (__int64)v2;
  v4 = *(__int64 (__fastcall **)(__int64 *))(v3 + 16);
  if ( v4 != sub_24620 )
    return v4(a1);
  if ( v2 == a1 + 4 )
    return 0;
  v5 = v2[6];
  result = 0;
  if ( v5 )
  {
    v7 = v2[5];
    a1[11] = 1;
    a1[9] = v7;
    if ( v5 == 1 )
    {
      v8 = std::_Rb_tree_increment();
      a1[11] = 0;
      a1[10] = v8;
    }
    return 1;
  }
  return result;
}

