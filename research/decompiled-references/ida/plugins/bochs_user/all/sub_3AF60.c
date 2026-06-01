__int64 __fastcall sub_3AF60(__int64 a1, unsigned __int16 a2)
{
  _QWORD *v2; // rdi
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(); // rdx

  v2 = *(_QWORD **)(a1 + 8);
  v3 = *(__int64 (__fastcall **)())(*v2 + 48LL);
  if ( v3 != sub_3AF60 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD))v3)(v2, a2);
  v4 = (_QWORD *)v2[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 48LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD))v5)(v4, a2);
  v2 = (_QWORD *)v4[1];
  v3 = *(__int64 (__fastcall **)())(*v2 + 48LL);
  if ( v3 != v5 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD))v3)(v2, a2);
  v4 = (_QWORD *)v2[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 48LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD))v5)(v4, a2);
  v2 = (_QWORD *)v4[1];
  v3 = *(__int64 (__fastcall **)())(*v2 + 48LL);
  if ( v3 != v5 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v3)(v2, a2);
  v4 = (_QWORD *)v2[1];
  v5 = *(__int64 (__fastcall **)())(*v4 + 48LL);
  if ( v5 != v3 )
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v5)(v4, a2);
  v2 = (_QWORD *)v4[1];
  v3 = *(__int64 (__fastcall **)())(*v2 + 48LL);
  if ( v3 == v5 )
  {
    v4 = (_QWORD *)v2[1];
    v5 = *(__int64 (__fastcall **)())(*v4 + 48LL);
    if ( v5 == v3 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v4[1] + 48LL))(v4[1], a2);
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v5)(v4, a2);
  }
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))v3)(v2, a2);
}

