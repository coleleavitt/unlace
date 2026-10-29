__int64 __fastcall sub_24DD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v11; // rax
  char v12; // al
  char v13; // dl
  char v14; // al
  const char *v15; // [rsp+0h] [rbp-60h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-51h] BYREF
  __int64 v17; // [rsp+10h] [rbp-50h] BYREF
  char *s1; // [rsp+18h] [rbp-48h]
  __int128 v19; // [rsp+20h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  v17 = 0;
  s1 = nullptr;
  v7 = nullptr;
  v8 = 0;
  if ( get_ea_name() <= 0 )
    goto LABEL_2;
  v11 = sub_24700(a1, a2, a3, (__int64)s1, &v16, 0);
  v17 = v11;
  v7 = s1;
  if ( v11 )
  {
    v17 = -v11;
    v8 = v16 + 1;
LABEL_2:
    if ( !a4 )
      goto LABEL_5;
    v9 = v17;
    goto LABEL_4;
  }
  v12 = sub_78910(a3, s1, &v16);
  v7 = s1;
  if ( v12 )
  {
    v8 = 7;
    if ( v16 )
      v8 = 3;
    goto LABEL_2;
  }
  if ( (unsigned __int8)sub_789C0(a3, s1) )
  {
    v14 = sub_74E00(a1, a2, 0, &v17, 0);
    v7 = s1;
    if ( v14 )
      v17 = -v17;
    v8 = 4;
    goto LABEL_2;
  }
  v7 = s1;
  if ( !(_QWORD)v19 )
    goto LABEL_23;
  v15 = s1;
  v7 = s1;
  if ( !strcmp(s1, "__CHK") )
  {
    v17 = 4;
    v8 = 5;
    goto LABEL_2;
  }
  v7 = (char *)v15;
  if ( !strcmp(v15, "@__SystemInit$qv") )
  {
    v8 = 6;
    goto LABEL_2;
  }
  v7 = (char *)v15;
  if ( strcmp(v15, "@System@@LStrCatN$qqrv") )
  {
LABEL_23:
    v8 = 0;
    goto LABEL_2;
  }
  if ( a4 )
  {
    v13 = sub_74E00(a1, a2, 2, &v17, 0);
    v7 = s1;
    v9 = v17;
    v8 = 0;
    if ( v13 )
    {
      if ( *(_DWORD *)(a1[4] + 24LL) == 8 )
        v9 = 4 * v17;
      else
        v9 = 4 * (int)v17;
      v17 = v9;
      v8 = 8;
    }
LABEL_4:
    *a4 = v9;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_5:
  if ( v7 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v8;
}

