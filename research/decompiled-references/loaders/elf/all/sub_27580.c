__int64 __fastcall sub_27580(__int64 a1, _QWORD *a2)
{
  size_t v4; // rax
  __int64 v5; // rcx
  size_t v6; // rdx
  size_t v7; // rsi
  unsigned int v8; // r14d
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  bool v14; // cf
  __int64 v15; // rdi
  __int64 v16; // rax
  size_t v17; // r13
  __int64 v18; // r15
  unsigned int v19; // esi
  unsigned int v20; // eax
  __int64 v21; // rsi
  unsigned int v22; // edx
  unsigned __int64 v23; // rax
  size_t v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  char *v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edi
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // rcx
  int v36; // edx
  int v37; // eax
  bool v38; // zf
  __int64 v40; // rdx
  unsigned __int8 v41; // al
  int v42; // edx
  char v43; // cl
  int v44; // edx
  int v45; // ecx
  _DWORD *v46; // rax
  bool v47; // cc
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rcx
  __int64 v61; // rdi
  size_t v62; // rcx
  size_t v63; // r15
  size_t v64; // rdx
  void *v65; // rdi
  size_t v66; // rax
  __int64 v67; // rsi
  unsigned int v68; // ecx
  __int64 v69; // rsi
  __int64 v70; // rax
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  __int64 v73; // r13
  __int64 v74; // rax
  __int64 v75; // rsi
  size_t v76; // r15
  size_t v77; // rdx
  unsigned __int64 v78; // rax
  char *v79; // rdx
  char *v80; // rsi
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r8
  int v84; // r11d
  size_t v85; // rdx
  _DWORD *v86; // rax

  v4 = a2[1];
  v5 = *(unsigned int *)(a1 + 104);
  v6 = a2[2];
  v7 = v4;
  while ( 2 )
  {
    while ( v4 >= v6 )
    {
      if ( (_DWORD)v5 != 7 )
        return 0;
LABEL_4:
      v8 = *(_DWORD *)(a1 + 116);
LABEL_5:
      v9 = a2[5] - a2[4];
      v10 = *(_QWORD *)(a1 + 56);
      if ( v9 > *(unsigned int *)(a1 + 112) )
        v9 = *(unsigned int *)(a1 + 112);
      v11 = *(_QWORD *)(a1 + 80);
      v12 = v11 - v10;
      v13 = v9 + v10;
      v14 = v9 < v12;
      v15 = *(unsigned int *)(a1 + 28428);
      if ( v14 )
        v11 = v13;
      *(_QWORD *)(a1 + 72) = v11;
      v16 = a2[1];
      v17 = a2[2] - v16;
      if ( (_DWORD)v15 )
      {
        v68 = v8 - v15;
        if ( 42 - (int)v15 <= v8 - (unsigned int)v15 )
          v68 = 42 - v15;
        v8 = v68;
        if ( v17 >= v68 )
          v17 = v68;
        else
          v8 = *((_DWORD *)a2 + 4) - v16;
LABEL_12:
        v18 = a1 + 28432;
        memcpy((void *)(a1 + 28432 + v15), (const void *)(*a2 + v16), v17);
        v19 = *(_DWORD *)(a1 + 28428);
        v20 = v8 + v19;
        if ( v8 + v19 != *(_DWORD *)(a1 + 116) )
        {
          v21 = v20 - 21;
          if ( v20 <= 0x14 )
          {
            *(_DWORD *)(a1 + 28428) = v20;
            a2[1] += v17;
            goto LABEL_89;
          }
          goto LABEL_14;
        }
        v77 = v19 + v17;
        v78 = 63 - v77;
        v79 = (char *)(v18 + v77);
        if ( v78 < 8 )
        {
          if ( (v78 & 4) != 0 )
          {
            *(_DWORD *)v79 = 0;
            *(_DWORD *)&v79[v78 - 4] = 0;
            v19 = *(_DWORD *)(a1 + 28428);
          }
          else if ( v78 )
          {
            *v79 = 0;
            if ( (v78 & 2) == 0 )
              goto LABEL_110;
            *(_WORD *)&v79[v78 - 2] = 0;
            v19 = *(_DWORD *)(a1 + 28428);
          }
        }
        else
        {
          *(_QWORD *)v79 = 0;
          *(_QWORD *)&v79[v78 - 8] = 0;
          v80 = (char *)((unsigned __int64)(v79 + 8) & 0xFFFFFFFFFFFFFFF8LL);
          v81 = (v79 - v80 + v78) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v81 >= 8 )
          {
            v82 = v81 & 0xFFFFFFFFFFFFFFF8LL;
            v83 = 8;
            *(_QWORD *)v80 = 0;
            if ( v82 > 8 )
            {
              if ( (((v82 - 1) >> 3) & 1) == 0 || (v83 = 16, *((_QWORD *)v80 + 1) = 0, v82 > 0x10) )
              {
                do
                {
                  *(_QWORD *)&v80[v83] = 0;
                  *(_QWORD *)&v80[v83 + 8] = 0;
                  v83 += 16LL;
                }
                while ( v83 < v82 );
              }
            }
          }
LABEL_110:
          v19 = *(_DWORD *)(a1 + 28428);
        }
        v21 = v8 + v19;
LABEL_14:
        *(_QWORD *)(a1 + 32) = v21;
        *(_QWORD *)(a1 + 16) = v18;
        *(_QWORD *)(a1 + 24) = 0;
        if ( !(unsigned __int8)sub_26BE0(a1) )
          return 7;
        v22 = *(_DWORD *)(a1 + 28428);
        v23 = *(_QWORD *)(a1 + 24);
        if ( v8 + v22 < v23 )
          return 7;
        *(_DWORD *)(a1 + 116) -= v23;
        if ( v23 < v22 )
        {
          v85 = v22 - (unsigned int)v23;
          *(_DWORD *)(a1 + 28428) = v85;
          memmove((void *)(a1 + 28432), (const void *)(v18 + v23), v85);
          goto LABEL_89;
        }
        a2[1] += v23 - v22;
        v8 = *(_DWORD *)(a1 + 116);
        *(_DWORD *)(a1 + 28428) = 0;
        v16 = a2[1];
        v17 = a2[2] - v16;
        goto LABEL_18;
      }
      if ( !v8 )
      {
        v17 = 0;
        goto LABEL_12;
      }
LABEL_18:
      if ( v17 <= 0x14 )
        goto LABEL_19;
      *(_QWORD *)(a1 + 16) = *a2;
      v69 = a2[1];
      *(_QWORD *)(a1 + 24) = v69;
      if ( v17 < v8 + 21 )
        v70 = a2[2] - 21LL;
      else
        v70 = v69 + v8;
      *(_QWORD *)(a1 + 32) = v70;
      if ( !(unsigned __int8)sub_26BE0(a1) )
        return 7;
      v16 = *(_QWORD *)(a1 + 24);
      v71 = *(unsigned int *)(a1 + 116);
      v72 = v16 - a2[1];
      if ( v71 < v72 )
        return 7;
      *(_DWORD *)(a1 + 116) = v71 - v72;
      v73 = a2[2];
      a2[1] = v16;
      v17 = v73 - v16;
      if ( v17 <= 0x14 )
      {
        v8 = *(_DWORD *)(a1 + 116);
LABEL_19:
        v24 = v17;
        if ( v8 <= v17 )
          v24 = v8;
        v25 = a1 + 28432;
        v26 = (_DWORD *)(*a2 + v16);
        if ( (unsigned int)v24 < 8 )
        {
          if ( (v24 & 4) != 0 )
          {
            *(_DWORD *)(a1 + 28432) = *v26;
            *(_DWORD *)(v25 + (unsigned int)v24 - 4) = *(_DWORD *)((char *)v26 + (unsigned int)v24 - 4);
          }
          else if ( (_DWORD)v24 )
          {
            *(_BYTE *)(a1 + 28432) = *(_BYTE *)v26;
            if ( (v24 & 2) != 0 )
              *(_WORD *)(v25 + (unsigned int)v24 - 2) = *(_WORD *)((char *)v26 + (unsigned int)v24 - 2);
          }
        }
        else
        {
          *(_QWORD *)(a1 + 28432) = *(_QWORD *)v26;
          *(_QWORD *)(v25 + (unsigned int)v24 - 8) = *(_QWORD *)((char *)v26 + (unsigned int)v24 - 8);
          v27 = (a1 + 28440) & 0xFFFFFFFFFFFFFFF8LL;
          v28 = v25 - v27;
          v29 = (char *)v26 - v28;
          v30 = (v24 + v28) & 0xFFFFFFF8;
          if ( v30 >= 8 )
          {
            v31 = v30 & 0xFFFFFFF8;
            v32 = 0;
            do
            {
              v33 = v32;
              v32 += 8;
              *(_QWORD *)(v27 + v33) = *(_QWORD *)&v29[v33];
            }
            while ( v32 < v31 );
          }
        }
        *(_DWORD *)(a1 + 28428) = v24;
        a2[1] += v24;
      }
LABEL_89:
      v74 = *(_QWORD *)(a1 + 56);
      v75 = *(_QWORD *)(a1 + 48);
      v76 = v74 - v75;
      if ( *(_DWORD *)(a1 + 100) )
      {
        if ( v74 == *(_QWORD *)(a1 + 80) )
          *(_QWORD *)(a1 + 56) = 0;
        memcpy((void *)(a2[3] + a2[4]), (const void *)(*(_QWORD *)(a1 + 40) + v75), v76);
        v74 = *(_QWORD *)(a1 + 56);
      }
      *(_QWORD *)(a1 + 48) = v74;
      a2[4] += v76;
      v38 = *(_DWORD *)(a1 + 112) == (_DWORD)v76;
      *(_DWORD *)(a1 + 112) -= v76;
      if ( v38 )
      {
        if ( *(_DWORD *)(a1 + 116) )
          return 7;
        if ( *(_DWORD *)(a1 + 144) )
          return 7;
        v5 = *(unsigned int *)(a1 + 4);
        if ( (_DWORD)v5 )
          return 7;
        *(_DWORD *)(a1 + 8) = 5;
        *(_DWORD *)(a1 + 104) = 0;
        *(_QWORD *)a1 = 0xFFFFFFFFLL;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
      }
      else
      {
        if ( a2[4] == a2[5] )
          return 0;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
        if ( v4 == v6 && *(_DWORD *)(a1 + 28428) < *(_DWORD *)(a1 + 116) )
          return 0;
        v5 = *(unsigned int *)(a1 + 104);
      }
    }
    switch ( v5 )
    {
      case 0LL:
        v56 = *a2;
        a2[1] = v4 + 1;
        v57 = *(unsigned __int8 *)(v56 + v4);
        if ( v57 )
        {
          if ( v57 > 0xDF || v57 == 1 )
          {
            v84 = *(_DWORD *)(a1 + 100);
            *(_WORD *)(a1 + 120) = 256;
            if ( !v84 )
            {
              *(_QWORD *)(a1 + 40) = a2[3] + a2[4];
              *(_QWORD *)(a1 + 80) = a2[5] - a2[4];
            }
            *(_OWORD *)(a1 + 48) = 0;
            *(_OWORD *)(a1 + 64) = 0;
            if ( v57 <= 0x7F )
              goto LABEL_114;
            *(_DWORD *)(a1 + 104) = 1;
            *(_DWORD *)(a1 + 112) = (v57 << 16) & 0x1F0000;
LABEL_119:
            *(_BYTE *)(a1 + 121) = 0;
            v5 = 1;
            *(_DWORD *)(a1 + 108) = 5;
            v4 = a2[1];
            v6 = a2[2];
            v7 = v4;
          }
          else
          {
            if ( *(_BYTE *)(a1 + 120) )
              return 7;
            if ( v57 <= 0x7F )
            {
              if ( v57 != 2 )
                return 7;
LABEL_114:
              v5 = 3;
              *(_QWORD *)(a1 + 104) = 0x800000003LL;
              v4 = a2[1];
              v6 = a2[2];
              v7 = v4;
            }
            else
            {
              *(_DWORD *)(a1 + 104) = 1;
              *(_DWORD *)(a1 + 112) = (v57 << 16) & 0x1F0000;
              if ( v57 > 0xBF )
                goto LABEL_119;
              if ( *(_BYTE *)(a1 + 121) )
                return 7;
              *(_DWORD *)(a1 + 108) = 6;
              if ( v57 > 0x9F )
              {
                *(_QWORD *)(a1 + 140) = 0;
                *(_OWORD *)(a1 + 124) = 0;
                v86 = (_DWORD *)(a1 + 164);
                *(_DWORD *)(a1 + 160) = 67109888;
                do
                {
                  *v86 = 67109888;
                  v86 += 2;
                  *(v86 - 1) = 67109888;
                }
                while ( v86 != (_DWORD *)(a1 + 28428) );
                v5 = *(unsigned int *)(a1 + 104);
                *(_DWORD *)(a1 + 8) = 5;
                *(_QWORD *)a1 = 0xFFFFFFFFLL;
                v4 = a2[1];
                v6 = a2[2];
                v7 = v4;
              }
              else
              {
                v4 = a2[1];
                v6 = a2[2];
                v5 = 1;
                v7 = v4;
              }
            }
          }
          continue;
        }
        return 1;
      case 1LL:
        v52 = *a2;
        a2[1] = v4 + 1;
        v5 = 2;
        v53 = *(unsigned __int8 *)(v52 + v4);
        *(_DWORD *)(a1 + 104) = 2;
        *(_DWORD *)(a1 + 112) += v53 << 8;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
        continue;
      case 2LL:
        v50 = *a2;
        a2[1] = v4 + 1;
        v5 = 3;
        LODWORD(v50) = *(unsigned __int8 *)(v50 + v4);
        v51 = *(_DWORD *)(a1 + 112);
        *(_DWORD *)(a1 + 104) = 3;
        *(_DWORD *)(a1 + 112) = v50 + v51 + 1;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
        continue;
      case 3LL:
        v54 = *a2;
        a2[1] = v4 + 1;
        v5 = 4;
        v55 = *(unsigned __int8 *)(v54 + v4);
        *(_DWORD *)(a1 + 104) = 4;
        *(_DWORD *)(a1 + 116) = v55 << 8;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
        continue;
      case 4LL:
        v48 = *a2;
        a2[1] = v4 + 1;
        v5 = *(unsigned int *)(a1 + 108);
        LODWORD(v48) = *(unsigned __int8 *)(v48 + v4);
        v49 = *(_DWORD *)(a1 + 116);
        *(_DWORD *)(a1 + 104) = v5;
        *(_DWORD *)(a1 + 116) = v48 + v49 + 1;
        v4 = a2[1];
        v6 = a2[2];
        v7 = v4;
        continue;
      case 5LL:
        v40 = *a2;
        a2[1] = v4 + 1;
        v41 = *(_BYTE *)(v40 + v4);
        if ( v41 > 0xE0u )
          return 7;
        if ( v41 <= 0x2Cu )
        {
          v44 = 0;
        }
        else
        {
          v42 = 1;
          do
          {
            v41 -= 45;
            v43 = v42++;
          }
          while ( v41 > 0x2Cu );
          v44 = (1 << v43) - 1;
        }
        *(_DWORD *)(a1 + 156) = v44;
        v45 = 0;
        if ( v41 <= 8u )
        {
          *(_DWORD *)(a1 + 152) = 0;
        }
        else
        {
          do
          {
            v41 -= 9;
            ++v45;
          }
          while ( v41 > 8u );
          *(_DWORD *)(a1 + 152) = v45;
        }
        *(_DWORD *)(a1 + 148) = v41;
        if ( v45 + (unsigned int)v41 > 4 )
          return 7;
        *(_QWORD *)(a1 + 140) = 0;
        *(_OWORD *)(a1 + 124) = 0;
        *(_DWORD *)(a1 + 160) = 67109888;
        *(_DWORD *)(a1 + 152) = (1 << v45) - 1;
        v46 = (_DWORD *)(a1 + 164);
        do
        {
          *v46 = 67109888;
          v46 += 2;
          *(v46 - 1) = 67109888;
        }
        while ( v46 != (_DWORD *)(a1 + 28428) );
        v47 = *(_DWORD *)(a1 + 116) <= 4u;
        *(_DWORD *)(a1 + 8) = 5;
        *(_DWORD *)(a1 + 104) = 6;
        *(_QWORD *)a1 = 0xFFFFFFFFLL;
        if ( v47 )
          return 7;
        goto LABEL_31;
      case 6LL:
        v34 = *(_DWORD *)(a1 + 116);
        if ( v34 <= 4 )
          return 7;
        if ( !*(_DWORD *)(a1 + 8) )
          goto LABEL_78;
        while ( 2 )
        {
          if ( v4 == a2[2] )
            return 0;
          v35 = *a2;
          v36 = *(_DWORD *)(a1 + 4);
          a2[1] = v4 + 1;
          v37 = (v36 << 8) + *(unsigned __int8 *)(v35 + v4);
          v38 = (*(_DWORD *)(a1 + 8))-- == 1;
          *(_DWORD *)(a1 + 4) = v37;
          if ( !v38 )
          {
LABEL_31:
            v4 = a2[1];
            continue;
          }
          break;
        }
        v34 = *(_DWORD *)(a1 + 116);
LABEL_78:
        v8 = v34 - 5;
        *(_DWORD *)(a1 + 104) = 7;
        *(_DWORD *)(a1 + 116) = v34 - 5;
        goto LABEL_5;
      case 7LL:
        goto LABEL_4;
      case 8LL:
        v58 = *(_DWORD *)(a1 + 116);
        if ( !v58 )
          goto LABEL_83;
        while ( 2 )
        {
          v59 = a2[4];
          v60 = a2[5];
          if ( v59 >= v60 )
            return 0;
          v61 = *(_QWORD *)(a1 + 56);
          v62 = v60 - v59;
          v63 = *(_QWORD *)(a1 + 80) - v61;
          if ( v63 > v62 )
            v63 = v62;
          v64 = v6 - v7;
          if ( v63 > v64 )
            v63 = v64;
          if ( v63 > v58 )
            v63 = v58;
          v65 = (void *)(*(_QWORD *)(a1 + 40) + v61);
          *(_DWORD *)(a1 + 116) = v58 - v63;
          memmove(v65, (const void *)(*a2 + a2[1]), v63);
          v66 = v63 + *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = v66;
          if ( *(_QWORD *)(a1 + 64) < v66 )
            *(_QWORD *)(a1 + 64) = v66;
          if ( *(_DWORD *)(a1 + 100) )
          {
            if ( v66 == *(_QWORD *)(a1 + 80) )
              v66 = 0;
            *(_QWORD *)(a1 + 56) = v66;
            memmove((void *)(a2[3] + a2[4]), (const void *)(*a2 + a2[1]), v63);
            v66 = *(_QWORD *)(a1 + 56);
          }
          *(_QWORD *)(a1 + 48) = v66;
          v67 = a2[1];
          a2[4] += v63;
          v7 = v63 + v67;
          a2[1] = v7;
          v58 = *(_DWORD *)(a1 + 116);
          if ( v58 )
          {
            v6 = a2[2];
            if ( v7 >= v6 )
              return 0;
            continue;
          }
          break;
        }
LABEL_83:
        *(_DWORD *)(a1 + 104) = 0;
        v4 = a2[1];
        v5 = 0;
        v6 = a2[2];
        v7 = v4;
        continue;
      default:
        while ( 1 )
          ;
    }
  }
}
