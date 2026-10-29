__int64 __fastcall sub_F7AA0(__int64 a1, unsigned __int8 *a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdi
  unsigned __int8 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 *v16; // rbp
  unsigned int v17; // r12d
  unsigned int v18; // ebp
  __int64 v19; // rdi

  v9 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    xmmword_241500(v9);
  v11 = (unsigned __int8 *)sub_F79F0(a1, a2, -1, a4, a5, a6);
  v16 = v11;
  if ( v11 )
  {
    a2 = v11;
    v17 = sub_F6B70(a1, v11, a3, a4, a5, 0);
    sub_C9250(a1, v16);
    if ( *(_BYTE *)(a1 + 103) || v17 )
      goto LABEL_6;
  }
  else if ( *(_BYTE *)(a1 + 103) )
  {
    v17 = 0;
LABEL_6:
    a2 = (unsigned __int8 *)v17;
    v18 = sub_D42C0(a1, v17, v12, v13, v14, v15);
    goto LABEL_7;
  }
  v18 = 0;
LABEL_7:
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    xmmword_241510(v19, a2, v12);
  return v18;
}
