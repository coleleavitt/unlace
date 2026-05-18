__int64 __fastcall sub_F6890(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        void (__fastcall *a11)(__int64, __int64, __int64, __int64, __int64, __int64))
{
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _DWORD *v20; // rbp
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // r13d
  unsigned int v27; // ebp
  __int64 v28; // rdi
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 )
  {
    v30 = a6;
    xmmword_241500(v15);
    a6 = v30;
  }
  if ( a11 )
  {
    v31 = a6;
    v16 = sub_D1E10(24, a2);
    v20 = (_DWORD *)v16;
    v21 = v31;
    if ( !v16 )
    {
      if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
        sub_DBE60(a1);
      v26 = 1;
      a11(a5, a2, v17, v18, v19, v21);
      goto LABEL_16;
    }
    *(_DWORD *)v16 = 0;
    *(_QWORD *)(v16 + 16) = a5;
    *(_QWORD *)(v16 + 8) = a11;
    v26 = sub_F6590(a1, (char *)a2, a3, a4, a5, v31, a7, a8, a9, a10, (_DWORD *)v16);
    if ( !*v20 )
    {
      ((void (__fastcall *)(__int64))a11)(a5);
      sub_C91C0((__int64)v20, a2);
    }
  }
  else
  {
    v26 = sub_F6590(a1, (char *)a2, a3, a4, a5, a6, a7, a8, a9, a10, nullptr);
  }
  if ( *(_BYTE *)(a1 + 103) || (v27 = 0, v26) )
  {
LABEL_16:
    a2 = v26;
    v27 = sub_D42C0(a1, v26, v22, v23, v24, v25);
  }
  v28 = *(_QWORD *)(a1 + 24);
  if ( v28 )
    xmmword_241510(v28, a2, v22);
  return v27;
}
