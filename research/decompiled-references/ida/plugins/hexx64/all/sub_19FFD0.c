__int64 __fastcall sub_19FFD0(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdi
  int v4; // r12d
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // rdi

  v2 = *(_QWORD *)(a1 + 24) == 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(__int64 **)(v3 + 8 * v5);
      if ( v6 )
      {
        v7 = v6[2];
        if ( v7 )
        {
          v6[3] = 0;
          qfree(v7);
        }
        qfree(*v6);
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
    qfree(v3);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v8 = *(_QWORD *)(a1 + 104);
  *(_OWORD *)a1 = 0;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v8);
  }
  qfree(*(_QWORD *)(a1 + 88));
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v9);
  }
  result = qfree(*(_QWORD *)(a1 + 48));
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    return qfree(v11);
  }
  return result;
}

