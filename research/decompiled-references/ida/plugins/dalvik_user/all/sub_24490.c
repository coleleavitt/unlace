__int64 __fastcall sub_24490(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx

  sub_58110(a1, (unsigned int)"dalvik_debmod_t::dbg_set_exception_info\n", a3, a4, a5, a6);
  if ( *(_DWORD *)(a1 + 1820) == 1 )
  {
    v8 = *(_QWORD *)(a1 + 1736);
    if ( 8LL * *(_QWORD *)(a1 + 1744) )
    {
      do
      {
        v9 = *(unsigned int *)(v8 + 4);
        v8 += 8;
        sub_51C30(a1 + 864, 4, v9);
      }
      while ( v8 != *(_QWORD *)(a1 + 1736) + 8LL * *(_QWORD *)(a1 + 1744) );
    }
  }
  result = sub_569E0(a1, a2, a3);
  if ( *(_DWORD *)(a1 + 1820) == 1 )
    return sub_24020((_QWORD *)a1);
  return result;
}

