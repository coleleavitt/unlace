unsigned __int64 __fastcall sub_2AFE60(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // rdi
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __m128i v19; // xmm0
  __m128i v21; // [rsp+0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __m128i v23; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_11;
  v6 = 48 * a3;
  v7 = 48 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD160 )
  {
    if ( *(_DWORD *)(v7 + 8) != *(_DWORD *)(v7 + 40) )
      goto LABEL_11;
  }
  else if ( v8() )
  {
    goto LABEL_11;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(bool (__fastcall ***)(__int64))v9;
  if ( v10 == sub_2AD160 )
  {
    if ( *(_DWORD *)(v9 + 8) != *(_DWORD *)(v9 + 40) )
      goto LABEL_7;
LABEL_11:
    sub_2ADE20(a4);
  }
  if ( !((unsigned __int8 (*)(void))v10)() )
    goto LABEL_11;
LABEL_7:
  switch_dbctx();
  v11 = *(_QWORD *)(a1 + 40);
  v23 = 0;
  v22 = 0;
  v12 = v6 + v11;
  v13 = *(_QWORD *)(a2 + 40) + v6;
  v14 = v12;
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(v13 + 8);
  sub_2AE320(&v22, v13 + 16, v15, v16);
  v17 = *(_QWORD *)(v14 + 16);
  v18 = v22;
  v19 = _mm_loadu_si128(&v23);
  if ( v17 )
  {
    *(_QWORD *)(v14 + 24) = 0;
    v21 = v19;
    qfree(v17);
    v19 = _mm_load_si128(&v21);
  }
  *(_QWORD *)(v14 + 16) = v18;
  *(__m128i *)(v14 + 24) = v19;
  return v24 - __readfsqword(0x28u);
}

