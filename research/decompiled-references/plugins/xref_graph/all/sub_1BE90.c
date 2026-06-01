void __fastcall xref_graph_plugin_ctx__::vfunc_1(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *i; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 j; // rbx
  __int64 *v13; // rax
  __int64 v14; // rdi
  volatile signed __int32 *v15; // rax

  *(_QWORD *)a1 = xref_graph_plugin_ctx___vtable;
  *(_QWORD *)(a1 + 104) = &off_4C7C8;
  sub_1A840(a1);
  v5 = *(int **)(a1 + 1736);
  if ( !v5 || *v5 > 1 )
  {
    a2 = 0;
    sub_1B8E0(a1 + 1736, 0, 0, 0, v3, v4);
    v5 = *(int **)(a1 + 1736);
  }
  v6 = *(_QWORD **)(a1 + 1744);
  v7 = v6;
  if ( !v5 || *v5 > 1 )
  {
    a2 = 0;
    sub_1B8E0(a1 + 1736, 0, 0, 0, v3, v4);
    v6 = *(_QWORD **)(a1 + 1744);
  }
  for ( i = &v6[*(_QWORD *)(a1 + 1752)]; i != v7; ++v7 )
  {
    if ( *v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7);
  }
  *(_QWORD *)(a1 + 1784) = &xref_graph_slotpoline_t___vtable;
  QT::QObject::~QObject((QT::QObject *)(a1 + 1784));
  v10 = *(_QWORD *)(a1 + 1760);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 1768);
    if ( v11 )
    {
      for ( j = 0; j != v11; ++j )
      {
        v13 = (__int64 *)(v10 + 24 * j);
        v14 = *v13;
        if ( *v13 )
        {
          v13[1] = 0;
          qfree(v14, a2, v10, v9);
          v10 = *(_QWORD *)(a1 + 1760);
        }
      }
    }
    *(_QWORD *)(a1 + 1768) = 0;
    qfree(v10, a2, v10, v9);
  }
  v15 = *(volatile signed __int32 **)(a1 + 1736);
  if ( v15 && !_InterlockedSub(v15, 1u) )
    free(*(void **)(a1 + 1736));
  *(_QWORD *)(a1 + 144) = &off_4C430;
  remove_event_listener(a1 + 144);
  *(_QWORD *)(a1 + 120) = &off_4C430;
  remove_event_listener(a1 + 120);
  QT::QObject::~QObject((QT::QObject *)(a1 + 104));
}
