unsigned __int64 __fastcall sub_65F10(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  void *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 i; // r13
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rdi

  sub_5F670(a1);
  v2 = *(_QWORD *)(a1 + 320);
  while ( v2 )
  {
    sub_651B0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = *(_QWORD **)(a1 + 368);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = a1 + 312;
  *(_QWORD *)(a1 + 336) = a1 + 312;
  *(_QWORD *)(a1 + 344) = 0;
  sub_65BB0(v4);
  v5 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 360;
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  while ( v5 )
  {
    sub_651B0(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  v7 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 424) = a1 + 408;
  *(_QWORD *)(a1 + 432) = a1 + 408;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  if ( v7 )
  {
    v8 = 0;
    for ( i = 0; i != v7; ++i )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + v8 + 48);
      while ( v10 )
      {
        v11 = (_QWORD *)v10;
        sub_65640(*(_QWORD **)(v10 + 24));
        v12 = *(_QWORD *)(v10 + 64);
        v10 = *(_QWORD *)(v10 + 16);
        if ( v12 )
        {
          v11[9] = 0;
          qfree(v12);
        }
        operator delete(v11, 0x58u);
      }
      v8 += 88;
    }
  }
  *(_QWORD *)(a1 + 488) = 0;
  *(_DWORD *)(a1 + 512) = -1;
  *(_QWORD *)(a1 + 504) = 0xFFFFFFFF00000000LL;
  return 0xFFFFFFFF00000000LL;
}

