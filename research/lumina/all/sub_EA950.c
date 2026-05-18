__int64 __fastcall sub_EA950(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rdi
  char v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]

  v15 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    xmmword_241500(v4);
  v5 = *(_QWORD *)(a1 + 560);
  if ( !v5 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      (unsigned int)&loc_24224,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    goto LABEL_8;
  }
  v6 = (unsigned __int64)&v14;
  switch ( (_DWORD)a2 )
  {
    case 2:
      v11 = 0;
      *(_BYTE *)(*(_QWORD *)v5 + 29LL) = 0;
      break;
    case 3:
      v11 = 0;
      *(_BYTE *)(*(_QWORD *)v5 + 29LL) = 2;
      break;
    case 1:
      v6 = (unsigned int)v15;
      v11 = 0;
      *(_BYTE *)(*(_QWORD *)v5 + 28LL) = v15;
      break;
    default:
      sub_E8BB0(
        0x15u,
        "%s at line %d of [%.10s]",
        "misuse",
        148022,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
LABEL_8:
      *(_DWORD *)(a1 + 80) = 21;
      a2 = 21;
      v11 = 21;
      sub_CA220((__int64 *)a1, 21, v7, v8, v9, v10);
      break;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
    xmmword_241510(v12, a2, v6);
  return v11;
}
