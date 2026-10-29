__int64 __fastcall sub_3DF6E0(__int64 a1, __int64 a2, _QWORD *a3, int a4, double a5, double a6, __m128i a7, __m128 a8)
{
  __int64 v10; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  char *v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 *func; // rax
  unsigned __int64 *v18; // r14
  __int64 *v19; // r13
  __int64 *v20; // rax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  int v23; // r11d
  __m128i v24; // xmm0
  volatile signed __int32 *v25; // rdi
  __int64 v26; // rax
  __m128i v28; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v10 = *a3;
  v29 = __readfsqword(0x28u);
  v12 = (*(__int64 (__fastcall **)(_QWORD *, double, double, double, double))(v10 + 128))(
          a3,
          a5,
          a6,
          *(double *)a7.m128i_i64,
          *(double *)a8.m128_u64);
  v13 = v12;
  if ( dword_4EEA08 == (*(unsigned int (__fastcall **)(_QWORD *))(*a3 + 112LL))(a3) )
    v13 = a3[5];
  v14 = (char *)&unk_4317E0;
  if ( v13 == -1 )
  {
    *(_DWORD *)a2 = -2;
    sub_6B870((__int64 *)(a2 + 16));
    return 0;
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)v14;
    if ( *(_DWORD *)v14 >= a4 )
      break;
    v14 += 4;
    if ( v14 == "$ mbui.view_id" )
    {
      v15 = 1;
      break;
    }
  }
  *(_DWORD *)(a2 + 64) = v15;
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16
    || *(_DWORD *)(v16 + 56) != v15
    || !*(_QWORD *)(v16 + 24)
    || !rangeset_t_find_range()
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 60LL) - 1) > 1 )
  {
    func = (unsigned __int64 *)get_func();
    v18 = func;
    if ( func )
    {
      v19 = *(__int64 **)(a1 + 48);
      v20 = (__int64 *)sub_3D4440((__int64)v19, *func);
      if ( v21 == v20 )
      {
LABEL_18:
        v25 = *(volatile signed __int32 **)(a2 + 48);
        v24.m128i_i64[0] = 0;
        *(_OWORD *)(a2 + 40) = 0;
        if ( !v25 )
          return sub_3DF530(a1, a2, (__int64)a3, v18, *(double *)v24.m128i_i64, a6, a7, a8);
      }
      else
      {
        while ( v23 != *(_DWORD *)(*v20 + 56) )
        {
          if ( v21 == ++v20 )
            goto LABEL_18;
        }
        sub_3DEE30(&v28, *v20, *v19, v22, a5, a6, *(double *)a7.m128i_i64, a8);
        v24 = _mm_load_si128(&v28);
        v25 = *(volatile signed __int32 **)(a2 + 48);
        v26 = v24.m128i_i64[0];
        *(__m128i *)(a2 + 40) = v24;
        if ( !v25 )
        {
LABEL_16:
          if ( v26 )
            return sub_3D8C80(a1, (__int64 (__fastcall ***)())a2, (__int64)a3);
          return sub_3DF530(a1, a2, (__int64)a3, v18, *(double *)v24.m128i_i64, a6, a7, a8);
        }
      }
      sub_3D56E0(v25);
      v26 = *(_QWORD *)(a2 + 40);
      goto LABEL_16;
    }
    *(_DWORD *)a2 = -2;
    *(_QWORD *)(a2 + 8) = v12;
    sub_6B870((__int64 *)(a2 + 16));
    return 0;
  }
  return sub_3D95E0(a1, a2, (__int64)a3);
}

