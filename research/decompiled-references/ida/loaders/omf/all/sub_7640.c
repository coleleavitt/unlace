__int64 __fastcall sub_7640(__int64 a1, char a2, char a3, char a4)
{
  _QWORD *exception; // rdi
  unsigned int v7; // r13d
  char v9; // dl
  __int64 v10; // rcx
  char v11; // si
  char v12; // dl
  _BYTE *v13; // rax
  _BYTE *v14; // rcx
  char v15; // r14
  __int64 v16; // rsi
  int v17; // [rsp+Ch] [rbp-7Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-78h] BYREF
  __int128 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  __int128 v21; // [rsp+30h] [rbp-58h]
  unsigned __int64 v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+48h] [rbp-40h]
  char v24; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a2 )
    qlseek(a1, 0, 0);
  v18 = 0;
  v23 = 0;
  v20 = 0;
  v22 = 0;
  v24 = 1;
  v19 = 0;
  v21 = 0;
  if ( !(unsigned __int8)sub_57B0(&v18, a1) )
    goto LABEL_4;
  v9 = a4 ^ 1;
  if ( BYTE2(v23) == 128 && v9 )
    goto LABEL_21;
  if ( BYTE2(v23) == 2 && a4 )
  {
    if ( !*sub_7530((__int64)&v18, 0xFFFFFFFFFFFFFFFFLL) )
      goto LABEL_4;
    v10 = v19;
    if ( v22 >= (unsigned __int64)v19 || (_QWORD)v19 - v22 != 2 )
      goto LABEL_4;
    v11 = HIBYTE(v23);
    if ( !HIBYTE(v23) )
      goto LABEL_27;
    v12 = v23 + BYTE1(v23) + BYTE2(v23);
    goto LABEL_24;
  }
  if ( BYTE2(v23) == 112 && a4 )
  {
LABEL_21:
    if ( !*sub_7530((__int64)&v18, 0xFFFFFFFFFFFFFFFFLL) )
    {
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a3 )
      goto LABEL_4;
    if ( BYTE2(v23) != 130 && BYTE2(v23) != 240 && BYTE2(v23) != 243 && BYTE2(v23) != 164 )
    {
      if ( BYTE2(v23) != 44 )
        goto LABEL_4;
      v9 = a4;
    }
    if ( !v9 )
      goto LABEL_4;
  }
  v11 = HIBYTE(v23);
  if ( !HIBYTE(v23) )
    goto LABEL_27;
  v10 = v19;
  v12 = v23 + BYTE1(v23) + BYTE2(v23);
  if ( (_QWORD)v19 )
  {
LABEL_24:
    v13 = (_BYTE *)v18;
    v14 = (_BYTE *)(v18 + v10);
    do
      v12 += *v13++;
    while ( v13 != v14 );
  }
  if ( v12 + v11 )
    goto LABEL_4;
LABEL_27:
  v7 = sub_57B0(&v18, a1);
  if ( !(_BYTE)v7 )
    goto LABEL_4;
  v15 = BYTE2(v23);
  if ( !BYTE2(v23) || !strchr(s, BYTE2(v23)) || !(_WORD)v23 )
    goto LABEL_4;
  if ( v15 == -13 && a3 )
  {
    v22 = 1;
    if ( (unsigned __int64)v19 <= 4 )
    {
      if ( !v24 )
        sub_5230((__int64)"Too short OMF record");
      exception = __cxa_allocate_exception(8u);
      *exception = &off_13D38;
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'omf_probing_failure_t, (void (*)(void *))sub_4420);
    }
    v16 = *(unsigned int *)(v18 + 1);
    v22 = 5;
    qlseek(a1, v16, 1);
    v17 = 0;
    if ( qlread(a1, &v17, 4) != 4 || !v17 )
      goto LABEL_4;
  }
LABEL_5:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return v7;
}

