__int64 __fastcall sub_14BA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  int word; // r12d
  __int64 v8; // rax
  void (*v9)(); // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  unsigned int v11; // r12d
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  int dword; // ebp
  __int64 v17; // rax
  __int64 v18; // rbp
  void (*v19)(); // rdx
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // rax

  switch ( *(_WORD *)(a3 + 12) )
  {
    case 0:
    case 4:
    case 0xD:
    case 0x25:
      goto LABEL_9;
    case 1:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 7;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5] >> 16,
        15,
        0,
        1);
      goto LABEL_9;
    case 2:
    case 0x22:
      *(_DWORD *)(a2 + 4) = 0;
      *(_WORD *)a2 = 4;
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD, __int64))(*a1 + 8LL))(
        a1,
        a1[4],
        a1[5],
        31,
        0,
        1);
      goto LABEL_9;
    case 3:
      *(_DWORD *)(a2 + 4) = 4;
      *(_WORD *)a2 = 4;
      a1[5] = (a1[5] >> 2) & 0x3FFFFFFLL;
      v13 = *a1;
      v14 = a1[4];
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(v13 + 48);
      if ( v15 == sub_14A30 )
        dword = get_dword(v14);
      else
        dword = v15((__int64)a1, v14);
      v17 = *a1;
      v18 = dword & 0xFC000000;
      v19 = *(void (**)())(*a1 + 16LL);
      if ( v19 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, __int64))v19)(a1, v18);
        v17 = *a1;
      }
      v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v17 + 80);
      if ( v20 == sub_149F0 )
        put_dword(a1[4], v18 | a1[5]);
      else
        v20((__int64)a1, a1[4], v18 | a1[5]);
      goto LABEL_9;
    case 5:
      v4 = *a1;
      v5 = a1[4];
      v6 = *(__int64 (__fastcall **)(__int64, __int64))(v4 + 40);
      if ( v6 == sub_14A40 )
        word = (unsigned __int16)get_word(v5);
      else
        word = (unsigned __int16)v6((__int64)a1, v5);
      v8 = *a1;
      v9 = *(void (**)())(*a1 + 16LL);
      if ( v9 != nullsub_2 )
      {
        ((void (__fastcall *)(_QWORD *, _QWORD))v9)(a1, (unsigned __int16)word);
        v8 = *a1;
      }
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v8 + 72);
      v11 = *((_DWORD *)a1 + 10) + word;
      if ( v10 == sub_14A50 )
        put_word(a1[4], (unsigned __int16)v11);
      else
        v10((__int64)a1, a1[4], (unsigned __int16)v11);
      *(_QWORD *)(a2 + 32) = 0;
      *(_QWORD *)(a2 + 24) = v11;
      *(_WORD *)a2 = 9;
      *(_DWORD *)(a2 + 4) = *(_BYTE *)(a2 + 4) & 2;
LABEL_9:
      result = 1;
      break;
    default:
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
      result = 0;
      break;
  }
  return result;
}
