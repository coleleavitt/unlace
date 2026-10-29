__int64 __fastcall sub_36BD0(__int64 a1, int *a2)
{
  __int64 v2; // rax
  int v4; // eax
  _DWORD *v5; // rax
  int *v6; // rsi
  _DWORD *v7; // rbx
  _DWORD *v8; // rbp
  _DWORD *v9; // rax
  void (__fastcall *v10)(__int64, int *, _DWORD *); // rax
  void (__fastcall *v11)(__int64, _DWORD *); // rax
  void (__fastcall *v12)(__int64, _DWORD *); // rax
  void (__fastcall *v13)(__int64, _DWORD *); // rax
  __int64 (__fastcall *v14)(__int64, _DWORD *); // rdx
  void (__fastcall *v16)(__int64, __int64, __int64); // rax
  __int64 v17; // r12
  _DWORD *v18; // rbp
  __int64 v19; // rbp
  _DWORD *v20; // r12
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  void (__fastcall *v23)(__int64, int *); // rax
  int *v24; // r12
  int v25; // eax
  _DWORD *v26; // r12
  void (__fastcall *v27)(__int64, int *); // rax
  _DWORD *v28; // rdx
  __int64 v29; // r12
  void (__fastcall *v30)(__int64, int *); // rax
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  _DWORD *v32; // rax
  _DWORD *v33; // r14
  void (__fastcall *v34)(__int64, int *); // rax
  _DWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r12
  _DWORD *v38; // r13
  void (__fastcall *v39)(__int64, int *); // rax
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // r13
  __int64 v44; // r12
  _DWORD *v45; // rbp
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  int v48; // [rsp+10h] [rbp-58h] BYREF
  int v49; // [rsp+14h] [rbp-54h]
  _DWORD *v50; // [rsp+18h] [rbp-50h]
  unsigned __int64 v51; // [rsp+28h] [rbp-40h]

  v2 = *((_QWORD *)a2 + 3);
  v51 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = v2;
  LODWORD(v2) = a2[9];
  *(_DWORD *)(a1 + 44) = v2;
  *(_DWORD *)(a1 + 12) = v2;
  *(_DWORD *)(a1 + 28) = a2[9];
  v4 = *a2;
  if ( *a2 == 20 )
  {
    if ( *((_BYTE *)a2 + 32) != 4 || (v28 = *((_DWORD **)a2 + 5), v29 = (__int64)(a2 + 12), *v28 != 7) )
    {
      if ( *((_BYTE *)a2 + 48) != 4 || **((_DWORD **)a2 + 7) != 7 )
        return v51 - __readfsqword(0x28u);
      hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      v29 = (__int64)(a2 + 12);
      hexdsp(275, (__int64)(a2 + 8), (__int64)(a2 + 12));
      v28 = *((_DWORD **)a2 + 5);
    }
    v48 = 4;
    v50 = sub_36550(a1, 20, (__int64)(v28 + 8), v29);
    v49 = v50[17];
    v7 = sub_36550(a1, 13, v29, (__int64)&v48);
    v30 = (void (__fastcall *)(__int64, int *))get_hexdsp(a1, 13);
    v6 = &v48;
    a1 = 276;
    v30(276, &v48);
    goto LABEL_10;
  }
  switch ( v4 )
  {
    case 19:
      if ( *((_BYTE *)a2 + 32) != 4 || (v18 = *((_DWORD **)a2 + 5), v17 = (__int64)(a2 + 12), *v18 != 7) )
      {
        if ( *((_BYTE *)a2 + 48) != 4 || **((_DWORD **)a2 + 7) != 7 )
        {
          v8 = sub_36550(a1, 20, (__int64)(a2 + 8), (__int64)(a2 + 12));
          v9 = sub_36550(a1, 12, (__int64)(a2 + 8), (__int64)(a2 + 12));
          v6 = (_DWORD *)(byte_9 + 4);
          v7 = sub_36230(a1, 13, (__int64)v9, (__int64)v8);
          break;
        }
        v16 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
        v17 = (__int64)(a2 + 12);
        v16(275, (__int64)(a2 + 8), (__int64)(a2 + 12));
        v18 = *((_DWORD **)a2 + 5);
      }
      v19 = (__int64)(v18 + 8);
      v20 = sub_36550(a1, 20, v19, v17);
      v21 = sub_36550(a1, 14, a1 + 40, v19);
      v22 = sub_36230(a1, 12, (__int64)v21, (__int64)v20);
      v48 = 4;
      v50 = v22;
      v49 = v22[17];
      v7 = sub_36550(a1, 13, (__int64)&v48, a1 + 8);
      v23 = (void (__fastcall *)(__int64, int *))get_hexdsp(a1, 13);
      v6 = &v48;
      a1 = 276;
      v23(276, &v48);
      break;
    case 7:
      if ( *((_BYTE *)a2 + 32) != 4 )
      {
LABEL_5:
        v5 = sub_36550(a1, 14, a1 + 40, (__int64)(a2 + 8));
LABEL_6:
        v6 = (_DWORD *)(byte_9 + 4);
        v7 = sub_363E0(a1, 13, (__int64)v5, a1 + 8);
        break;
      }
      v24 = *((int **)a2 + 5);
      v25 = *v24;
      if ( *v24 == 19 )
      {
        v43 = (__int64)(v24 + 8);
        v44 = (__int64)(v24 + 12);
        v45 = sub_36550(a1, 20, v43, v44);
        v46 = sub_36550(a1, 14, a1 + 40, v43);
        v47 = sub_363E0(a1, 13, (__int64)v46, v44);
        v5 = sub_36230(a1, 12, (__int64)v47, (__int64)v45);
        goto LABEL_6;
      }
      if ( v25 == 21 )
      {
        v36 = (__int64)(v24 + 8);
        v37 = (__int64)(v24 + 12);
        v48 = 4;
        v50 = sub_36550(a1, 20, v36, v37);
        v49 = v50[17];
        v38 = sub_36550(a1, 14, a1 + 24, (__int64)&v48);
        v39 = (void (__fastcall *)(__int64, int *))get_hexdsp(a1, 14);
        v39(276, &v48);
        v40 = sub_36550(a1, 14, a1 + 40, v36);
        v41 = sub_363E0(a1, 13, (__int64)v40, v37);
        v42 = sub_36230(a1, 12, (__int64)v41, (__int64)v38);
        v6 = (_DWORD *)(byte_9 + 4);
        v7 = sub_363E0(a1, 13, (__int64)v42, a1 + 8);
      }
      else
      {
        if ( v25 != 20 )
          goto LABEL_5;
        v50 = sub_36550(a1, 20, (__int64)(v24 + 8), (__int64)(v24 + 12));
        v48 = 4;
        v49 = v50[17];
        v26 = sub_36550(a1, 14, a1 + 40, (__int64)&v48);
        v27 = (void (__fastcall *)(__int64, int *))get_hexdsp(a1, 14);
        v27(276, &v48);
        v6 = (_DWORD *)(byte_9 + 4);
        v7 = sub_363E0(a1, 13, (__int64)v26, a1 + 8);
      }
      break;
    case 21:
      v32 = sub_36550(a1, 20, (__int64)(a2 + 8), (__int64)(a2 + 12));
      v48 = 4;
      v50 = v32;
      v49 = v32[17];
      v33 = sub_36550(a1, 14, a1 + 24, (__int64)&v48);
      v34 = (void (__fastcall *)(__int64, int *))get_hexdsp(a1, 14);
      v34(276, &v48);
      v35 = sub_36550(a1, 12, (__int64)(a2 + 8), (__int64)(a2 + 12));
      v6 = (_DWORD *)(byte_9 + 4);
      v7 = sub_36230(a1, 13, (__int64)v35, (__int64)v33);
      break;
    default:
      return v51 - __readfsqword(0x28u);
  }
LABEL_10:
  v10 = (void (__fastcall *)(__int64, int *, _DWORD *))get_hexdsp(a1, v6);
  v10(336, a2, v7);
  if ( v7 )
  {
    v11 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(336, a2);
    v11(276, v7 + 16);
    v12 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v7 + 16);
    v12(276, v7 + 12);
    v13 = (void (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v7 + 12);
    v13(276, v7 + 8);
    v14 = (__int64 (__fastcall *)(__int64, _DWORD *))get_hexdsp(276, v7 + 8);
    return v14(130, v7);
  }
  return v51 - __readfsqword(0x28u);
}
