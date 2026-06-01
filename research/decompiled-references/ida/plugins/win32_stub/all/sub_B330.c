__int64 __fastcall sub_B330(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5, _QWORD *a6, char a7)
{
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 module_data; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // r15
  int v18; // r13d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d

  result = 0;
  if ( a2 == 2 )
  {
    v9 = a3 + a4;
    callui(27);
    v11 = v9;
    unpack_dq();
    v12 = unpack_dd();
    *a5 = 0;
    v13 = v12;
    *a6 = 0;
    if ( !v12 )
      return 1;
    module_data = get_module_data();
    v15 = module_data;
    if ( module_data )
    {
      v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)module_data + 32LL);
      if ( v16 != sub_A830 )
        ((void (__fastcall *)(__int64, __int64))v16)(v15, v11);
      if ( qfopen() )
      {
        v17 = qalloc();
        if ( v17 )
        {
          qfseek();
          v18 = qfread();
          qfclose();
          if ( v18 >= 0 && v13 >= v18 )
          {
            *a5 = v17;
            *a6 = v18;
            return 1;
          }
          qfree();
        }
      }
      return 4294967294LL;
    }
    else
    {
      sub_A930(0);
      return sub_B4F0(0, v11, v19, v20, v21, v22, a7);
    }
  }
  return result;
}

