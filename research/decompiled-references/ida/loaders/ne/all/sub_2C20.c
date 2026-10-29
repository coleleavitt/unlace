__int64 __fastcall sub_2C20(__int64 a1, const char **a2)
{
  const char *v4; // rax
  const char *v5; // r12
  __int64 v6; // rsi
  unsigned int v7; // [rsp+Ch] [rbp-8Ch] BYREF
  _WORD v8[16]; // [rsp+10h] [rbp-88h] BYREF
  _WORD v9[19]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int16 v10; // [rsp+56h] [rbp-42h]
  int v11; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v12; // [rsp+78h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v7 = 0;
  if ( qlread(a1, v8, 28) == 28 && v8[0] == 23117 )
  {
    qlseek(a1, 60, 0);
    if ( qlread(a1, &v7, 4) != 4 )
      return 0;
  }
  qlseek(a1, v7, 0);
  if ( qlread(a1, v9, 64) != 64 )
    return 0;
  if ( v9[0] != 17742 )
    return 0;
  v4 = (const char *)sub_2B70(a1, v10 + (unsigned __int64)v7);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( strcasecmp(v4, *a2) )
  {
    qfree(v5);
    return 0;
  }
  qfree(v5);
  v6 = v10 + (unsigned __int64)v7;
  if ( v6 )
    sub_28C0(a1, v6, (__int64)a2);
  if ( v11 )
    sub_28C0(a1, v11, (__int64)a2);
  return 1;
}

