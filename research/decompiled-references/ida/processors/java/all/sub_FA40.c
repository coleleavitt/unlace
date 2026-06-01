__int64 __fastcall sub_FA40(_QWORD *a1, char a2)
{
  unsigned __int8 v2; // bp
  __int64 module_data; // rax
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD *, const char *, __int64); // r14
  const char *v6; // rsi
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdx

  *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176) = 0;
  v2 = getinf(40);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  setinf(40, *(unsigned __int8 *)(module_data + 164));
  v4 = 0xFFFFFFFFLL;
  v5 = *(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL);
  if ( !a2 )
    v4 = *(unsigned int *)(get_module_data((unsigned int)dword_2D4F4) + 164);
  v6 = s1;
  if ( a1[4] )
    v6 = (const char *)a1[3];
  v7 = v5(a1, v6, v4);
  setinf(40, v2);
  a1[4] = 0;
  v8 = *(unsigned int *)(get_module_data((unsigned int)dword_2D4F4) + 156);
  if ( a1[5] < v8 )
    a1[3] = qvector_reserve(a1 + 3, a1[3], v8, 1);
  return v7;
}

