unsigned __int64 *__fastcall sub_83D10(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 *result; // rax

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 96 * i);
        v6 = v5[7];
        if ( v6 )
        {
          v5[8] = 0;
          qfree(v6);
        }
        clear_tinfo_t();
        v7 = v5[3];
        if ( v7 )
        {
          v5[4] = 0;
          qfree(v7);
        }
        cleanup_argloc();
        v2 = *(_QWORD *)a1;
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  result = sub_83C10((unsigned __int64 **)(a1 + 24));
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  return result;
}

