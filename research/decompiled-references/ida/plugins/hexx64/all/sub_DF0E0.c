__int64 __fastcall sub_DF0E0(_QWORD *a1, unsigned int a2, signed int a3, __int64 a4, double a5)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // r11
  int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  __int64 (*v14)(); // rax
  unsigned int v15; // ebx
  __int64 v17; // rsi
  __int64 v18; // r15
  unsigned int v19; // ecx
  char v20; // bl
  int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 (*v24)(); // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // r11
  int v29; // edx
  int v30; // esi
  __int64 v31; // rax
  __int64 (*v32)(); // rax
  char v33; // dl
  int v34; // esi
  __int64 v35; // rax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  unsigned __int64 item_end; // rax
  __int64 v42; // [rsp-10h] [rbp-D0h]
  _DWORD *v43; // [rsp+0h] [rbp-C0h]
  __int64 v44; // [rsp+8h] [rbp-B8h]
  _DWORD *v45; // [rsp+8h] [rbp-B8h]
  __int64 v46; // [rsp+8h] [rbp-B8h]
  _DWORD *v47; // [rsp+8h] [rbp-B8h]
  _DWORD *v48; // [rsp+8h] [rbp-B8h]
  unsigned int v49; // [rsp+8h] [rbp-B8h]
  unsigned int v50; // [rsp+8h] [rbp-B8h]
  unsigned int v51; // [rsp+10h] [rbp-B0h]
  _DWORD *v52; // [rsp+10h] [rbp-B0h]
  __int64 v53; // [rsp+10h] [rbp-B0h]
  _DWORD *v54; // [rsp+10h] [rbp-B0h]
  __int64 v55; // [rsp+10h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-B0h]
  __int64 v57; // [rsp+10h] [rbp-B0h]
  __int64 v58; // [rsp+10h] [rbp-B0h]
  __int64 v59; // [rsp+10h] [rbp-B0h]
  char v61; // [rsp+20h] [rbp-A0h]
  char v62; // [rsp+20h] [rbp-A0h]
  _DWORD *v63; // [rsp+20h] [rbp-A0h]
  _QWORD *v64; // [rsp+28h] [rbp-98h]
  unsigned __int64 *v65[2]; // [rsp+30h] [rbp-90h] BYREF
  __int64 v66; // [rsp+40h] [rbp-80h]
  __int64 v67; // [rsp+48h] [rbp-78h]
  unsigned __int64 *v68; // [rsp+60h] [rbp-60h] BYREF
  __int64 v69; // [rsp+68h] [rbp-58h]
  __int64 v70; // [rsp+70h] [rbp-50h]
  __int128 v71; // [rsp+78h] [rbp-48h]
  unsigned __int64 v72; // [rsp+88h] [rbp-38h]

  v72 = __readfsqword(0x28u);
  v7 = a1[1];
  v8 = *(_QWORD *)(v7 + 1504);
  v64 = *(_QWORD **)(*(_QWORD *)(v7 + 528) + 8LL * a3);
  sub_105300((__int64)v65, v7, a4);
  v9 = (_DWORD *)sub_A9D90((__int64)v64, v65, v64[6], 0, 0x20u);
  v10 = v9;
  if ( !v9 )
    goto LABEL_6;
  v11 = *v9;
  if ( (unsigned int)(v11 - 56) <= 1 )
  {
    if ( *((_BYTE *)v10 + 64) )
      goto LABEL_50;
    v21 = *(_DWORD *)(*a1 + 72LL);
    if ( v21 == a2 )
      goto LABEL_59;
    v52 = v10;
    v22 = *(_QWORD *)(a1[1] + 784LL);
    v68 = nullptr;
    v69 = 0;
    v44 = v22;
    sub_64190((__int64 *)&v68, v21, a5);
    v61 = sub_6FC30(v44, (__int64 *)&v68, a2, a3, a5);
    qfree((__int64)v68);
    if ( !v61 )
      goto LABEL_59;
    v10 = v52;
    v11 = *v52;
    if ( *v52 != 4 )
    {
      v23 = v11 - 56;
      if ( v11 != 67 )
        goto LABEL_28;
      if ( v52[9] != v52[17] )
        goto LABEL_6;
      goto LABEL_26;
    }
LABEL_47:
    v33 = *((_BYTE *)v10 + 32);
    if ( v33 != 4 )
    {
      if ( (v33 & 0xFB) != 1 )
        goto LABEL_6;
LABEL_31:
      if ( *((_BYTE *)v10 + 64) == 1 )
      {
        v24 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
        if ( v24 != sub_DAAF0 )
        {
          v63 = v10;
          v40 = ((__int64 (__fastcall *)(__int64, _QWORD))v24)(v8, *((_QWORD *)v10 + 3));
          v10 = v63;
          if ( v40 == 1 )
          {
            v63[1] |= 8u;
            goto LABEL_59;
          }
        }
        if ( v10[17] < *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL) )
          goto LABEL_13;
        v25 = a1[1];
        v26 = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 16LL);
        if ( v26 )
          goto LABEL_84;
        v39 = **(unsigned int **)(*a1 + 344LL);
        if ( (unsigned int)v39 >= *(_DWORD *)(v25 + 64) )
          sub_DAC10(a5);
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v39) + 56LL);
        if ( v26 )
        {
LABEL_84:
          v53 = v26;
          v45 = v10;
          sub_105300((__int64)&v68, v25, a4);
          v27 = sub_129150((__int64)v64, &v68, v53, 0, 0, 0, 0x101u);
          v28 = v45;
          if ( v70 )
          {
            v46 = v27;
            v54 = v28;
            *(_QWORD *)&v71 = 0;
            qfree(v70);
            v27 = v46;
            v28 = v54;
          }
          v55 = v27;
          v47 = v28;
          qfree((__int64)v68);
          if ( v55 )
          {
            if ( *(_DWORD *)v55 == 4 && *(_BYTE *)(v55 + 32) == 1 && v47[18] == *(_DWORD *)(v55 + 40) )
              goto LABEL_13;
            v29 = v47[17];
            v30 = v47[18];
            v68 = nullptr;
            v69 = 0;
            sub_63E80((__int64 *)&v68, v30, v29, a5);
            v31 = a1[1];
            a5 = 0.0;
            v70 = 0;
            v71 = 0;
            if ( !sub_17C4E0(*(__int64 **)(v31 + 784), (__int64)&v68, a3, 0xFFFFFFFF, (__int64)v47, 0, 2u, 0) )
            {
              v32 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
              if ( v32 != sub_DAAF0 && ((unsigned int (__fastcall *)(__int64, __int64, __int64))v32)(v8, -1, v42) != -1 )
              {
                v59 = a1[1];
                item_end = get_item_end();
                if ( (__int64)sub_1CFBE0(v59, item_end) > 0 )
                {
                  v47[1] |= 8u;
                  if ( v70 )
                  {
                    *(_QWORD *)&v71 = 0;
                    qfree(v70);
                  }
LABEL_68:
                  qfree((__int64)v68);
                  goto LABEL_59;
                }
              }
            }
            if ( v70 )
            {
              *(_QWORD *)&v71 = 0;
              qfree(v70);
            }
            qfree((__int64)v68);
          }
        }
      }
LABEL_6:
      v12 = (_DWORD *)v64[43];
      v13 = &v12[v64[44]];
      if ( v12 != v13 )
      {
        while ( *v12 != a2 )
        {
          if ( v13 == ++v12 )
          {
            if ( a1[39] == -1 )
              goto LABEL_13;
            goto LABEL_17;
          }
        }
        if ( v12 == v13 )
          goto LABEL_12;
        v14 = *(__int64 (**)())(*(_QWORD *)v8 + 280LL);
        if ( v14 == sub_DAAF0 || ((unsigned int (__fastcall *)(__int64, _QWORD))v14)(v8, v64[4]) != 1 )
          goto LABEL_12;
        goto LABEL_59;
      }
LABEL_12:
      if ( a1[39] == -1 )
      {
LABEL_13:
        v15 = 0;
        goto LABEL_14;
      }
LABEL_17:
      v17 = a1[1];
      if ( a3 != a2 )
      {
        v18 = *(_QWORD *)(v17 + 784);
        v19 = *(_DWORD *)(*a1 + 72LL);
        v68 = nullptr;
        v69 = 0;
        v51 = v19;
        sub_64190((__int64 *)&v68, a2, a5);
        v20 = sub_6FC30(v18, (__int64 *)&v68, a3, v51, a5);
        qfree((__int64)v68);
        if ( v20 )
          goto LABEL_13;
        v17 = a1[1];
      }
      v68 = nullptr;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      sub_103D60(a4, v17, (__int64)&v68);
      v38 = sub_A9D90((__int64)v64, &v68, v64[6], 0, 1u);
      if ( !v38 || *(_BYTE *)(v38 + 64) != 8 || **(_QWORD **)(v38 + 72) != a1[39] )
      {
        if ( v70 )
        {
          *(_QWORD *)&v71 = 0;
          qfree(v70);
        }
        qfree((__int64)v68);
        goto LABEL_13;
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70);
      }
      goto LABEL_68;
    }
    goto LABEL_27;
  }
  if ( v11 == 4 )
    goto LABEL_47;
  if ( v11 != 67 )
    goto LABEL_29;
  if ( v10[17] != v10[9] )
    goto LABEL_6;
LABEL_26:
  if ( *((_BYTE *)v10 + 32) != 4 )
    goto LABEL_6;
LABEL_27:
  v23 = **((_DWORD **)v10 + 5) - 56;
LABEL_28:
  if ( v23 > 1 )
    goto LABEL_29;
LABEL_50:
  v34 = *(_DWORD *)(*a1 + 72LL);
  if ( v34 == a2 )
  {
LABEL_29:
    if ( v11 != 4 )
      goto LABEL_6;
    goto LABEL_30;
  }
  v48 = v10;
  v35 = *(_QWORD *)(a1[1] + 784LL);
  v68 = nullptr;
  v69 = 0;
  v56 = v35;
  sub_64190((__int64 *)&v68, v34, a5);
  LOBYTE(v56) = sub_6FC30(v56, (__int64 *)&v68, a2, a3, a5);
  qfree((__int64)v68);
  v10 = v48;
  if ( !(_BYTE)v56
    || a3 == a2
    || (v43 = v48,
        v57 = *(_QWORD *)(a1[1] + 784LL),
        v36 = *(_DWORD *)(*a1 + 72LL),
        v68 = nullptr,
        v69 = 0,
        v49 = v36,
        sub_64190((__int64 *)&v68, a3, a5),
        LOBYTE(v57) = sub_6FC30(v57, (__int64 *)&v68, a2, v49, a5),
        qfree((__int64)v68),
        v10 = v43,
        !(_BYTE)v57) )
  {
LABEL_56:
    if ( *v10 != 4 )
      goto LABEL_6;
LABEL_30:
    if ( (v10[8] & 0xFB) != 1 )
      goto LABEL_6;
    goto LABEL_31;
  }
  v58 = *(_QWORD *)(a1[1] + 784LL);
  v37 = *(_DWORD *)(*a1 + 72LL);
  v68 = nullptr;
  v69 = 0;
  v50 = v37;
  sub_64190((__int64 *)&v68, a2, a5);
  v62 = sub_6FC30(v58, (__int64 *)&v68, a3, v50, a5);
  qfree((__int64)v68);
  if ( v62 )
  {
    v10 = v43;
    goto LABEL_56;
  }
LABEL_59:
  v15 = 1;
LABEL_14:
  if ( v66 )
  {
    v67 = 0;
    qfree(v66);
  }
  qfree((__int64)v65[0]);
  return v15;
}

