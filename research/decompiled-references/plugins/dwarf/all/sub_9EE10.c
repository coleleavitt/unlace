_QWORD *__fastcall sub_9EE10(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct _Unwind_Exception *v15; // r14

  v6 = (_QWORD *)operator new(0x1D0u);
  sub_9EC40(
    (__int64)v6,
    *(_QWORD *)(a1 + 128),
    *(_QWORD *)(a1 + 88),
    a2,
    *(__int64 **)(a1 + 144),
    a3,
    *(_QWORD *)(a1 + 168),
    0,
    0,
    1,
    a4);
  if ( v6[10] )
    goto LABEL_10;
  v7 = *(_QWORD **)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = &v7[v8];
  if ( v7 != v9 )
  {
    v10 = *(_QWORD **)(a1 + 104);
    while ( v6 != (_QWORD *)*v10 )
    {
      if ( v9 == ++v10 )
        goto LABEL_7;
    }
    if ( v9 != v10 )
    {
LABEL_10:
      if ( !under_debugger )
      {
        v15 = (struct _Unwind_Exception *)interr(30466);
        operator delete(v6, 0x1D0u);
        _Unwind_Resume(v15);
      }
      BUG();
    }
  }
LABEL_7:
  v11 = v8 + 1;
  if ( *(_QWORD *)(a1 + 120) < v11 )
  {
    v13 = qvector_reserve(a1 + 104, v7, v11, 8);
    v14 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 104) = v13;
    v9 = (_QWORD *)(v13 + 8 * v14);
  }
  *v9 = v6;
  ++*(_QWORD *)(a1 + 112);
  v6[10] = a1;
  return v6;
}
