__int64 __fastcall sub_332AB0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  __int64 first_seg; // rax
  __int64 v12; // rax
  _QWORD *next_seg; // rax

  if ( a1[177] )
  {
    v4 = a1[179];
LABEL_3:
    if ( v4 == -1 )
    {
      if ( !under_debugger )
        sub_383060(0xCCA5u, a3);
      BUG();
    }
  }
  else
  {
    v10 = 61888LL << (8 * (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) - 16);
    if ( (getseg() || (next_seg = (_QWORD *)get_next_seg()) != nullptr && *next_seg - v10 <= 0xFFFFF)
      && (v10 = (*(_QWORD *)(get_last_seg() + 8) + 4095LL) & 0xFFFFFFFFFFFFF000LL, getseg()) )
    {
      first_seg = get_first_seg();
      do
      {
        v4 = *(_QWORD *)(first_seg + 8);
        first_seg = getseg();
        if ( !first_seg )
        {
          a1[179] = v4;
          goto LABEL_3;
        }
      }
      while ( v4 != -1 );
      a1[179] = (sub_3329E0(a1 + 1) + 4095) & 0xFFFFFFFFFFFFF000LL;
    }
    else
    {
      a1[179] = v10;
    }
  }
  v5 = a1[177];
  v6 = a1[176];
  if ( a1[178] < (unsigned __int64)(v5 + 1) )
  {
    v12 = qvector_reserve((__int64)(a1 + 176), v6, v5 + 1, 8);
    a1[176] = v12;
    v6 = v12;
    v5 = a1[177];
  }
  *(_QWORD *)(v6 + 8 * v5) = a2;
  v7 = a1[179];
  v8 = a1[177] + 1LL;
  a1[177] = v8;
  return v7 + 4 * v8;
}

