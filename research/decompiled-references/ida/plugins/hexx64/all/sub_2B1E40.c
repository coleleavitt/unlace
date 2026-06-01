__int64 __fastcall sub_2B1E40(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  int v8; // eax
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) )
LABEL_6:
    sub_2ADE80(a3);
  v4 = 264 * a2 + *(_QWORD *)(a1 + 40);
  v5 = **(unsigned __int8 (***)(void))v4;
  if ( (char *)v5 == (char *)sub_2AF040 )
  {
    if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 248) && !sub_1377A0(v4 + 8, v4 + 136) )
      goto LABEL_6;
  }
  else if ( !v5() )
  {
    goto LABEL_6;
  }
  switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + 264 * a2;
  v7 = _mm_loadu_si128((const __m128i *)(v6 + 136));
  *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 152);
  *(__m128i *)(v6 + 8) = v7;
  sub_1253A0(v6 + 32, v6 + 160);
  v8 = *(_DWORD *)(v6 + 240);
  *(_BYTE *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 256) = -2;
  *(_DWORD *)(v6 + 112) = v8;
  result = *(unsigned int *)(v6 + 248);
  *(_DWORD *)(v6 + 120) = result;
  return result;
}

