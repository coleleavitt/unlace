__int64 __fastcall sub_3B210(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned __int16 a4)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(); // rax
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(); // r8

  v4 = *(_QWORD **)(a1 + 8);
  v5 = *(__int64 (__fastcall **)())(*v4 + 112LL);
  if ( v5 != sub_3B210 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))v5)(v4, a2, a3, a4);
  v6 = (_QWORD *)v4[1];
  v7 = *(__int64 (__fastcall **)())(*v6 + 112LL);
  if ( v7 != v5 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))v7)(v6, a2, a3, a4);
  v4 = (_QWORD *)v6[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 112LL);
  if ( v5 != v7 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))v5)(v4, a2, a3, a4);
  v6 = (_QWORD *)v4[1];
  v7 = *(__int64 (__fastcall **)())(*v6 + 112LL);
  if ( v7 != v5 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))v7)(v6, a2, a3, a4);
  v4 = (_QWORD *)v6[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 112LL);
  if ( v5 != v7 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v5)(v4, a2, a3, a4);
  v6 = (_QWORD *)v4[1];
  v7 = *(__int64 (__fastcall **)())(*v6 + 112LL);
  if ( v7 != v5 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(v6, a2, a3, a4);
  v4 = (_QWORD *)v6[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 112LL);
  if ( v5 == v7 )
  {
    v6 = (_QWORD *)v4[1];
    v7 = *(__int64 (__fastcall **)())(*v6 + 112LL);
    if ( v7 == v5 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v6[1] + 112LL))(v6[1], a2, a3, a4);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v7)(v6, a2, a3, a4);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v5)(v4, a2, a3, a4);
}

