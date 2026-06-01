char *__fastcall sub_1AA660(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 module_data; // rax
  __int64 v5; // rcx
  int v6; // edx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  char *result; // rax

  v3 = (unsigned int)dword_4C1BB8;
  module_data = get_module_data();
  v5 = *(_QWORD *)(module_data + 1024);
  v6 = *(_DWORD *)(v5 + 384) + 1;
  v7 = (_QWORD *)(v5 + 24LL * *(int *)(v5 + 384) + 144);
  *(_DWORD *)(v5 + 384) = v6;
  if ( v6 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  v7[1] = 0;
  v8 = sub_3346E0(v3);
  sub_1C3AC0(v8, v7, a1, a2);
  result = "?";
  if ( v7[1] > 1u )
    return (char *)*v7;
  return result;
}

