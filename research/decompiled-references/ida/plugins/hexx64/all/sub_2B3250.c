unsigned __int64 __fastcall sub_2B3250(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bl
  __int64 v18; // rdi
  __int64 v19; // r12
  __m128i v20; // xmm1
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  __m128i v24; // [rsp+18h] [rbp-50h] BYREF
  char v25; // [rsp+28h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_5;
  v6 = 80 * a3;
  v7 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2AD100 )
  {
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 56) && *(_DWORD *)(v7 + 16) == *(_DWORD *)(v7 + 64) )
      goto LABEL_7;
LABEL_5:
    sub_2ADE20(a4);
  }
  if ( ((unsigned __int8 (*)(void))v8)() )
    goto LABEL_5;
LABEL_7:
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(unsigned __int8 (***)(void))v9;
  if ( (char *)v10 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v9 + 8) == *(_QWORD *)(v9 + 56) && *(_DWORD *)(v9 + 16) == *(_DWORD *)(v9 + 64) )
      goto LABEL_5;
  }
  else if ( !v10() )
  {
    goto LABEL_5;
  }
  switch_dbctx();
  v11 = *(_QWORD *)(a1 + 40);
  v23 = 0;
  v12 = v6 + v11;
  v13 = *(_QWORD *)(a2 + 40) + v6;
  v14 = v12;
  *(__m128i *)(v12 + 8) = _mm_loadu_si128((const __m128i *)(v13 + 8));
  v24 = 0;
  sub_2AE320(&v23, v13 + 24, v15, v16);
  v17 = *(_BYTE *)(v13 + 48);
  v18 = *(_QWORD *)(v14 + 24);
  v19 = v23;
  v20 = _mm_loadu_si128(&v24);
  v24 = 0;
  v25 = v17;
  v23 = 0;
  if ( v18 )
  {
    *(_QWORD *)(v14 + 32) = 0;
    v22 = v20;
    qfree(v18);
    v20 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(v14 + 24) = v19;
  *(_BYTE *)(v14 + 48) = v17;
  *(__m128i *)(v14 + 32) = v20;
  return v26 - __readfsqword(0x28u);
}

