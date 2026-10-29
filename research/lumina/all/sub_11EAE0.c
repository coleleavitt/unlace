__int64 __fastcall sub_11EAE0(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD),
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi

  v6 = 0;
  if ( a1 )
  {
    v7 = *(_QWORD *)a1;
    v9 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v9 )
      xmmword_241500(v9);
    if ( *(__int64 *)(a1 + 184) > 0 )
    {
      a2 = a1;
      sub_C3DE0(v7, a1, a3);
    }
    v10 = sub_11E5A0(a1, a2, (__int64)a3, a4, a5, a6);
    *(_BYTE *)(a1 + 197) = 1;
    *(_QWORD *)(a1 + 52) = 0;
    *(_WORD *)(a1 + 194) = -254;
    v14 = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(a1 + 60) = 0;
    *(_QWORD *)(a1 + 44) = 0xFFFFFFFF00000001LL;
    *(_QWORD *)(a1 + 80) = 0;
    if ( *(_BYTE *)(v7 + 103) || (v6 = 0, v10) )
    {
      a2 = v10;
      v6 = sub_D42C0(v7, v10, 0xFFFFFFFF00000001LL, v11, v12, v13);
    }
    v15 = *(_QWORD *)(v7 + 24);
    if ( v15 )
      xmmword_241510(v15, a2, v14);
  }
  return v6;
}
