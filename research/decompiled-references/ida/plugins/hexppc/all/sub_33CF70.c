unsigned __int64 sub_33CF70()
{
  __int64 module_data; // rbx
  __int64 v1; // rax
  char *v2; // rbp
  unsigned int v3; // eax
  struct _Unwind_Exception *v5; // rbx
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  __int128 v7; // [rsp+8h] [rbp-50h]
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  module_data = get_module_data();
  v1 = sub_337190(*(_QWORD *)(module_data + 112), 1u);
  if ( v1 )
  {
    v2 = (char *)v1;
    sub_33C7B0(module_data);
    v6 = 0;
    v8 = 0;
    v7 = 0;
    v9 = 0;
    v3 = sub_337A00(module_data, v2, (__int64)&v6, &v8);
    if ( (unsigned __int64)v7 > 1 )
    {
      batch = 1;
      sub_365620(module_data, v6, &v8, v3);
      v5 = (struct _Unwind_Exception *)qexit();
      if ( v8 )
      {
        *(_QWORD *)&v9 = 0;
        qfree();
      }
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      _Unwind_Resume(v5);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
  }
  return v10 - __readfsqword(0x28u);
}

