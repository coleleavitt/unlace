__int64 __fastcall sub_736F0(_QWORD *a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  _QWORD *v2; // rdi
  __int64 (*v3)(void); // rdx
  _QWORD *v4; // rdi
  _QWORD **v5; // rdi

  v1 = *(__int64 (__fastcall **)(__int64))(*a1 + 16LL);
  if ( v1 == sub_15A20 )
  {
    v2 = (_QWORD *)a1[1];
    v3 = *(__int64 (**)(void))(*v2 + 16LL);
    if ( (char *)v3 != (char *)v1 )
      return v3();
    v4 = (_QWORD *)v2[1];
    v1 = *(__int64 (__fastcall **)(__int64))(*v4 + 16LL);
    if ( (char *)v1 == (char *)v3 )
    {
      v5 = (_QWORD **)v4[1];
      v3 = (__int64 (*)(void))(*v5)[2];
      if ( (char *)v3 == (char *)v1 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*v5[1] + 16LL))(v5[1]);
      return v3();
    }
  }
  return ((__int64 (*)(void))v1)();
}

