__int64 __fastcall sub_1FC120(__int64 a1, _QWORD *a2, _QWORD **a3, unsigned __int64 a4)
{
  __int64 **v4; // rax
  __int64 *v5; // r15
  __int64 **v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbx

  v4 = (__int64 **)sub_1FC0D0(a3, a4);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v5 = *v4;
  v6 = v4;
  v7 = *((int *)v4 + 4);
  if ( v5[55] < v7 )
  {
    if ( !under_debugger )
      sub_3835A0(51258);
    BUG();
  }
  v8 = v5[54] + 104 * v7;
  v9 = (_QWORD *)v5[160];
  if ( v9 )
  {
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
      goto LABEL_12;
    if ( (*(_BYTE *)v10 & 2) == 0 )
    {
      do
      {
        if ( (int)sub_330B00(v8, v10 + 24) >= 0 )
        {
          if ( (int)sub_330B00(v10 + 24, v8) >= 0 )
            goto LABEL_11;
          v10 = *(_QWORD *)(v10 + 16);
        }
        else
        {
          v10 = *(_QWORD *)(v10 + 8);
        }
      }
      while ( (*(_BYTE *)v10 & 2) == 0 );
      v10 = v5[160];
LABEL_11:
      v5 = *v6;
      if ( v10 != (*v6)[160] )
LABEL_12:
        sub_1F0860(v5 + 54, v10 + 48);
    }
  }
  copy_tinfo_t();
  *a2 = v6[1];
  return *((unsigned int *)v6 + 4);
}

