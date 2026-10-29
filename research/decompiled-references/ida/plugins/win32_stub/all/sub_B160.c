__int64 __fastcall sub_B160(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 module_data; // rax
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rdi
  int v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+8h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 8);
  v12 = __readfsqword(0x28u);
  v10 = v2;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = (unsigned int)dword_3BBE4;
  v11 = v3;
  module_data = get_module_data();
  if ( !module_data )
    sub_A930(v4);
  v6 = module_data;
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
  if ( v7 == sub_A830 )
    v8 = v6 + 224;
  else
    v8 = v7(v6);
  *(_QWORD *)(a2 + 8) = (int)((__int64 (__fastcall *)(__int64, __int64, int *, __int64, _QWORD, _QWORD))sub_26950)(
                               v8 + 864,
                               1,
                               &v10,
                               16,
                               0,
                               0);
  return 0;
}

