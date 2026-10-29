_QWORD *__fastcall sub_14640(__int64 a1, int a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  char v9; // r14
  __int64 error_string; // r14
  int error_data; // r15d
  int qerrno; // eax
  char v14[8]; // [rsp+10h] [rbp-88h] BYREF
  __int128 v15; // [rsp+18h] [rbp-80h]
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 400);
  if ( !v3 )
    return nullptr;
  v5 = (_QWORD *)(a1 + 392);
  do
  {
    while ( 1 )
    {
      v6 = v3[2];
      v7 = v3[3];
      if ( v3[4] < a3 )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v7 );
LABEL_6:
  if ( (_QWORD *)(a1 + 392) == v5 || a3 < v5[4] )
    return nullptr;
  v14[0] = 2;
  v16 = 0;
  v15 = 0;
  qsnprintf();
  sub_C0A0(v17, 32);
  sub_C630(a1, a2);
  if ( !*((_BYTE *)v5 + 464) )
  {
    v8 = v5[6];
    if ( !(unsigned __int8)compile_idc_snippet() )
    {
      sub_C0B0(v17, v8);
      goto LABEL_12;
    }
    *((_BYTE *)v5 + 464) = 1;
  }
  v9 = call_idc_func();
  sub_C0B0(v14, v17);
  if ( v9 )
  {
    idcv_int64();
    v3 = v5 + 5;
    if ( !(_QWORD)v15 )
      goto LABEL_13;
    free_idcv();
    return nullptr;
  }
LABEL_12:
  error_string = get_error_string();
  error_data = get_error_data();
  qerrno = get_qerrno();
  sub_C0C0(*(_QWORD *)(a1 + 480), a3, qerrno, error_data, error_string);
LABEL_13:
  free_idcv();
  return v3;
}

