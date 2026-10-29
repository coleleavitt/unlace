__int64 __fastcall sub_13FF0(__int64 *a1)
{
  char v1; // al
  __int64 v2; // rcx
  __int64 v3; // rdx
  void (__fastcall *v4)(__int64 *, __int64, __int64); // r8
  __int64 v5; // rsi
  int v6; // eax
  int v7; // ecx
  const char *v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // eax

  v1 = *((_BYTE *)a1 + 252);
  v2 = *a1;
  if ( (v1 & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64 *, const char *, __int64))(v2 + 56))(a1, "|| ", 5);
    v10 = a1[78];
    v11 = 0;
    v12 = *(_DWORD *)(v10 + 104);
    v13 = *((unsigned __int16 *)a1 + 124);
    if ( v13 >= v12 && v13 < *(_DWORD *)(v10 + 108) )
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 112) + 16LL * (v13 - v12));
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 56))(a1, v11, 5);
    return (*(__int64 (__fastcall **)(__int64 *, char *, __int64))(*a1 + 56))(a1, " ", 5);
  }
  else if ( (v1 & 6) != 0 )
  {
    v3 = a1[78];
    v4 = *(void (__fastcall **)(__int64 *, __int64, __int64))(v2 + 56);
    v5 = 0;
    v6 = *((unsigned __int16 *)a1 + 124);
    v7 = *(_DWORD *)(v3 + 104);
    if ( v6 >= v7 && v6 < *(_DWORD *)(v3 + 108) )
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v6 - v7));
    v4(a1, v5, 5);
    v8 = ".cr ";
    if ( (*((_BYTE *)a1 + 252) & 2) != 0 )
      v8 = ".lr ";
    return (*(__int64 (__fastcall **)(__int64 *, const char *, __int64))(*a1 + 56))(a1, v8, 5);
  }
  else
  {
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v2 + 280))(a1, 8, 0);
  }
}

