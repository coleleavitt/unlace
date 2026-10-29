__int64 __fastcall sub_1C7D0(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rbp
  _QWORD *v9; // r12
  __int64 v10; // rdi

  qmutex_lock();
  sub_1BE10((__int64 *)(a1 + 40));
  sub_17310(*(void **)(a1 + 344));
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 352) = a1 + 336;
  *(_QWORD *)(a1 + 360) = a1 + 336;
  *(_QWORD *)(a1 + 368) = 0;
  sub_1C510((_QWORD *)a1);
  sub_175B0(*(void **)(a1 + 392));
  v2 = *(_QWORD *)(a1 + 440);
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = a1 + 384;
  *(_QWORD *)(a1 + 408) = a1 + 384;
  *(_QWORD *)(a1 + 416) = 0;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_190F0(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 48);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[7] = 0;
      qfree();
    }
    operator delete(v3, 0x48u);
  }
  v5 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a1 + 432;
  *(_QWORD *)(a1 + 456) = a1 + 432;
  *(_QWORD *)(a1 + 464) = 0;
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_18E30(*(_QWORD **)(v5 + 24));
    v7 = *(_QWORD *)(v5 + 48);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v7 )
    {
      v6[7] = 0;
      qfree();
    }
    operator delete(v6, 0x48u);
  }
  v8 = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = a1 + 480;
  *(_QWORD *)(a1 + 504) = a1 + 480;
  *(_QWORD *)(a1 + 512) = 0;
  while ( v8 )
  {
    v9 = (_QWORD *)v8;
    sub_18B70(*(_QWORD **)(v8 + 24));
    v10 = *(_QWORD *)(v8 + 48);
    v8 = *(_QWORD *)(v8 + 16);
    if ( v10 )
    {
      v9[7] = 0;
      qfree();
    }
    operator delete(v9, 0x48u);
  }
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = a1 + 528;
  *(_QWORD *)(a1 + 552) = a1 + 528;
  *(_QWORD *)(a1 + 560) = 0;
  return qmutex_unlock();
}

