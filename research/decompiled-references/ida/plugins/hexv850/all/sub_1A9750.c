__int64 sub_1A9750()
{
  __int64 module_data; // rax
  __int64 v1; // rcx
  int v2; // edx
  __int64 v3; // rsi

  module_data = get_module_data();
  v1 = *(_QWORD *)(module_data + 1024);
  v2 = *(_DWORD *)(v1 + 384) + 1;
  v3 = v1 + 24LL * *(int *)(v1 + 384) + 144;
  *(_DWORD *)(v1 + 384) = v2;
  if ( v2 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v3 + 8) = 0;
  return v3;
}

