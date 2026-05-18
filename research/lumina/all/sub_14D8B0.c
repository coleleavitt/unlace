__int64 *__fastcall sub_14D8B0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  _QWORD *v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // rax
  const char *v12; // rdx
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __m128i *v18; // rax
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rbp
  int v24; // r12d
  _QWORD *v25; // r15
  unsigned __int8 v26; // al
  const char *v27; // rdx
  __int64 v28; // r15
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  __int64 v33; // rsi
  __m128i *v34; // r15
  __int64 *v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // eax
  __int64 *v42; // rax
  unsigned int v43; // r15d
  __int64 *v44; // rax
  __int64 v45; // rsi
  __m128i *v46; // rcx
  int v47; // r15d
  __int64 *v48; // rax
  __int64 v49; // r13
  __int64 *v51; // [rsp+10h] [rbp-298h]
  __int64 v53; // [rsp+18h] [rbp-290h]
  __int64 *v54; // [rsp+18h] [rbp-290h]
  __int64 *v55; // [rsp+20h] [rbp-288h]
  __int64 v56; // [rsp+20h] [rbp-288h]
  __int64 *v57; // [rsp+28h] [rbp-280h]
  int v58; // [rsp+44h] [rbp-264h]
  _QWORD *v59; // [rsp+48h] [rbp-260h]
  __int64 *v60; // [rsp+50h] [rbp-258h]
  __int64 v61; // [rsp+58h] [rbp-250h]
  char v62[4]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v63; // [rsp+64h] [rbp-244h]
  __int64 v64; // [rsp+6Ch] [rbp-23Ch]
  __int64 v65; // [rsp+78h] [rbp-230h]
  __int64 *v66; // [rsp+90h] [rbp-218h] BYREF
  __int128 v67; // [rsp+98h] [rbp-210h]
  __int128 v68; // [rsp+A8h] [rbp-200h]
  __int128 v69; // [rsp+B8h] [rbp-1F0h]
  __int64 v70[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  __int64 *v71; // [rsp+E0h] [rbp-1C8h]
  char v72; // [rsp+F5h] [rbp-1B3h]
  int v73; // [rsp+104h] [rbp-1A4h]
  int v74; // [rsp+108h] [rbp-1A0h]
  unsigned int v75; // [rsp+114h] [rbp-194h]
  _QWORD *v76; // [rsp+170h] [rbp-138h]
  __int64 v77; // [rsp+178h] [rbp-130h]
  int v78; // [rsp+198h] [rbp-110h]
  int v79; // [rsp+19Ch] [rbp-10Ch]
  int v80; // [rsp+1A0h] [rbp-108h]
  char v81; // [rsp+1A4h] [rbp-104h]
  unsigned __int8 v82; // [rsp+1A6h] [rbp-102h]
  const char *v83; // [rsp+238h] [rbp-70h]
  unsigned __int64 v84; // [rsp+268h] [rbp-40h]

  v4 = a1;
  v6 = *(_QWORD **)(a1 + 160);
  v7 = *(_QWORD *)a1;
  v84 = __readfsqword(0x28u);
  if ( !v6 )
    v6 = (_QWORD *)a1;
  v8 = sub_DC1C0(v7, 0x28u);
  if ( !v8 )
    return nullptr;
  v9 = v8;
  v8[1] = v6[22];
  v6[22] = v8;
  v10 = sub_DC1C0(v7, 0x30u);
  v9[2] = (__int64)v10;
  if ( !v10 )
    return nullptr;
  v11 = v6[2];
  v10[5] = *(_QWORD *)(v11 + 288);
  *(_QWORD *)(v11 + 288) = v10;
  *(__int64 *)((char *)v9 + 28) = -1;
  *((_DWORD *)v9 + 6) = a4;
  *v9 = a2;
  sub_E3CE0(v70, v7);
  v66 = v70;
  v77 = a3;
  v76 = v6;
  v12 = *(const char **)a2;
  v13 = *(_BYTE *)(a2 + 16);
  v67 = 0;
  v83 = v12;
  v68 = 0;
  v69 = 0;
  v81 = v13;
  v78 = *(_DWORD *)(a1 + 200);
  v72 = *(_BYTE *)(a1 + 37);
  v51 = v71;
  if ( v71 )
    goto LABEL_6;
  v51 = sub_E2050(v70);
  if ( v51 )
  {
    v12 = *(const char **)a2;
LABEL_6:
    if ( v12 )
    {
      v14 = sub_E8280(v7, "-- TRIGGER %s", v12);
      sub_DCC50((__int64)v51, -1, v14, 4294967290LL, v15, v16);
    }
    v17 = *(_QWORD *)(a2 + 24);
    if ( v17 )
    {
      v18 = sub_DD6E0(v7, v17, 0, nullptr);
      v19 = (__int64)v18;
      if ( *(_BYTE *)(v7 + 103) || sub_E45E0((__int64)&v66, (__int64)v18) )
      {
        v58 = 0;
      }
      else
      {
        v58 = --v75;
        sub_1253C0((__int64)v70, v19, v75, 16, 0.0);
      }
      if ( v19 )
        sub_D7720(v7, v19);
      v20 = *(_QWORD *)(a2 + 56);
      v21 = (__int64)v71;
      v22 = v70[0];
      if ( v20 )
        goto LABEL_14;
LABEL_30:
      if ( v58 )
        sub_E0BB0((__int64)v51, v58);
    }
    else
    {
      v20 = *(_QWORD *)(a2 + 56);
      v58 = 0;
      v21 = (__int64)v71;
      v22 = v70[0];
      if ( v20 )
      {
LABEL_14:
        v59 = v6;
        v60 = v9;
        v23 = v22;
        v61 = v4;
        v24 = a4;
        while ( 1 )
        {
          v26 = v24;
          if ( v24 == 11 )
            v26 = *(_BYTE *)(v20 + 1);
          v82 = v26;
          v27 = *(const char **)(v20 + 72);
          if ( v27 )
          {
            v28 = sub_E8280(v23, "-- %s", v27);
            v29 = sub_E1710(v21, 180, 0x7FFFFFFFu, 1u, 0);
            sub_DCC50(v21, v29, v28, 4294967290LL, v30, v31);
          }
          v32 = *(_BYTE *)v20;
          if ( *(_BYTE *)v20 == 0x80 )
            break;
          if ( v32 == -127 )
          {
            v45 = *(_QWORD *)(v20 + 40);
            v46 = nullptr;
            v47 = v82;
            if ( v45 )
              v46 = sub_DD6E0(v23, v45, 0, nullptr);
            v56 = (__int64)v46;
            v54 = sub_DD150(v23, *(_DWORD **)(v20 + 48), 0);
            v48 = sub_E5870(v70, v20);
            sub_146720((__int64)v70, (__int64)v48, (int *)v54, v56, v47, 0);
            goto LABEL_28;
          }
          if ( v32 == 127 )
          {
            v42 = sub_DE040(v23, *(_QWORD *)(v20 + 64));
            v43 = v82;
            v57 = v42;
            v55 = sub_DD0B0(v23, *(_QWORD *)(v20 + 56));
            v53 = sub_DD450(v23, *(char **)(v20 + 16), 0);
            v44 = sub_E5870(v70, v20);
            sub_14AFB0((__int64)v70, (__int64)v44, v53, v55, v43, v57, 0.0);
LABEL_28:
            sub_E1710(v21, 131, 0, 0, 0);
            v20 = *(_QWORD *)(v20 + 80);
            if ( !v20 )
              goto LABEL_29;
          }
          else
          {
            v25 = (_QWORD *)sub_DD450(v23, *(char **)(v20 + 16), 0);
            v62[0] = 4;
            v65 = 0;
            v63 = 0;
            v64 = 0;
            sub_11F190(v70, v25, v62);
            if ( v25 )
              sub_D75C0(v23, v25, 1);
            v20 = *(_QWORD *)(v20 + 80);
            if ( !v20 )
            {
LABEL_29:
              v6 = v59;
              v9 = v60;
              v4 = v61;
              goto LABEL_30;
            }
          }
        }
        v33 = *(_QWORD *)(v20 + 40);
        v34 = nullptr;
        if ( v33 )
          v34 = sub_DD6E0(v23, v33, 0, nullptr);
        v35 = sub_E5870(v70, v20);
        sub_14EFA0(v70, v35, v34);
        goto LABEL_28;
      }
    }
    sub_E1710((__int64)v51, 70, 0, 0, 0);
    v36 = v70;
    sub_D0050(v4, (__int64)v70);
    if ( !*(_DWORD *)(v4 + 48) )
    {
      v36 = v6 + 16;
      v49 = v51[17];
      sub_C9990((__int64)v51, (int *)v6 + 32);
      *((_DWORD *)v10 + 2) = *((_DWORD *)v51 + 36);
      v51[17] = 0;
      *v10 = v49;
    }
    *((_DWORD *)v10 + 3) = v74;
    v40 = v73;
    v10[4] = a2;
    *((_DWORD *)v10 + 4) = v40;
    *((_DWORD *)v9 + 7) = v79;
    *((_DWORD *)v9 + 8) = v80;
    sub_D0280((__int64)v51, (__int64)v36, v37, (__int64)v10, v38, v39);
    goto LABEL_35;
  }
  sub_D0050(a1, (__int64)v70);
LABEL_35:
  sub_D7990((__int64)v70);
  return v9;
}
