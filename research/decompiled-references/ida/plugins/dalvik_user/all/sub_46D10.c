__int64 __fastcall sub_46D10(__int64 a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v7; // rax

  if ( *(_BYTE *)(a1 + 56) )
    sub_1FAD0((__int64 *)(a1 + 32));
  result = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  for ( i = *(_QWORD *)a1; v5 < result + 1; v5 = *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v5;
    v7 = qrealloc();
    i = v7;
    if ( !v7 )
      sub_43DF0((__int64)"JDWP encoder");
    *(_QWORD *)a1 = v7;
    result = *(_QWORD *)(a1 + 8);
  }
  *(_BYTE *)(i + result) = a2;
  ++*(_QWORD *)(a1 + 8);
  return result;
}

