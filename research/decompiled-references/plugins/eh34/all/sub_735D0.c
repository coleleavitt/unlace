__int64 __fastcall sub_735D0(_QWORD *a1)
{
  __int64 (__fastcall *v2)(__int64); // rax
  _QWORD *v3; // rdi
  unsigned int (*v4)(void); // rdx
  _QWORD *v5; // rdi
  _QWORD **v6; // rdi

  v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 16LL);
  if ( v2 == sub_15A20 )
  {
    v3 = (_QWORD *)a1[1];
    v4 = *(unsigned int (**)(void))(*v3 + 16LL);
    if ( (char *)v4 != (char *)v2 )
      return a1[8] + v4();
    v5 = (_QWORD *)v3[1];
    v2 = *(__int64 (__fastcall **)(__int64))(*v5 + 16LL);
    if ( (char *)v2 == (char *)v4 )
    {
      v6 = (_QWORD **)v5[1];
      v4 = (unsigned int (*)(void))(*v6)[2];
      if ( (char *)v4 == (char *)v2 )
        return a1[8] + (*(unsigned int (__fastcall **)(_QWORD *))(*v6[1] + 16LL))(v6[1]);
      return a1[8] + v4();
    }
  }
  return a1[8] + ((unsigned int (*)(void))v2)();
}
