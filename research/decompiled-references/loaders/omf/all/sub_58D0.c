unsigned __int64 __fastcall sub_58D0(const char *a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  char v6; // r12
  unsigned __int16 v7; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  const char *v12; // r8
  _BYTE v13[1032]; // [rsp+0h] [rbp-438h] BYREF
  unsigned __int64 v14; // [rsp+408h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  while ( a2[6] < a2[1] )
  {
    sub_5890((__int64)a2, -1, 1);
    v5 = a2[6];
    a2[6] = v5 + 1;
    v6 = *(_BYTE *)(*a2 + v5);
    v7 = (unsigned __int8)v6;
    if ( v6 < 0 )
    {
      sub_5890((__int64)a2, -1, 1);
      v8 = a2[6];
      a2[6] = v8 + 1;
      v7 = ((v6 & 0x7F) << 8) | *(unsigned __int8 *)(*a2 + v8);
    }
    sub_5890((__int64)a2, -1, 1);
    v2 = a2[6];
    a2[6] = v2 + 1;
    v3 = *(unsigned __int8 *)(*a2 + v2);
    if ( (v3 & 0x80u) != 0 )
    {
      sub_5890((__int64)a2, -1, 1);
      v9 = a2[6];
      a2[6] = v9 + 1;
      v3 = *(unsigned __int8 *)(*a2 + v9) | ((v3 & 0x7F) << 8);
    }
    v4 = sub_5380(v7);
    if ( v4 != -1 )
    {
      if ( !v3 || v3 >= (unsigned __int64)xmmword_14508 )
        sub_52E0("get_omf_extdef");
      v11 = qword_14500 + 59LL * v3;
      v12 = src;
      if ( *(_QWORD *)(v11 + 8) )
        v12 = *(const char **)v11;
      qsnprintf(v13, 1024, "%s %s", a1, v12);
      append_cmt(v4, v13, 0);
    }
  }
  return v14 - __readfsqword(0x28u);
}
