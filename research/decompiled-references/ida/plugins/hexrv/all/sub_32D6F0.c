__int64 __fastcall sub_32D6F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  __int64 first_seg; // rax
  __int64 v11; // rax
  _QWORD *next_seg; // rax

  if ( a1[177] )
  {
    v3 = a1[179];
LABEL_3:
    if ( v3 == -1 )
    {
      if ( !under_debugger )
        sub_37DDE0(52389);
      BUG();
    }
  }
  else
  {
    v9 = 61888LL << (8 * (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1[187] + 24LL) + 24LL) - 16);
    if ( (getseg() || (next_seg = (_QWORD *)get_next_seg()) != nullptr && *next_seg - v9 <= 0xFFFFF)
      && (v9 = (*(_QWORD *)(get_last_seg() + 8) + 4095LL) & 0xFFFFFFFFFFFFF000LL, getseg()) )
    {
      first_seg = get_first_seg();
      do
      {
        v3 = *(_QWORD *)(first_seg + 8);
        first_seg = getseg();
        if ( !first_seg )
        {
          a1[179] = v3;
          goto LABEL_3;
        }
      }
      while ( v3 != -1 );
      a1[179] = (sub_32D620(a1 + 1) + 4095) & 0xFFFFFFFFFFFFF000LL;
    }
    else
    {
      a1[179] = v9;
    }
  }
  v4 = a1[177];
  v5 = a1[176];
  if ( a1[178] < (unsigned __int64)(v4 + 1) )
  {
    v11 = qvector_reserve();
    a1[176] = v11;
    v5 = v11;
    v4 = a1[177];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  v6 = a1[179];
  v7 = a1[177] + 1LL;
  a1[177] = v7;
  return v6 + 4 * v7;
}

