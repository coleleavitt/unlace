__int64 __fastcall sub_13FD0(__int64 a1, __int64 *a2, size_t *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rbx
  size_t v11; // rdx
  size_t v12; // r8
  __int64 *v13; // r10
  char *v14; // rdx
  size_t v15; // r14
  char v16; // al
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  void **v21; // r8
  __int64 *v22; // r11
  __int64 v23; // rsi
  __int64 v24; // r8
  size_t v25; // r14
  const char *v26; // rdx
  __int64 *v27; // r9
  char *v28; // r8
  __int64 *v29; // r10
  size_t v30; // r14
  __int64 *v31; // r9
  size_t v32; // r11
  __int64 v33; // rsi
  char v34; // al
  _BYTE *v35; // rax
  const void *v36; // rsi
  size_t v37; // r8
  bool v38; // cc
  __int64 v39; // rsi
  void *v40; // rdx
  _BYTE *v41; // rax
  const void *v42; // rsi
  __int64 *v43; // r9
  __int64 v44; // rsi
  char *v45; // rdx
  void *v46; // rax
  const void *v47; // rsi
  int v48; // [rsp+0h] [rbp-F8h]
  __int64 v49; // [rsp+8h] [rbp-F0h]
  size_t n; // [rsp+10h] [rbp-E8h]
  size_t na; // [rsp+10h] [rbp-E8h]
  int v52; // [rsp+18h] [rbp-E0h]
  char v53; // [rsp+1Fh] [rbp-D9h]
  unsigned __int8 v54; // [rsp+1Fh] [rbp-D9h]
  char v55; // [rsp+1Fh] [rbp-D9h]
  __int64 v56; // [rsp+20h] [rbp-D8h]
  char *src; // [rsp+28h] [rbp-D0h]
  void *srca; // [rsp+28h] [rbp-D0h]
  void *srcb; // [rsp+28h] [rbp-D0h]
  __int64 *v60; // [rsp+30h] [rbp-C8h]
  void **v61; // [rsp+38h] [rbp-C0h]
  __int64 *v62; // [rsp+40h] [rbp-B8h]
  char *v63; // [rsp+48h] [rbp-B0h]
  char *v64; // [rsp+50h] [rbp-A8h]
  __int64 *v65; // [rsp+58h] [rbp-A0h]
  void *v66; // [rsp+60h] [rbp-98h] BYREF
  size_t v67; // [rsp+68h] [rbp-90h]
  size_t v68; // [rsp+70h] [rbp-88h]
  int v69; // [rsp+78h] [rbp-80h]
  const char *v70; // [rsp+80h] [rbp-78h] BYREF
  __int128 v71; // [rsp+88h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-60h]
  _BYTE *v73; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v74; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-40h]

  v7 = a2[1];
  v49 = a5;
  v75 = __readfsqword(0x28u);
  v8 = *a2;
  v56 = *a2 + 224 * v7;
  if ( *a2 == v56 )
  {
    return 0;
  }
  else
  {
    do
    {
      v11 = *(_QWORD *)(v8 + 88);
      if ( *(_BYTE *)v8 )
      {
        if ( v11 )
        {
          n = 0;
          v60 = (__int64 *)&v70;
          v61 = &v66;
          do
          {
            LODWORD(v24) = n;
            if ( v11 == *(_QWORD *)(v8 + 136) )
              v24 = *(_QWORD *)(*(_QWORD *)(v8 + 128) + 8 * n);
            v68 = 0;
            v25 = *(_QWORD *)(v8 + 16);
            srca = nullptr;
            if ( v25 )
            {
              LODWORD(v62) = v24;
              v46 = (void *)qalloc_or_throw();
              v47 = *(const void **)(v8 + 8);
              v68 = v25;
              srca = v46;
              memcpy(v46, v47, v25);
            }
            v71 = 0;
            v70 = nullptr;
            sub_7490(v60);
            v26 = s1;
            if ( (_QWORD)v71 )
              v26 = v70;
            v67 = v25;
            v66 = srca;
            sub_EC30((__int64)v61, "%s", v26);
            v27 = (__int64 *)a3[1];
            v73 = nullptr;
            v28 = (char *)v67;
            v74 = 0;
            srcb = v66;
            if ( !v27
              || (v63 = (char *)v67,
                  v62 = v27,
                  v41 = (_BYTE *)qalloc_or_throw(),
                  v42 = (const void *)*a3,
                  v73 = v41,
                  *((_QWORD *)&v74 + 1) = v62,
                  memcpy(v41, v42, (size_t)v62),
                  v43 = v62,
                  v38 = a3[1] <= 1,
                  v28 = v63,
                  *(_QWORD *)&v74 = v62,
                  v38) )
            {
              v29 = (__int64 *)&v73;
            }
            else
            {
              v44 = (__int64)v73;
              v45 = (char *)v62 + 1;
              v29 = (__int64 *)&v73;
              if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)v62 + 1 )
              {
                v65 = v62;
                v64 = v63;
                v63 = (char *)v62 + 1;
                v62 = (__int64 *)&v73;
                v73 = (_BYTE *)qvector_reserve();
                v43 = v65;
                v44 = (__int64)v73;
                v28 = v64;
                v45 = v63;
                v29 = (__int64 *)&v73;
              }
              *(_QWORD *)&v74 = v45;
              *((_BYTE *)v43 + v44 - 1) = 95;
              *((_BYTE *)v43 + (_QWORD)v73) = 0;
            }
            if ( v28 )
            {
              v30 = (size_t)(v28 - 1);
              if ( v28 != (_BYTE *)&dword_0 + 1 )
              {
                v31 = (__int64 *)v74;
                v32 = (size_t)(v28 - 1);
                if ( (_QWORD)v74 )
                {
                  v31 = (__int64 *)(v74 - 1);
                  v32 = v30 + v74 - 1;
                  v28 += v74 - 1;
                }
                v33 = (__int64)v73;
                if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)v28 )
                {
                  v65 = v31;
                  v64 = (char *)v32;
                  v63 = v28;
                  v73 = (_BYTE *)qvector_reserve();
                  v31 = v65;
                  v33 = (__int64)v73;
                  v32 = (size_t)v64;
                  v28 = v63;
                }
                *(_QWORD *)&v74 = v28;
                *(_BYTE *)(v33 + v32) = 0;
                LODWORD(v62) = (unsigned int)&v73;
                memcpy(&v73[(_QWORD)v31], srcb, v30);
                LODWORD(v29) = (unsigned int)&v73;
              }
            }
            v34 = sub_13FD0(
                    a1,
                    (int)v8 + 152,
                    (_DWORD)v29,
                    *(_DWORD *)(v8 + 96) * (int)n + (int)a4 + *(_DWORD *)(v8 + 80),
                    v49,
                    a6,
                    v48,
                    v49,
                    n,
                    v52,
                    v56,
                    (_DWORD)srcb,
                    (_DWORD)v60,
                    (_DWORD)v61,
                    (_DWORD)v62,
                    (_DWORD)v63,
                    (_DWORD)v64,
                    (_DWORD)v65,
                    (_DWORD)v66,
                    v67,
                    v68,
                    v69,
                    (_DWORD)v70,
                    v71,
                    DWORD2(v71),
                    v72,
                    (__int64)v73,
                    v74,
                    *((__int64 *)&v74 + 1));
            v54 = v34 | v55;
            if ( v73 )
            {
              *(_QWORD *)&v74 = 0;
              qfree();
            }
            if ( v70 )
            {
              *(_QWORD *)&v71 = 0;
              qfree();
            }
            if ( src )
              qfree();
            n = na + 1;
            v11 = *(_QWORD *)(v8 + 88);
          }
          while ( n < v11 );
        }
        else
        {
          v12 = a3[1];
          v73 = nullptr;
          v74 = 0;
          if ( !v12
            || (n = v12,
                v35 = (_BYTE *)qalloc_or_throw(),
                v36 = (const void *)*a3,
                v73 = v35,
                *((_QWORD *)&v74 + 1) = n,
                memcpy(v35, v36, n),
                v37 = n,
                v38 = a3[1] <= 1,
                *(_QWORD *)&v74 = n,
                v38) )
          {
            v13 = (__int64 *)&v73;
          }
          else
          {
            v39 = (__int64)v73;
            v40 = (void *)(n + 1);
            v13 = (__int64 *)&v73;
            if ( *((_QWORD *)&v74 + 1) < n + 1 )
            {
              v60 = (__int64 *)n;
              src = (char *)(n + 1);
              n = (size_t)&v73;
              v73 = (_BYTE *)qvector_reserve();
              v37 = (size_t)v60;
              v39 = (__int64)v73;
              v40 = src;
              v13 = (__int64 *)&v73;
            }
            *(_QWORD *)&v74 = v40;
            *(_BYTE *)(v39 + v37 - 1) = 95;
            v73[v37] = 0;
          }
          v14 = *(char **)(v8 + 16);
          if ( v14 )
          {
            v15 = (size_t)(v14 - 1);
            if ( v14 != (_BYTE *)&dword_0 + 1 )
            {
              v21 = (void **)v74;
              v22 = (__int64 *)(v14 - 1);
              if ( (_QWORD)v74 )
              {
                v21 = (void **)(v74 - 1);
                v22 = (__int64 *)(v15 + v74 - 1);
                v14 += v74 - 1;
              }
              v23 = (__int64)v73;
              if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)v14 )
              {
                v61 = v21;
                v60 = v22;
                src = v14;
                v73 = (_BYTE *)qvector_reserve();
                v21 = v61;
                v23 = (__int64)v73;
                v22 = v60;
                v14 = src;
              }
              *(_QWORD *)&v74 = v14;
              *((_BYTE *)v22 + v23) = 0;
              LODWORD(n) = (unsigned int)&v73;
              memcpy(&v73[(_QWORD)v21], *(const void **)(v8 + 8), v15);
              LODWORD(v13) = (unsigned int)&v73;
            }
          }
          v16 = sub_13FD0(
                  a1,
                  (int)v8 + 152,
                  (_DWORD)v13,
                  (unsigned int)a4 + (unsigned int)*(_QWORD *)(v8 + 80),
                  v49,
                  a6,
                  v48,
                  v49,
                  n,
                  v52,
                  v56,
                  (_DWORD)src,
                  (_DWORD)v60,
                  (_DWORD)v61,
                  (_DWORD)v62,
                  (_DWORD)v63,
                  (_DWORD)v64,
                  (_DWORD)v65,
                  (_DWORD)v66,
                  v67,
                  v68,
                  v69,
                  (_DWORD)v70,
                  v71,
                  DWORD2(v71),
                  v72,
                  (__int64)v73,
                  v74,
                  *((__int64 *)&v74 + 1));
          v54 = v16 | v53;
          if ( v73 )
          {
            *(_QWORD *)&v74 = 0;
            qfree();
          }
        }
      }
      else
      {
        v18 = 0;
        if ( v11 )
        {
          do
          {
            v19 = v18;
            if ( v11 == *(_QWORD *)(v8 + 136) )
              v19 = *(_QWORD *)(*(_QWORD *)(v8 + 128) + 8 * v18);
            v20 = v18 * *(_QWORD *)(v8 + 96);
            ++v18;
            sub_13600(a1, (_QWORD *)v8, a3, v19, a4 + *(_QWORD *)(v8 + 80) + v20, v49, a6);
            v11 = *(_QWORD *)(v8 + 88);
          }
          while ( v18 < v11 );
          v54 = 1;
        }
        else
        {
          sub_13600(a1, (_QWORD *)v8, a3, 0, a4 + *(_QWORD *)(v8 + 80), v49, a6);
          v54 = 1;
        }
      }
      v8 += 224;
    }
    while ( v56 != v8 );
  }
  return v54;
}

