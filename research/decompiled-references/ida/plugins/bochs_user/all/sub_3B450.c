__int64 __fastcall sub_3B450(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(); // r8

  v3 = *(_QWORD **)(a1 + 8);
  v4 = *(__int64 (__fastcall **)())(*v3 + 8LL);
  if ( v4 != sub_3B450 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 8LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[1];
  v4 = *(__int64 (__fastcall **)())(*v3 + 8LL);
  if ( v4 != v6 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 8LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD *, __int64, __int64))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[1];
  v4 = *(__int64 (__fastcall **)())(*v3 + 8LL);
  if ( v4 != v6 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, a2, a3);
  v5 = (_QWORD *)v3[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 8LL);
  if ( v6 != v4 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v5, a2, a3);
  v3 = (_QWORD *)v5[1];
  v4 = *(__int64 (__fastcall **)())(*v3 + 8LL);
  if ( v4 == v6 )
  {
    v5 = (_QWORD *)v3[1];
    v6 = *(__int64 (__fastcall **)())(*v5 + 8LL);
    if ( v6 == v4 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v5[1] + 8LL))(v5[1], a2, a3);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v6)(v5, a2, a3);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v4)(v3, a2, a3);
}

