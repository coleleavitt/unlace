__int64 __fastcall sub_244600(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp

  if ( *(_DWORD *)(a2 + 8) != a4 )
    return 0;
  v7 = a4;
  if ( !sub_259AA0(*(_QWORD *)(a2 + 24), a3) )
  {
    v11 = *(_QWORD *)(a2 + 24);
    if ( v11 )
    {
      sub_255630(*(_QWORD *)(a2 + 24));
      clear_tinfo_t();
      j__qfree(v11);
    }
    sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 32));
    return 1;
  }
  if ( (unsigned int)v7 > 0x2C )
    return 0;
  v8 = 0x142800F80000LL;
  if ( !_bittest64(&v8, v7) )
    return 0;
  if ( !(unsigned __int8)sub_244600(a1, *(_QWORD *)(a2 + 24), a3, v7) )
  {
    v9 = sub_259AA0(*(_QWORD *)(a2 + 32), a3);
    v10 = *(_QWORD *)(a2 + 32);
    if ( !v9 )
    {
      if ( v10 )
      {
        sub_255630(*(_QWORD *)(a2 + 32));
        clear_tinfo_t();
        j__qfree(v10);
      }
      sub_255850((__int64 *)a2, *(_QWORD *)(a2 + 24));
      return 1;
    }
    if ( !(unsigned __int8)sub_244600(a1, *(_QWORD *)(a2 + 32), a3, v7) )
      return 0;
  }
  sub_2441C0(a2, *(_QWORD *)(a1 + 112), 0, a5);
  return 1;
}

