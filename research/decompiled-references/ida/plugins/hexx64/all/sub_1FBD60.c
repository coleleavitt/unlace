__int64 __fastcall sub_1FBD60(__int64 a1, _QWORD *a2, _QWORD **a3, unsigned __int64 a4, double a5)
{
  __int64 **v5; // rax
  __int64 *v6; // r15
  __int64 **v7; // r14
  unsigned __int64 v8; // rax
  int *v9; // r13
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbx

  v5 = (__int64 **)sub_1FBD10(a3, a4);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = *v5;
  v7 = v5;
  v8 = *((int *)v5 + 4);
  if ( v6[55] < v8 )
  {
    if ( !under_debugger )
      sub_383060(0xC83Au, a5);
    BUG();
  }
  v9 = (int *)(v6[54] + 104 * v8);
  v10 = (_QWORD *)v6[160];
  if ( v10 )
  {
    v11 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v11 )
      goto LABEL_12;
    if ( (*(_BYTE *)v11 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_3307E0(v9, (int *)(v11 + 24)) >= 0 )
        {
          if ( (int)sub_3307E0((int *)(v11 + 24), v9) >= 0 )
            goto LABEL_11;
          v11 = *(_QWORD *)(v11 + 16);
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 8);
        }
      }
      while ( (*(_BYTE *)v11 & 2) == 0 );
      v11 = v6[160];
LABEL_11:
      v6 = *v7;
      if ( v11 != (*v7)[160] )
LABEL_12:
        sub_1F04A0(v6 + 54, v11 + 48, a5);
    }
  }
  copy_tinfo_t();
  *a2 = v7[1];
  return *((unsigned int *)v7 + 4);
}

