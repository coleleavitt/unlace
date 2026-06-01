__int64 __fastcall sub_A100(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD *, char); // rax
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax

  v2 = a1[77];
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 1:
      v5 = *(unsigned __int16 *)(a2 + 6);
      goto LABEL_3;
    case 3:
      v8 = *(_BYTE *)(a2 + 32);
      if ( v8 == 44 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
        v9 = *a1;
        v10 = 45;
LABEL_12:
        (*(void (__fastcall **)(_QWORD *, __int64))(v9 + 32))(a1, v10);
        v11 = *(unsigned __int16 *)(a2 + 6);
LABEL_13:
        v12 = sub_A700(v2, v11);
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v12, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
        return 1;
      }
      if ( v8 == 46 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
        v16 = sub_A700(v2, *(unsigned __int16 *)(a2 + 6));
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v16, 33);
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
        v17 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
        if ( v17 == sub_9E30 )
        {
          v18 = a1[4];
          if ( v18 )
          {
            v19 = v18 + 1;
            v20 = a1[4];
            --v18;
          }
          else
          {
            v20 = 1;
            v19 = 2;
          }
          v21 = a1[3];
          if ( a1[5] < v19 )
          {
            v22 = qvector_reserve();
            a1[3] = v22;
            v21 = v22;
          }
          a1[4] = v19;
          *(_BYTE *)(v21 + v18) = 32;
          *(_BYTE *)(a1[3] + v20) = 0;
        }
        else
        {
          v17(a1, 32);
        }
        v11 = (unsigned __int16)*(char *)(a2 + 33);
        goto LABEL_13;
      }
      if ( v8 != 43 )
      {
        if ( (unsigned __int8)is_defarg() )
          (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 24LL))(a1, a2, 0);
        v9 = *a1;
        v10 = 91;
        goto LABEL_12;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      v15 = sub_A700(v2, *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v15, 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      return 1;
    case 4:
      if ( *(_QWORD *)(a2 + 8) )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 91);
      v13 = sub_A700(v2, *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v13, 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
      if ( *(_BYTE *)(a2 + 32) != 42 )
        return 1;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 46);
      v14 = *(_BYTE *)(a2 + 33);
      if ( v14 == 3 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 108);
      }
      else if ( v14 > 3 )
      {
        if ( v14 == 4 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 117);
LABEL_21:
          (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 119);
        }
      }
      else
      {
        if ( v14 != 1 )
        {
          if ( v14 != 2 )
            return 1;
          goto LABEL_21;
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 98);
      }
      return 1;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 35);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 4);
      return 1;
    case 7:
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*a1 + 120LL))(
              a1,
              a2,
              *(_QWORD *)(a2 + 16),
              *(_QWORD *)(a2 + 16)) )
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, 201);
      return 1;
    case 9:
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)*(char *)(a2 + 32));
      return 1;
    case 0xA:
      v4 = sub_A700(a1[77], *(unsigned __int16 *)(a2 + 6));
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v4, 33);
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 45);
      v5 = (unsigned __int16)*(char *)(a2 + 33);
LABEL_3:
      v6 = sub_A700(v2, v5);
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, v6, 33);
      return 1;
    default:
      return 1;
  }
}

