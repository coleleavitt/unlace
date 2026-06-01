__int64 __fastcall sub_14B60(_QWORD *a1, _DWORD *a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 *v7; // r15
  char v8; // bl
  __int64 v9; // rdi
  char v10; // al
  unsigned int v11; // r13d
  __int64 v12; // r12
  unsigned int v13; // ebp
  __int64 module_data; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64); // rax
  char v17; // bl
  __int64 (__fastcall *v19)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64); // r10
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 v21; // rdi

  v6 = a3 + 56LL * (int)a4;
  if ( a3 != v6 )
  {
    v7 = (__int64 *)a3;
    v8 = 0;
    while ( 1 )
    {
      if ( *((_BYTE *)v7 + 40) != 9 )
      {
        v11 = *((_DWORD *)v7 + 9);
        v12 = *v7;
        v13 = *((_DWORD *)v7 + 8);
        module_data = get_module_data();
        v15 = module_data;
        if ( !module_data )
        {
          if ( under_debugger )
            BUG();
          interr();
          return sub_14D30(3341);
        }
        v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
        if ( v16 == sub_11DE0 )
          v9 = v15 + 272;
        else
          v9 = v16(v15);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v9 + 304LL))(v9, v13, v12, v11);
        *((_BYTE *)v7 + 40) = v10;
        v8 |= v10 == 0;
      }
      v7 += 7;
      if ( (__int64 *)v6 == v7 )
      {
        v17 = v8 ^ 1;
        goto LABEL_11;
      }
    }
  }
  v17 = 1;
LABEL_11:
  if ( a5 || !v17 )
  {
    v19 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned int, unsigned int, __int64))(*a1 + 56LL);
    if ( v19 == sub_12350 )
    {
      v20 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
      if ( v20 == sub_11DE0 )
        v21 = (__int64)(a1 + 34);
      else
        v21 = v20((__int64)a1);
      return (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v21 + 328LL))(
               v21,
               a2,
               a3,
               a4,
               a5,
               a6);
    }
    else
    {
      return v19(a1, (__int64)a2, a3, a4, a5, a6);
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return 1;
  }
}

