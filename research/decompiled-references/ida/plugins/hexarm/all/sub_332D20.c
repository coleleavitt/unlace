size_t __fastcall sub_332D20(_QWORD *a1)
{
  size_t v1; // rbp
  __int64 v2; // rax
  size_t v3; // rax

  if ( !*a1 )
    return *(_QWORD *)(a1[1] + 16LL * a1[2] - 8);
  get_func_ranges();
  v1 = MEMORY[0xFFFFFFFFFFFFFFF8];
  v2 = a1[2];
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1[1] + 16 * v2 - 8);
    if ( MEMORY[0xFFFFFFFFFFFFFFF8] < v3 )
      return v3;
  }
  return v1;
}

