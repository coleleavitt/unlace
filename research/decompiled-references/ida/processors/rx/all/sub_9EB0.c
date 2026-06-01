__int64 __fastcall sub_9EB0(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v11; // rax

  v1 = *a1;
  switch ( *((_BYTE *)a1 + 257) )
  {
    case 1:
      (*(void (__fastcall **)(_QWORD *, __int64, char *))(v1 + 280))(a1, 8, byte_FD91);
      break;
    case 2:
      (*(void (__fastcall **)(_QWORD *, __int64, char *))(v1 + 280))(a1, 8, byte_FD94);
      break;
    case 3:
      (*(void (__fastcall **)(_QWORD *, __int64, char *))(v1 + 280))(a1, 8, &byte_FD97);
      break;
    case 5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int16 *))(v1 + 280))(a1, 8, &word_FD9A);
      break;
    case 6:
      (*(void (__fastcall **)(_QWORD *, __int64, char *))(v1 + 280))(a1, 8, byte_FD9D);
      break;
    case 7:
      (*(void (__fastcall **)(_QWORD *, __int64, char *))(v1 + 280))(a1, 8, byte_FDA0);
      break;
    default:
      (*(void (__fastcall **)(_QWORD *))(v1 + 296))(a1);
      break;
  }
  v2 = 0;
  while ( BYTE1(a1[5 * v2 + 33]) )
  {
    v3 = *a1;
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 32))(a1, 44);
      v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v4 != sub_9E30 )
      {
        v4(a1, 32);
        goto LABEL_10;
      }
      v5 = a1[4];
      if ( v5 )
      {
        v6 = v5 + 1;
        v7 = a1[4];
        v8 = a1[3];
        --v5;
        if ( a1[5] < v6 )
          goto LABEL_19;
      }
      else
      {
        v8 = a1[3];
        v7 = 1;
        v6 = 2;
        if ( a1[5] < 2u )
        {
LABEL_19:
          v11 = qvector_reserve();
          a1[3] = v11;
          v8 = v11;
        }
      }
      a1[4] = v6;
      *(_BYTE *)(v8 + v5) = 32;
      *(_BYTE *)(a1[3] + v7) = 0;
LABEL_10:
      v9 = (unsigned int)v2++;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, v9);
      if ( v2 == 8 )
        break;
    }
    else
    {
      v2 = 1;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(v3 + 304))(a1, 0);
    }
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

