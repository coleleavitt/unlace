__int64 __fastcall sub_1EC80(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE *v8; // rax
  unsigned __int64 v9; // r15
  char v10; // cl
  char v11; // cl
  char v12; // cl
  char v13; // cl
  void *v14; // rdx
  char v15; // si
  char v16; // al
  unsigned int v17; // eax
  unsigned __int64 v18; // rbp
  char *v19; // rsi
  size_t v20; // r13
  unsigned __int64 v21; // r14
  void *v22; // rax
  unsigned __int64 v23; // rbp
  unsigned int v24; // eax
  unsigned __int64 v25; // r9
  int v26; // r13d
  __int64 v27; // r14
  char v28; // cl
  __int64 v29; // r14
  char *v30; // rax
  char *v31; // rax
  char v32; // cl
  char *v33; // rax
  char v34; // cl
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  _WORD *v39; // rdi
  __int64 v40; // rdx
  __int16 v41; // cx
  bool v42; // cf
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r13
  unsigned __int64 v48; // r14
  _WORD *v49; // rdi
  __int64 v50; // rdx
  __int16 v51; // cx
  unsigned int v52; // [rsp+14h] [rbp-A4h]
  unsigned __int64 v53; // [rsp+18h] [rbp-A0h]
  __int64 v54; // [rsp+18h] [rbp-A0h]
  __int64 v55; // [rsp+18h] [rbp-A0h]
  __int64 v56; // [rsp+28h] [rbp-90h]
  void *src; // [rsp+30h] [rbp-88h] BYREF
  char *v58; // [rsp+38h] [rbp-80h] BYREF
  _BYTE *v59; // [rsp+40h] [rbp-78h] BYREF
  __int128 v60; // [rsp+48h] [rbp-70h]
  __int64 v61; // [rsp+60h] [rbp-58h] BYREF
  __int128 v62; // [rsp+68h] [rbp-50h]
  unsigned __int64 v63; // [rsp+78h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v4 = sub_1DD10();
  *(_DWORD *)a1 = -1;
  *(_WORD *)(a1 + 4) = -1;
  v5 = v4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v6 = netnode_altval(v4, a2, 358);
  if ( !v6 )
    return a1;
  v60 = 0;
  v59 = nullptr;
  if ( netnode_qgetblob(v5, &v59, 1, v6 - 1, 1) > 0 )
  {
    v8 = v59;
    v9 = (unsigned __int64)&v59[v60];
    src = v59;
    if ( v59 >= &v59[(unsigned __int64)v60] )
    {
      *(_WORD *)a1 = 0;
    }
    else
    {
      v10 = *v59;
      src = v59 + 1;
      *(_BYTE *)a1 = v10;
      if ( (unsigned __int64)(v8 + 1) >= v9 )
      {
        *(_BYTE *)(a1 + 1) = 0;
        ++v8;
      }
      else
      {
        v11 = v8[1];
        src = v8 + 2;
        *(_BYTE *)(a1 + 1) = v11;
        if ( (unsigned __int64)(v8 + 2) < v9 )
        {
          v12 = v8[2];
          src = v8 + 3;
          *(_BYTE *)(a1 + 2) = v12;
          if ( (unsigned __int64)(v8 + 3) < v9 )
          {
            v13 = v8[3];
            v14 = v8 + 4;
            src = v8 + 4;
            *(_BYTE *)(a1 + 3) = v13;
            if ( (unsigned __int64)(v8 + 4) >= v9 )
            {
              *(_BYTE *)(a1 + 4) = 0;
              v16 = 0;
            }
            else
            {
              v15 = v8[4];
              v14 = v8 + 5;
              src = v8 + 5;
              *(_BYTE *)(a1 + 4) = v15;
              if ( (unsigned __int64)(v8 + 5) >= v9 )
              {
                v16 = 0;
              }
              else
              {
                v14 = v8 + 6;
                v16 = v8[5];
              }
            }
            src = v14;
            *(_BYTE *)(a1 + 5) = v16;
            if ( v13 )
            {
              v61 = 0;
              v62 = 0;
              v17 = unpack_dd(&src, v9);
              v18 = v62;
              v19 = (char *)v61;
              if ( v17 )
              {
                v20 = v17;
                v21 = v17 + (_QWORD)v62;
                if ( *((_QWORD *)&v62 + 1) < v21 )
                {
                  v61 = qvector_reserve(&v61, v61, v17 + (_QWORD)v62, 1);
                  v19 = (char *)v61;
                }
                v22 = src;
                *(_QWORD *)&v62 = v21;
                if ( __CFADD__(v20, src) || v9 < (unsigned __int64)src + v20 )
                {
                  v18 = v21;
                }
                else
                {
                  src = (char *)src + v20;
                  memcpy(&v19[v18], v22, v20);
                  v18 = v62;
                  v19 = (char *)v61;
                }
              }
              v23 = (unsigned __int64)&v19[v18];
              v58 = v19;
              v24 = unpack_dd(&v58, v23);
              v25 = *(_QWORD *)(a1 + 24);
              v52 = v24;
              v56 = a1 + 8;
              if ( v25 < v24 )
              {
                v55 = *(_QWORD *)(a1 + 24);
                v45 = qvector_reserve(v56, 0, v24, 12);
                v46 = *(_QWORD *)(a1 + 16);
                v47 = v45;
                v48 = *(_QWORD *)(a1 + 24);
                v49 = *(_WORD **)(a1 + 8);
                *(_QWORD *)(a1 + 24) = v55;
                v50 = v46 - 1;
                if ( v50 >= 0 )
                {
                  do
                  {
                    v51 = *v49;
                    v45 += 12;
                    v49 += 6;
                    *(_WORD *)(v45 - 12) = v51;
                    *(_BYTE *)(v45 - 10) = *((_BYTE *)v49 - 10);
                    *(_DWORD *)(v45 - 8) = *((_DWORD *)v49 - 2);
                    *(_BYTE *)(v45 - 8) = *((_BYTE *)v49 - 8);
                    *(_DWORD *)(v45 - 4) = *((_DWORD *)v49 - 1);
                    v42 = v50-- == 0;
                  }
                  while ( !v42 );
                  v49 = *(_WORD **)(a1 + 8);
                }
                qfree(v49);
                *(_QWORD *)(a1 + 8) = v47;
                v25 = v48;
                *(_QWORD *)(a1 + 24) = v48;
              }
              else if ( !v24 )
              {
LABEL_44:
                if ( v61 )
                {
                  *(_QWORD *)&v62 = 0;
                  qfree(v61);
                }
                goto LABEL_38;
              }
              v26 = 0;
              while ( 1 )
              {
                v35 = *(_QWORD *)(a1 + 16);
                if ( v25 >= v35 + 1 )
                {
                  v27 = *(_QWORD *)(a1 + 8);
                }
                else
                {
                  v53 = v25;
                  v36 = qvector_reserve(v56, 0, v35 + 1, 12);
                  v37 = *(_QWORD *)(a1 + 16);
                  v27 = v36;
                  v38 = *(_QWORD *)(a1 + 24);
                  v39 = *(_WORD **)(a1 + 8);
                  *(_QWORD *)(a1 + 24) = v53;
                  v40 = v37 - 1;
                  if ( v40 >= 0 )
                  {
                    do
                    {
                      v41 = *v39;
                      v36 += 12;
                      v39 += 6;
                      *(_WORD *)(v36 - 12) = v41;
                      *(_BYTE *)(v36 - 10) = *((_BYTE *)v39 - 10);
                      *(_DWORD *)(v36 - 8) = *((_DWORD *)v39 - 2);
                      *(_BYTE *)(v36 - 8) = *((_BYTE *)v39 - 8);
                      *(_DWORD *)(v36 - 4) = *((_DWORD *)v39 - 1);
                      v42 = v40-- == 0;
                    }
                    while ( !v42 );
                    v39 = *(_WORD **)(a1 + 8);
                  }
                  v54 = v38;
                  qfree(v39);
                  v35 = *(_QWORD *)(a1 + 16);
                  *(_QWORD *)(a1 + 8) = v27;
                  *(_QWORD *)(a1 + 24) = v54;
                }
                v28 = 0;
                v29 = v27 + 12 * v35;
                *(_DWORD *)v29 = 0xFFFFFF;
                *(_QWORD *)(v29 + 4) = 0xFFFFFFFFLL;
                v30 = v58;
                ++*(_QWORD *)(a1 + 16);
                if ( (unsigned __int64)v30 < v23 )
                  v28 = *v30++;
                v58 = v30;
                *(_BYTE *)v29 = v28;
                v31 = v58;
                v32 = 0;
                if ( (unsigned __int64)v58 < v23 )
                {
                  v32 = *v58;
                  v31 = v58 + 1;
                }
                v58 = v31;
                *(_BYTE *)(v29 + 1) = v32;
                v33 = v58;
                v34 = 0;
                if ( (unsigned __int64)v58 < v23 )
                {
                  v34 = *v58;
                  v33 = v58 + 1;
                }
                v58 = v33;
                *(_BYTE *)(v29 + 2) = v34;
                *(_DWORD *)(v29 + 4) = unpack_dd(&v58, v23);
                *(_DWORD *)(v29 + 8) = unpack_dd(&v58, v23);
                if ( v52 == ++v26 )
                  break;
                v25 = *(_QWORD *)(a1 + 24);
              }
              goto LABEL_44;
            }
LABEL_38:
            *(_QWORD *)(a1 + 96) = (unsigned int)unpack_dd(&src, v9);
            v43 = unpack_dq(&src, v9) - 1;
            v44 = unpack_dq(&src, v9) - 1;
            if ( v43 != -1 )
            {
              *(_BYTE *)(a1 + 72) = 1;
              *(_QWORD *)(a1 + 64) = a2 - v43;
            }
            if ( v44 != -1 )
            {
              *(_BYTE *)(a1 + 88) = 1;
              *(_QWORD *)(a1 + 80) = a2 - v44;
            }
            goto LABEL_42;
          }
          v8 += 3;
LABEL_37:
          src = v8;
          *(_WORD *)(a1 + 3) = 0;
          *(_BYTE *)(a1 + 5) = 0;
          goto LABEL_38;
        }
        v8 += 2;
      }
    }
    *(_BYTE *)(a1 + 2) = 0;
    goto LABEL_37;
  }
LABEL_42:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  return a1;
}

