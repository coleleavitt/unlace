unsigned __int64 __fastcall sub_3410F0(__m128 a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7)
{
  __int64 module_data; // rbx
  __int64 v8; // rax
  char *v9; // rbp
  int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  struct _Unwind_Exception *v14; // rbx
  const char *v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+28h] [rbp-30h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  module_data = get_module_data();
  v8 = sub_33B410(*(_QWORD *)(module_data + 112), 1u);
  if ( v8 )
  {
    v9 = (char *)v8;
    sub_340930(module_data, a1);
    v15 = nullptr;
    v17 = 0;
    v16 = 0;
    v18 = 0;
    v10 = sub_33BC80(module_data, v9, (__int64 *)&v15, &v17);
    if ( (unsigned __int64)v16 > 1 )
    {
      batch = 1;
      sub_3697A0(module_data, v15, (__int64)&v17, v10, 0.0, a2, a3, a4, v11, v12, a7);
      v14 = (struct _Unwind_Exception *)qexit();
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree((__int64)v15);
      }
      _Unwind_Resume(v14);
    }
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree((__int64)v15);
    }
  }
  return v19 - __readfsqword(0x28u);
}

