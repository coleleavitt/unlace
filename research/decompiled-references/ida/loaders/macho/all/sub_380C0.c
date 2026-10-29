__int64 __fastcall sub_380C0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, const char *a5)
{
  const char *v8; // r8
  const char *v9; // rdx
  unsigned int v10; // r12d
  const char *v12; // rdx
  unsigned __int8 *v13; // [rsp+0h] [rbp-880h] BYREF
  __int128 v14; // [rsp+8h] [rbp-878h]
  const char *v15; // [rsp+20h] [rbp-860h] BYREF
  __int128 v16; // [rsp+28h] [rbp-858h]
  _BYTE v17[2056]; // [rsp+40h] [rbp-840h] BYREF
  unsigned __int64 v18; // [rsp+848h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v13 = nullptr;
  v15 = nullptr;
  v16 = 0;
  sub_35470((__int64 *)&v15);
  v8 = s1;
  if ( (_QWORD)v16 )
    v8 = v15;
  if ( !sub_31220(a1, (__int64 *)&v13, a3, a4, (__int64)v8, 0) )
  {
    v9 = s1;
    if ( *(_QWORD *)(a2 + 16) )
      v9 = *(const char **)(a2 + 8);
    sub_112F0((__int64)"Error loading dyld %s (%s)\n", a5, v9);
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v17[0] = 0;
  v10 = sub_1B1F0(a1, (unsigned __int64)v13, v13, &v13[v14], (__int64)v17, 0, 0x800u, a2, 0);
  if ( !(_BYTE)v10 )
  {
    v12 = s1;
    if ( *(_QWORD *)(a2 + 16) )
      v12 = *(const char **)(a2 + 8);
    sub_112F0((__int64)"Ignored bad information in %s (%s)\n", a5, v12);
    goto LABEL_7;
  }
LABEL_8:
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v10;
}

