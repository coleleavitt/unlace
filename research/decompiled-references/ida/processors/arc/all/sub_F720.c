unsigned __int64 __fastcall sub_F720(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  _QWORD *v7; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  const char *v12; // rdi
  const char *v13; // r12
  char *v14; // rax
  const char *v15; // rdi
  const char *v17; // [rsp+0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v7 = *(_QWORD **)(a1 + 5320);
  v19 = __readfsqword(0x28u);
  if ( !v7 )
    goto LABEL_8;
  a5 = (_QWORD *)(a1 + 5312);
  v9 = (_QWORD *)(a1 + 5312);
  do
  {
    while ( 1 )
    {
      v10 = v7[2];
      v11 = v7[3];
      if ( v7[4] < a2 )
        break;
      v9 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !v10 )
        goto LABEL_6;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( v11 );
LABEL_6:
  if ( a5 == v9 || a2 < v9[4] )
  {
LABEL_8:
    v17 = nullptr;
    v18 = 0;
    if ( ((__int64 (__fastcall *)(const char **, unsigned __int64, __int64, _QWORD, _QWORD *, __int64))get_ea_name)(
           &v17,
           a2,
           512,
           0,
           a5,
           a6) <= 0 )
      goto LABEL_19;
    v12 = needle;
    if ( (_QWORD)v18 )
      v12 = v17;
    if ( !(unsigned __int8)is_uname(v12) )
    {
      v13 = needle;
      if ( (_QWORD)v18 )
        v13 = v17;
      v14 = strstr(v13, a3);
      if ( !v14 || v14 - v13 == -1 )
      {
LABEL_19:
        set_name(a2, a3, 6144);
        v15 = v17;
        if ( !v17 )
          return v19 - __readfsqword(0x28u);
        goto LABEL_17;
      }
    }
    v15 = v17;
    if ( v17 )
    {
LABEL_17:
      *(_QWORD *)&v18 = 0;
      qfree(v15);
    }
  }
  return v19 - __readfsqword(0x28u);
}

