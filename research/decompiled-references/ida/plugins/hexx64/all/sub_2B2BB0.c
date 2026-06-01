__int64 __fastcall sub_2B2BB0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  unsigned __int8 (*v5)(void); // rax
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) )
LABEL_8:
    sub_2ADE80(a3);
  v4 = 80 * a2 + *(_QWORD *)(a1 + 40);
  v5 = **(unsigned __int8 (***)(void))v4;
  if ( (char *)v5 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v4 + 8) == *(_QWORD *)(v4 + 56) && *(_DWORD *)(v4 + 16) == *(_DWORD *)(v4 + 64) )
      goto LABEL_8;
  }
  else if ( !v5() )
  {
    goto LABEL_8;
  }
  result = switch_dbctx();
  v7 = *(_QWORD *)(a1 + 40) + 80 * a2;
  v8 = *(_QWORD *)(v7 + 24);
  *(__m128i *)(v7 + 8) = _mm_loadu_si128((const __m128i *)(v7 + 56));
  if ( v8 )
  {
    *(_QWORD *)(v7 + 32) = 0;
    result = qfree(v8);
  }
  *(_QWORD *)(v7 + 24) = 0;
  *(_BYTE *)(v7 + 48) = 0;
  *(_DWORD *)(v7 + 72) = -2;
  *(_OWORD *)(v7 + 32) = 0;
  return result;
}

