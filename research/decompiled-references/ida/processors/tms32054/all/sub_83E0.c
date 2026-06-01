__int64 __fastcall sub_83E0(_BYTE *a1)
{
  __int64 (__fastcall *v1)(_BYTE *, char); // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 (__fastcall *v6)(_BYTE *, char); // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(_BYTE *, char); // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rsi
  char v16; // al
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax

  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( !a1[305] )
    goto LABEL_25;
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
  v1 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
  if ( (char *)v1 == (char *)sub_7980 )
  {
    v2 = *((_QWORD *)a1 + 4);
    if ( v2 )
    {
      v5 = v2 + 1;
      v4 = *((_QWORD *)a1 + 4);
      v3 = *((_QWORD *)a1 + 3);
      --v2;
      if ( *((_QWORD *)a1 + 5) >= v5 )
        goto LABEL_5;
    }
    else
    {
      v3 = *((_QWORD *)a1 + 3);
      v4 = 1;
      v5 = 2;
      if ( *((_QWORD *)a1 + 5) >= 2u )
      {
LABEL_5:
        *((_QWORD *)a1 + 4) = v5;
        *(_BYTE *)(v3 + v2) = 32;
        *(_BYTE *)(*((_QWORD *)a1 + 3) + v4) = 0;
        goto LABEL_6;
      }
    }
    v18 = qvector_reserve();
    *((_QWORD *)a1 + 3) = v18;
    v3 = v18;
    goto LABEL_5;
  }
  v1(a1, 32);
LABEL_6:
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  if ( !a1[256] )
  {
    if ( !a1[345] )
      goto LABEL_25;
    goto LABEL_9;
  }
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
  (*(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "|| ", 5);
  switch ( *((_WORD *)a1 + 124) )
  {
    case 0xB3:
      v19 = "ld   ";
      break;
    case 0xB4:
    case 0xBA:
      v19 = "mac  ";
      break;
    case 0xB5:
    case 0xBB:
      v19 = "macr ";
      break;
    case 0xB6:
    case 0xBC:
      v19 = "mas  ";
      break;
    case 0xB7:
    case 0xBD:
      v19 = "masr ";
      break;
    case 0xB8:
      v19 = "add  ";
      break;
    case 0xB9:
      v19 = "sub  ";
      break;
    case 0xBE:
      v19 = "mpy  ";
      break;
    default:
      sub_6CD0((__int64)"interr: out parallel instruction");
      v19 = nullptr;
      break;
  }
  (*(void (__fastcall **)(_BYTE *, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v19, 5);
  if ( a1[345] )
  {
    if ( a1[256] )
    {
LABEL_15:
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
      if ( a1[252] )
      {
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        v11 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v11 == (char *)sub_7980 )
        {
          v12 = *((_QWORD *)a1 + 4);
          if ( v12 )
          {
            v13 = v12 + 1;
            v14 = *((_QWORD *)a1 + 4);
            --v12;
          }
          else
          {
            v14 = 1;
            v13 = 2;
          }
          v15 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v13 )
          {
            v20 = qvector_reserve();
            *((_QWORD *)a1 + 3) = v20;
            v15 = v20;
          }
          *((_QWORD *)a1 + 4) = v13;
          *(_BYTE *)(v15 + v12) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v14) = 0;
        }
        else
        {
          v11(a1, 32);
        }
        v16 = a1[252];
        if ( v16 == 1 )
        {
          (*(void (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 78) + 56LL) + 8LL * (unsigned __int8)a1[253]),
            33);
        }
        else if ( v16 == 9 )
        {
          sub_7E80((__int64)a1, a1[253]);
        }
      }
      goto LABEL_25;
    }
LABEL_9:
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v6 = *(__int64 (__fastcall **)(_BYTE *, char))(*(_QWORD *)a1 + 96LL);
    if ( (char *)v6 == (char *)sub_7980 )
    {
      v7 = *((_QWORD *)a1 + 4);
      if ( v7 )
      {
        v8 = v7 + 1;
        v9 = *((_QWORD *)a1 + 4);
        --v7;
      }
      else
      {
        v9 = 1;
        v8 = 2;
      }
      v10 = *((_QWORD *)a1 + 3);
      if ( *((_QWORD *)a1 + 5) < v8 )
      {
        v21 = qvector_reserve();
        *((_QWORD *)a1 + 3) = v21;
        v10 = v21;
      }
      *((_QWORD *)a1 + 4) = v8;
      *(_BYTE *)(v10 + v7) = 32;
      *(_BYTE *)(*((_QWORD *)a1 + 3) + v9) = 0;
    }
    else
    {
      v6(a1, 32);
    }
    goto LABEL_15;
  }
LABEL_25:
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

