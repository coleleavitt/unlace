unsigned __int64 __fastcall sub_260370(signed int *a1, void **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v8; // r14
  int v9; // r13d
  __int64 module_data; // rax
  _BYTE v12[1032]; // [rsp+0h] [rbp-448h] BYREF
  unsigned __int64 v13; // [rsp+408h] [rbp-40h]

  v6 = a4[5];
  v13 = __readfsqword(0x28u);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 216);
  }
  else
  {
    module_data = get_module_data();
    v6 = a4[5];
    v8 = module_data;
  }
  v9 = sub_260180(v6, (__int64)v12, 1024, *a1);
  (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _BYTE *))*a4)(a4, a3, &unk_3F4147, v12);
  sub_25DB40(a2, v8, a3 + v9 + 5, 0, byte_3F425A, a4, 0x45u);
  return v13 - __readfsqword(0x28u);
}

