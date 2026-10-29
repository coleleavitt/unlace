__int64 __fastcall idp_listener_t__::vfunc_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  int *v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rbx

  if ( a2 > 66 )
  {
    if ( a2 == 86 )
    {
      v6 = *(_QWORD **)(a1 + 16);
      v7 = (int *)v6[217];
      if ( !v7 || *v7 > 1 )
      {
        sub_1B8E0((__int64)(v6 + 217), 0, 0, 0, a5, a6);
        v7 = (int *)v6[217];
      }
      v8 = (__int64 *)v6[218];
      v9 = v8;
      if ( !v7 || *v7 > 1 )
      {
        sub_1B8E0((__int64)(v6 + 217), 0, 0, 0, a5, a6);
        v8 = (__int64 *)v6[218];
      }
      v10 = &v8[v6[219]];
      while ( v10 != v9 )
      {
        v11 = *v9;
        v12 = operator new(0x10u);
        QT::QEvent::QEvent(v12, 1001);
        ++v9;
        QT::QCoreApplication::postEvent(v11, v12, 0);
      }
      v13 = operator new(0x10u);
      QT::QEvent::QEvent(v13, 1001);
      QT::QCoreApplication::postEvent(*(_QWORD *)(a1 + 16) + 104LL, v13, 0);
    }
    return 0;
  }
  if ( a2 <= 62 )
    return 0;
  sub_1BCC0(*(_QWORD **)(a1 + 16), a2, a3, a4, a5, a6);
  return 0;
}
