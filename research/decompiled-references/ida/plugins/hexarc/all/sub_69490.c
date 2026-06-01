unsigned __int64 __fastcall sub_69490(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // xmm0
  __int64 v8; // rdi
  unsigned int *v9; // r12
  __int64 v10; // rbx
  __m128i v11; // xmm0
  unsigned int *v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbp
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, int, int); // rax
  int v17; // edx
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64, int); // rax
  __int64 (__fastcall *v20)(__int64, int); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, int, int); // rax
  int v24; // esi
  __m128i v25; // [rsp+0h] [rbp-68h] BYREF
  unsigned int *v26; // [rsp+10h] [rbp-58h] BYREF
  __m128i v27; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  sub_69350((__int64)&v26, a1, a3, a4, a5, a6);
  v7 = _mm_loadu_si128(&v27);
  v8 = a1[19];
  v9 = v26;
  v27 = 0;
  v26 = nullptr;
  v10 = v7.m128i_i64[0];
  if ( v8 )
  {
    a1[20] = 0;
    v25 = v7;
    qfree();
    v11 = _mm_load_si128(&v25);
    v12 = v26;
    a1[19] = (__int64)v9;
    *((__m128i *)a1 + 10) = v11;
    if ( v12 )
    {
      v27.m128i_i64[0] = 0;
      qfree();
      v10 = a1[20];
      v9 = (unsigned int *)a1[19];
    }
  }
  else
  {
    a1[19] = (__int64)v9;
    *((__m128i *)a1 + 10) = v7;
  }
  v25.m128i_i64[0] = (__int64)&v9[v10];
  if ( (unsigned int *)v25.m128i_i64[0] == v9 )
    return v28 - __readfsqword(0x28u);
  do
  {
    v13 = *v9;
    v14 = 24LL * (int)*v9;
    while ( 1 )
    {
      v18 = *a1;
      v19 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96);
      if ( v19 == sub_5EB10 )
        break;
      v15 = v19((__int64)a1, v13);
      v18 = *a1;
LABEL_7:
      if ( !v15 )
        goto LABEL_13;
      v16 = *(__int64 (__fastcall **)(__int64, int, int))(v18 + 112);
      if ( v16 == sub_5EB50 )
        v17 = **(_DWORD **)(a1[6] + v14);
      else
        v17 = v16((__int64)a1, v13, 0);
      sub_66DA0((__int64)a1, v13, v17);
    }
    if ( a1[7] )
    {
      v15 = *(_DWORD *)(a1[6] + v14 + 8);
      goto LABEL_7;
    }
LABEL_13:
    v20 = *(__int64 (__fastcall **)(__int64, int))(v18 + 104);
    if ( v20 == sub_5EB30 )
    {
LABEL_14:
      if ( a1[10] )
      {
        v22 = *(_DWORD *)(a1[9] + v14 + 8);
        goto LABEL_18;
      }
    }
    else
    {
      while ( 1 )
      {
        v22 = v20((__int64)a1, v13);
LABEL_18:
        if ( !v22 )
          break;
        v23 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
        if ( v23 == sub_5EB70 )
          v24 = **(_DWORD **)(a1[9] + v14);
        else
          v24 = v23((__int64)a1, v13, 0);
        sub_66DA0((__int64)a1, v24, v13);
        v20 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
        if ( v20 == sub_5EB30 )
          goto LABEL_14;
      }
    }
    ++v9;
  }
  while ( (unsigned int *)v25.m128i_i64[0] != v9 );
  return v28 - __readfsqword(0x28u);
}

