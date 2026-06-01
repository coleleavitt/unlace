unsigned __int64 __fastcall sub_3F6940(__int64 a1, int a2, int a3, __int64 a4, double a5)
{
  int v7; // ebp
  unsigned __int64 dtype_size; // r12
  unsigned __int64 result; // rax
  int v10; // r12d
  int *v11; // rdi
  __int64 (__fastcall *v12)(__int64, int); // rdx
  __int64 v13; // rsi
  int v14; // r13d
  int v15; // r15d
  __int64 v16; // r9
  int v17; // eax
  int i; // [rsp+8h] [rbp-50h]
  int v19; // [rsp+Ch] [rbp-4Ch]
  int v22; // [rsp+18h] [rbp-40h]
  unsigned __int8 dtype_by_size; // [rsp+1Fh] [rbp-39h]

  v19 = 163;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    v19 = 61;
  v22 = *(unsigned __int16 *)(a4 + 6) - v19;
  v7 = sub_3EE210(a1, a4, a5);
  dtype_by_size = get_dtype_by_size();
  sub_3EE110(a1, a4, a5);
  dtype_size = get_dtype_size();
  result = dtype_size / (unsigned int)sub_3EE210(a1, a4, a5);
  v10 = result;
  if ( a2 == 1 )
  {
    v10 = *(_DWORD *)(a4 + 8) * result;
    if ( v10 > 16 / v7 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC8E4u, a5);
      BUG();
    }
  }
  else if ( a2 <= 0 )
  {
    return result;
  }
  for ( i = 0; i < a2; result = (unsigned int)i )
  {
    v11 = *(int **)(a1 + 832);
    v12 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v11 + 168LL);
    v13 = (unsigned int)(v19 + (i + v22) % 32);
    if ( v12 == sub_3EA010 )
    {
      v14 = sub_3EA010((__int64)v11, v13);
    }
    else
    {
      v17 = v12((__int64)v11, v13);
      v11 = *(int **)(a1 + 832);
      v14 = v17;
    }
    v15 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v16 = v14;
        ++v15;
        v14 += v7;
        sub_3F56D0(
          a1,
          2u,
          dtype_by_size,
          v11[16],
          a3,
          v16,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
        v11 = *(int **)(a1 + 832);
      }
      while ( v10 != v15 );
    }
    sub_3F68B0(a1, a3, v7, v11[158]);
    ++i;
  }
  return result;
}

