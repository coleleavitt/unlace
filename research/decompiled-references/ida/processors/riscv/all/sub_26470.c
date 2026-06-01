__int64 __fastcall sub_26470(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r14
  void *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  __int64 v16; // r14
  char v17; // al
  __int64 v18; // rdi
  __m128i v19; // xmm1
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i v24; // [rsp+0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+10h] [rbp-40h] BYREF
  __m128i v26; // [rsp+18h] [rbp-38h] BYREF
  char v27; // [rsp+28h] [rbp-28h]
  unsigned __int64 v28; // [rsp+38h] [rbp-18h]

  v28 = __readfsqword(0x28u);
  if ( a4 == 2 )
    return 0;
  v4 = *(_QWORD **)(a1 + 496);
  if ( !v4 )
    return 0;
  v7 = &loc_10000;
  v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v8 <= 7 )
  {
    v7 = (void *)dword_2C040[v8];
    if ( (_DWORD)v7 != (_DWORD)&loc_10000 )
    {
      v7 = (void *)(a4 | (unsigned int)v7);
      if ( a4 >= (unsigned int)&loc_10000 )
        v7 = &loc_10000;
    }
  }
  v27 = 0;
  v9 = -1;
  v26 = 0;
  v10 = v4[1];
  v25 = 0;
  v11 = *(__int64 (__fastcall **)(__int64, __int64))(*v4 + 16LL);
  v12 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 16LL) & a3;
  if ( v11 != sub_24640 )
  {
    v24.m128i_i32[0] = (int)v7;
    v22 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))v11)(v4, v12, 0, -1);
    v7 = (void *)v24.m128i_u32[0];
    v12 = v22;
    v9 = v23;
  }
  reg_finder_find(v4, &v25, v12, v9, v7, 0, 0);
  v13 = v25;
  v14 = *a2;
  v15 = _mm_loadu_si128(&v26);
  v16 = v25;
  v25 = 0;
  v26 = 0;
  if ( v14 )
  {
    a2[1] = 0;
    v24 = v15;
    qfree(v14);
    v17 = v27;
    v18 = v25;
    *a2 = v16;
    v19 = _mm_load_si128(&v24);
    *((_BYTE *)a2 + 24) = v17;
    *(__m128i *)(a2 + 1) = v19;
    if ( v18 )
    {
      v26.m128i_i64[0] = 0;
      qfree(v18);
    }
  }
  else
  {
    *a2 = v13;
    v21 = v27;
    *(__m128i *)(a2 + 1) = v15;
    *((_BYTE *)a2 + 24) = v21;
  }
  return 1;
}

