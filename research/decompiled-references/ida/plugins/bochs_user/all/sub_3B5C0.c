__int64 __fastcall sub_3B5C0(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        int a7)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD); // r10
  _QWORD *v9; // rdi
  __int64 (__fastcall *v10)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD); // rax

  v7 = *(_QWORD **)(a1 + 8);
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v7 + 56LL);
  if ( (char *)v8 != (char *)sub_3B5C0 )
    return v8(v7, a2, a3, a4, a5, a6);
  v9 = (_QWORD *)v7[1];
  v10 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v9 + 56LL);
  if ( v10 != v8 )
    return v10(v9, a2, a3, a4, a5, a6);
  v7 = (_QWORD *)v9[1];
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v7 + 56LL);
  if ( v8 != v10 )
    return v8(v7, a2, a3, a4, a5, a6);
  v9 = (_QWORD *)v7[1];
  v10 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v9 + 56LL);
  if ( v10 != v8 )
    return v10(v9, a2, a3, a4, a5, a6);
  v7 = (_QWORD *)v9[1];
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v7 + 56LL);
  if ( v8 != v10 )
    return v8(v7, a2, a3, a4, a5, a6);
  v9 = (_QWORD *)v7[1];
  v10 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v9 + 56LL);
  if ( v10 != v8 )
    return v10(v9, a2, a3, a4, a5, a6);
  v7 = (_QWORD *)v9[1];
  v8 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v7 + 56LL);
  if ( v8 == v10 )
  {
    v9 = (_QWORD *)v7[1];
    v10 = *(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(*v9 + 56LL);
    if ( v10 == v8 )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v9[1] + 56LL))(
               v9[1],
               a2,
               a3,
               a4,
               a5,
               a6);
    return v10(v9, a2, a3, a4, a5, a6);
  }
  return v8(v7, a2, a3, a4, a5, a6);
}

