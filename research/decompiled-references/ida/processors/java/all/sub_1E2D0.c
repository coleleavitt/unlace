char *__fastcall sub_1E2D0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi

  v5 = a1[8277];
  while ( v5 )
  {
    v6 = (_QWORD *)v5;
    sub_1DCF0(*(_QWORD **)(v5 + 24), a2, a3, a4);
    v9 = *(_QWORD *)(v5 + 32);
    v5 = *(_QWORD *)(v5 + 16);
    if ( v9 )
    {
      v6[5] = 0;
      qfree(v9, a2, v7, v8);
    }
    a2 = 56;
    operator delete(v6, 0x38u);
  }
  a1[8277] = 0;
  a1[8278] = (char *)&loc_102A0 + (_QWORD)a1;
  a1[8279] = (char *)&loc_102A0 + (_QWORD)a1;
  a1[8280] = 0;
  return (char *)&loc_102A0 + (_QWORD)a1;
}

