void __fastcall sub_28110(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r13
  void *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 j; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 k; // rbx
  _QWORD *v14; // rax

  if ( *(_QWORD *)(a1 + 8) && *(_BYTE *)(a1 + 774) )
    close_linput();
  if ( *(_QWORD *)(a1 + 752) && *(_BYTE *)(a1 + 775) )
    close_linput();
  v2 = *(_QWORD **)(a1 + 784);
  for ( i = &v2[*(_QWORD *)(a1 + 792)]; i != v2; ++v2 )
  {
    v4 = (void *)*v2;
    if ( *v2 )
    {
      sub_28110(*v2);
      operator delete(v4, 0x360u);
    }
  }
  if ( *(_QWORD *)(a1 + 832) )
  {
    *(_QWORD *)(a1 + 840) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 784) )
  {
    *(_QWORD *)(a1 + 792) = 0;
    qfree();
  }
  v5 = *(_QWORD *)(a1 + 776);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  if ( *(_QWORD *)(a1 + 728) )
  {
    *(_QWORD *)(a1 + 736) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 704) )
  {
    *(_QWORD *)(a1 + 712) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree();
  }
  v6 = *(_QWORD *)(a1 + 648);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 656);
    if ( v7 )
    {
      v8 = 0;
      for ( j = 0; j != v7; ++j )
      {
        v10 = (_QWORD *)(v6 + v8);
        if ( *(_QWORD *)(v6 + v8 + 120) )
        {
          v10[16] = 0;
          qfree();
        }
        if ( v10[12] )
        {
          v10[13] = 0;
          qfree();
        }
        if ( v10[9] )
        {
          v10[10] = 0;
          qfree();
        }
        if ( v10[5] )
        {
          v10[6] = 0;
          qfree();
        }
        v6 = *(_QWORD *)(a1 + 648);
        v8 += 168;
      }
    }
    *(_QWORD *)(a1 + 656) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 624) )
  {
    *(_QWORD *)(a1 + 632) = 0;
    qfree();
  }
  v11 = *(_QWORD *)(a1 + 600);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 608);
    if ( v12 )
    {
      for ( k = 0; k != v12; ++k )
      {
        v14 = (_QWORD *)(v11 + 24 * k);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = *(_QWORD *)(a1 + 600);
        }
      }
    }
    *(_QWORD *)(a1 + 608) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 576) )
  {
    *(_QWORD *)(a1 + 584) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 552) )
  {
    *(_QWORD *)(a1 + 560) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 528) )
  {
    *(_QWORD *)(a1 + 536) = 0;
    qfree();
  }
}

