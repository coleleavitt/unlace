void __fastcall sub_CC4A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  v1 = *(_QWORD *)(a1 + 776);
  v2 = *(_QWORD *)(v1 + 176);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = (_QWORD *)(*(_QWORD *)(v1 + 168) + 24 * i);
      if ( *v4 )
      {
        v4[1] = 0;
        qfree();
      }
    }
  }
  *(_QWORD *)(v1 + 176) = 0;
}

