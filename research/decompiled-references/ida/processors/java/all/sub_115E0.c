__int64 __fastcall sub_115E0(_QWORD *a1, unsigned __int16 a2, unsigned int a3)
{
  __int64 v5; // r14
  __int64 module_data; // rax
  char v7; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( !a2 || a2 == *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
    return sub_108B0(a1, a2);
  if ( (unsigned int)a2 >= *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33153) )
    return sub_10000(a1, a2, 0);
  v7 = 0;
  v5 = *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 33157);
  module_data = get_module_data((unsigned int)dword_2D4F4);
  if ( (unsigned __int8)sub_10290(a1, *(_QWORD *)(module_data + 33165) + a3, 0, v5, a2, &v7) )
    return 0;
  if ( !v7 )
    return sub_10000(a1, a2, 0);
  return 1;
}

