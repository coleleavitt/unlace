unsigned __int64 __fastcall sub_3EE1E0(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  int v8; // ebx
  int dtype_size; // eax
  int v10; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r13
  int v15; // eax

  v8 = a5 & 1;
  dtype_size = get_dtype_size();
  sub_1D2710(a1, v8 + 15, dtype_size, a3, a4, a2, 0);
  if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
  {
    sub_3E9BF0(a1, 33, a4, (unsigned int)a6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 484LL));
    v12 = *(_QWORD *)(a1 + 832);
    v13 = *(int *)(v12 + 480);
    v14 = *(int *)(v12 + 484);
    v15 = get_dtype_size();
    sub_1D2710(a1, 0x13u, v15, v14, v13, v13, 0);
  }
  v10 = get_dtype_size();
  return sub_3EC840(a1, a2, v10);
}

