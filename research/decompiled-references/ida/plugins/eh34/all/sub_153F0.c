void __fastcall sub_153F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r12
  const char *v14; // rcx
  const char *v15; // rcx
  const char *v16; // rcx
  __int64 v17; // [rsp-28h] [rbp-28h]
  __int64 v18; // [rsp-20h] [rbp-20h]
  __int64 v19; // [rsp-18h] [rbp-18h]
  __int64 v20; // [rsp-10h] [rbp-10h]

  if ( !*(_BYTE *)(a1 + 704) )
    return;
  v20 = v12;
  v19 = v11;
  v18 = v10;
  if ( (*(_BYTE *)(a1 + 706) & 3) == 0 || !(unsigned __int8)sub_2FD10(**(_QWORD **)(a4 + 32)) )
    return;
  if ( *(_DWORD *)(a1 + 752) || *(_DWORD *)(a1 + 756) )
  {
    v14 = s1;
    if ( *(_QWORD *)(a1 + 3656) )
      v14 = *(const char **)(a1 + 3648);
LABEL_8:
    ((void (__fastcall *)(__int64, __int64, __int64, const char *, _QWORD, _QWORD))callui)(131, a2, a3, v14, 0, 0);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 760) || *(_DWORD *)(a1 + 764) )
  {
    v14 = s1;
    if ( *(_QWORD *)(a1 + 3824) )
      v14 = *(const char **)(a1 + 3816);
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 768) )
  {
    v15 = s1;
    if ( *(_QWORD *)(a1 + 3320) )
      v15 = *(const char **)(a1 + 3312);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 772) )
      goto LABEL_13;
    v15 = s1;
    if ( *(_QWORD *)(a1 + 3488) )
      v15 = *(const char **)(a1 + 3480);
  }
  callui(131, a2, a3, v15, 0, 0, v17, v18, v19, v20);
LABEL_13:
  v16 = s1;
  if ( *(_QWORD *)(a1 + 3144) )
    v16 = *(const char **)(a1 + 3136);
  callui(131, a2, a3, v16, 0, 0, a7, a8, a9, a10);
}

