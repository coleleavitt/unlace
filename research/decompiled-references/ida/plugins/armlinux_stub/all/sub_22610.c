void *__fastcall sub_22610(__int64 *a1, __int64 a2)
{
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  const char *v10; // rsi
  size_t v11; // rax
  _BYTE v12[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v3 = pack_dd() - (_QWORD)v12;
  if ( v3 )
    sub_21AC0(a1, v12, v3);
  v4 = pack_dd() - (_QWORD)v12;
  if ( v4 )
    sub_21AC0(a1, v12, v4);
  v5 = pack_dd() - (_QWORD)v12;
  if ( v5 )
    sub_21AC0(a1, v12, v5);
  v6 = pack_dq() - (_QWORD)v12;
  if ( v6 )
    sub_21AC0(a1, v12, v6);
  v7 = pack_dd() - (_QWORD)v12;
  if ( v7 )
    sub_21AC0(a1, v12, v7);
  switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      return (void *)sub_22070(a1, a2 + 24);
    case 2:
    case 4:
      v8 = pack_dd() - (_QWORD)v12;
      if ( !v8 )
        return (void *)(v13 - __readfsqword(0x28u));
      goto LABEL_13;
    case 3:
    case 9:
    case 0xA:
      v10 = s;
      if ( *(_QWORD *)(a2 + 32) )
        v10 = *(const char **)(a2 + 24);
      return sub_21B80(a1, v10);
    case 5:
      v11 = pack_dq() - (_QWORD)v12;
      if ( v11 )
        sub_21AC0(a1, v12, v11);
      v8 = pack_dq() - (_QWORD)v12;
      if ( v8 )
LABEL_13:
        sub_21AC0(a1, v12, v8);
      return (void *)(v13 - __readfsqword(0x28u));
    case 7:
      return sub_22230(a1, a2 + 24);
    default:
      return (void *)(v13 - __readfsqword(0x28u));
  }
}

