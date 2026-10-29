void __fastcall sub_7140(__int64 a1, const void *a2, __int64 a3, _BOOL8 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // rbp
  unsigned int v8; // eax
  int *v9; // rdx
  int *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-20h]

  if ( qword_14410 != -1 )
  {
    a2 = (const void *)qword_14400;
    if ( (BYTE2(dword_143F8) & 0xFE) == 0xA0 )
    {
      sub_5890((__int64)&qword_143C0, qword_14400, qword_14408);
      a2 = (const void *)qword_14410;
      mem2base(qword_143C0 + qword_14400, qword_14410, qword_14410 + qword_14408, dword_14418);
    }
    else
    {
      v14 = qword_14410;
      qword_143F0 = qword_14400;
      v5 = getseg();
      v6 = v14;
      if ( !v5 )
        sub_52E0("wrong iterated data");
      for ( i = *(_QWORD *)(v5 + 8);
            qword_143F0 < (unsigned __int64)xmmword_143C8;
            v6 = sub_65D0(v6, i, BYTE2(dword_143F8) & 1, qword_14400, 0) )
      {
        a2 = (const void *)i;
      }
    }
  }
  qword_14410 = -1;
  if ( a1 )
  {
    v8 = sub_6F20(a1, a2, a3, a4);
    v9 = (int *)qword_14550;
    if ( !qword_14550 )
      goto LABEL_19;
    v10 = &dword_14548;
    do
    {
      while ( 1 )
      {
        v11 = *((_QWORD *)v9 + 2);
        v12 = *((_QWORD *)v9 + 3);
        if ( *((_QWORD *)v9 + 4) >= (unsigned __int64)qword_14420 )
          break;
        v9 = *((int **)v9 + 3);
        if ( !v12 )
          goto LABEL_12;
      }
      v10 = v9;
      v9 = *((int **)v9 + 2);
    }
    while ( v11 );
LABEL_12:
    if ( v10 == &dword_14548 || (unsigned __int64)qword_14420 < *((_QWORD *)v10 + 4) )
      goto LABEL_19;
    v13 = *((_QWORD *)v10 + 5);
    if ( v13 == -2 )
      return;
    if ( v13 == -1 )
LABEL_19:
      sub_52E0("flush_data");
    qword_14410 = v13 + v8;
  }
}

