__int64 __fastcall sub_EFC0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 module_data; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int64 v18; // r8

  while ( 1 )
  {
    v4 = a4;
    v5 = a3;
    v6 = a2;
    v7 = a1;
    v8 = (unsigned int)dword_6AA64;
    module_data = get_module_data();
    if ( !module_data )
    {
      sub_CC60();
      goto LABEL_19;
    }
    v10 = module_data;
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
    if ( v11 == sub_CB10 )
      v12 = v10 + 488;
    else
      v12 = v11(v10);
    if ( v7 )
    {
      a2 = v7;
      v7 = sub_30A00(v12, v7, v6, v5, v4);
      goto LABEL_6;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 776LL))(v12) )
      return 0;
    *(_BYTE *)(v12 + 1024) = 1;
LABEL_6:
    v13 = *(_QWORD *)(v12 + 864);
    if ( v13 )
    {
      a2 = *(unsigned int *)(v12 + 912);
      sub_38270(v13, a2);
    }
    if ( *(__int64 *)(v12 + 944) <= 0 )
      return v7;
    if ( !byte_6AA68 )
      sub_DBE0((__int64)"GDB: \"Use CS:IP in real mode\" might slow down debugging, and \"Set IP\" will not work as expec"
                        "ted unless CS is zero.\n");
    v8 = (unsigned int)dword_6AA64;
    byte_6AA68 = 1;
    v14 = get_module_data();
    if ( v14 )
    {
      *(_QWORD *)(v14 + 152) |= 0x400000000000uLL;
      return v7;
    }
LABEL_19:
    sub_CC40(v8);
    a1 = a2;
    a2 = v16;
    a3 = v17;
    a4 = v18;
  }
}

