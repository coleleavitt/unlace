__int64 __fastcall sub_198ED0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbp
  void *v3; // rsi
  __int64 v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx

  v1 = qword_2439B0;
  if ( !qword_2439B0 )
  {
    qword_2439B0 = sub_19A2A0();
    v1 = qword_2439B0;
    if ( !qword_2439B0 )
    {
      if ( !unk_2439A0 )
        sub_198E10(547);
      BUG();
    }
  }
  sub_19A520(v1);
  v2 = qword_2439B8;
  if ( qword_2439B8 )
  {
    v3 = *(void **)qword_2439B8;
    v4 = *((_QWORD *)qword_2439B8 + 1);
    v5 = (char *)(*(_QWORD *)qword_2439B8 + 8 * v4);
    if ( *(char **)qword_2439B8 != v5 )
    {
      v6 = *(char **)qword_2439B8;
      while ( *(_QWORD *)v6 != a1 )
      {
        v6 += 8;
        if ( v6 == v5 )
          goto LABEL_10;
      }
      if ( v6 != v5 )
        return sub_19A570(v1);
    }
  }
  else
  {
    v8 = sub_198760(24);
    *v8 = 0;
    v2 = v8;
    v5 = nullptr;
    qword_2439B8 = v8;
    v3 = nullptr;
    v4 = 0;
    *(_OWORD *)(v8 + 1) = 0;
  }
LABEL_10:
  v9 = v4 + 1;
  if ( v2[2] < v9 )
  {
    v10 = (char *)sub_1987B0((__int64)v2, v3, v9, 8u);
    v11 = v2[1];
    *v2 = v10;
    v5 = &v10[8 * v11];
  }
  *(_QWORD *)v5 = a1;
  ++v2[1];
  return sub_19A570(v1);
}
