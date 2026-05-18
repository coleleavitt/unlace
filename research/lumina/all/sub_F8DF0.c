__int64 __fastcall sub_F8DF0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rbp
  _DWORD *v12; // rbx
  int v13; // r14d
  __int64 v14; // rsi
  int v15; // esi
  int v16; // r8d
  __int64 v17; // r9
  _DWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // esi
  __int64 v22; // rax
  int *v23; // rsi
  int v24; // eax
  __int64 v25; // rsi
  int v26; // edx
  __int64 v27; // rax
  int v28; // r15d
  int *v29; // r14
  int *v30; // rax
  __int64 v31; // rax
  int *v32; // rdx
  char *v33; // rax
  __int64 v34; // r14
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r15
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // eax
  int v46; // r12d
  __int64 v47; // r13
  bool v48; // zf
  __int64 v49; // r14
  int v50; // eax
  int v51; // edx
  signed int v52; // ecx
  __m128i *v53; // r11
  int v54; // eax
  __int64 *v55; // rax
  int v56; // edx
  __int64 v57; // rcx
  int v58; // eax
  bool v59; // cc
  char v60; // al
  const char *v61; // rdx
  int v62; // [rsp+8h] [rbp-100h]
  __int64 v63; // [rsp+8h] [rbp-100h]
  __int64 v64; // [rsp+8h] [rbp-100h]
  __int64 v65; // [rsp+10h] [rbp-F8h]
  int *v66; // [rsp+10h] [rbp-F8h]
  int v67; // [rsp+18h] [rbp-F0h]
  _QWORD *v68; // [rsp+20h] [rbp-E8h]
  __int64 v69; // [rsp+20h] [rbp-E8h]
  int v70; // [rsp+28h] [rbp-E0h]
  __int64 *v71; // [rsp+28h] [rbp-E0h]
  __int64 v72; // [rsp+30h] [rbp-D8h]
  __int64 v73; // [rsp+40h] [rbp-C8h]
  __m128i *v75; // [rsp+48h] [rbp-C0h]
  int v76; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v77; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall *v78)(); // [rsp+68h] [rbp-A0h]
  __int64 (__fastcall *v79)(); // [rsp+70h] [rbp-98h]
  __int64 v80; // [rsp+78h] [rbp-90h]
  __int64 v81; // [rsp+88h] [rbp-80h]
  _QWORD v82[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v83; // [rsp+A0h] [rbp-68h]
  __int64 v84; // [rsp+A8h] [rbp-60h]
  int v85; // [rsp+B8h] [rbp-50h]
  __int64 v86; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v87; // [rsp+C8h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 4);
  if ( (v2 & 4) != 0 )
    return 1;
  v3 = a2;
  v4 = a1[5];
  v5 = *a1;
  if ( (v2 & 0x40) == 0 )
  {
    sub_CFDC0(*a1, a2, a1[5]);
    if ( *(_DWORD *)(v5 + 48) )
      return 2;
    return 1;
  }
  v73 = *(_QWORD *)(a2 + 80);
  if ( !a2 )
  {
LABEL_71:
    if ( v73 )
    {
      v40 = *(_QWORD *)(v3 + 72);
      if ( v40 )
      {
        v41 = *(_DWORD *)v40;
        v64 = *(_QWORD *)v5;
        if ( *(_DWORD *)v40 > *(_DWORD *)(*(_QWORD *)v5 + 144LL) )
        {
          sub_DBD10(v5, "too many terms in ORDER BY clause");
          return 2;
        }
        v42 = 0;
        if ( v41 > 0 )
        {
          do
          {
            v43 = v42++;
            *(_BYTE *)(v40 + 24 * v43 + 25) &= ~4u;
          }
          while ( v41 != v42 );
        }
        v44 = *(_QWORD *)(v3 + 80);
        for ( *(_QWORD *)(v3 + 88) = 0; v44; v44 = *(_QWORD *)(v3 + 80) )
        {
          *(_QWORD *)(v44 + 88) = v3;
          v3 = *(_QWORD *)(v3 + 80);
        }
        v45 = *(_DWORD *)v40;
        if ( v3 )
        {
LABEL_79:
          v66 = *(int **)(v3 + 32);
          if ( v45 <= 0 )
            goto LABEL_90;
          v69 = v3;
          v67 = 0;
          v71 = (__int64 *)(v3 + 40);
          v46 = 0;
          v47 = v40 + 8;
          while ( 1 )
          {
            v48 = (*(_BYTE *)(v47 + 17) & 4) == 0;
            v76 = -1;
            if ( !v48 )
              goto LABEL_87;
            v49 = *(_QWORD *)v47;
LABEL_83:
            if ( !v49 )
              goto LABEL_87;
            while ( 1 )
            {
              v50 = *(_DWORD *)(v49 + 4);
              if ( (v50 & 0x41000) == 0 )
                break;
              if ( (v50 & 0x40000) == 0 )
              {
                v49 = *(_QWORD *)(v49 + 16);
                goto LABEL_83;
              }
              v49 = *(_QWORD *)(*(_QWORD *)(v49 + 32) + 8LL);
              if ( !v49 )
                goto LABEL_87;
            }
            if ( (unsigned int)sub_CE930(v49, &v76) )
            {
              v52 = *v66;
              if ( v76 <= 0 || v76 > v52 )
              {
                sub_E43A0(v5, (__int64)"ORDER", (unsigned int)(v46 + 1), v52, v49);
                return 2;
              }
LABEL_100:
              if ( *(_BYTE *)(v5 + 292) <= 1u )
              {
                v77 = 0;
                LODWORD(v78) = 0;
                v55 = sub_DEC00(v64, 155, (__int64)&v77, 0);
                if ( !v55 )
                  return 2;
                v56 = v76;
                *((_DWORD *)v55 + 1) |= 0x400u;
                *((_DWORD *)v55 + 2) = v56;
                v57 = *(_QWORD *)v47;
                if ( *(_QWORD *)v47 == v49 )
                {
                  *(_QWORD *)v47 = v55;
                }
                else
                {
                  while ( **(_BYTE **)(v57 + 16) == 113 )
                    v57 = *(_QWORD *)(v57 + 16);
                  *(_QWORD *)(v57 + 16) = v55;
                }
                sub_D7720(v64, v49);
                *(_WORD *)(v47 + 20) = v76;
              }
              *(_BYTE *)(v47 + 17) |= 4u;
              goto LABEL_87;
            }
            if ( *(_BYTE *)v49 != 59 )
              break;
            v54 = sub_CE4C0(v66, (unsigned __int8 **)(v49 + 8));
            v76 = v54;
            if ( !v54 )
              goto LABEL_104;
LABEL_108:
            if ( v54 > 0 )
              goto LABEL_100;
            v67 = 1;
LABEL_87:
            v45 = *(_DWORD *)v40;
            ++v46;
            v47 += 24;
            if ( v46 >= *(_DWORD *)v40 )
            {
              v3 = *(_QWORD *)(v69 + 88);
              if ( !v3 || !v67 )
                goto LABEL_90;
              goto LABEL_79;
            }
          }
          v76 = 0;
LABEL_104:
          v53 = sub_DD6E0(v64, v49, 0, nullptr);
          if ( !*(_BYTE *)(v64 + 103) )
          {
            v75 = v53;
            v58 = sub_F8D20((__int64 *)v5, *(int **)(v69 + 32), v71, (__int64)v53);
            v59 = *(_BYTE *)(v5 + 292) <= 1u;
            v76 = v58;
            v53 = v75;
            if ( !v59 && v58 > 0 )
            {
              sub_F8D20((__int64 *)v5, *(int **)(v69 + 32), v71, v49);
              v53 = v75;
            }
          }
          if ( v53 )
            sub_D7720(v64, (__int64)v53);
          v54 = v76;
          goto LABEL_108;
        }
LABEL_90:
        if ( v45 > 0 )
        {
          v51 = 0;
          if ( (*(_BYTE *)(v40 + 25) & 4) == 0 )
          {
LABEL_131:
            sub_DBD10(v5, "%r ORDER BY term does not match any column in the result set", (unsigned int)(v51 + 1));
            return 2;
          }
          while ( ++v51 != v45 )
          {
            if ( (*(_BYTE *)(v40 + 24LL * v51 + 25) & 4) == 0 )
              goto LABEL_131;
          }
        }
      }
    }
    return 1;
  }
  v6 = v82;
  v70 = 0;
  v72 = *(_QWORD *)v5;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v3 + 96);
    *(_DWORD *)(v3 + 4) = v2 | 4;
    v6[5] = 0;
    v82[0] = v5;
    *(_OWORD *)(v6 + 3) = 0;
    v86 = v3;
    *(_OWORD *)(v6 + 1) = 0;
    if ( sub_E45E0((__int64)v6, v7) )
      return 2;
    v8 = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(v3 + 6) & 1) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)(v8 + 48) + 72LL) = *(_QWORD *)(v3 + 72);
      v8 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 72) = 0;
    }
    if ( *(int *)v8 > 0 )
    {
      v68 = v6;
      v9 = v3;
      v10 = v4;
      v11 = v5;
      v12 = (_DWORD *)v8;
      v13 = 0;
      while ( 1 )
      {
        v14 = *(_QWORD *)&v12[26 * v13 + 12];
        if ( v14 )
        {
          if ( (*(_BYTE *)(v14 + 4) & 4) == 0 )
            break;
        }
LABEL_15:
        if ( *v12 <= ++v13 )
        {
          v5 = v11;
          v4 = v10;
          v3 = v9;
          v6 = v68;
          goto LABEL_27;
        }
      }
      v16 = 0;
      if ( v10 )
        v16 = *(_DWORD *)(v10 + 32);
      v17 = *(_QWORD *)(v11 + 360);
      v18 = &v12[26 * v13];
      v19 = *((_QWORD *)v18 + 3);
      if ( v19 )
      {
        *(_QWORD *)(v11 + 360) = v19;
        v14 = *((_QWORD *)v18 + 6);
        v80 = 0;
        v77 = v11;
        v78 = sub_105C10;
        v81 = v10;
        v79 = sub_F8DF0;
        if ( !v14 )
        {
          v15 = *(_DWORD *)(v11 + 48);
          *(_QWORD *)(v11 + 360) = v17;
          if ( v15 )
            return 2;
LABEL_12:
          if ( v10 )
            BYTE1(v12[26 * v13 + 17]) = (8 * (*(_DWORD *)(v10 + 32) > v16)) | BYTE1(v12[26 * v13 + 17]) & 0xF7;
          v12 = *(_DWORD **)(v9 + 40);
          goto LABEL_15;
        }
      }
      else
      {
        v80 = 0;
        v77 = v11;
        v81 = v10;
        v78 = sub_105C10;
        v79 = sub_F8DF0;
      }
      v65 = v17;
      v62 = v16;
      sub_CDAF0((__int64)&v77, (_QWORD *)v14);
      v20 = *(_DWORD *)(v11 + 48);
      v16 = v62;
      *(_QWORD *)(v11 + 360) = v65;
      if ( v20 )
        return 2;
      goto LABEL_12;
    }
LABEL_27:
    v85 = 16385;
    v22 = *(_QWORD *)(v3 + 40);
    v23 = *(int **)(v3 + 32);
    v84 = v4;
    v82[1] = v22;
    if ( (unsigned int)sub_E46F0(v6, v23) )
      return 2;
    v24 = v85;
    v25 = *(_QWORD *)(v3 + 64);
    v26 = v85;
    v63 = *(_QWORD *)(v3 + 56);
    BYTE1(v26) = BYTE1(v85) & 0xBF;
    v85 = v26;
    if ( v63 )
    {
      *(_DWORD *)(v3 + 4) |= v24 & 0x8001000 | 8;
      v27 = *(_QWORD *)(v3 + 32);
      v85 |= 0x80u;
      v83 = v27;
      if ( v25 && sub_E45E0((__int64)v6, v25) )
        return 2;
    }
    else if ( (v24 & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 4) |= v24 & 0x8001000 | 8;
      v39 = *(_QWORD *)(v3 + 32);
      v85 |= 0x80u;
      v83 = v39;
      if ( v25 )
      {
LABEL_57:
        sub_DBD10(v5, "a GROUP BY clause is required before HAVING");
        return 2;
      }
    }
    else
    {
      v35 = v24 & 0xFFFFBFFE;
      v85 = v35;
      v36 = *(_QWORD *)(v3 + 32);
      LOBYTE(v35) = v35 | 0x80;
      v85 = v35;
      v83 = v36;
      if ( v25 )
        goto LABEL_57;
    }
    v28 = sub_E45E0((__int64)v6, *(_QWORD *)(v3 + 48));
    if ( v28 )
      return 2;
    v29 = *(int **)(v3 + 40);
    if ( *v29 > 0 )
      break;
LABEL_38:
    if ( *(_BYTE *)(v5 + 292) > 1u )
    {
      v34 = *(_QWORD *)(v3 + 120);
      if ( v34 )
      {
        while ( !(unsigned int)sub_E46F0(v6, *(int **)(v34 + 24)) && !(unsigned int)sub_E46F0(v6, *(int **)(v34 + 16)) )
        {
          v34 = *(_QWORD *)(v34 + 64);
          if ( !v34 )
            goto LABEL_39;
        }
        return 2;
      }
    }
LABEL_39:
    v85 |= 0x4001u;
    v84 = 0;
    if ( (*(_BYTE *)(v3 + 6) & 1) != 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 48LL);
      *(_QWORD *)(v3 + 72) = *(_QWORD *)(v31 + 72);
      *(_QWORD *)(v31 + 72) = 0;
    }
    v32 = *(int **)(v3 + 72);
    if ( (v73 != 0) <= v70 && v32 && (unsigned int)sub_F8AC0((__int64 **)v6, v3, v32, "ORDER", 0.0)
      || *(_BYTE *)(v72 + 103) )
    {
      return 2;
    }
    v85 &= ~0x4000u;
    if ( v63 )
    {
      if ( (unsigned int)sub_F8AC0((__int64 **)v6, v3, (int *)v63, "GROUP", 0.0) || *(_BYTE *)(v72 + 103) )
        return 2;
      v37 = v63 + 8;
      if ( *(int *)v63 > 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v63 + 8) + 4LL) & 0x10) != 0 )
        {
LABEL_65:
          sub_DBD10(v5, "aggregate functions are not allowed in the GROUP BY clause");
          return 2;
        }
        v38 = v37 + 8 * (3LL * (unsigned int)(*(_DWORD *)v63 - 1) + 3);
        while ( 1 )
        {
          v37 += 24;
          if ( v37 == v38 )
            break;
          if ( (*(_BYTE *)(*(_QWORD *)v37 + 4LL) & 0x10) != 0 )
            goto LABEL_65;
        }
      }
    }
    v33 = *(char **)(v3 + 88);
    if ( v33 && **(_DWORD **)(v3 + 32) != **((_DWORD **)v33 + 4) )
    {
      if ( (v33[5] & 2) != 0 )
      {
        sub_DBD10(v5, "all VALUES must have the same number of terms");
        return 2;
      }
      else
      {
        v60 = *v33;
        v61 = "EXCEPT";
        if ( v60 != -120 )
        {
          v61 = "INTERSECT";
          if ( v60 != -119 )
          {
            v61 = "UNION ALL";
            if ( v60 != -121 )
              v61 = "UNION";
          }
        }
        sub_DBD10(v5, "SELECTs to the left and right of %s do not have the same number of result columns", v61);
        return 2;
      }
    }
    v3 = *(_QWORD *)(v3 + 80);
    ++v70;
    if ( !v3 )
    {
      v3 = a2;
      goto LABEL_71;
    }
    v2 = *(_DWORD *)(v3 + 4);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v30 = &v29[26 * v28];
      if ( (*((_BYTE *)v30 + 69) & 4) != 0 )
        break;
      if ( *v29 <= ++v28 )
        goto LABEL_38;
    }
    if ( (unsigned int)sub_E46F0(v6, *((int **)v30 + 12)) )
      return 2;
    v29 = *(int **)(v3 + 40);
    if ( *v29 <= ++v28 )
      goto LABEL_38;
  }
}
