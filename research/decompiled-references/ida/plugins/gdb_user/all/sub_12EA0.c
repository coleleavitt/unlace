__int64 __fastcall sub_12EA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v10; // rax
  const char *v11; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = nullptr;
  v12 = 0;
  v3 = sub_F130();
  v4 = v3;
  v5 = s;
  if ( *(_QWORD *)(a1 + 16) )
    v5 = *(const char **)(a1 + 8);
  if ( (unsigned __int8)sub_3F9A0(v3, v5, &v11) )
  {
    v10 = sub_F0E0();
    *(_BYTE *)(v10 + 968) = 1;
    *(_QWORD *)(v10 + 864) = v4;
    free_idcv();
    v7 = 1;
  }
  else
  {
    v6 = s;
    if ( (_QWORD)v12 )
      v6 = v11;
    sub_DBE0((__int64)"%s\n", v6);
    free_idcv();
    v7 = 0;
  }
  v8 = v11;
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v7;
  if ( v8 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return 0;
}

