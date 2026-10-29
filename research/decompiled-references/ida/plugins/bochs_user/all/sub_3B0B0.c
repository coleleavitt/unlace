__int64 __fastcall sub_3B0B0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 (__fastcall *v6)(); // rax
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(); // r8

  if ( a4 >= a6 || a4 < a5 || a4 + a3 < a5 || a6 < a4 + a3 )
    return 0;
  v6 = *(__int64 (__fastcall **)())(*a1 + 8LL);
  if ( v6 == sub_3B450 )
  {
    v7 = (_QWORD *)a1[1];
    v8 = *(__int64 (__fastcall **)())(*v7 + 8LL);
    if ( v8 != v6 )
      return ((__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64))v8)(v7, a2, a4, a3);
    a1 = (_QWORD *)v7[1];
    v6 = *(__int64 (__fastcall **)())(*a1 + 8LL);
    if ( v6 == v8 )
    {
      v7 = (_QWORD *)a1[1];
      v8 = *(__int64 (__fastcall **)())(*v7 + 8LL);
      if ( v8 == v6 )
        return (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64))(*(_QWORD *)v7[1] + 8LL))(
                 v7[1],
                 a2,
                 a4,
                 a3);
      return ((__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64))v8)(v7, a2, a4, a3);
    }
  }
  return ((__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64, __int64))v6)(a1, a2, a4, a3);
}

