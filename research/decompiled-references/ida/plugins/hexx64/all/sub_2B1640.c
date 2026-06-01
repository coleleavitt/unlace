unsigned __int64 __fastcall sub_2B1640(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  unsigned __int8 (***v7)(void); // rdi
  unsigned __int8 (*v8)(void); // rax
  bool (__fastcall ***v9)(__int64); // rdi
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r12
  __m128i v20; // xmm0
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+18h] [rbp-50h] BYREF
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-38h]
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_11;
  v6 = 88 * a3;
  v7 = (unsigned __int8 (***)(void))(88 * a3 + *(_QWORD *)(a1 + 40));
  v8 = **v7;
  if ( (char *)v8 == (char *)sub_2AD660 )
  {
    if ( !(unsigned int)sub_257C40((__int64)(v7 + 1), (__int64)(v7 + 8)) )
      goto LABEL_11;
  }
  else if ( !v8() )
  {
    goto LABEL_11;
  }
  v9 = (bool (__fastcall ***)(__int64))(v6 + *(_QWORD *)(a2 + 40));
  v10 = **v9;
  if ( v10 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v9 + 1), (__int64)(v9 + 8)) )
      goto LABEL_7;
LABEL_11:
    sub_2ADE40(a4);
  }
  if ( !((unsigned __int8 (*)(void))v10)() )
    goto LABEL_11;
LABEL_7:
  switch_dbctx();
  v11 = *(_QWORD *)(a1 + 40);
  v25 = 0;
  v24 = 0;
  v12 = v6 + v11;
  v13 = *(_QWORD *)(a2 + 40) + v6;
  v14 = (_QWORD *)v12;
  *(_QWORD *)(v12 + 8) = *(_QWORD *)(v13 + 8);
  *(_DWORD *)(v12 + 16) = *(_DWORD *)(v13 + 16);
  v23 = *(_QWORD *)(v13 + 24);
  sub_2AE320(&v24, v13 + 32, v15, v16);
  v17 = *(_QWORD *)(v13 + 56);
  v18 = v14[4];
  v19 = v24;
  v26 = v17;
  v20 = _mm_load_si128(&v25);
  v14[3] = v23;
  if ( v18 )
  {
    v14[5] = 0;
    v22 = v20;
    qfree(v18);
    v20 = _mm_load_si128(&v22);
  }
  v14[4] = v19;
  v14[7] = v17;
  *(__m128i *)(v14 + 5) = v20;
  return v27 - __readfsqword(0x28u);
}

