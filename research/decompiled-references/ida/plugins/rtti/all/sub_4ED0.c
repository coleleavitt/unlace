char __fastcall sub_4ED0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD **v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx

  if ( a2 > 7 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_4F60(30580);
  }
  else if ( *(_QWORD *)(a1 + 8)
         && rangeset_t_find_range()
         && (v5 = (_QWORD **)(a1 + 24 * a2 + 48),
             v6 = *v5,
             v7 = (__int64)&(*v5)[*(_QWORD *)(a1 + 24 * a2 + 56)],
             v6 != (_QWORD *)v7) )
  {
    while ( *v6 != a3 )
    {
      if ( (_QWORD *)v7 == ++v6 )
        return 0;
    }
    return v6 != (_QWORD *)v7;
  }
  else
  {
    return 0;
  }
}
