__int64 __fastcall sub_28770(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *exception; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v12; // r14
  int v13; // ebx
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rax
  const char *v20; // rdi
  __int64 v21; // r14
  __int16 v22; // [rsp+6h] [rbp-52h] BYREF
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v24[1] = __readfsqword(0x28u);
  *a1 = 0;
  v12 = *(_QWORD *)(a2 + 88);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *))(v12 + 88))(a3, 3, &v23)
    || (*(unsigned int (__fastcall **)(__int64, __int16 *, __int64))(v12 + 200))(v23, &v22, a4)
    || v22 != 7969 )
  {
    return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(v12 + 96))(a3, a1, a4);
  }
  else
  {
    v15 = sub_843E0(a2, 1);
    if ( !v15 )
    {
      exception = __cxa_allocate_exception(0x18u);
      sub_94DC0((_DWORD)exception, (unsigned int)"Missing .gnu_debugaltlink-provided file", v5, v6, v7, v8);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'dwarf_file_t::failure_t, (void (*)(void *))sub_28140);
    }
    v13 = sub_87DE0(v12, v24, a2, a3, v23);
    if ( !v13 )
    {
      v16 = *(_QWORD *)(v15 + 136);
      v17 = *(_QWORD *)(v16 + 312);
      if ( !v17 )
        return (unsigned int)-1;
      v18 = *(_QWORD *)(v16 + 304);
      v19 = 0;
      while ( 1 )
      {
        v20 = src;
        v21 = v18 + 72 * v19;
        if ( *(_QWORD *)(v21 + 32) )
          v20 = *(const char **)(v21 + 24);
        if ( !strcmp(v20, ".debug_str") )
          break;
        v19 = ++v13;
        if ( v13 >= v17 )
          return (unsigned int)-1;
      }
      if ( v21 )
      {
        v13 = -1;
        if ( v24[0] < (unsigned __int64)*(unsigned int *)(v21 + 48) )
        {
          v13 = 0;
          *a1 = *(_QWORD *)(v21 + 56) + v24[0];
        }
      }
      else
      {
        return (unsigned int)-1;
      }
    }
  }
  return (unsigned int)v13;
}

