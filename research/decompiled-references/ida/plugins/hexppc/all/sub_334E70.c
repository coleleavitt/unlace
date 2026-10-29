__int64 __fastcall sub_334E70(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax

  if ( *(_BYTE *)a2 == 2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL);
  }
  else
  {
    if ( *(_BYTE *)a2 != 10 )
      return 0;
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)v4 != 6 )
      return 0;
    v5 = *(_QWORD *)(v4 + 8);
    if ( a3 )
    {
      if ( v5 >= *(_QWORD *)(a3 + 128) )
        return 0;
    }
  }
  *a1 = v5;
  return 1;
}

