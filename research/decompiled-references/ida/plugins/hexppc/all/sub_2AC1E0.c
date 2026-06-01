unsigned __int64 __fastcall sub_2AC1E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_11;
  v5 = 48 * a3;
  v6 = 48 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2A94E0 )
  {
    if ( *(_DWORD *)(v6 + 8) != *(_DWORD *)(v6 + 40) )
      goto LABEL_11;
  }
  else if ( v7() )
  {
    goto LABEL_11;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2A94E0 )
  {
    if ( *(_DWORD *)(v8 + 8) != *(_DWORD *)(v8 + 40) )
      goto LABEL_7;
LABEL_11:
    sub_2AA1A0();
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_11;
LABEL_7:
  switch_dbctx();
  v10 = *(_QWORD *)(a1 + 40);
  v19 = 0;
  v18 = 0;
  v11 = v5 + v10;
  v12 = *(_QWORD *)(a2 + 40) + v5;
  v13 = v11;
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v12 + 8);
  sub_2AA6A0(&v18, v12 + 16);
  v14 = v18;
  v15 = _mm_loadu_si128(&v19);
  if ( *(_QWORD *)(v13 + 16) )
  {
    *(_QWORD *)(v13 + 24) = 0;
    v17 = v15;
    qfree();
    v15 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(v13 + 16) = v14;
  *(__m128i *)(v13 + 24) = v15;
  return v20 - __readfsqword(0x28u);
}

