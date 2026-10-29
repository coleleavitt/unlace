__int64 __fastcall sub_16F360(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 (__fastcall *v2)(); // rax
  _QWORD *v3; // rdi
  unsigned __int8 (*v4)(void); // rdx
  __int64 *v5; // rdi
  _QWORD **v6; // rdi
  char v7; // al
  __int64 result; // rax

  v1 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_242700 + 184LL))(qword_242700, a1);
  v2 = *(__int64 (__fastcall **)())(*v1 + 152);
  if ( v2 == sub_16F740 )
  {
    v3 = (_QWORD *)v1[4];
    v4 = *(unsigned __int8 (**)(void))(*v3 + 152LL);
    if ( (char *)v4 != (char *)v2 )
      goto LABEL_10;
    v5 = (__int64 *)v3[4];
    v2 = *(__int64 (__fastcall **)())(*v5 + 152);
    if ( (char *)v2 == (char *)v4 )
    {
      v6 = (_QWORD **)v5[4];
      v4 = (unsigned __int8 (*)(void))(*v6)[19];
      if ( (char *)v4 == (char *)v2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6[4] + 152LL))(v6[4]);
        goto LABEL_6;
      }
LABEL_10:
      if ( v4() )
        goto LABEL_7;
      goto LABEL_11;
    }
  }
  else
  {
    v5 = v1;
  }
  v7 = ((__int64 (__fastcall *)(__int64 *))v2)(v5);
LABEL_6:
  if ( v7 )
  {
LABEL_7:
    result = 0xFFFFFFFFLL;
LABEL_8:
    v1[8] = (__int64)"irs";
    return result;
  }
LABEL_11:
  if ( (int)sub_167210(v1[4]) <= 0 )
    goto LABEL_7;
  result = sub_1671E0(v1[4]);
  if ( result <= 0 )
    goto LABEL_8;
  return result;
}
