__int64 __fastcall sub_13E90(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void (*v21)(void); // rax
  void (__fastcall *v22)(__int64 *, _BYTE *, __int64); // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  char v26; // [rsp+0h] [rbp-18h]

  switch ( a2[1] )
  {
    case 0:
      return 0;
    case 1:
      sub_134F0((__int64)a1, (__int64)a2);
      sub_135D0(a1, (__int64)a2, v17, v18, v19, v20);
      goto LABEL_3;
    case 2:
    case 0xB:
      sub_134F0((__int64)a1, (__int64)a2);
      sub_12FA0(a1, (__int64)a2, v6, v7, v8, v9);
LABEL_3:
      sub_133D0(a1, (__int64)a2, 0, v10, v11, v12);
      sub_13540((__int64)a1, (__int64)a2);
      sub_133D0(a1, (__int64)a2, 1, v13, v14, v15);
      break;
    case 5:
      v21 = *(void (**)(void))(*a1 + 32);
      if ( a2[33] )
        v21();
      else
        ((void (__fastcall *)(__int64 *, __int64))v21)(a1, 35);
      v22 = *(void (__fastcall **)(__int64 *, _BYTE *, __int64))(*a1 + 24);
      if ( a2[32] )
        v22(a1, a2, 4);
      else
        v22(a1, a2, 0);
      sub_133D0(a1, (__int64)a2, 0, v23, v24, v25);
      break;
    case 7:
      sub_12FA0(a1, (__int64)a2, a3, a4, a5, a6);
      break;
    case 8:
      sub_139A0(a1, (__int64)a2, a3, a4, a5, a6);
      break;
    case 9:
      sub_13360(a1);
      break;
    case 0xA:
      sub_13D80(a1, (__int64)a2);
      break;
    default:
      sub_10CA0((__int64)"interr: out", (__int64)a2, a3, a4, a5, a6, v26);
  }
  return 1;
}

