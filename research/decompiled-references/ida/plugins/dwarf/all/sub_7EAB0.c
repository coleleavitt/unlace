__int64 __fastcall sub_7EAB0(_QWORD *a1, _QWORD *a2)
{
  __int16 v2; // ax
  _QWORD *v4; // r12
  char *v5; // rbx
  char *v6; // rbp

  v2 = sub_97BF0(a2);
  if ( v2 == 17 )
  {
    v4 = (_QWORD *)a1[4];
    v5 = (char *)v4[3];
    while ( v5 )
    {
      v6 = v5;
      sub_70E60(*((_QWORD **)v5 + 3));
      v5 = *((char **)v5 + 2);
      clear_tinfo_t(v6 + 48);
      operator delete(v6, 0x38u);
    }
    v4[3] = 0;
    v4[4] = v4 + 2;
    v4[5] = v4 + 2;
    v4[6] = 0;
    return 0;
  }
  else if ( v2 == 46 )
  {
    sub_7B7A0(a1, (__int64)a2);
    return 0;
  }
  else
  {
    if ( v2 == 10 )
      sub_76880((__int64)a1, a2);
    return 0;
  }
}

