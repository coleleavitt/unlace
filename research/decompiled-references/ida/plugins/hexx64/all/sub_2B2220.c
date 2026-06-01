__int64 __fastcall sub_2B2220(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_5;
  v6 = 264 * a3;
  v7 = 264 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2AF040 )
  {
    if ( *(_DWORD *)(v7 + 120) == *(_DWORD *)(v7 + 248) && !sub_1377A0(v7 + 8, v7 + 136) )
      goto LABEL_7;
LABEL_5:
    sub_2ADE20(a4);
  }
  if ( ((unsigned __int8 (*)(void))v8)() )
    goto LABEL_5;
LABEL_7:
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(unsigned __int8 (***)(void))v9;
  if ( (char *)v10 == (char *)sub_2AF040 )
  {
    if ( *(_DWORD *)(v9 + 120) == *(_DWORD *)(v9 + 248) && !sub_1377A0(v9 + 8, v9 + 136) )
      goto LABEL_5;
  }
  else if ( !v10() )
  {
    goto LABEL_5;
  }
  switch_dbctx();
  v11 = v6 + *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a2 + 40) + v6;
  v13 = v11;
  *(__m128i *)(v11 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 8));
  *(_DWORD *)(v11 + 24) = *(_DWORD *)(v12 + 24);
  sub_1253A0(v11 + 32, v12 + 32);
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(v12 + 112);
  *(_DWORD *)(v13 + 120) = *(_DWORD *)(v12 + 120);
  result = *(unsigned __int8 *)(v12 + 128);
  *(_BYTE *)(v13 + 128) = result;
  return result;
}

