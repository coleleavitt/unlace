unsigned __int64 __fastcall sub_60640(__int64 a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  int v8; // edx
  unsigned __int64 result; // rax
  __int64 module_data; // rax
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v5 = a3;
  v6 = *(_QWORD **)(a1 + 8LL * a3 + 8);
  v11[1] = __readfsqword(0x28u);
  if ( !v6 )
  {
    switch_dbctx();
    module_data = get_module_data();
    *(_QWORD *)(a1 + 8 * v5 + 8) = module_data;
    v6 = (_QWORD *)module_data;
  }
  v8 = sub_1DD90(v6, a4, v11);
  result = a4;
  if ( v8 != -1 )
    return v11[0];
  return result;
}
