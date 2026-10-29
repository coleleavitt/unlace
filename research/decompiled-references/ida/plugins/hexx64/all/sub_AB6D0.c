__int64 __fastcall sub_AB6D0(__m128i *a1, unsigned int *a2, _DWORD a3, unsigned int a4, double a5)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int *v11; // rbx
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int32 v17; // eax
  __int64 v18; // r13
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int32 v22; // eax
  __int64 v23; // rdx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  __int64 v26; // r8
  char v27; // al
  char v28; // al
  __int64 v29; // r8
  __int128 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r9d
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int128 v40; // rdi
  int v41; // eax
  __int64 (__fastcall **v42)(); // rdi
  __int64 v43; // r8
  char v44; // al
  __int32 v45; // eax
  unsigned __int8 *v46; // [rsp+0h] [rbp-A8h]
  _DWORD *v47; // [rsp+0h] [rbp-A8h]
  __int64 v48; // [rsp+0h] [rbp-A8h]
  unsigned int v49; // [rsp+0h] [rbp-A8h]
  __int64 v50; // [rsp+0h] [rbp-A8h]
  _DWORD *v51; // [rsp+0h] [rbp-A8h]
  __int64 v52; // [rsp+8h] [rbp-A0h]
  __int64 v53; // [rsp+8h] [rbp-A0h]
  unsigned __int8 *v54; // [rsp+8h] [rbp-A0h]
  __int64 v55; // [rsp+8h] [rbp-A0h]
  unsigned __int8 *v56; // [rsp+10h] [rbp-98h]
  _DWORD *v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+10h] [rbp-98h]
  _DWORD *v59; // [rsp+10h] [rbp-98h]
  _DWORD *v60; // [rsp+10h] [rbp-98h]
  __int64 v61; // [rsp+18h] [rbp-90h]
  _DWORD *v62; // [rsp+18h] [rbp-90h]
  __int64 v63; // [rsp+20h] [rbp-88h]
  __int16 v64[8]; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall **v65)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v66; // [rsp+48h] [rbp-60h]
  __int16 v67; // [rsp+58h] [rbp-50h]
  void *v68; // [rsp+60h] [rbp-48h]
  unsigned __int64 v69; // [rsp+68h] [rbp-40h]

  v5 = a1[30].m128i_i64[0];
  v69 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 112);
  v8 = a1[4].m128i_i64[0];
  v9 = *(unsigned int *)(v8 + 892);
  *(_DWORD *)(v8 + 892) = v9 + 1;
  if ( *((_BYTE *)a2 + 64) == 14 )
    return 0;
  v11 = a2;
  while ( 2 )
  {
    v12 = *(unsigned int *)(v7 + 88);
    if ( (int)v11[17] >= (int)v12 )
      return 0;
    switch ( *v11 )
    {
      case 1u:
        if ( (int)v11[9] >= (int)v12 )
          return 0;
        goto LABEL_22;
      case 2u:
LABEL_22:
        if ( (a4 & 1) == 0 )
        {
          if ( (unsigned __int8)sub_A8C50(a1, *((int **)v11 + 2), (__int64)v11, a5)
            || (unsigned __int8)sub_A8C50(a1, *((int **)v11 + 1), (__int64)v11, a5) )
          {
            goto LABEL_25;
          }
LABEL_7:
          if ( (a4 & 7) != 6 )
            goto LABEL_17;
          v14 = *((_QWORD *)v11 + 2);
          if ( !v14 || *(_DWORD *)v14 != 11 && (*v11 == 4 || *(_DWORD *)v14 != 4) )
          {
            v14 = *((_QWORD *)v11 + 1);
            if ( !v14 )
            {
              if ( !sub_32ED70(*v11) )
                goto LABEL_17;
LABEL_76:
              if ( (v11[1] & 0x40010) != 0
                || (*((_BYTE *)v11 + 65) & 2) != 0
                || sub_A2650(a1[4].m128i_i64[0], (__int64)v11)
                || (signed int)v11[17] >= *(_DWORD *)(v7 + 88) )
              {
                goto LABEL_17;
              }
              sub_123A40((__int64)v64, (unsigned __int8 *)v11 + 64, v38, v39);
              if ( (unsigned __int8)sub_12CD10(v64, (unsigned __int64 *)v7, 1) )
              {
                *((_QWORD *)&v40 + 1) = &v65;
                *(_QWORD *)&v40 = a1;
                v66 = 0;
                v65 = nullptr;
                v41 = sub_1DFCE0(v40, (__int64)v11, (__int64)v64);
                v42 = v65;
                if ( !v41 && (_QWORD)v66 == 1 && v65[1] == (__int64 (__fastcall *)())&byte_1 && !*v65 )
                {
                  if ( (unsigned __int8)sub_12B890((__int64)v11, v7, 9, (unsigned __int8 *)v64, 2 * v11[17]) )
                  {
                    sub_11D5D0((__int64)v11, v7);
                    if ( v65 )
                    {
                      *(_QWORD *)&v66 = 0;
                      qfree((__int64)v65);
                    }
                    sub_11CDA0((__int64)v64);
LABEL_25:
                    v17 = a1[1].m128i_i32[2];
                    BYTE1(v17) &= ~2u;
                    LOBYTE(v17) = v17 | 0x80;
                    a1[1].m128i_i32[2] = v17;
                    sub_A2520((__int64)a1, "a partial reference has been resolved (try=%d)");
                    goto LABEL_26;
                  }
                  v42 = v65;
                }
                if ( v42 )
                {
                  *(_QWORD *)&v66 = 0;
                  qfree((__int64)v42);
                }
              }
              sub_11CDA0((__int64)v64);
              goto LABEL_17;
            }
            if ( *(_DWORD *)v14 != 11 )
            {
              v15 = *v11;
              if ( (_DWORD)v15 == 4 || *(_DWORD *)v14 != 4 )
              {
                if ( !sub_32ED70(v15) )
                  goto LABEL_17;
                goto LABEL_76;
              }
            }
          }
          a4 |= 1u;
          v11 = (unsigned int *)v14;
          if ( *(_BYTE *)(v14 + 64) == 14 )
            return 0;
          continue;
        }
        if ( (unsigned __int8)sub_A8C50(a1, (int *)v11, *((_QWORD *)v11 + 2), a5)
          || (unsigned __int8)sub_A8C50(a1, (int *)v11, *((_QWORD *)v11 + 1), a5) )
        {
          goto LABEL_25;
        }
LABEL_17:
        if ( !(unsigned __int8)sub_113B10(a1->m128i_i64, (__int64)v11, a4 | 2) )
          return 0;
LABEL_26:
        *(_DWORD *)a1[4].m128i_i64[0] &= ~0x10000u;
        return 1;
      case 4u:
        if ( *((char *)v11 + 4) < 0 )
          goto LABEL_7;
        *(_QWORD *)&v66 = a1;
        v65 = off_4DBF78;
        *((_QWORD *)&v66 + 1) = a4;
        v67 = 257;
        v68 = sub_AFD10;
        if ( (unsigned __int8)sub_AA9B0((__int64)&v65, v11, v12, v9) )
          goto LABEL_25;
        if ( (a4 & 4) != 0 )
          goto LABEL_7;
        if ( *((_BYTE *)v11 + 64) == 10 )
          goto LABEL_17;
        if ( (a4 & 1) != 0 )
        {
          v18 = *((_QWORD *)v11 + 2);
          if ( !v18 )
            goto LABEL_17;
        }
        else
        {
          v18 = *((_QWORD *)v11 + 1);
          if ( !v18 )
            goto LABEL_17;
        }
        if ( *(_DWORD *)v18 == 4 && (*(_BYTE *)(v18 + 64) & 0xFB) != 0xA )
        {
          v46 = (unsigned __int8 *)(v18 + 32);
          v52 = (__int64)(v11 + 16);
          if ( !sub_11EFE0((unsigned __int8 *)(v18 + 32), (unsigned __int8 *)v11 + 64, 2u) )
          {
            v56 = (unsigned __int8 *)(v11 + 8);
            v61 = v18 + 64;
            if ( !sub_11EFE0((unsigned __int8 *)v11 + 32, (unsigned __int8 *)(v18 + 64), 2u)
              && (v11[1] & 0x40010) == 0
              && (*((_BYTE *)v11 + 65) & 2) == 0 )
            {
              v63 = a1[4].m128i_i64[0];
              if ( !sub_A2650(v63, (__int64)v11)
                && (*(_DWORD *)(v18 + 4) & 0x40010) == 0
                && (*(_BYTE *)(v18 + 65) & 2) == 0
                && !sub_A2650(v63, v18) )
              {
                v20 = a1[4].m128i_i64[0];
                if ( (a4 & 1) != 0 )
                {
                  if ( !(unsigned __int8)sub_12CF30(v20, (__int64)v46, v56, (__int64)v56, 1, v19) )
                    goto LABEL_17;
                  sub_157210((__int64)a1, *(_QWORD *)(v18 + 8), v61, *((_QWORD *)v11 + 1), v52, 1);
                  sub_A1280(v7, (__int64)v11, *(_DWORD *)(v18 + 4));
                  v21 = v18;
                }
                else
                {
                  if ( !(unsigned __int8)sub_12CF30(v20, (__int64)v56, v46, (__int64)v46, 1, v19) )
                    goto LABEL_17;
                  sub_157210((__int64)a1, *((_QWORD *)v11 + 1), v52, *(_QWORD *)(v18 + 8), v61, 1);
                  sub_A1280(v7, v18, v11[1]);
                  v21 = (__int64)v11;
                }
                sub_11D5A0(v21);
                v22 = a1[1].m128i_i32[2];
                BYTE1(v22) &= ~2u;
                LOBYTE(v22) = v22 | 0x80;
                a1[1].m128i_i32[2] = v22;
                goto LABEL_25;
              }
            }
          }
        }
        goto LABEL_17;
      case 7u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
        *(_QWORD *)&v66 = a1;
        v67 = 257;
        v65 = off_4DBF78;
        *((_QWORD *)&v66 + 1) = a4;
        v68 = sub_AF430;
        v13 = sub_AA9B0((__int64)&v65, v11, v12, v9);
        goto LABEL_6;
      case 0xBu:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        v65 = off_4DBF78;
        *(_QWORD *)&v66 = a1;
        *((_QWORD *)&v66 + 1) = a4;
        v67 = 257;
        v68 = sub_A27B0;
        if ( (unsigned __int8)sub_AA9B0((__int64)&v65, v11, v12, 257) )
          goto LABEL_25;
        if ( *v11 != 11 )
          goto LABEL_17;
        if ( *((_BYTE *)v11 + 32) != 4 )
          goto LABEL_17;
        v24 = *((_DWORD **)v11 + 5);
        if ( !v24 || (unsigned int)(*v24 - 8) > 1 )
          goto LABEL_17;
        v47 = *((_DWORD **)v11 + 5);
        sub_123A40((__int64)&v65, (unsigned __int8 *)v11 + 64, v23, (__int64)v24);
        if ( !(unsigned __int8)sub_12CD10((__int16 *)&v65, (unsigned __int64 *)v7, 0) )
          goto LABEL_101;
        v25 = v47;
        v26 = *((_QWORD *)v11 + 1);
        v48 = (__int64)(v47 + 8);
        if ( !v26
          || *(_DWORD *)v26 != 4
          || (v57 = v25,
              v53 = *((_QWORD *)v11 + 1),
              v27 = sub_125B60((unsigned __int8 *)(v26 + 32), v48, 0),
              v25 = v57,
              !v27)
          || (v62 = v57,
              v58 = v53,
              v54 = (unsigned __int8 *)(v53 + 64),
              v28 = sub_125B60(v54, (__int64)&v65, 0),
              v29 = v58,
              v25 = v62,
              !v28) )
        {
          v43 = *((_QWORD *)v11 + 2);
          if ( !v43 )
            goto LABEL_101;
          v60 = v25;
          if ( *(_DWORD *)v43 != 4 )
            goto LABEL_101;
          v55 = *((_QWORD *)v11 + 2);
          if ( !sub_125B60((unsigned __int8 *)(v43 + 32), v48, 0) )
            goto LABEL_101;
          v50 = v55;
          v54 = (unsigned __int8 *)(v55 + 64);
          v44 = sub_125B60(v54, (__int64)&v65, 0);
          v29 = v50;
          v25 = v60;
          if ( !v44 )
            goto LABEL_101;
        }
        v59 = v25;
        if ( (*(_DWORD *)(v29 + 4) & 0x40010) != 0
          || (*(_BYTE *)(v29 + 65) & 2) != 0
          || (v51 = (_DWORD *)v29, sub_A2650(a1[4].m128i_i64[0], v29)) )
        {
          sub_11CDA0((__int64)&v65);
          return 0;
        }
        if ( !(unsigned __int8)sub_131830((__int64)v54, (unsigned __int64 *)v7, 1u) )
        {
LABEL_101:
          sub_11CDA0((__int64)&v65);
          goto LABEL_17;
        }
        *v51 = *v59;
        sub_A1280(v7, (__int64)v51, v11[1]);
        sub_11D5A0((__int64)v11);
        v45 = a1[1].m128i_i32[2];
        BYTE1(v45) &= ~2u;
        LOBYTE(v45) = v45 | 0x80;
        a1[1].m128i_i32[2] = v45;
        sub_11CDA0((__int64)&v65);
        goto LABEL_25;
      case 0xCu:
        if ( (a4 & 1) != 0 )
          goto LABEL_62;
        goto LABEL_7;
      case 0xDu:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        *((_QWORD *)&v30 + 1) = v11;
        *(_QWORD *)&v30 = a1;
        if ( (unsigned __int8)sub_AB280(v30) )
          goto LABEL_25;
LABEL_62:
        v31 = sub_11C8A0((__int64)v11, v64);
        if ( !v31 )
          goto LABEL_17;
        v33 = *(unsigned int *)(v7 + 88);
        if ( *(_DWORD *)(v31 + 4) >= (int)v33 )
          goto LABEL_17;
        *(_QWORD *)&v66 = a1;
        v67 = 257;
        v65 = off_4DBF78;
        *((_QWORD *)&v66 + 1) = a4;
        v68 = sub_AA060;
        v13 = sub_AA9B0((__int64)&v65, v11, v32, v33);
LABEL_6:
        if ( !v13 )
          goto LABEL_7;
        goto LABEL_25;
      case 0x18u:
        if ( (a4 & 1) == 0 )
          goto LABEL_7;
        v49 = v11[9];
        if ( (unsigned __int8)sub_11FD80((char *)v11 + 48, &v65, 1u) )
        {
          if ( (__int64 (__fastcall **)())(int)(8 * v49 - 1) == v65 )
          {
            v37 = sub_12CF30(
                    a1[4].m128i_i64[0],
                    (__int64)(v11 + 8),
                    (unsigned __int8 *)v11 + 64,
                    (__int64)(v11 + 16),
                    0,
                    v36);
            v34 = (__int64)(v11 + 16);
            if ( v37 )
            {
              if ( (v11[1] & 0x40010) == 0
                && (*((_BYTE *)v11 + 65) & 2) == 0
                && !sub_A2650(a1[4].m128i_i64[0], (__int64)v11) )
              {
                sub_A0E10((__int64)(v11 + 16), v7);
                *v11 = 8;
                sub_11CDA0((__int64)(v11 + 12));
                goto LABEL_25;
              }
              goto LABEL_17;
            }
          }
        }
        v65 = off_4DBF78;
        *(_QWORD *)&v66 = a1;
        *((_QWORD *)&v66 + 1) = a4;
        v67 = 257;
        v68 = sub_AA3D0;
        if ( !(unsigned __int8)sub_AA9B0((__int64)&v65, v11, v34, v35) )
          goto LABEL_17;
        goto LABEL_25;
      default:
        goto LABEL_7;
    }
  }
}

