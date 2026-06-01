char *__fastcall sub_1AEC60(__int64 a1, signed int a2)
{
  __int64 module_data; // rax
  __int64 v3; // rcx
  int v4; // edx
  __int64 *v5; // rbx
  _DWORD *v6; // rax
  char *result; // rax

  module_data = get_module_data();
  v3 = *(_QWORD *)(module_data + 1024);
  v4 = *(_DWORD *)(v3 + 384) + 1;
  v5 = (__int64 *)(v3 + 24LL * *(int *)(v3 + 384) + 144);
  *(_DWORD *)(v3 + 384) = v4;
  if ( v4 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v5[1] = 0;
  v6 = (_DWORD *)sub_339CA0();
  sub_1C8140(v6, v5, a1, a2);
  result = "?";
  if ( (unsigned __int64)v5[1] > 1 )
    return (char *)*v5;
  return result;
}

