unsigned __int64 __fastcall sub_2AF420(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  unsigned __int8 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  char v14; // bl
  __int64 v15; // rdi
  __int64 v16; // r12
  __m128i v17; // xmm1
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __m128i v21; // [rsp+18h] [rbp-50h] BYREF
  char v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
LABEL_11:
    sub_2AA1C0();
  v5 = 80 * a3;
  v6 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A9480 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 56) && *(_DWORD *)(v6 + 16) == *(_DWORD *)(v6 + 64) )
      goto LABEL_11;
  }
  else if ( !v7() )
  {
    goto LABEL_11;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(unsigned __int8 (***)(void))v8;
  if ( (char *)v9 == (char *)sub_2A9480 )
  {
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(v8 + 56) && *(_DWORD *)(v8 + 16) == *(_DWORD *)(v8 + 64) )
      goto LABEL_11;
  }
  else if ( !v9() )
  {
    goto LABEL_11;
  }
  switch_dbctx();
  v10 = *(_QWORD *)(a1 + 40);
  v20 = 0;
  v11 = v5 + v10;
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = v11;
  *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 8));
  v21 = 0;
  sub_2AA6A0(&v20, v12 + 24);
  v14 = *(_BYTE *)(v12 + 48);
  v15 = *(_QWORD *)(v13 + 24);
  v16 = v20;
  v17 = _mm_loadu_si128(&v21);
  v21 = 0;
  v22 = v14;
  v20 = 0;
  if ( v15 )
  {
    *(_QWORD *)(v13 + 32) = 0;
    v19 = v17;
    qfree();
    v17 = _mm_load_si128(&v19);
  }
  *(_QWORD *)(v13 + 24) = v16;
  *(_BYTE *)(v13 + 48) = v14;
  *(__m128i *)(v13 + 32) = v17;
  return v23 - __readfsqword(0x28u);
}

