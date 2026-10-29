__int64 __fastcall sub_14F80(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 module_data; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx

  module_data = get_module_data((unsigned int)dword_2B9D0);
  v9 = a4[1];
  v10 = module_data;
  result = 0;
  if ( v9 != -1 && (a4[3] & 0x100) == 0 )
  {
    v12 = 4;
    if ( (a4[3] & 0x4F) == *(_DWORD *)(v10 + 5280) )
      v12 = 2;
    *a2 = v9;
    v13 = v12 * a5 + v9;
    *a1 = v13;
    v14 = *a4;
    LOBYTE(v12) = v13 != *a4;
    LOBYTE(v14) = *a4 != -1;
    return (unsigned int)v14 & (unsigned int)v12 ^ 1;
  }
  return result;
}

