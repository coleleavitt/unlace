_BOOL8 __fastcall sub_1048A0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rax
  unsigned __int64 *v11; // r13
  char v12; // dl
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // bl
  __int64 v21; // rax
  unsigned __int64 *v22; // rbp
  _QWORD *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  int *v26; // rcx
  int *v27; // r13
  int v28; // ebp
  _DWORD *v29; // rbx
  _DWORD *v30; // rax
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // r8
  __int64 v35; // r11
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // r10
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rcx
  _DWORD *v44; // rdx
  _DWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  int *v50; // [rsp+0h] [rbp-100h]
  unsigned __int64 *v51; // [rsp+8h] [rbp-F8h]
  __int64 v52; // [rsp+8h] [rbp-F8h]
  __int64 v53; // [rsp+8h] [rbp-F8h]
  _DWORD *v54; // [rsp+10h] [rbp-F0h]
  bool v55; // [rsp+10h] [rbp-F0h]
  bool v56; // [rsp+10h] [rbp-F0h]
  __int64 v57; // [rsp+18h] [rbp-E8h]
  _QWORD *v58; // [rsp+18h] [rbp-E8h]
  _QWORD *v59; // [rsp+18h] [rbp-E8h]
  _QWORD *v60; // [rsp+20h] [rbp-E0h]
  int v62; // [rsp+3Ch] [rbp-C4h]
  __int64 v63; // [rsp+40h] [rbp-C0h]
  int v64; // [rsp+48h] [rbp-B8h]
  char v65; // [rsp+4Eh] [rbp-B2h]
  bool v66; // [rsp+4Fh] [rbp-B1h]
  __int64 v67[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h]
  __int128 v69; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  __int128 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+A0h] [rbp-60h]
  char v73; // [rsp+A8h] [rbp-58h]
  int v74; // [rsp+B0h] [rbp-50h]
  int v75; // [rsp+B4h] [rbp-4Ch]
  char v76; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v77; // [rsp+C0h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  *(_BYTE *)(a5 + 48) &= ~0x20u;
  v10 = *a3;
  v70 = 0;
  v11 = (unsigned __int64 *)(v10 + 24LL * (int)a4);
  LODWORD(v10) = *(_DWORD *)(a5 + 40);
  v12 = *(_BYTE *)(a5 + 32);
  v75 = -1;
  v76 = 1;
  LODWORD(v10) = v10 - a6;
  v13 = *(_QWORD *)(a5 + 24) + a6;
  v73 = v12;
  v74 = v10;
  v72 = v13;
  v71 = 0;
  v14 = sub_1041A0(v11, (__int64)&v70);
  if ( v14 == (_QWORD *)*v11 )
    return 0;
  v15 = v14;
  v60 = v14 + 3;
  if ( v14 == (_QWORD *)-24LL )
    return 0;
  v67[0] = 0;
  v67[1] = 0;
  *((_BYTE *)v14 + 72) &= ~0x20u;
  v16 = *(_DWORD *)(a5 + 40);
  v17 = *(_QWORD *)(a1 + 1440);
  v68 = 0;
  v69 = 0;
  sub_32F540(a5 + 24, v17, v67, v16);
  if ( a4 >= *(_DWORD *)(a1 + 64) )
    sub_101D70(0.0);
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * a4);
  sub_AE9C0(v18, v67, *(_QWORD *)(v18 + 48), 0, 0x181u, 0.0);
  if ( (unsigned __int8)sub_64880(v67) )
  {
    if ( !(_QWORD)v69 )
    {
      v66 = 0;
      goto LABEL_21;
    }
  }
  else if ( !(_QWORD)v69 )
  {
    v32 = sub_64960(v67, 0);
    v63 = v32;
    v64 = sub_64BA0(v67, v32);
    v65 = 1;
    goto LABEL_7;
  }
  v65 = 5;
  v63 = *(_QWORD *)v68 - *(_QWORD *)(a1 + 1440);
  v64 = *(_DWORD *)(v68 + 8);
LABEL_7:
  v50 = (int *)v15[3];
  v19 = v60[1];
  if ( 4 * v19 )
  {
    v66 = 0;
    v20 = 0;
    do
    {
      v70 = 0;
      v75 = -1;
      v21 = *v50;
      v76 = 1;
      v71 = 0;
      v62 = v21;
      v22 = (unsigned __int64 *)(*a2 + 24 * v21);
      v72 = v63;
      v73 = v65;
      v74 = v64;
      v23 = sub_1041A0(v22, (__int64)&v70);
      if ( v23 != (_QWORD *)*v22 )
      {
        v24 = (__int64)(v23 + 3);
        if ( v23 != (_QWORD *)-24LL )
        {
          v25 = *(_QWORD *)(a5 + 8);
          v26 = *(int **)a5;
          v27 = *(int **)a5;
          if ( 4 * v25 )
          {
            do
            {
              v28 = *v27;
              v29 = (_DWORD *)(*(_QWORD *)v24 + 4LL * *(_QWORD *)(v24 + 8));
              if ( *(_DWORD **)v24 == v29 )
                goto LABEL_27;
              v30 = *(_DWORD **)v24;
              while ( v28 != *v30 )
              {
                if ( v29 == ++v30 )
                  goto LABEL_27;
              }
              if ( v29 == v30 )
              {
LABEL_27:
                v57 = *(_QWORD *)(v24 + 8);
                v54 = *(_DWORD **)v24;
                v51 = (unsigned __int64 *)(*a3 + 24LL * v28);
                v33 = sub_1041A0(v51, a5);
                v34 = v33;
                if ( v33 != (_QWORD *)*v51 )
                {
                  v35 = (__int64)(v33 + 3);
                  if ( v33 != (_QWORD *)-24LL && (v33[9] & 8) == 0 && *((_BYTE *)v33 + 56) == *(_BYTE *)(v24 + 32) )
                  {
                    v36 = *((int *)v33 + 16);
                    v37 = *(int *)(v24 + 40);
                    v38 = v37 != 0 && v36 != 0;
                    if ( v38 )
                    {
                      v39 = v33[6];
                      v40 = *(_QWORD *)(v24 + 24);
                      if ( v36 + v39 - 1 >= v40 && v37 + v40 - 1 >= v39 )
                      {
                        v41 = v57 + 1;
                        if ( *(_QWORD *)(v24 + 16) < (unsigned __int64)(v57 + 1) )
                        {
                          v47 = (__int64)v54;
                          v59 = v34;
                          v56 = v38;
                          v53 = v35;
                          v48 = qvector_reserve(v24, v47, v41, 4);
                          v49 = *(_QWORD *)(v24 + 8);
                          v34 = v59;
                          *(_QWORD *)v24 = v48;
                          v38 = v56;
                          v35 = v53;
                          v29 = (_DWORD *)(v48 + 4 * v49);
                        }
                        *v29 = v28;
                        ++*(_QWORD *)(v24 + 8);
                        v42 = v34[3];
                        v43 = *(_QWORD *)(v35 + 8);
                        v44 = (_DWORD *)(v42 + 4 * v43);
                        if ( (_DWORD *)v42 == v44 )
                          goto LABEL_43;
                        v45 = (_DWORD *)v34[3];
                        while ( v62 != *v45 )
                        {
                          if ( v44 == ++v45 )
                            goto LABEL_43;
                        }
                        if ( v45 == v44 )
                        {
LABEL_43:
                          if ( *(_QWORD *)(v35 + 16) < (unsigned __int64)(v43 + 1) )
                          {
                            v58 = v34;
                            v55 = v38;
                            v52 = v35;
                            v46 = qvector_reserve(v35, v42, v43 + 1, 4);
                            v35 = v52;
                            v38 = v55;
                            v58[3] = v46;
                            v44 = (_DWORD *)(v46 + 4LL * *(_QWORD *)(v52 + 8));
                          }
                          *v44 = v62;
                          ++*(_QWORD *)(v35 + 8);
                        }
                        v66 = v38;
                      }
                    }
                  }
                }
                v26 = *(int **)a5;
                v25 = *(_QWORD *)(a5 + 8);
              }
              ++v27;
            }
            while ( v27 != &v26[v25] );
          }
          v20 = 1;
        }
      }
      ++v50;
      v19 = v60[1];
    }
    while ( v50 != (int *)(*v60 + 4 * v19) );
    if ( v20 )
      goto LABEL_21;
  }
  else
  {
    v66 = 0;
  }
  if ( (*(_BYTE *)(a5 + 48) & 8) == 0 && v19 )
  {
    *((_BYTE *)v60 + 48) |= 0x20u;
    *(_BYTE *)(a5 + 48) |= 0x20u;
  }
LABEL_21:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  qfree(v67[0]);
  return v66;
}

