// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_123DB0(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int *a6,
        double a7)
{
  __int64 v8; // r13
  unsigned int v10; // r15d
  _DWORD *v11; // rsi
  int v12; // r9d
  unsigned __int8 **v13; // rsi
  int v14; // r8d
  unsigned int *v15; // rax
  int v16; // r12d
  int v17; // ebx
  unsigned int v18; // r12d
  __int64 result; // rax
  char *v20; // rbx
  char v21; // dl
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rcx
  _BYTE **v28; // rax
  __int64 v29; // rsi
  _BYTE *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // r13
  int v33; // ebp
  bool v34; // al
  _BOOL4 v35; // edx
  unsigned __int8 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // esi
  char v41; // bl
  bool v42; // zf
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v48; // edx
  __int64 v49; // r13
  unsigned __int8 **v50; // rbp
  __int64 v51; // r15
  unsigned __int8 *v52; // rax
  _BYTE **v53; // rax
  __int64 v54; // r9
  int v55; // ecx
  _BYTE *v56; // rdi
  unsigned __int8 *i; // r8
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // r8
  int v61; // edx
  int v62; // ebx
  int v63; // eax
  _DWORD *v64; // rdx
  int v65; // r12d
  unsigned int v66; // edx
  int v67; // edx
  _DWORD *v68; // rcx
  unsigned int v70; // [rsp+4h] [rbp-D4h]
  int v73; // [rsp+18h] [rbp-C0h]
  __int64 *v74; // [rsp+20h] [rbp-B8h]
  __int64 v75; // [rsp+28h] [rbp-B0h]
  __int64 v76; // [rsp+28h] [rbp-B0h]
  unsigned int v77; // [rsp+30h] [rbp-A8h]
  unsigned __int8 *v78; // [rsp+30h] [rbp-A8h]
  __int64 v79; // [rsp+38h] [rbp-A0h]
  __int64 v80; // [rsp+38h] [rbp-A0h]
  _DWORD *v81; // [rsp+40h] [rbp-98h]
  _DWORD *v82; // [rsp+40h] [rbp-98h]
  __int64 v83; // [rsp+48h] [rbp-90h]
  unsigned int v84; // [rsp+50h] [rbp-88h]
  unsigned int v85; // [rsp+54h] [rbp-84h]
  _BYTE v86[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 (__fastcall *v87)(__int64, __int64); // [rsp+68h] [rbp-70h]
  __int64 (__fastcall *v88)(__int64); // [rsp+70h] [rbp-68h]
  __int16 v89; // [rsp+84h] [rbp-54h]
  int v90; // [rsp+88h] [rbp-50h]
  unsigned __int64 v91; // [rsp+98h] [rbp-40h]

  v8 = a1;
  v10 = *(_DWORD *)(a1 + 52);
  v91 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 52) = v10 + 1;
  v74 = *(__int64 **)(a1 + 16);
  if ( !v74 )
    v74 = sub_E2050((__int64 *)a1);
  if ( a4 && (*(_BYTE *)(a2 + 5) & 8) != 0 )
  {
    v11 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
    v12 = *v11;
    if ( (int)*v11 <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v13 = (unsigned __int8 **)(v11 + 2);
      while ( !sub_C43F0(*v13) )
      {
        v13 += 3;
        if ( v12 == v14 + 1 )
        {
          a4 = nullptr;
          goto LABEL_12;
        }
      }
    }
    v15 = nullptr;
    if ( v12 != v14 )
      v15 = a4;
    a4 = v15;
  }
LABEL_12:
  v16 = *(_DWORD *)(a1 + 48);
  if ( v16 )
    goto LABEL_13;
  v22 = *(_DWORD *)(a2 + 4);
  if ( (v22 & 0x800) == 0 )
    goto LABEL_13;
  if ( (v22 & 0x20) == 0 )
  {
    v23 = *(_QWORD *)(a2 + 32);
    if ( !*(_QWORD *)(v23 + 80) && (*(_BYTE *)(v23 + 4) & 9) == 0 && !*(_QWORD *)(v23 + 96) && !*(_QWORD *)(v23 + 48) )
    {
      v24 = *(_QWORD *)(v23 + 40);
      if ( *(_DWORD *)v24 == 1 && !*(_QWORD *)(v24 + 48) )
      {
        v75 = *(_QWORD *)(v24 + 40);
        if ( *(_BYTE *)(v75 + 63) != 1 )
        {
          v25 = *(_QWORD *)(v23 + 32);
          v26 = *(_DWORD *)v25;
          v83 = v25;
          v27 = v25;
          v73 = *(_DWORD *)v25;
          if ( *(int *)v25 > 0 )
          {
            if ( **(_BYTE **)(v25 + 8) != 0xA7 )
              goto LABEL_21;
            v28 = (_BYTE **)(v25 + 32);
            v29 = v27 + 32 + 24LL * (unsigned int)(v26 - 1);
            while ( (_BYTE **)v29 != v28 )
            {
              v30 = *v28;
              v28 += 3;
              if ( *v30 != 0xA7 )
                goto LABEL_21;
            }
          }
          if ( v23 )
          {
            v31 = *(_QWORD *)(v75 + 96);
            if ( v31 )
            {
              v84 = sub_CFB20(*(_QWORD *)a1, v31);
              sub_11C860(a1, v84);
              if ( v84 == 1 )
                goto LABEL_48;
              v60 = *(_QWORD *)v75;
              v61 = *(_DWORD *)(v75 + 40);
            }
            else
            {
              sub_11C860(a1, -32768);
              v60 = *(_QWORD *)v75;
              v61 = *(_DWORD *)(v75 + 40);
              v84 = -32768;
            }
            sub_E30E0(a1, v84, v61, 0, v60);
LABEL_48:
            if ( v73 == 1 )
            {
              if ( *(__int16 *)(*(_QWORD *)(v83 + 8) + 48LL) < 0 )
              {
                v62 = sub_E1710((__int64)v74, 14, 0, 0, 0);
                sub_F2630(a1, v10, v84, v75, 112, a7);
                sub_E8800(a1, 0, "USING ROWID SEARCH ON TABLE %s FOR IN-OPERATOR", *(const char **)v75);
                v63 = *((_DWORD *)v74 + 36);
                if ( v62 < 0 )
                  v62 = v63 - 1;
                v64 = &unk_241F50;
                if ( !*(_BYTE *)(*v74 + 103) )
                  v64 = (_DWORD *)(v74[17] + 24LL * v62);
                v64[2] = v63;
                result = 1;
                if ( !a5 )
                  goto LABEL_30;
                goto LABEL_24;
              }
              v77 = v10;
              v79 = a1;
              v81 = a5;
              v32 = v75;
              v33 = 1;
            }
            else
            {
              if ( v73 <= 0 )
              {
LABEL_75:
                v47 = *(_QWORD *)(v75 + 16);
                if ( v47 )
                {
                  v85 = v10;
                  v80 = v8;
                  v82 = a5;
                  while ( 1 )
                  {
                    v48 = *(unsigned __int16 *)(v47 + 96);
                    if ( v48 >= v73
                      && !*(_QWORD *)(v47 + 72)
                      && (unsigned __int16)v48 <= 0x3Eu
                      && ((a3 & 4) == 0 || *(unsigned __int16 *)(v47 + 94) <= v73
                                        && (v48 <= v73 || *(_BYTE *)(v47 + 98))) )
                    {
                      if ( v73 <= 0 )
                      {
                        v76 = 0;
                      }
                      else
                      {
                        v49 = 0;
                        v76 = 0;
                        v50 = (unsigned __int8 **)(v83 + 8);
                        v51 = (unsigned int)(v73 - 1) + 1LL;
                        do
                        {
                          v52 = (unsigned __int8 *)sub_C4360(*(char **)(a2 + 16), v49);
                          v78 = *v50;
                          v53 = (_BYTE **)sub_F3B40(v80, v52, *v50, a7);
                          v54 = 0;
                          while ( 1 )
                          {
                            v55 = v54;
                            if ( *(_WORD *)(*(_QWORD *)(v47 + 8) + 2 * v54) == *((_WORD *)v78 + 24) )
                              break;
LABEL_88:
                            v55 = ++v54;
                            if ( v51 == v54 )
                              goto LABEL_89;
                          }
                          if ( v53 )
                          {
                            v56 = *v53;
                            for ( i = *(unsigned __int8 **)(*(_QWORD *)(v47 + 64) + 8 * v54); ; ++i )
                            {
                              v58 = (unsigned __int8)*v56;
                              v59 = *i;
                              if ( (_DWORD)v58 == (_DWORD)v59 )
                              {
                                if ( !*v56 )
                                  break;
                              }
                              else if ( byte_1BF000[v58] != byte_1BF000[v59] )
                              {
                                goto LABEL_88;
                              }
                              ++v56;
                            }
                          }
LABEL_89:
                          if ( v73 == v55 || ((1LL << v55) & v76) != 0 )
                            break;
                          v76 |= 1LL << v55;
                          if ( v82 )
                            v82[v49] = v55;
                          ++v49;
                          v50 += 3;
                        }
                        while ( v51 != v49 );
                      }
                      if ( (1LL << v73) - 1 == v76 )
                        break;
                    }
                    v47 = *(_QWORD *)(v47 + 40);
                    if ( !v47 )
                    {
                      v10 = v85;
                      v8 = v80;
                      a5 = v82;
                      goto LABEL_13;
                    }
                  }
                  v10 = v85;
                  a5 = v82;
                  v65 = sub_E1710((__int64)v74, 14, 0, 0, 0);
                  sub_E8800(v80, 0, "USING INDEX %s FOR IN-OPERATOR", *(const char **)v47);
                  sub_E1710((__int64)v74, 112, v85, *(_DWORD *)(v47 + 88), v84);
                  sub_F2600(v80, v47, a7);
                  result = (unsigned int)**(unsigned __int8 **)(v47 + 56) + 3;
                  if ( a4 )
                  {
                    v66 = *(_DWORD *)(v80 + 56) + 1;
                    *(_DWORD *)(v80 + 56) = v66;
                    *a4 = v66;
                    if ( v73 == 1 )
                    {
                      v70 = result;
                      sub_E2320((__int64)v74, v85, v66);
                      result = v70;
                    }
                  }
                  v67 = *((_DWORD *)v74 + 36);
                  if ( v65 < 0 )
                    v65 = v67 - 1;
                  v68 = &unk_241F50;
                  if ( !*(_BYTE *)(*v74 + 103) )
                    v68 = (_DWORD *)(v74[17] + 24LL * v65);
                  v68[2] = v67;
                  if ( !v82 || (_DWORD)result == 3 || (_DWORD)result == 4 )
                    goto LABEL_30;
                  goto LABEL_24;
                }
LABEL_13:
                if ( a3 == 3 )
                {
                  if ( (*(_DWORD *)(a2 + 4) & 0x800) != 0 )
                  {
                    v17 = *(_DWORD *)(v8 + 200);
                    goto LABEL_16;
                  }
                  v20 = *(char **)(a2 + 16);
                  v89 = 1;
                  v87 = sub_CE7B0;
                  *(_QWORD *)(a2 + 16) = 0;
                  v90 = 0;
                  v88 = sub_C43E0;
                  if ( a2 )
                  {
                    sub_CDCD0((__int64)v86, a2);
                    v42 = v89 == 0;
                    *(_QWORD *)(a2 + 16) = v20;
                    if ( v42 )
                    {
                      result = 5;
                      if ( a5 )
                        goto LABEL_25;
LABEL_63:
                      result = 5;
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    *(_QWORD *)&word_10 = v20;
                  }
                  if ( **(int **)(a2 + 32) <= 2 )
                  {
                    if ( a5 )
                    {
                      v20 = *(char **)(a2 + 16);
                      result = 5;
                      goto LABEL_25;
                    }
                    goto LABEL_63;
                  }
                }
                goto LABEL_21;
              }
              v77 = v10;
              v79 = a1;
              v81 = a5;
              v32 = v75;
              v33 = v73;
            }
            do
            {
              v36 = (unsigned __int8 *)sub_C4360(*(char **)(a2 + 16), v16);
              if ( (v37 & 0x8000u) != 0LL || (__int16)v37 >= *(__int16 *)(v32 + 54) )
              {
                v40 = 68;
                v41 = 68;
              }
              else
              {
                v38 = *(_QWORD *)(v32 + 8);
                v39 = 16 * v37;
                v40 = *(char *)(v39 + v38 + 9);
                v41 = *(_BYTE *)(v39 + v38 + 9);
              }
              if ( (unsigned __int8)(sub_C68F0(v36, v40) - 65) > 1u )
              {
                v34 = v41 > 66;
                v35 = v41 > 66;
              }
              else
              {
                v35 = 1;
                v34 = 1;
              }
              ++v16;
            }
            while ( v16 < v33 && v34 );
            v10 = v77;
            v8 = v79;
            a5 = v81;
            if ( !v35 )
              goto LABEL_13;
            goto LABEL_75;
          }
        }
      }
    }
  }
LABEL_21:
  v17 = *(_DWORD *)(v8 + 200);
  if ( (a3 & 4) != 0 )
  {
    *(_DWORD *)(v8 + 200) = 0;
    sub_1236D0(v8, a2, v10, a7);
    goto LABEL_23;
  }
LABEL_16:
  if ( a4 )
  {
    v18 = *(_DWORD *)(v8 + 56) + 1;
    *(_DWORD *)(v8 + 56) = v18;
    *a4 = v18;
    sub_1236D0(v8, a2, v10, a7);
    if ( v18 )
      sub_E2320((__int64)v74, v10, v18);
  }
  else
  {
    sub_1236D0(v8, a2, v10, a7);
  }
LABEL_23:
  *(_DWORD *)(v8 + 200) = v17;
  result = 2;
  if ( !a5 )
    goto LABEL_30;
LABEL_24:
  v20 = *(char **)(a2 + 16);
LABEL_25:
  v21 = *v20;
  if ( *v20 == -80 )
    v21 = v20[2];
  if ( v21 == -79 )
  {
    v43 = **((_DWORD **)v20 + 4);
  }
  else
  {
    if ( v21 != -118 )
    {
      *a5 = 0;
      goto LABEL_30;
    }
    v43 = **(_DWORD **)(*((_QWORD *)v20 + 4) + 32LL);
  }
  if ( v43 > 0 )
  {
    v44 = (unsigned int)(v43 - 1);
    v45 = 0;
    v46 = v44 + 1;
    do
    {
      a5[v45] = v45;
      ++v45;
    }
    while ( v46 != v45 );
  }
LABEL_30:
  *a6 = v10;
  return result;
}
