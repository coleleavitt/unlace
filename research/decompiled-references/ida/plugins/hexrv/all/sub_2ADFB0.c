__int64 __fastcall sub_2ADFB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int8 (*v4)(void); // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) )
LABEL_8:
    sub_2A9280();
  v3 = 80 * a2 + *(_QWORD *)(a1 + 40);
  v4 = **(unsigned __int8 (***)(void))v3;
  if ( (char *)v4 == (char *)sub_2A8500 )
  {
    if ( *(_QWORD *)(v3 + 8) == *(_QWORD *)(v3 + 56) && *(_DWORD *)(v3 + 16) == *(_DWORD *)(v3 + 64) )
      goto LABEL_8;
  }
  else if ( !v4() )
  {
    goto LABEL_8;
  }
  result = switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + 80 * a2;
  v7 = *(_QWORD *)(v6 + 24);
  *(__m128i *)(v6 + 8) = _mm_loadu_si128((const __m128i *)(v6 + 56));
  if ( v7 )
  {
    *(_QWORD *)(v6 + 32) = 0;
    result = qfree();
  }
  *(_QWORD *)(v6 + 24) = 0;
  *(_BYTE *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 72) = -2;
  *(_OWORD *)(v6 + 32) = 0;
  return result;
}

