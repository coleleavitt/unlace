__int64 __fastcall sub_3FCA60(__int64 a1, int a2, bool a3, double a4)
{
  __int64 v4; // r15
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // r12d
  unsigned int v10; // edx
  signed int v11; // eax
  _DWORD *v12; // rdi
  unsigned __int8 v13; // r11
  unsigned int v14; // ebp
  unsigned __int8 v15; // al
  __int64 v17; // r14
  __int16 v18; // r8
  unsigned __int16 v19; // r9
  bool v20; // dl
  signed int v21; // r10d
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, int); // rax
  signed int v24; // eax
  int v25; // r14d
  char v26; // dl
  unsigned __int8 v27; // r11
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 (__fastcall *v30)(__int64, int); // rax
  int v31; // eax
  unsigned __int8 v32; // r11
  int dtype_size; // eax
  __int64 v34; // rsi
  __int64 (__fastcall *v35)(__int64, int); // rax
  int v36; // r8d
  int v37; // r14d
  __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  char v41; // al
  char v42; // al
  unsigned __int8 v43; // r9
  unsigned __int8 v44; // r13
  int v45; // eax
  int v46; // r10d
  __int64 v47; // r9
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int8 v50; // dl
  int v51; // eax
  unsigned __int8 *v52; // [rsp+8h] [rbp-60h]
  unsigned __int8 v53; // [rsp+8h] [rbp-60h]
  bool v55; // [rsp+10h] [rbp-58h]
  int v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  unsigned __int16 v58; // [rsp+10h] [rbp-58h]
  int v59; // [rsp+10h] [rbp-58h]
  unsigned __int8 v60; // [rsp+10h] [rbp-58h]
  int v61; // [rsp+18h] [rbp-50h]
  __int64 v62; // [rsp+18h] [rbp-50h]
  int v63; // [rsp+20h] [rbp-48h]
  bool v64; // [rsp+20h] [rbp-48h]
  int v65; // [rsp+24h] [rbp-44h]
  int v66; // [rsp+28h] [rbp-40h]

  v4 = a2;
  v7 = *(_DWORD **)(a1 + 832);
  v8 = v7[155];
  v61 = v7[16];
  v9 = v8;
  v52 = (unsigned __int8 *)(a1 + 40LL * a2 + 64);
  if ( a2 )
    v9 = v7[156];
  v10 = v9;
  if ( *(char *)(a1 + 54) >= 0 )
    v10 = v7[157];
  v11 = sub_3FB520(a1, a2, v10, a4);
  v12 = *(_DWORD **)(a1 + 832);
  v13 = 2;
  v14 = v11;
  if ( v12[21] == 8 )
    v13 = 7;
  switch ( *(_BYTE *)(a1 + 40LL * a2 + 65) )
  {
    case 1:
      if ( v12[20] == 8 && v12[120] == v11 )
      {
        dtype_size = get_dtype_size();
        sub_1D5D50(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, (int)v14, a2);
      }
      return v14;
    case 2:
    case 3:
    case 4:
      v18 = *(_WORD *)(a1 + 48);
      if ( (unsigned __int16)(v18 - 490) > 1u )
      {
        v19 = v18 - 474;
        v20 = v18 == 871 || v18 == 49;
        if ( a2 == 2 )
        {
          if ( v18 != 71 && v19 > 1u )
            goto LABEL_22;
        }
        else if ( a2 != 1 || v18 != 872 )
        {
          goto LABEL_22;
        }
        if ( !a3 )
          return (unsigned int)v9;
        v20 = a3;
        v9 = v8;
LABEL_22:
        v21 = v11;
        if ( *(char *)(a1 + 52) < 0 )
        {
          v22 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
          v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
          if ( v23 == sub_3EA010 )
          {
            v55 = v20;
            v24 = sub_3EA010((__int64)v12, v22);
            v20 = v55;
          }
          else
          {
            v64 = v20;
            v58 = v18 - 474;
            v24 = v23((__int64)v12, v22);
            v18 = *(_WORD *)(a1 + 48);
            v20 = v64;
            v19 = v58;
          }
          v21 = v24;
        }
        if ( v18 == 50 || v18 == 276 || a2 == 1 && ((*(_BYTE *)(a1 + 65) - 10) & 0xFD) == 0 )
        {
          v9 = v14;
LABEL_34:
          if ( (*(_DWORD *)(a1 + 52) & 0xA0) != 0 && !sub_3EB280(*(unsigned __int16 *)(a1 + 48)) )
          {
            if ( v26 < 0 )
            {
              v60 = v27;
              sub_3F9D00(a1, v52, v14, 1, 0, a4);
              v27 = v60;
            }
            v28 = *(_QWORD *)(a1 + 832);
            v29 = *(unsigned __int16 *)(a1 + 40 * v4 + 70);
            v30 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v28 + 168LL);
            if ( v30 == sub_3EA010 )
            {
              v31 = sub_3EA010(v28, v29);
            }
            else
            {
              v53 = v27;
              v31 = v30(v28, v29);
              v32 = v53;
            }
            sub_3F6E70(a1, 4u, v32, (int)v14, 0x3BEA45E214ADDC55LL, v31, a4, 0, 1);
          }
          return (unsigned int)v9;
        }
        v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL);
        if ( v19 <= 1u )
        {
          v56 = v21;
          v44 = *(_BYTE *)(a1 + 69);
          v45 = get_dtype_size();
          v46 = v56;
          v47 = v9;
          v65 = v45;
          v63 = v9 + v45;
        }
        else
        {
          if ( !v20 )
          {
            if ( *(char *)(a1 + 54) < 0 )
              return (unsigned int)v9;
            sub_3F6E70(a1, 2u, *(_BYTE *)(a1 + 40 * v4 + 69), v61, v21, v9, a4, v25, 1);
            goto LABEL_33;
          }
          if ( *(_WORD *)(a1 + 40 * v4 + 70) != 13 )
          {
            sub_3F6E70(a1, 2u, 7u, v61, v21, v9, a4, v25, 1);
LABEL_33:
            if ( sub_3F0900(a1 + 24)
              && get_dtype_size() < (unsigned __int64)*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL) )
            {
              v50 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
                v50 = 7;
              sub_3F8F20(a1, *(_BYTE *)(a1 + 40 * v4 + 69), v50, v9, v9, (*(_BYTE *)(a1 + 53) & 0xC) != 0);
            }
            goto LABEL_34;
          }
          v59 = v21;
          v44 = *(_BYTE *)(a1 + 69);
          v51 = get_dtype_size();
          v46 = v59;
          v47 = v9;
          v65 = v51;
          v63 = v9 + v51;
          if ( *(_BYTE *)(*(_QWORD *)(a1 + 800) + 145LL) )
          {
            v63 = v9;
            v47 = v9 + v51;
          }
        }
        v66 = v46;
        v48 = v61;
        v62 = v46;
        v57 = v48;
        sub_3F6E70(a1, 2u, v44, v48, v46, v47, a4, v25, 1);
        sub_3F68B0(a1, v66, v65, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL));
        sub_3F6E70(a1, 2u, v44, v57, v62, v63, a4, v25, 1);
        goto LABEL_33;
      }
      sub_3F6E70(a1, 4u, v13, v11, 0x3BEA45E214ADDC55LL, v9, a4, 0, 1);
      return v14;
    case 7:
      return v14;
    case 0xC:
      if ( v12[20] == 8 )
        return (unsigned int)-1;
      v17 = a1 + 40LL * a2;
      if ( *(_QWORD *)(v17 + 72) || *(char *)(v17 + 98) <= 0 )
        return (unsigned int)-1;
      v34 = *(unsigned __int16 *)(v17 + 70);
      v35 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v12 + 168LL);
      if ( v35 == sub_3EA010 )
      {
        v14 = sub_3EA010((__int64)v12, v34);
      }
      else
      {
        v49 = v35((__int64)v12, v34);
        v36 = *(char *)(v17 + 98);
        v14 = v49;
        if ( (unsigned __int8)(*(_BYTE *)(v17 + 98) + 1) <= 1u )
          goto LABEL_48;
      }
      v37 = v36 - 1;
      if ( !sub_3EDFE0(a1, (__int64)v52) )
        sub_3EAD10(a4);
      v14 += v37 * get_dtype_size();
LABEL_48:
      if ( !a2 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
        v39 = *(unsigned __int16 *)(a1 + 48);
        v40 = *(_DWORD *)(v38 + 104);
        if ( v39 >= v40
          && v39 < *(_DWORD *)(v38 + 108)
          && (*(_BYTE *)(*(_QWORD *)(v38 + 112) + 16LL * (v39 - v40) + 8) & 4) != 0 )
        {
          return v14;
        }
      }
      v41 = *(_BYTE *)(a1 + 96);
      if ( v41 )
        goto LABEL_69;
      v42 = *(_BYTE *)(a1 + 57);
      v43 = 1;
      if ( v42 >= 0 )
        goto LABEL_54;
      v41 = v42 & 0x7F;
LABEL_69:
      if ( (unsigned __int8)(v41 - 19) > 2u )
      {
        v43 = (unsigned __int8)(v41 - 9) > 3u;
LABEL_54:
        sub_3F8F20(a1, *(_BYTE *)(a1 + 40 * v4 + 69), 8u, v14, v9, v43);
        return (unsigned int)v9;
      }
      return v14;
    case 0xD:
      return (unsigned int)-1;
    default:
      if ( v11 == -1 )
        return v14;
      v15 = sub_3F0810(a1, a1 + 24, (__int64)v52, 0, a4);
      sub_3F6E70(a1, 4u, v15, (int)v14, 0x3BEA45E214ADDC55LL, v9, a4, 0, 1);
      return (unsigned int)v9;
  }
}

