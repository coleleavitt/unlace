unsigned __int64 __fastcall sub_31CCB0(
        unsigned __int8 *a1,
        __int64 a2,
        char a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _DWORD *v10; // r13
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 result; // rax
  int v14; // eax
  _BYTE *v15; // rax
  unsigned __int8 *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  _QWORD *v23; // rdi
  unsigned __int8 *v24; // rax
  int v25; // edx
  __int64 *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  __int64 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int16 v41; // cx
  unsigned __int16 v42; // dx
  unsigned __int64 v43; // rax
  unsigned int *v44; // rdi
  __int64 v45; // rbx
  __int64 v46; // rax
  _QWORD *v47; // rdx
  signed int v48; // esi
  char v49; // dl
  int v50; // eax
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdx
  bool v54; // al
  int v55; // edi
  __int64 v56; // rax
  _QWORD *v57; // r8
  _QWORD *v58; // rax
  unsigned __int64 v59; // rsi
  _QWORD *v60; // rdi
  __int64 v61; // rdi
  __int64 ph; // rax
  __int64 v63; // r15
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // [rsp+0h] [rbp-58h] BYREF
  __int64 v68; // [rsp+8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+18h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  while ( 2 )
  {
    v10 = *(_DWORD **)(*(_QWORD *)(a2 + 8) + 1504LL);
    v11 = *a1;
    switch ( (char)v11 )
    {
      case 0:
        if ( (a3 & 2) == 0 && *((_DWORD *)a1 + 1) != -1 )
          goto LABEL_12;
        return v69 - __readfsqword(0x28u);
      case 2:
        v14 = *((_DWORD *)a1 + 1);
        if ( (unsigned int)(v14 - 1) > 7 )
          goto LABEL_162;
        if ( (a3 & 4) == 0 && (v14 & (v14 - 1)) != 0 )
          goto LABEL_21;
LABEL_91:
        v51 = *((_QWORD *)a1 + 1);
        if ( !v51 )
          sub_31B3B0(a2, 0xC646u, *(double *)a4.m128_u64);
        if ( *(_QWORD *)v51 != -1 )
        {
          sub_330F80(*(_QWORD **)(a2 + 8), *(_QWORD *)v51);
          if ( !(unsigned __int8)is_mapped() )
            sub_31B3B0(a2, 0xC647u, *(double *)a4.m128_u64);
          v51 = *((_QWORD *)a1 + 1);
        }
        if ( *(int *)(v51 + 8) > 8 )
          sub_31B3B0(a2, 0xC648u, *(double *)a4.m128_u64);
        v52 = *((int *)a1 + 1);
        if ( v52 <= 7 && (*(_QWORD *)(v51 + 16) & (-1LL << (8 * (unsigned __int8)v52))) != 0 )
          sub_31B3B0(a2, 0xC649u, *(double *)a4.m128_u64);
        return v69 - __readfsqword(0x28u);
      case 3:
        v12 = v10[21];
        if ( *((_DWORD *)a1 + 1) != v12 )
          sub_31B3B0(a2, 0xC643u, *(double *)a4.m128_u64);
        if ( (unsigned int)(v12 - 1) > 7 )
LABEL_162:
          sub_31B3B0(a2, 0xC982u, *(double *)a4.m128_u64);
        if ( (a3 & 4) == 0 && (v12 & (v12 - 1)) != 0 )
LABEL_21:
          sub_31B3B0(a2, 0xC983u, *(double *)a4.m128_u64);
LABEL_16:
        if ( !*((_QWORD *)a1 + 1) )
          sub_31B3B0(a2, 0xC661u, *(double *)a4.m128_u64);
        return v69 - __readfsqword(0x28u);
      case 7:
      case 12:
        if ( *((_DWORD *)a1 + 1) != -1 )
LABEL_12:
          sub_31B3B0(a2, 0xC642u, *(double *)a4.m128_u64);
        goto LABEL_9;
      case 11:
LABEL_22:
        v15 = *((_BYTE **)a1 + 1);
        if ( !v15 || !*v15 )
          sub_31B3B0(a2, 0xC65Eu, *(double *)a4.m128_u64);
        if ( **(_DWORD **)(a2 + 32) != 56 )
          sub_31B3B0(a2, 0xC660u, *(double *)a4.m128_u64);
        return v69 - __readfsqword(0x28u);
      default:
        if ( (a3 & 1) != 0 )
        {
          if ( (v11 & 0xF7) != 1 && (_BYTE)v11 != 15 && *((_DWORD *)a1 + 1) != -1 )
            sub_31B3B0(a2, 0xC644u, *(double *)a4.m128_u64);
          goto LABEL_9;
        }
        if ( (a3 & 4) != 0 || (a1[1] & 2) != 0 )
          goto LABEL_9;
        v54 = sub_122640((__int64)a1, *((_DWORD *)a1 + 1));
        v55 = *((_DWORD *)a1 + 1);
        if ( v54 )
          goto LABEL_129;
        if ( *a1 == 8 )
        {
          if ( !v55 || v10[23] == v55 )
            goto LABEL_129;
        }
        else if ( v10[23] == v55 && sub_11CBB0((__int64)v10, **(_DWORD **)(a2 + 32)) )
        {
LABEL_128:
          v55 = *((_DWORD *)a1 + 1);
          goto LABEL_129;
        }
        v56 = *(_QWORD *)(a2 + 8);
        if ( v56 )
        {
          v57 = (_QWORD *)(v56 + 1008);
          v58 = *(_QWORD **)(v56 + 1016);
          v59 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL);
          if ( v58 )
          {
            v60 = v57;
            do
            {
              if ( v58[4] >= v59 )
              {
                v60 = v58;
                v58 = (_QWORD *)v58[2];
              }
              else
              {
                v58 = (_QWORD *)v58[3];
              }
            }
            while ( v58 );
            if ( v57 != v60 && v59 >= v60[4] )
              goto LABEL_128;
          }
        }
        ph = get_ph();
        v63 = *((int *)a1 + 1);
        v64 = ph;
        if ( (unsigned __int8)getinf() )
          v65 = (unsigned __int8)getinf();
        else
          v65 = *(_QWORD *)(v64 + 120);
        v55 = *((_DWORD *)a1 + 1);
        if ( v63 != v65 && v55 != *(_QWORD *)(v64 + 120) )
          sub_31B3B0(a2, 0xC645u, *(double *)a4.m128_u64);
LABEL_129:
        if ( !sub_11CAD0(v55) )
        {
          if ( (a3 & 8) != 0 )
            sub_31B3B0(a2, 0xC84Bu, *(double *)a4.m128_u64);
          if ( (a1[1] & 4) != 0 )
            sub_31B3B0(a2, 0xCB60u, *(double *)a4.m128_u64);
        }
        v11 = *a1;
LABEL_9:
        switch ( v11 )
        {
          case 0LL:
            return v69 - __readfsqword(0x28u);
          case 1LL:
            v48 = *((_DWORD *)a1 + 2);
            if ( v48 < 0 )
              sub_31B3B0(a2, 0xC64Cu, *(double *)a4.m128_u64);
            v49 = sub_11CCD0((__int64)v10, v48);
            v50 = *((_DWORD *)a1 + 1);
            if ( !v49 )
              goto LABEL_106;
            if ( v50 != 1 )
            {
              if ( **(_DWORD **)(a2 + 32) != 62 )
                sub_31B3B0(a2, 0xC64Du, *(double *)a4.m128_u64);
LABEL_106:
              if ( v50 <= 0 )
                sub_31B3B0(a2, 0xC64Eu, *(double *)a4.m128_u64);
            }
            return result;
          case 2LL:
            goto LABEL_91;
          case 3LL:
            goto LABEL_16;
          case 4LL:
            v44 = *((unsigned int **)a1 + 1);
            if ( !v44 )
              sub_31B3B0(a2, 0xC64Fu, *(double *)a4.m128_u64);
            if ( *((_DWORD *)a1 + 1) != v44[17] )
              sub_31B3B0(a2, 0xC650u, *(double *)a4.m128_u64);
            v45 = *(_QWORD *)(a2 + 32);
            *(_QWORD *)(a2 + 32) = v44;
            sub_31E290(v44, (_QWORD *)a2, 0, a4, a5, a6, a7);
            *(_QWORD *)(a2 + 32) = v45;
            return v69 - __readfsqword(0x28u);
          case 5LL:
            v46 = *(_QWORD *)(a2 + 8);
            v47 = *((_QWORD **)a1 + 1);
            if ( v46 && v46 != *v47 )
              sub_31B3B0(a2, 0xC64Au, *(double *)a4.m128_u64);
            v53 = v47[1];
            if ( v53 < 0 )
              sub_31B3B0(a2, 0xC64Bu, *(double *)a4.m128_u64);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 1496) + 24LL) + 24LL) != 8 && v53 != (int)v53 )
              sub_31B3B0(a2, 0xCDC7u, *(double *)a4.m128_u64);
            return v69 - __readfsqword(0x28u);
          case 6LL:
            v43 = *((_QWORD *)a1 + 1);
            if ( v43 != -1 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL) < v43 )
              sub_31B3B0(a2, 0xCDC1u, *(double *)a4.m128_u64);
            return v69 - __readfsqword(0x28u);
          case 7LL:
            v35 = *(_QWORD *)(a2 + 8);
            if ( (*(_BYTE *)v35 & 4) == 0 )
            {
              v36 = *((_DWORD *)a1 + 2);
              if ( v36 < 0 || v36 >= *(_DWORD *)(v35 + 64) )
                sub_31B3B0(a2, 0xC652u, *(double *)a4.m128_u64);
            }
            if ( (a3 & 0x10) == 0 )
              sub_31B3B0(a2, 0xC9C2u, *(double *)a4.m128_u64);
            return v69 - __readfsqword(0x28u);
          case 8LL:
            v33 = *((_QWORD *)a1 + 1);
            if ( !v33 )
              sub_31B3B0(a2, 0xC653u, *(double *)a4.m128_u64);
            sub_31DC20(v33, a2, *((_DWORD *)a1 + 1), a4);
            v34 = *(_QWORD *)(a2 + 32);
            if ( a1 != (unsigned __int8 *)(v34 + 64) )
              sub_31B3B0(a2, 0xC654u, *(double *)a4.m128_u64);
            if ( (unsigned int)(*(_DWORD *)v34 - 56) > 1 )
              sub_31B3B0(a2, 0xC655u, *(double *)a4.m128_u64);
            return v69 - __readfsqword(0x28u);
          case 9LL:
            v26 = *((__int64 **)a1 + 1);
            v27 = *v26;
            if ( !*v26 )
              sub_31B3B0(a2, 0xC656u, *(double *)a4.m128_u64);
            v28 = *(_QWORD *)(a2 + 8);
            if ( v28 )
            {
              if ( v27 != v28 )
                sub_31B3B0(a2, 0xC657u, *(double *)a4.m128_u64);
              if ( (unsigned __int64)*((int *)v26 + 4) >= *(_QWORD *)(v27 + 440) )
                sub_31B3B0(a2, 0xC658u, *(double *)a4.m128_u64);
              if ( !(unsigned __int8)sub_1EEA60((unsigned __int8 *)v27) )
              {
                v29 = *((_QWORD *)a1 + 1);
                v30 = *(_QWORD *)(a2 + 8);
                v31 = *(_QWORD *)(v29 + 8);
                if ( (*(_BYTE *)v30 & 4) == 0 )
                {
                  v32 = *(_QWORD *)(v27 + 432) + 104LL * *(int *)(v29 + 16);
                  if ( (*(_DWORD *)v32 != 1 || *(_QWORD *)(v32 + 8) < *(_QWORD *)(v30 + 144))
                    && (*(_WORD *)(v32 + 24) & 0x2040) == 0 )
                  {
                    v66 = *(int *)(v32 + 88);
                    if ( *((_DWORD *)a1 + 1) == -1 )
                    {
                      if ( v31 > v66 )
                      {
                        if ( (a3 & 1) == 0 || v10[21] >= v10[20] || (unsigned int)lexcompare_tinfo() )
                          sub_31B3B0(a2, 0xC659u, *(double *)a4.m128_u64);
                        v31 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
                      }
                    }
                    else if ( v31 >= v66 )
                    {
                      sub_31B3B0(a2, 0xC65Au, *(double *)a4.m128_u64);
                    }
                  }
                }
                if ( v31 < 0 )
                  sub_31B3B0(a2, 0xC65Bu, *(double *)a4.m128_u64);
              }
            }
            return v69 - __readfsqword(0x28u);
          case 10LL:
            v24 = *((unsigned __int8 **)a1 + 1);
            if ( !v24 )
              sub_31B3B0(a2, 0xC77Bu, *(double *)a4.m128_u64);
            v25 = *v24;
            a5 = (unsigned int)(v25 - 5);
            if ( (unsigned __int8)(v25 - 5) > 1u && (_BYTE)v25 != 9 )
            {
              if ( (_BYTE)v25 == 15 )
              {
                v68 = 0;
                v61 = *((_QWORD *)v24 + 1);
                v67 = -1;
                if ( !(unsigned __int8)sub_1C3110(v61, (__int64)&v67, *((_DWORD *)v24 + 1), *(double *)a4.m128_u64)
                  || (_BYTE)v68 != 5 && ((_BYTE)v68 != 1 || v10[17] > (int)v67) )
                {
                  sub_31B3B0(a2, 0xCE7Fu, *(double *)a4.m128_u64);
                }
              }
              else if ( (_BYTE)v25 != 1
                     || *(_BYTE *)(*(_QWORD *)(a2 + 32) + 32LL) != 11 && *((_DWORD *)v24 + 2) < v10[17] )
              {
                sub_31B3B0(a2, 0xC65Cu, *(double *)a4.m128_u64);
              }
            }
            if ( *((_DWORD *)a1 + 1) > v10[21] )
              sub_31B3B0(a2, 0xC65Du, *(double *)a4.m128_u64);
            a1 = *((unsigned __int8 **)a1 + 1);
            a3 = 1;
            continue;
          case 11LL:
            goto LABEL_22;
          case 12LL:
            if ( (a3 & 0x20) == 0 )
              sub_31B3B0(a2, 0xC9C3u, *(double *)a4.m128_u64);
            v23 = *((_QWORD **)a1 + 1);
            if ( !v23 )
              sub_31B3B0(a2, 0xC662u, *(double *)a4.m128_u64);
            return sub_31C540(v23, a2, a4);
          case 13LL:
            v22 = *((_QWORD *)a1 + 1);
            if ( !v22 )
              sub_31B3B0(a2, 0xC663u, *(double *)a4.m128_u64);
            if ( *(_DWORD *)(v22 + 16) > 0x10u )
              sub_31B3B0(a2, 0xC664u, *(double *)a4.m128_u64);
            return v69 - __readfsqword(0x28u);
          case 14LL:
            v16 = *((unsigned __int8 **)a1 + 1);
            if ( !v16 )
              sub_31B3B0(a2, 0xC665u, *(double *)a4.m128_u64);
            v17 = *((_DWORD *)v16 + 1);
            if ( v17 != *((_DWORD *)v16 + 5) )
              sub_31B3B0(a2, 0xC666u, *(double *)a4.m128_u64);
            if ( *((_DWORD *)a1 + 1) != 2 * v17 )
              sub_31B3B0(a2, 0xC667u, *(double *)a4.m128_u64);
            v18 = *v16;
            if ( (unsigned __int8)v18 > 0xFu || (v19 = 58998, !_bittest64(&v19, v18)) )
              sub_31B3B0(a2, 0xC668u, *(double *)a4.m128_u64);
            v20 = v16[16];
            if ( (unsigned __int8)v20 > 0xFu || !_bittest64(&v19, v20) )
              sub_31B3B0(a2, 0xC669u, *(double *)a4.m128_u64);
            sub_31CCB0(v16, a2, 0, a4);
            sub_31CCB0((unsigned __int8 *)(*((_QWORD *)a1 + 1) + 16LL), a2, 0, a4);
            v21 = *(_QWORD *)(a2 + 16);
            if ( v21
              && (**(_DWORD **)(a2 + 8) & 0x80000) == 0
              && !(unsigned __int8)sub_157240(v21, *((_QWORD *)a1 + 1), *((_QWORD *)a1 + 1) + 16LL, a4) )
            {
              sub_31B3B0(a2, 0xCB4Du, *(double *)a4.m128_u64);
            }
            return v69 - __readfsqword(0x28u);
          case 15LL:
            v37 = *((_QWORD *)a1 + 1);
            if ( *(_DWORD *)v37 != 2 )
              sub_31B3B0(a2, 0xC7BFu, *(double *)a4.m128_u64);
            v38 = *(__int64 **)(v37 + 8);
            v39 = *v38;
            v40 = *v38 + 24 * v38[1];
            if ( v40 != *v38 )
            {
              v41 = 0;
              do
              {
                v42 = *(_WORD *)(v39 + 16);
                if ( v42 < v41 )
                  sub_31B3B0(a2, 0xC7C0u, *(double *)a4.m128_u64);
                v41 = *(_WORD *)(v39 + 18) + v42;
                if ( __CFADD__(*(_WORD *)(v39 + 18), v42) )
                  sub_31B3B0(a2, 0xC7C1u, *(double *)a4.m128_u64);
                if ( (*(_DWORD *)v39 & 0xFFFFFFFD) != 1 )
                  sub_31B3B0(a2, 0xC7C2u, *(double *)a4.m128_u64);
                v39 += 24;
              }
              while ( v39 != v40 );
            }
            return v69 - __readfsqword(0x28u);
          default:
            sub_31B3B0(a2, 0xC66Au, *(double *)a4.m128_u64);
        }
        return v69 - __readfsqword(0x28u);
    }
  }
}

