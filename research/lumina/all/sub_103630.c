unsigned __int64 __fastcall sub_103630(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 *v7; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned __int8 *v11; // rbx
  int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  double v18; // xmm0_8
  int v19; // ebx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // r12
  unsigned int v26; // r14d
  unsigned int v27; // eax
  __int64 v28; // r10
  int v29; // edx
  __int64 v30; // r9
  _BYTE *v31; // rbx
  char v32; // dl
  char *v33; // r11
  __int64 v34; // rax
  char v35; // dl
  __int64 v36; // rdi
  int v37; // r10d
  _BYTE *v38; // r11
  unsigned int v39; // r15d
  __int64 v40; // rdi
  __int64 v41; // rax
  _BYTE *v42; // rdx
  __int64 v43; // rdi
  unsigned int v44; // r8d
  __int64 v45; // rsi
  _BYTE *v46; // rcx
  __int16 v47; // ax
  int v48; // r9d
  int v49; // r10d
  unsigned int v50; // eax
  unsigned int v51; // [rsp+4h] [rbp-64h]
  _BYTE *v52; // [rsp+8h] [rbp-60h]
  _BYTE *v53; // [rsp+10h] [rbp-58h]
  int v54; // [rsp+18h] [rbp-50h]
  unsigned int v55; // [rsp+1Ch] [rbp-4Ch]
  double v56; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+28h] [rbp-40h]

  v7 = (__int64 *)a2;
  v57 = __readfsqword(0x28u);
  switch ( *(_BYTE *)a1 )
  {
    case 1:
      v9 = *(_QWORD *)a2;
      if ( (*(_WORD *)(*(_QWORD *)a2 + 20LL) & 0x9000) != 0 )
      {
        sub_C9430(v9, 1, (__int64)a3, a4, a5, a6);
      }
      else
      {
        *(_QWORD *)v9 = 1;
        *(_WORD *)(v9 + 20) = 4;
      }
      return __readfsqword(0x28u) ^ v57;
    case 2:
      v10 = *(_QWORD *)a2;
      if ( (*(_WORD *)(*(_QWORD *)a2 + 20LL) & 0x9000) != 0 )
      {
        sub_C9430(v10, 0, (__int64)a3, a4, a5, a6);
      }
      else
      {
        *(_QWORD *)v10 = 0;
        *(_WORD *)(v10 + 20) = 4;
      }
      return __readfsqword(0x28u) ^ v57;
    case 3:
      v11 = *(unsigned __int8 **)(a1 + 8);
      v12 = *v11;
      if ( (_BYTE)v12 == 45 )
      {
        v13 = (char)v11[1];
        a3 = v11 + 1;
        a4 = (unsigned int)(v13 - 48);
        if ( (unsigned __int8)(v11[1] - 48) > 9u )
        {
          a2 = 0;
          goto LABEL_54;
        }
      }
      else
      {
        a4 = (unsigned int)(v12 - 48);
        a2 = 0;
        v13 = (char)v12;
        a3 = v11;
        if ( (unsigned __int8)(v12 - 48) > 9u )
          goto LABEL_55;
      }
      ++a3;
      v14 = (unsigned int)(v13 - 48);
      a2 = 0;
      a5 = 0xCCCCCCCCCCCCCCBLL;
      a6 = 0xCCCCCCCCCCCCCCCLL;
      while ( 1 )
      {
        a2 = v14 + 10 * a2;
        v15 = (char)*a3;
        a4 = (unsigned int)(v15 - 48);
        if ( (unsigned __int8)(*a3 - 48) > 9u )
          break;
        ++a3;
        v14 = (unsigned int)(v15 - 48);
        if ( a2 > 0xCCCCCCCCCCCCCCBLL )
        {
          if ( a2 != 0xCCCCCCCCCCCCCCCLL )
            goto LABEL_21;
          a4 = (unsigned int)(unsigned __int8)*a3 - 48;
          if ( (unsigned __int8)(*a3 - 48) <= 9u || (_DWORD)v14 == 9 )
            goto LABEL_21;
          if ( (_DWORD)v14 == 8 )
          {
            if ( (_BYTE)v12 != 45 )
              goto LABEL_21;
            v16 = *v7;
            if ( (*(_WORD *)(*v7 + 20) & 0x9000) != 0 )
            {
              sub_C9430(v16, 0x8000000000000000LL, (__int64)a3, a4, 0xCCCCCCCCCCCCCCBLL, 0xCCCCCCCCCCCCCCCLL);
            }
            else
            {
              *(_QWORD *)v16 = 0x8000000000000000LL;
              *(_WORD *)(v16 + 20) = 4;
            }
            return __readfsqword(0x28u) ^ v57;
          }
        }
      }
      if ( (_BYTE)v12 != 45 )
        goto LABEL_55;
LABEL_54:
      a2 = -a2;
LABEL_55:
      v43 = *v7;
      if ( (*(_WORD *)(*v7 + 20) & 0x9000) != 0 )
      {
        sub_C9430(v43, a2, (__int64)a3, a4, a5, a6);
      }
      else
      {
        *(_QWORD *)v43 = a2;
        *(_WORD *)(v43 + 20) = 4;
      }
      return __readfsqword(0x28u) ^ v57;
    case 4:
      v11 = *(unsigned __int8 **)(a1 + 8);
LABEL_21:
      if ( v11 )
      {
        v17 = strlen((const char *)v11) & 0x3FFFFFFF;
        v56 = 0.0;
        v18 = 0.0;
        if ( v17 )
        {
          a2 = (__int64)&v56;
          sub_CAFA0(v11, &v56, v17, 1u);
          v18 = v56;
        }
      }
      else
      {
        v56 = 0.0;
        v18 = 0.0;
      }
      sub_C95A0(*v7, a2, (__int64)a3, a4, a5, a6, v18);
      return __readfsqword(0x28u) ^ v57;
    case 5:
      v19 = *(_DWORD *)(a1 + 4);
      v20 = *(_QWORD *)(a1 + 8);
      if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
      {
        v25 = (_QWORD *)sub_FFAA0((unsigned int)(v19 + 1), a2);
        if ( v25 )
        {
          v26 = v19 - 1;
          v27 = v19 - 6;
          LODWORD(v28) = 0;
          v29 = 0;
          v30 = 1;
          v31 = v25;
          v51 = v27;
          if ( v26 > 1 )
          {
            while ( 1 )
            {
              v32 = *(_BYTE *)(v20 + (unsigned int)v30);
              v33 = (char *)v25 + (unsigned int)v28;
              v34 = (unsigned int)(v30 + 1);
              if ( v32 == 92 )
              {
                v35 = *(_BYTE *)(v20 + v34);
                if ( v35 == 117 )
                {
                  v39 = sub_C5B90((char *)(v20 + v34 + 1));
                  v40 = (unsigned int)(v30 + 5);
                  if ( !v39 )
                  {
                    v29 = v37;
                    v31 = v38;
                    break;
                  }
                  v31 = (char *)v25 + (unsigned int)(v37 + 1);
                  if ( v39 <= 0x7F )
                  {
                    *v38 = v39;
                    v30 = (unsigned int)(v30 + 6);
                    LODWORD(v28) = v37 + 1;
                  }
                  else
                  {
                    v41 = (unsigned int)(v37 + 2);
                    v42 = (char *)v25 + v41;
                    if ( v39 > 0x7FF )
                    {
                      v44 = v30 + 6;
                      v45 = (unsigned int)(v37 + 3);
                      v46 = (char *)v25 + v45;
                      if ( (v39 & 0xFC00) == 0xD800
                        && (unsigned int)v40 < v51
                        && *(_BYTE *)(v20 + v44) == 92
                        && *(_BYTE *)(v20 + (unsigned int)(v30 + 7)) == 117
                        && (v55 = v30 + 6,
                            v53 = (char *)v25 + v45,
                            v54 = v37 + 3,
                            v52 = (char *)v25 + v41,
                            v47 = sub_C5B90((char *)(v20 + v40 + 3)),
                            v42 = v52,
                            LODWORD(v45) = v54,
                            v46 = v53,
                            v44 = v55,
                            (v47 & 0xFC00) == 0xDC00) )
                      {
                        v30 = (unsigned int)(v48 + 12);
                        v50 = ((v39 << 10) & 0xFFC00 | v47 & 0x3FF) + 0x10000;
                        *v38 = (v50 >> 18) | 0xF0;
                        *v31 = (v50 >> 12) & 0x3F | 0x80;
                        v28 = (unsigned int)(v49 + 4);
                        v31 = (char *)v25 + v28;
                        *v52 = (v50 >> 6) & 0x3F | 0x80;
                        *v53 = v50 & 0x3F | 0x80;
                      }
                      else
                      {
                        v30 = v44;
                        LODWORD(v28) = v45;
                        *v38 = (v39 >> 12) | 0xE0;
                        *v31 = (v39 >> 6) & 0x3F | 0x80;
                        *v42 = v39 & 0x3F | 0x80;
                        v31 = v46;
                      }
                    }
                    else
                    {
                      v30 = (unsigned int)(v30 + 6);
                      LODWORD(v28) = v37 + 2;
                      *v38 = (v39 >> 6) | 0xC0;
                      *v31 = v39 & 0x3F | 0x80;
                      v31 = (char *)v25 + v41;
                    }
                  }
                }
                else
                {
                  switch ( v35 )
                  {
                    case 'b':
                      v35 = 8;
                      break;
                    case 'f':
                      v35 = 12;
                      break;
                    case 'n':
                      v35 = 10;
                      break;
                    case 'r':
                      v35 = 13;
                      break;
                    case 't':
                      v35 = 9;
                      break;
                  }
                  *v33 = v35;
                  v30 = (unsigned int)(v30 + 2);
                  v28 = (unsigned int)(v28 + 1);
                  v31 = (char *)v25 + v28;
                }
              }
              else
              {
                *v33 = v32;
                v30 = (unsigned int)v34;
                v28 = (unsigned int)(v28 + 1);
                v31 = (char *)v25 + v28;
              }
              if ( v26 <= (unsigned int)v30 )
              {
                v29 = v28;
                break;
              }
            }
          }
          *v31 = 0;
          sub_F48B0((__int64)v7, v25, v29, 1u, (__int64 (__fastcall *)(__int64))sub_C91C0, v30);
        }
        else
        {
          sub_E1560(a2, a2, v21, v22, v23, v24);
        }
      }
      else
      {
        sub_F48B0(a2, (_QWORD *)(v20 + 1), v19 - 2, 1u, (__int64 (__fastcall *)(__int64))0xFFFFFFFFFFFFFFFFLL, a6);
      }
      return __readfsqword(0x28u) ^ v57;
    case 6:
    case 7:
      sub_103590(a1, (__int64 *)a2, 0, a4, a5, a6, a7);
      return __readfsqword(0x28u) ^ v57;
    default:
      v36 = *(_QWORD *)a2;
      if ( (*(_WORD *)(*(_QWORD *)a2 + 20LL) & 0x9000) != 0 )
        sub_C93F0(v36, a2, (__int64)a3, a4, a5, a6);
      else
        *(_WORD *)(v36 + 20) = 1;
      return __readfsqword(0x28u) ^ v57;
  }
}
