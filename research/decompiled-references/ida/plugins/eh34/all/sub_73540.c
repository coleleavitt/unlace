__int64 __fastcall sub_73540(_QWORD *a1)
{
  __int64 (__fastcall *v2)(__int64); // rax
  _QWORD *v3; // rdi
  __int64 (*v4)(void); // rdx
  _QWORD *v5; // rdi
  _QWORD **v6; // rdi
  unsigned int v7; // eax
  __int64 v9; // [rsp+10h] [rbp-18h]

  v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 16LL);
  if ( v2 == sub_15A20 )
  {
    v3 = (_QWORD *)a1[1];
    v4 = *(__int64 (**)(void))(*v3 + 16LL);
    if ( (char *)v4 != (char *)v2 )
    {
LABEL_9:
      v7 = v4();
      goto LABEL_6;
    }
    v5 = (_QWORD *)v3[1];
    v2 = *(__int64 (__fastcall **)(__int64))(*v5 + 16LL);
    if ( (char *)v2 == (char *)v4 )
    {
      v6 = (_QWORD **)v5[1];
      v4 = (__int64 (*)(void))(*v6)[2];
      if ( (char *)v4 == (char *)v2 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v6[1] + 16LL))(v6[1]);
        goto LABEL_6;
      }
      goto LABEL_9;
    }
  }
  v7 = ((__int64 (*)(void))v2)();
LABEL_6:
  if ( v7 )
    return a1[8] + v7;
  return v9;
}

