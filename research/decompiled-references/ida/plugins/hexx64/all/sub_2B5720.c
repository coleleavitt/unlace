unsigned __int64 __fastcall sub_2B5720(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // rdi
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // r13
  _QWORD *v12; // r13
  __int64 v13; // rbx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rbx
  __int64 v18; // rdi
  __m128i v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+10h] [rbp-78h]
  __m128i v22; // [rsp+18h] [rbp-70h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __m128i v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_15;
  v6 = a3 << 6;
  v7 = (a3 << 6) + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 48) )
      goto LABEL_15;
  }
  else if ( v8() )
  {
    goto LABEL_15;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(bool (__fastcall ***)(__int64))v9;
  if ( v10 == sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 48) )
      goto LABEL_7;
LABEL_15:
    sub_2ADE20(a4);
  }
  if ( !((unsigned __int8 (*)(void))v10)() )
    goto LABEL_15;
LABEL_7:
  switch_dbctx();
  v11 = *(_QWORD *)(a1 + 40);
  v24 = 0;
  v12 = (_QWORD *)(v6 + v11);
  v13 = *(_QWORD *)(a2 + 40) + v6;
  v12[1] = *(_QWORD *)(v13 + 8);
  v26 = 0;
  v25 = 0;
  switch_dbctx();
  sub_2B0B30((__int64)&v24, v13 + 16);
  copy_tinfo_t();
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 32LL))(
    *(_QWORD *)(a1 + 32),
    &v26,
    *(unsigned int *)(a2 + 12),
    *(unsigned int *)(a1 + 12),
    1);
  switch_dbctx();
  v14 = _mm_loadu_si128(&v25);
  v15 = v24;
  v24 = 0;
  v22 = v14;
  v21 = v15;
  v23 = 0;
  v25 = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree(v24);
  }
  v16 = _mm_loadu_si128(&v22);
  v17 = v21;
  v21 = 0;
  v22 = 0;
  v18 = v12[2];
  if ( v18 )
  {
    v12[3] = 0;
    v20 = v16;
    qfree(v18);
    v16 = _mm_load_si128(&v20);
  }
  v12[2] = v17;
  *(__m128i *)(v12 + 3) = v16;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( v21 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v21);
  }
  return v27 - __readfsqword(0x28u);
}

