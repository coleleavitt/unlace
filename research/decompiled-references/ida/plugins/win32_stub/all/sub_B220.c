__int64 __fastcall sub_B220(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 module_data; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = (unsigned int)dword_3BBE4;
  v14[1] = __readfsqword(0x28u);
  v13 = nullptr;
  v12 = v2;
  module_data = get_module_data();
  if ( module_data )
  {
    v5 = module_data;
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v6 == sub_A830 )
      v7 = v5 + 224;
    else
      v7 = v6(v5);
    v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, __int64, __int64 **, _QWORD *))sub_26950)(
           v7 + 864,
           0,
           &v12,
           8,
           &v13,
           v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      qfree();
      *(_QWORD *)(a2 + 8) = v9;
      return set_qerrno();
    }
    else
    {
      if ( v14[0] == 8 )
      {
        v10 = *v13;
        qfree();
      }
      else
      {
        qfree();
        v10 = 0;
      }
      free_idcv();
      *(_BYTE *)a2 = 9;
      *(_QWORD *)(a2 + 8) = v10;
      return 0;
    }
  }
  else
  {
    sub_A930(v3);
    return sub_B330();
  }
}

