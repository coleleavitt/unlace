__int64 __fastcall sub_427C0(__int64 *a1, int a2, __int64 a3)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r13
  int v16; // edx
  int v17; // r15d
  __int64 v18; // r12
  __int64 v19; // r12
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // r12
  __int64 v29; // rdx
  int *v30; // rsi
  __int64 v31; // r13
  int v32; // ebp
  int *v33; // rcx
  int *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int16 v38; // ax
  __int64 v39; // r8
  __int64 v40; // rsi
  int v41; // edi
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 *v46; // rsi
  int v47; // r13d
  _QWORD *v48; // rsi
  __int64 i; // rcx
  __int16 v50; // ax
  unsigned __int64 *v51; // rax
  __int64 v52; // [rsp+8h] [rbp-3A0h]
  __int64 v53; // [rsp+20h] [rbp-388h]
  __int64 v54; // [rsp+30h] [rbp-378h]
  __int64 v55; // [rsp+30h] [rbp-378h]
  __int64 v56; // [rsp+38h] [rbp-370h]
  __int64 v57; // [rsp+38h] [rbp-370h]
  int v58; // [rsp+4Ch] [rbp-35Ch] BYREF
  _QWORD *v59; // [rsp+50h] [rbp-358h]
  __int128 v60; // [rsp+58h] [rbp-350h]
  __int64 v61; // [rsp+70h] [rbp-338h] BYREF
  __int128 v62; // [rsp+78h] [rbp-330h]
  __int128 v63; // [rsp+90h] [rbp-318h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-308h]
  __int64 v65; // [rsp+A8h] [rbp-300h]
  __int64 v66; // [rsp+B0h] [rbp-2F8h]
  char v67; // [rsp+B8h] [rbp-2F0h] BYREF
  char v68; // [rsp+B9h] [rbp-2EFh]
  __int16 v69; // [rsp+BEh] [rbp-2EAh]
  _BYTE v70[6]; // [rsp+E0h] [rbp-2C8h] BYREF
  __int16 v71; // [rsp+E6h] [rbp-2C2h]
  char v72; // [rsp+1F8h] [rbp-1B0h] BYREF
  __int128 v73; // [rsp+200h] [rbp-1A8h]
  __int64 v74; // [rsp+210h] [rbp-198h]
  __int64 v75; // [rsp+218h] [rbp-190h]
  __int64 v76; // [rsp+220h] [rbp-188h]
  _BYTE v77[6]; // [rsp+228h] [rbp-180h] BYREF
  __int16 v78; // [rsp+22Eh] [rbp-17Ah]
  unsigned __int64 v79; // [rsp+368h] [rbp-40h] BYREF

  v79 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[23] + 80LL * a2 + 77) & 4) != 0 )
    return 0;
  v60 = 0;
  v59 = (_QWORD *)qvector_reserve();
  v7 = v59;
  *v59 = a3;
  v8 = v59;
  *((_DWORD *)v7 + 2) = a2;
  v9 = (_QWORD)v60 == -1;
  v10 = v60 + 1;
  *(_QWORD *)&v60 = v60 + 1;
  if ( v9 )
    goto LABEL_60;
  do
  {
    while ( 1 )
    {
      v11 = v10--;
      v12 = (__int64)&v8[2 * v11 - 2];
      v13 = *(_QWORD *)v12;
      v14 = *(int *)(v12 + 8);
      *(_QWORD *)&v60 = v10;
      v53 = v14;
      v15 = a1[23] + 80 * v14;
      v16 = *(_DWORD *)(v15 + 76);
      v17 = v16 & 0x400;
      if ( (v16 & 0x400) == 0 )
        break;
      if ( !v10 )
        goto LABEL_60;
    }
    if ( *(_QWORD *)(v15 + 8) )
    {
      v18 = 0;
      while ( 1 )
      {
        v19 = 32 * v18;
        *(_QWORD *)(*(_QWORD *)v15 + v19 + 16) = v13;
        v13 += *(_QWORD *)(*(_QWORD *)v15 + v19 + 8);
        v20 = &v67;
        v64 = -1;
        v52 = v13;
        v65 = 0;
        v66 = 0;
        v63 = -1;
        do
        {
          *(_WORD *)v20 = 0;
          v20 += 40;
          *((_WORD *)v20 - 19) = 0;
          *((_WORD *)v20 - 18) = 0;
          *((_DWORD *)v20 - 2) = 0;
          *((_WORD *)v20 - 17) = 0;
          *((_OWORD *)v20 - 2) = 0;
          *((_QWORD *)v20 - 2) = 0;
        }
        while ( v20 != &v72 );
        decode_insn();
        v24 = a1[29];
        if ( v24 && (*(_BYTE *)(v24 + 16) & 0x10) != 0 )
        {
          switch ( (_WORD)v65 )
          {
            case 0x10:
              v56 = a1[29];
              v54 = *a1;
              v35 = sub_74080(*a1, &v63, 0, v21, v22, v23);
              if ( (unsigned __int8)sub_7AD80(v54, v56, &v63, v35, &v61, &v58) && (v58 & 0xFFFFFFFB) == 3 )
              {
                v24 = a1[29];
LABEL_35:
                v36 = *(_QWORD *)v15;
                v13 = *(unsigned __int16 *)(v24 + 40);
                v37 = *(_QWORD *)v15 + v19;
                v38 = *(_WORD *)(v37 + 24);
                if ( v38 == 94 || v38 == 16 )
                {
                  v40 = 8;
                  v41 = WORD2(v65) & 0x1018;
                  if ( v41 != 4112 )
                  {
                    if ( (v65 & 0x100800000000LL) == 0 || (v40 = 2, v41 == 4104) )
                      v40 = 4;
                  }
                  v13 = *(_QWORD *)(v24 + 56) + v13 - v40;
                }
                else if ( v38 == 92 )
                {
                  v13 = -sub_6EC80(v24, v70, 0.0);
                  v37 = v19 + *(_QWORD *)v15;
                }
                else
                {
                  v39 = *(_QWORD *)(v24 + 56);
                  if ( v39 )
                  {
                    if ( v38 == 122 && v71 == 5 && v17 > 0 )
                    {
                      for ( i = 32LL * (unsigned int)(v17 - 1); ; i -= 32 )
                      {
                        v50 = *(_WORD *)(v36 + i + 24);
                        if ( v50 == 209 || v50 == 6 )
                        {
                          v51 = (unsigned __int64 *)v77;
                          v74 = -1;
                          v75 = 0;
                          v76 = 0;
                          v73 = -1;
                          do
                          {
                            *(_WORD *)v51 = 0;
                            v51 += 5;
                            *((_WORD *)v51 - 19) = 0;
                            *((_WORD *)v51 - 18) = 0;
                            *((_DWORD *)v51 - 2) = 0;
                            *((_WORD *)v51 - 17) = 0;
                            *((_OWORD *)v51 - 2) = 0;
                            *(v51 - 2) = 0;
                          }
                          while ( &v79 != v51 );
                          v57 = v39;
                          v55 = i;
                          decode_insn();
                          i = v55;
                          v39 = v57;
                          if ( v77[1] == 1 && v78 == 5 )
                          {
                            v37 = v19 + *(_QWORD *)v15;
                            goto LABEL_42;
                          }
                          v36 = *(_QWORD *)v15;
                        }
                        if ( !i )
                          break;
                      }
                      v13 += v39;
                      v37 = v36 + v19;
                    }
                    else
                    {
                      v13 += v39;
                    }
                  }
                }
LABEL_42:
                *(_QWORD *)(v37 + 8) += v13 - v52;
              }
              break;
            case 0x5E:
              goto LABEL_35;
            case 0x7A:
              if ( v68 == 1 && v69 == 4 )
                goto LABEL_35;
              break;
            default:
              if ( (_WORD)v65 == 92 && v68 == 1 && v69 == 4 && v70[1] == 4 && v71 != 4 )
                goto LABEL_35;
              break;
          }
        }
        v18 = ++v17;
        if ( (unsigned __int64)v17 >= *(_QWORD *)(v15 + 8) )
        {
          v16 = *(_DWORD *)(v15 + 76);
          break;
        }
      }
    }
    BYTE1(v16) |= 4u;
    *(_DWORD *)(v15 + 76) = v16;
    v25 = a1[10];
    v26 = *(_QWORD *)(v25 + (v53 << 6) + 24);
    v62 = 0;
    v61 = 0;
    if ( (int)v26 <= 0 )
      goto LABEL_59;
    v27 = (unsigned int)(v26 - 1);
    v28 = 0;
    v29 = 0;
    v30 = nullptr;
    v31 = 4 * v27;
    while ( 1 )
    {
      v32 = *(_DWORD *)(*(_QWORD *)(v25 + (v53 << 6) + 16) + v28);
      if ( v32 >= 0 && *((_DWORD *)a1 + 26) > v32 )
      {
        v33 = &v30[v29];
        if ( v33 == v30 )
          break;
        v34 = v30;
        while ( v32 != *v34 )
        {
          if ( v33 == ++v34 )
            goto LABEL_48;
        }
        if ( v33 == v34 )
          break;
      }
      if ( v31 == v28 )
        goto LABEL_51;
LABEL_31:
      v25 = a1[10];
      v28 += 4;
    }
LABEL_48:
    if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v29 + 1) )
    {
      v61 = qvector_reserve();
      v33 = (int *)(v61 + 4 * v62);
    }
    *v33 = v32;
    v30 = (int *)v61;
    v29 = v62 + 1;
    *(_QWORD *)&v62 = v62 + 1;
    if ( v31 != v28 )
      goto LABEL_31;
LABEL_51:
    if ( (int)v29 > 0 )
    {
      v42 = v60;
      v43 = v29 - 1;
      v44 = 4LL * (int)v43;
      v45 = 4 * ((int)v43 - (unsigned __int64)v43);
      while ( 1 )
      {
        v47 = v30[(unsigned __int64)v44 / 4];
        v48 = v59;
        if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v42 + 1) )
        {
          v59 = (_QWORD *)qvector_reserve();
          v42 = v60;
          v48 = v59;
        }
        v46 = &v48[2 * v42];
        *v46 = v13;
        *((_DWORD *)v46 + 2) = v47;
        v30 = (int *)v61;
        v42 = v60 + 1;
        *(_QWORD *)&v60 = v60 + 1;
        if ( v44 == v45 )
          break;
        v44 -= 4;
      }
    }
    if ( v30 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
LABEL_59:
    v10 = v60;
    v8 = v59;
  }
  while ( (_QWORD)v60 );
LABEL_60:
  if ( v8 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  return 1;
}

