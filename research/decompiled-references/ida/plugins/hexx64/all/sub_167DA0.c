__int64 __fastcall sub_167DA0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, __m128i a7)
{
  unsigned __int64 *v10; // r15
  __int64 i; // rbx

  v10 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  **(_DWORD **)(a1 + 56) = a4;
  if ( *(int *)(a5 + 4) > 1 )
  {
    sub_11CDA0(*(_QWORD *)(a1 + 56) + 64LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 68LL) = 1;
    if ( !(unsigned __int8)sub_12B6F0(*(_QWORD *)(a1 + 56), v10, 9, *(_DWORD *)(a5 + 4), 0, a7) )
    {
      if ( !under_debugger )
        sub_383060(0xCAE9u, *(double *)a7.m128i_i64);
      BUG();
    }
  }
  sub_11CA10((char *)(*(_QWORD *)(a1 + 56) + 64LL), (char *)a5);
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    sub_11D5A0(i);
    if ( i == a6 )
      break;
  }
  return sub_112550(a1, a2, a3);
}

