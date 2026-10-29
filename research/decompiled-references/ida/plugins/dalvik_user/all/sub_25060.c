__int64 *__fastcall sub_25060(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r13
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // r13
  __int64 *v13; // rbx
  struct _Unwind_Exception *v15; // rbx

  v2 = (_QWORD *)a1[16];
  if ( !v2 )
    goto LABEL_26;
  v3 = a1 + 15;
  v5 = a1 + 15;
  do
  {
    while ( 1 )
    {
      v6 = v2[2];
      v7 = v2[3];
      if ( v2[4] < a2 )
        break;
      v5 = v2;
      v2 = (_QWORD *)v2[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v2 = (_QWORD *)v2[3];
  }
  while ( v7 );
LABEL_6:
  if ( v3 == v5 || a2 < v5[4] )
  {
LABEL_26:
    if ( !under_debugger )
    {
      v15 = (struct _Unwind_Exception *)interr();
      qmutex_unlock();
      _Unwind_Resume(v15);
    }
    BUG();
  }
  qmutex_lock();
  v8 = (_QWORD *)a1[16];
  v9 = a1 + 15;
  if ( !v8 )
    goto LABEL_31;
  do
  {
    while ( 1 )
    {
      v10 = v8[2];
      v11 = v8[3];
      if ( v8[4] < a2 )
        break;
      v9 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v10 )
        goto LABEL_13;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v11 );
LABEL_13:
  if ( v3 == v9 || a2 < v9[4] )
  {
LABEL_31:
    if ( (_BYTE)byte_7FB00 || !__cxa_guard_acquire(&byte_7FB00) )
      goto LABEL_20;
    v12 = 0;
    goto LABEL_23;
  }
  v12 = *(_BYTE *)(a1[5] + 72LL * *((int *)v9 + 10));
  if ( !(_BYTE)byte_7FB00 && __cxa_guard_acquire(&byte_7FB00) )
  {
LABEL_23:
    qword_7FB10 = 0;
    xmmword_7FB18 = 0;
    __cxa_atexit((void (*)(void *))sub_17380, &qword_7FB10, &off_7D260);
    __cxa_guard_release(&byte_7FB00);
  }
  if ( v12 != 1 )
  {
LABEL_20:
    v13 = &qword_7FB10;
    goto LABEL_18;
  }
  v13 = sub_24BE0(a1, a2);
LABEL_18:
  qmutex_unlock();
  return v13;
}

