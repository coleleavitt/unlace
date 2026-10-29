_QWORD *__fastcall sub_84340(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rsi

  v4 = *(_QWORD **)a2;
  v5 = *(_QWORD *)a2 + 40LL * *(_QWORD *)(a2 + 8);
  if ( v5 == *(_QWORD *)a2 )
    return nullptr;
  v6 = *a3;
  do
  {
    if ( (v6 ^ *v4) >= 0
      && (v6 & 0x7FFFFFFFFFFFFFFFLL) + *(_QWORD *)(a3[1] + 8 * ((*a3 >= 0) + 28LL)) == *(_QWORD *)(v4[1]
                                                                                                 + 8LL * (*v4 >= 0LL)
                                                                                                 + 224)
                                                                                     + (*v4 & 0x7FFFFFFFFFFFFFFFLL) )
    {
      return v4;
    }
    v4 += 5;
  }
  while ( v4 != (_QWORD *)v5 );
  return nullptr;
}

