__int64 __fastcall sub_3B510(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(); // r9
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(); // rax

  v5 = *(_QWORD **)(a1 + 8);
  v6 = *(__int64 (__fastcall **)())(*v5 + 64LL);
  if ( v6 != sub_3B510 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, _QWORD))v6)(v5, a2, a3, a4, a5);
  v7 = (_QWORD *)v5[1];
  v8 = *(__int64 (__fastcall **)())(*v7 + 64LL);
  if ( v8 != v6 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, _QWORD))v8)(v7, a2, a3, a4, a5);
  v5 = (_QWORD *)v7[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 64LL);
  if ( v6 != v8 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, _QWORD))v6)(v5, a2, a3, a4, a5);
  v7 = (_QWORD *)v5[1];
  v8 = *(__int64 (__fastcall **)())(*v7 + 64LL);
  if ( v8 != v6 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, __int64, _QWORD))v8)(v7, a2, a3, a4, a5);
  v5 = (_QWORD *)v7[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 64LL);
  if ( v6 != v8 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v6)(v5, a2, a3, a4, a5);
  v7 = (_QWORD *)v5[1];
  v8 = *(__int64 (__fastcall **)())(*v7 + 64LL);
  if ( v8 != v6 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v8)(v7, a2, a3, a4, a5);
  v5 = (_QWORD *)v7[1];
  v6 = *(__int64 (__fastcall **)())(*v5 + 64LL);
  if ( v6 == v8 )
  {
    v7 = (_QWORD *)v5[1];
    v8 = *(__int64 (__fastcall **)())(*v7 + 64LL);
    if ( v8 == v6 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v7[1] + 64LL))(
               v7[1],
               a2,
               a3,
               a4,
               a5);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v8)(v7, a2, a3, a4, a5);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v6)(v5, a2, a3, a4, a5);
}

