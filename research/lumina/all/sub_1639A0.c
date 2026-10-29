__int64 __fastcall sub_1639A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // ebx
  char *v12; // rdx
  __int64 v13; // rdi
  _QWORD *v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v15[1] = (_QWORD *)__readfsqword(0x28u);
  if ( !a1 )
  {
    v11 = 21;
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      97311,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return v11;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(v7 + 24);
  if ( v9 )
    xmmword_241500(v9);
  v10 = *(_QWORD *)(a1 + 24);
  if ( !v10 )
  {
    v11 = 4;
    goto LABEL_11;
  }
  *(_DWORD *)(v10 + 52) = 0;
  v11 = sub_1630E0(a1, a2, (__int64 *)v15, a7);
  if ( v11 )
  {
    v12 = "%s";
    if ( !v15[0] )
      v12 = nullptr;
    sub_F63C0(v7, v11, v12);
    if ( v15[0] )
      sub_C9250(v7, v15[0]);
    goto LABEL_11;
  }
  if ( *(_BYTE *)(v7 + 103) )
  {
LABEL_11:
    a2 = v11;
    v11 = sub_D42C0(v7, v11, a3, a4, a5, a6);
  }
  v13 = *(_QWORD *)(v7 + 24);
  if ( v13 )
    xmmword_241510(v13, a2, a3);
  return v11;
}
