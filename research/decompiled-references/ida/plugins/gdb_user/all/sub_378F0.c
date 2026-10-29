__int64 __fastcall sub_378F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 *v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64 *, __int64 *); // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 *v9; // rdx
  __m128i *v10; // r13
  __int64 v11; // rbx
  __m128i *v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i *v15; // rbx
  __int64 v16; // rdi

  v2 = 0;
  v3 = a2[1];
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)(*a2 + 80 * v2);
      if ( v4[5] )
      {
        v4[6] = 0;
        qfree();
      }
      if ( v4[2] )
      {
        v4[3] = 0;
        qfree();
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  a2[1] = 0;
  if ( *(_DWORD *)(a1 + 1360) != 6 )
  {
    v5 = (__int64 *)(a1 + 1496);
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 656LL);
    if ( v6 == sub_1E940 )
    {
      if ( !*(_QWORD *)(a1 + 1504) )
      {
        v7 = *(_QWORD *)(a1 + 1424);
        v8 = a1 + 1408;
        if ( v7 != a1 + 1408 )
        {
          while ( 1 )
          {
            v9 = (__int64 *)(v7 + 40);
            if ( v6 == sub_1E940 )
            {
              if ( *(_QWORD *)(v7 + 48) )
                sub_1E7F0(a1, a2, v9);
              v7 = std::_Rb_tree_increment();
              if ( v7 == v8 )
                goto LABEL_18;
            }
            else
            {
              v6(a1, a2, v9);
              v7 = std::_Rb_tree_increment();
              if ( v7 == v8 )
                goto LABEL_18;
            }
LABEL_15:
            v6 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 656LL);
          }
        }
        return 1;
      }
      sub_1E7F0(a1, a2, v5);
    }
    else
    {
      v6(a1, a2, v5);
    }
    v7 = *(_QWORD *)(a1 + 1424);
    v8 = a1 + 1408;
    if ( v7 != a1 + 1408 )
      goto LABEL_15;
LABEL_18:
    v10 = (__m128i *)*a2;
    v11 = 80 * a2[1];
    v12 = (__m128i *)(*a2 + v11);
    if ( (__m128i *)*a2 != v12 )
    {
      v13 = 0xCCCCCCCCCCCCCCCDLL * (v11 >> 4);
      if ( v13 )
      {
        _BitScanReverse64(&v14, v13);
        sub_36CB0(*a2, (unsigned __int64)v12, 2LL * (int)v14);
        if ( v11 > 1280 )
        {
          v15 = v10 + 80;
          sub_1C380(v10, v10 + 80);
          do
          {
            v16 = (__int64)v15;
            v15 += 5;
            sub_1C170(v16);
          }
          while ( v12 != v15 );
          return 1;
        }
      }
      else
      {
        sub_36CB0(*a2, (unsigned __int64)v12, -2);
      }
      sub_1C380(v10, v12);
    }
    return 1;
  }
  return 4294967291LL;
}

