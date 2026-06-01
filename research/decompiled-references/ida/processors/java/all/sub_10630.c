__int64 __fastcall sub_10630(_QWORD *a1, unsigned __int16 a2, unsigned int a3, unsigned __int8 a4)
{
  int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 module_data; // rax

  v6 = *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 160);
  v7 = v6 - *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164);
  v8 = v7 - *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176);
  if ( (int)v8 <= 3 )
  {
    module_data = get_module_data((unsigned int)dword_2D4F4);
    v8 = sub_FC10(a1, module_data);
    if ( !v8 )
      return 1;
  }
  if ( a4 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, a4);
  v9 = (a1[4] == 0) + a1[4] - 1LL;
  v10 = get_module_data((unsigned int)dword_2D4F4);
  v11 = (unsigned int)dword_2D4F4;
  *(_QWORD *)(v10 + 184) = v9;
  v12 = get_module_data(v11);
  if ( (int)sub_1B1E0(a1, v12, a2, v8, a3, sub_FD40) < 0 )
    return 1;
  v13 = (a1[4] == 0) + a1[4] - 1LL;
  v14 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 184);
  v15 = get_module_data((unsigned int)dword_2D4F4);
  *(_QWORD *)(v15 + 176) += v13 - v14;
  if ( a4 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL))(a1, a4);
  return 0;
}

