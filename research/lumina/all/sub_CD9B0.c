void __fastcall sub_CD9B0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // r13
  _QWORD *v8; // r13

  v3 = *(_QWORD **)(a1 + 16);
  if ( a2 )
  {
    v4 = *(int *)(a1 + 8);
    if ( v3 && a2 > v4 )
    {
      v5 = *(int *)(a1 + 8);
      do
      {
        v3 = (_QWORD *)*v3;
        v5 += v4;
      }
      while ( v3 && a2 > v5 );
    }
    if ( v3 )
    {
      v6 = (_QWORD *)*v3;
      if ( *v3 )
      {
        do
        {
          v7 = (_QWORD *)*v6;
          sub_C91C0((__int64)v6, a2);
          v6 = v7;
        }
        while ( v7 );
      }
      *v3 = 0;
    }
  }
  else
  {
    while ( v3 )
    {
      v8 = (_QWORD *)*v3;
      sub_C91C0((__int64)v3, a2);
      v3 = v8;
    }
    *(_QWORD *)(a1 + 16) = 0;
    v3 = nullptr;
  }
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 0;
}
