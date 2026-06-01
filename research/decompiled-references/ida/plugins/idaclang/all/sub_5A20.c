__int64 __fastcall sub_5A20(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx

  result = get_name_ea(-1);
  if ( result != -1 )
  {
    v8 = result;
    sub_7470((unsigned int)"%a: applying tinfo for %s\n", result, a2, v5, v6, v7);
    return apply_tinfo(v8, a3, 1);
  }
  return result;
}

