__int64 __fastcall sub_671F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // eax
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // r14
  char v10; // al
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  char v14; // al
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  char v19; // al
  unsigned int v20; // eax
  unsigned __int16 v21; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v22[1] = __readfsqword(0x28u);
  v3 = 0;
  if ( a3 <= 0xFFF )
    return v3;
  sub_67120(v22, a1, a3, nullptr);
  if ( !v22[0] )
    return v3;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 32LL))(v22[0]);
  v7 = v22[0];
  v8 = v6;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 32LL))(v22[0]);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int16 *, __int64))(*(_QWORD *)v7 + 48LL))(v7, &v21, 2) )
    goto LABEL_12;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, v9);
  v11 = v22[0];
  if ( !v10 )
  {
LABEL_6:
    v3 = 0;
    goto LABEL_7;
  }
  v12 = v21;
  if ( v21 > 0x1519u )
  {
    if ( v21 != 5642 )
    {
      if ( v21 > 0x160Au )
      {
        if ( v21 != 5643 )
          goto LABEL_6;
      }
      else if ( (unsigned __int16)(v21 - 5640) > 1u )
      {
        goto LABEL_6;
      }
      v13 = v8 + 20LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v13);
      goto LABEL_21;
    }
  }
  else
  {
    if ( v21 > 0x1503u )
    {
      LOWORD(v12) = v21 - 5380;
      switch ( v12 )
      {
        case 0LL:
        case 1LL:
        case 21LL:
          v13 = v8 + 18LL;
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v13);
          goto LABEL_21;
        case 2LL:
          v13 = v8 + 10LL;
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v13);
          goto LABEL_21;
        case 3LL:
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v8 + 14LL);
          goto LABEL_23;
        case 6LL:
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v8 + 6LL);
          goto LABEL_23;
        default:
          goto LABEL_6;
      }
    }
    if ( v21 == 6 )
    {
      v13 = v8 + 8LL;
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v13);
      goto LABEL_21;
    }
    if ( v21 > 6u )
    {
      if ( v21 != 7 )
        goto LABEL_6;
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v8 + 10LL);
      goto LABEL_23;
    }
    if ( (unsigned __int16)(v21 - 4) > 1u )
      goto LABEL_6;
  }
  v13 = v8 + 12LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 40LL))(v22[0], v13);
LABEL_21:
  if ( !v14 )
  {
LABEL_12:
    v11 = v22[0];
    goto LABEL_6;
  }
  v19 = sub_73830((unsigned int)v22, v13, v15, v16, v17, v18);
LABEL_23:
  if ( !v19 )
    goto LABEL_12;
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22[0] + 56LL))(v22[0], a2);
  v11 = v22[0];
  v3 = v20;
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  return v3;
}

