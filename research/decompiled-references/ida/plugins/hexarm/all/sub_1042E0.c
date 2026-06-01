_BOOL8 __fastcall sub_1042E0(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v10; // rax
  unsigned __int64 *v11; // r13
  char v12; // dl
  __int64 v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // bl
  __int64 v21; // rax
  unsigned __int64 *v22; // rbp
  _QWORD *v23; // rax
  __int64 *v24; // r12
  __int64 v25; // rsi
  int *v26; // rcx
  int *v27; // r13
  int v28; // ebp
  _DWORD *v29; // rbx
  _DWORD *v30; // rax
  int v32; // eax
  _QWORD *v33; // rax
  _QWORD *v34; // r8
  _QWORD *v35; // r11
  __int64 v36; // rsi
  __int64 v37; // rdi
  bool v38; // r10
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  _DWORD *v41; // rsi
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  _DWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  int *v48; // [rsp+0h] [rbp-100h]
  unsigned __int64 *v49; // [rsp+8h] [rbp-F8h]
  _QWORD *v50; // [rsp+8h] [rbp-F8h]
  _QWORD *v51; // [rsp+8h] [rbp-F8h]
  bool v52; // [rsp+10h] [rbp-F0h]
  __int64 v53; // [rsp+18h] [rbp-E8h]
  _QWORD *v54; // [rsp+18h] [rbp-E8h]
  _QWORD *v55; // [rsp+18h] [rbp-E8h]
  _QWORD *v56; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+3Ch] [rbp-C4h]
  __int64 v59; // [rsp+40h] [rbp-C0h]
  int v60; // [rsp+48h] [rbp-B8h]
  char v61; // [rsp+4Eh] [rbp-B2h]
  bool v62; // [rsp+4Fh] [rbp-B1h]
  __int64 v63[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h]
  __int128 v65; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+88h] [rbp-78h] BYREF
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  char v69; // [rsp+A8h] [rbp-58h]
  int v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B4h] [rbp-4Ch]
  char v72; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v73; // [rsp+C0h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  *(_BYTE *)(a5 + 48) &= ~0x20u;
  v10 = *a3;
  v66 = 0;
  v11 = (unsigned __int64 *)(v10 + 24LL * (int)a4);
  LODWORD(v10) = *(_DWORD *)(a5 + 40);
  v12 = *(_BYTE *)(a5 + 32);
  v71 = -1;
  v72 = 1;
  LODWORD(v10) = v10 - a6;
  v13 = *(_QWORD *)(a5 + 24) + a6;
  v69 = v12;
  v70 = v10;
  v68 = v13;
  v67 = 0;
  v14 = sub_103BE0(v11, (__int64)&v66);
  if ( v14 == (_QWORD *)*v11 )
    return 0;
  v15 = v14;
  v56 = v14 + 3;
  if ( v14 == (_QWORD *)-24LL )
    return 0;
  v63[0] = 0;
  v63[1] = 0;
  *((_BYTE *)v14 + 72) &= ~0x20u;
  v16 = *(unsigned int *)(a5 + 40);
  v17 = *(_QWORD *)(a1 + 1440);
  v64 = 0;
  v65 = 0;
  sub_32F860(a5 + 24, v17, v63, v16);
  if ( a4 >= *(_DWORD *)(a1 + 64) )
    sub_1017B0();
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * a4);
  sub_AE400(v18, v63, *(_QWORD *)(v18 + 48), 0, 0x181u);
  if ( (unsigned __int8)sub_64280(v63) )
  {
    if ( !(_QWORD)v65 )
    {
      v62 = 0;
      goto LABEL_21;
    }
  }
  else if ( !(_QWORD)v65 )
  {
    v32 = sub_64360(v63, 0);
    v59 = v32;
    v60 = sub_645A0(v63, v32);
    v61 = 1;
    goto LABEL_7;
  }
  v61 = 5;
  v59 = *(_QWORD *)v64 - *(_QWORD *)(a1 + 1440);
  v60 = *(_DWORD *)(v64 + 8);
LABEL_7:
  v48 = (int *)v15[3];
  v19 = v56[1];
  if ( 4 * v19 )
  {
    v62 = 0;
    v20 = 0;
    do
    {
      v66 = 0;
      v71 = -1;
      v21 = *v48;
      v72 = 1;
      v67 = 0;
      v58 = v21;
      v22 = (unsigned __int64 *)(*a2 + 24 * v21);
      v68 = v59;
      v69 = v61;
      v70 = v60;
      v23 = sub_103BE0(v22, (__int64)&v66);
      if ( v23 != (_QWORD *)*v22 )
      {
        v24 = v23 + 3;
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
              v29 = (_DWORD *)(*v24 + 4 * v24[1]);
              if ( (_DWORD *)*v24 == v29 )
                goto LABEL_27;
              v30 = (_DWORD *)*v24;
              while ( v28 != *v30 )
              {
                if ( v29 == ++v30 )
                  goto LABEL_27;
              }
              if ( v29 == v30 )
              {
LABEL_27:
                v53 = v24[1];
                v49 = (unsigned __int64 *)(*a3 + 24LL * v28);
                v33 = sub_103BE0(v49, a5);
                v34 = v33;
                if ( v33 != (_QWORD *)*v49 )
                {
                  v35 = v33 + 3;
                  if ( v33 != (_QWORD *)-24LL && (v33[9] & 8) == 0 && *((_BYTE *)v33 + 56) == *((_BYTE *)v24 + 32) )
                  {
                    v36 = *((int *)v33 + 16);
                    v37 = *((int *)v24 + 10);
                    v38 = v37 != 0 && v36 != 0;
                    if ( v38 )
                    {
                      v39 = v33[6];
                      v40 = v24[3];
                      if ( v36 + v39 - 1 >= v40 && v37 + v40 - 1 >= v39 )
                      {
                        if ( v24[2] < (unsigned __int64)(v53 + 1) )
                        {
                          v55 = v34;
                          v51 = v35;
                          v46 = qvector_reserve();
                          v47 = v24[1];
                          v34 = v55;
                          *v24 = v46;
                          v38 = v37 != 0 && v36 != 0;
                          v35 = v51;
                          v29 = (_DWORD *)(v46 + 4 * v47);
                        }
                        *v29 = v28;
                        ++v24[1];
                        v41 = (_DWORD *)v34[3];
                        v42 = v35[1];
                        v43 = &v41[v42];
                        if ( v41 == v43 )
                          goto LABEL_43;
                        v44 = (_DWORD *)v34[3];
                        while ( v58 != *v44 )
                        {
                          if ( v43 == ++v44 )
                            goto LABEL_43;
                        }
                        if ( v44 == v43 )
                        {
LABEL_43:
                          if ( v35[2] < (unsigned __int64)(v42 + 1) )
                          {
                            v54 = v34;
                            v52 = v38;
                            v50 = v35;
                            v45 = qvector_reserve();
                            v35 = v50;
                            v38 = v52;
                            v54[3] = v45;
                            v43 = (_DWORD *)(v45 + 4LL * v50[1]);
                          }
                          *v43 = v58;
                          ++v35[1];
                        }
                        v62 = v38;
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
      ++v48;
      v19 = v56[1];
    }
    while ( v48 != (int *)(*v56 + 4 * v19) );
    if ( v20 )
      goto LABEL_21;
  }
  else
  {
    v62 = 0;
  }
  if ( (*(_BYTE *)(a5 + 48) & 8) == 0 && v19 )
  {
    *((_BYTE *)v56 + 48) |= 0x20u;
    *(_BYTE *)(a5 + 48) |= 0x20u;
  }
LABEL_21:
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  qfree();
  return v62;
}

