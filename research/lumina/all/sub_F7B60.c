__int64 __fastcall sub_F7B60(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v9; // r13d
  __int64 v13; // rdi
  char *v14; // rbp
  char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r12d
  unsigned int v21; // ebp
  __int64 v22; // rdi

  v9 = a4;
  v13 = *(_QWORD *)(a1 + 24);
  if ( v13 )
    xmmword_241500(v13);
  v14 = (char *)sub_F79F0(a1, a2, -1, a4, a5, a6);
  v15 = v14;
  v20 = sub_F6590(a1, v14, a3, v9, a5, a6, a7, a8, 0, 0, nullptr);
  if ( v14 )
  {
    v15 = v14;
    sub_C9250(a1, v14);
  }
  if ( *(_BYTE *)(a1 + 103) || (v21 = 0, v20) )
  {
    v15 = (char *)v20;
    v21 = sub_D42C0(a1, v20, v16, v17, v18, v19);
  }
  v22 = *(_QWORD *)(a1 + 24);
  if ( v22 )
    xmmword_241510(v22, v15, v16);
  return v21;
}
