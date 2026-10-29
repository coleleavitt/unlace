__int64 __fastcall sub_95540(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  int v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbp
  void *exception; // rbx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v15[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*a1 + 16);
  v3 = *(_QWORD *)(v2 + 112);
  if ( (int)v3 <= 0 )
    goto LABEL_17;
  v4 = *(__int64 **)(v2 + 104);
  v5 = (__int64)&v4[(unsigned int)(v3 - 1) + 1];
  while ( 1 )
  {
    v6 = *v4;
    if ( *(_DWORD *)(*v4 + 192) == 1 )
      break;
    if ( (__int64 *)v5 == ++v4 )
      goto LABEL_17;
  }
  if ( !v6 )
  {
LABEL_17:
    exception = __cxa_allocate_exception(0x18u);
    sub_94DC0((__int64)exception, (__int64)"Missing .gnu_debugaltlink-provided file");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'dwarf_file_t::failure_t, (void (*)(void *))sub_28140);
  }
  v7 = sub_87DE0(a1[32], v15, *(_QWORD **)(*a1 + 16), *(_QWORD *)(*a1 + 24), *a2);
  if ( v7 )
    return 0;
  v8 = *(_QWORD *)(v6 + 136);
  v9 = *(_QWORD *)(v8 + 312);
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v8 + 304);
  v11 = 0;
  while ( 1 )
  {
    v12 = v10 + 72 * v11;
    if ( *(_QWORD *)(v12 + 32) )
    {
      if ( !strcmp(*(const char **)(v12 + 24), ".debug_str") )
        break;
    }
    v11 = ++v7;
    if ( v7 >= v9 )
      return 0;
  }
  if ( v12 )
  {
    if ( v15[0] < (unsigned __int64)*(unsigned int *)(v12 + 48) )
      return *(_QWORD *)(v12 + 56) + v15[0];
    return 0;
  }
  return v12;
}

