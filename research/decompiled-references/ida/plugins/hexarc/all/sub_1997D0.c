__int64 __fastcall sub_1997D0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  int v4; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24) == 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(_QWORD **)(v3 + 8 * v5);
      if ( v6 )
      {
        if ( v6[2] )
        {
          v6[3] = 0;
          qfree();
        }
        qfree();
        operator delete(v6, 0x40u);
        v3 = *(_QWORD *)(a1 + 16);
      }
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *(_QWORD *)(a1 + 24) );
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v7 = *(_QWORD *)(a1 + 104);
  *(_OWORD *)a1 = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree();
  }
  result = qfree();
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return qfree();
  }
  return result;
}

