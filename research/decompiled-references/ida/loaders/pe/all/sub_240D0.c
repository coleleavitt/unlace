bool __fastcall sub_240D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  bool result; // al
  unsigned int v10; // edx
  unsigned int v11; // r13d
  unsigned int v12; // eax
  char *v13; // r15
  unsigned int v14; // r14d
  char *v15; // r13
  unsigned int v16; // r13d
  unsigned int v17; // eax
  char *v18; // r15
  unsigned int v19; // r14d
  char *v20; // r13
  const char *v21; // rdi
  char v22; // [rsp+0h] [rbp-E8h]
  bool v23; // [rsp+Fh] [rbp-D9h]
  bool v24; // [rsp+Fh] [rbp-D9h]
  bool v25; // [rsp+Fh] [rbp-D9h]
  char *s1; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-D0h]
  char *v28; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v29; // [rsp+38h] [rbp-B0h]
  _BYTE v30[12]; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+5Ch] [rbp-8Ch]
  _BYTE v32[4]; // [rsp+80h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-64h]
  unsigned int v34; // [rsp+88h] [rbp-60h]
  unsigned __int64 v35; // [rsp+A8h] [rbp-40h]

  v6 = a2 & 0xFF000000;
  v35 = __readfsqword(0x28u);
  if ( (a2 & 0xFF000000) == 0x2000000 )
  {
    if ( !(unsigned __int8)sub_227B0(a1, a1 + 152, ((unsigned int)a2 & 0xFFFFFF) - 1, (__int64)v30) || !v31 )
      return 0;
    v10 = v31 >> 2;
    if ( (v31 & 3) == 1 )
    {
      v10 |= 0x1000000u;
    }
    else if ( (v31 & 1) == 0 )
    {
      return 0;
    }
    if ( (v10 & 0xFF000000) != 0x1000000
      || !(unsigned __int8)sub_227B0(a1, a1 + 112, (v10 & 0xFFFFFF) - 1, (__int64)v32) )
    {
      return 0;
    }
    s1 = 0;
    v28 = 0;
    v27 = 0;
    v29 = 0;
    v11 = sub_230E0(a1, v33, (__int64 *)&s1);
    v12 = sub_230E0(a1, v34, (__int64 *)&v28);
    v13 = v28;
    v14 = v12;
    if ( v11 > 4 && (_QWORD)v27 && (v15 = s1, !strcmp(s1, "Enum")) )
    {
      if ( v14 > 6 )
      {
        v21 = v13;
        if ( !(_QWORD)v29 )
          v21 = ::s1;
        result = strcmp(v21, "System") == 0;
        if ( v13 )
        {
          v25 = result;
          *(_QWORD *)&v29 = 0;
          qfree();
          v15 = s1;
          result = v25;
        }
        if ( !v15 )
          goto LABEL_36;
LABEL_35:
        v23 = result;
        *(_QWORD *)&v27 = 0;
        qfree();
        result = v23;
        goto LABEL_36;
      }
      if ( !v13 )
      {
        if ( !v15 )
          return 0;
        goto LABEL_52;
      }
    }
    else if ( !v13 )
    {
LABEL_18:
      if ( !s1 )
        return 0;
LABEL_52:
      *(_QWORD *)&v27 = 0;
      qfree();
      return 0;
    }
    *(_QWORD *)&v29 = 0;
    qfree();
    goto LABEL_18;
  }
  if ( v6 == 452984832 )
    return 0;
  if ( v6 != 0x1000000 )
    sub_DA00((__int64)"Unexpected token %x.", a2, a3, a4, a5, a6, v22);
  if ( !(unsigned __int8)sub_227B0(a1, a1 + 112, ((unsigned int)a2 & 0xFFFFFF) - 1, (__int64)v32) )
    return 0;
  s1 = 0;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  v16 = sub_230E0(a1, v33, (__int64 *)&s1);
  v17 = sub_230E0(a1, v34, (__int64 *)&v28);
  v18 = v28;
  v19 = v17;
  if ( v16 <= 4 || !(_QWORD)v27 || (v20 = s1, strcmp(s1, "Enum")) )
  {
    if ( !v18 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( v19 <= 6 )
  {
    if ( !v18 )
      goto LABEL_25;
LABEL_28:
    *(_QWORD *)&v29 = 0;
    qfree();
LABEL_29:
    if ( s1 )
      goto LABEL_52;
    return 0;
  }
  if ( !(_QWORD)v29 )
  {
    if ( !v18 )
    {
LABEL_25:
      if ( v20 )
        goto LABEL_52;
      return 0;
    }
    qfree();
    result = 0;
    if ( !s1 )
      return 0;
    goto LABEL_35;
  }
  result = strcmp(v18, "System") == 0;
  if ( v18 )
  {
    v24 = result;
    *(_QWORD *)&v29 = 0;
    qfree();
    v20 = s1;
    result = v24;
  }
  if ( v20 )
    goto LABEL_35;
LABEL_36:
  if ( !result )
    return 0;
  *(_QWORD *)a3 = a1;
  *(_DWORD *)(a3 + 8) = a2;
  return result;
}
