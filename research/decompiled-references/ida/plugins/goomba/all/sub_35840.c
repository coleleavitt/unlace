_QWORD *__fastcall sub_35840(_QWORD *a1, _QWORD *a2, int a3, unsigned __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v5; // rax

  if ( (a4 & 1) != 0 )
    goto LABEL_16;
  if ( a3 > 3 )
  {
LABEL_14:
    if ( under_debugger )
      goto LABEL_18;
    interr(30699);
LABEL_16:
    if ( !under_debugger )
      interr(30698);
LABEL_18:
    BUG();
  }
  if ( a3 <= 0 )
  {
LABEL_12:
    if ( under_debugger )
      goto LABEL_18;
    interr(30700);
    goto LABEL_14;
  }
  if ( a4 >= 1LL << (1LL << a3) )
  {
    if ( under_debugger )
      goto LABEL_18;
    interr(30701);
    goto LABEL_12;
  }
  v4 = (_QWORD *)(*(_QWORD *)(*a2 + 24LL * (a3 - 1)) + 16 * (a4 >> 1));
  *a1 = *v4;
  v5 = v4[1];
  a1[1] = v5;
  if ( !v5 )
    return a1;
  if ( &_pthread_key_create )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 1u);
    return a1;
  }
  ++*(_DWORD *)(v5 + 8);
  return a1;
}

