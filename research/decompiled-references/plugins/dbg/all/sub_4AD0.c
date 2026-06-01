unsigned __int64 __fastcall sub_4AD0(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  char v4; // dl
  __int64 v5; // rax

  result = get_func();
  if ( !result )
    return result;
  v3 = (_QWORD *)result;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_4;
LABEL_10:
    result = sub_49D0(a1, (__int64)"Function is interrupt routine");
    v4 = a2 & 8;
    if ( (a2 & 4) != 0 )
    {
LABEL_5:
      v5 = v3[2] | 2LL;
      v3[2] = v5;
      if ( !v4 )
      {
LABEL_7:
        update_func(v3);
        return reanalyze_callers(*v3, v3[2] & 1);
      }
LABEL_6:
      v3[2] = v5 | 1;
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  result = sub_49D0(a1, (__int64)"Function has frame pointer omitted");
  if ( (a2 & 2) != 0 )
    goto LABEL_10;
LABEL_4:
  v4 = a2 & 8;
  if ( (a2 & 4) != 0 )
    goto LABEL_5;
LABEL_8:
  if ( v4 )
  {
    v5 = v3[2];
    goto LABEL_6;
  }
  return result;
}
