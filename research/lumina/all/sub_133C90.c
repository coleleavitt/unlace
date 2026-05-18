void __fastcall sub_133C90(__int64 a1, double a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // r14
  int v6; // esi
  __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r13
  int v10; // eax
  _BYTE *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // r14
  unsigned int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // r15
  int v26; // esi
  int v27; // r15d
  int v28; // r13d
  __int64 v29; // rax
  unsigned int v30; // ecx
  int v31; // eax
  _BYTE *v32; // rdx
  char v33; // al
  __int64 v34; // rbx
  int i; // r12d
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // edx
  int v42; // eax
  _BYTE *v43; // rcx
  int v44; // edx
  int v45; // eax
  _BYTE *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // rbx
  __int64 v51; // r14
  int v52; // edx
  int v53; // eax
  _BYTE *v54; // rcx
  char v55; // si
  int v56; // r9d
  int v57; // edx
  int v58; // eax
  _BYTE *v59; // rcx
  int v60; // edx
  int v61; // eax
  _BYTE *v62; // rcx
  int v63; // esi
  int v64; // r8d
  int v65; // edi
  _BYTE *v66; // rax
  __int64 v67; // rdi
  _BYTE *v68; // r8
  char v69; // dl
  __int64 v70; // r14
  __int64 v71; // rsi
  unsigned int v72; // r8d
  int v73; // edx
  int v74; // r10d
  __int64 v75; // r9
  __int16 v76; // si
  __int16 v77; // dx
  __int16 v78; // r10
  _WORD *v79; // rsi
  _WORD *v80; // rsi
  int v81; // edx
  __int64 j; // rdx
  int v83; // r10d
  _WORD *v84; // r9
  unsigned int v85; // ebx
  unsigned int v86; // r8d
  unsigned int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // [rsp+0h] [rbp-78h]
  __int64 v90; // [rsp+8h] [rbp-70h]
  __int64 v91; // [rsp+10h] [rbp-68h]
  int v92; // [rsp+18h] [rbp-60h]
  int v93; // [rsp+1Ch] [rbp-5Ch]
  __int64 v94; // [rsp+20h] [rbp-58h]
  int v95; // [rsp+38h] [rbp-40h]
  unsigned int v96; // [rsp+38h] [rbp-40h]
  unsigned int v97; // [rsp+3Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v89 = *(_QWORD *)a1;
  v91 = *(_QWORD *)(a1 + 8);
  v92 = *(unsigned __int8 *)(a1 + 72) - 1;
  v90 = **(_QWORD **)a1;
  v93 = *(_DWORD *)(v3 + 144);
  if ( *(_BYTE *)(a1 + 72) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = v92;
        v22 = a1 + 112LL * v92;
        v23 = *(_QWORD *)(v22 + 928);
        if ( v23 )
        {
          sub_E0BB0(v4, *(_DWORD *)(v22 + 896));
          *(_DWORD *)(v22 + 896) = 0;
          sub_E1710(v4, 67, *(_DWORD *)(v23 + 8), *(_DWORD *)(v23 + 12), 1u);
          --*(_BYTE *)(v89 + 38);
        }
        v24 = a1 + 112LL * v92;
        v25 = *(_QWORD *)(v24 + 968);
        if ( *(_BYTE *)(v24 + 937) == 0xB7 )
        {
          v26 = *(_DWORD *)(v24 + 896);
          if ( v26 )
            sub_E0BB0(v4, v26);
        }
        else
        {
          LODWORD(v5) = 0;
          if ( *(_BYTE *)(a1 + 75) == 2 && *(unsigned __int8 *)(a1 + 72) - 1 == v92 && (*(_BYTE *)(v25 + 49) & 2) != 0 )
          {
            v47 = *(_QWORD *)(v25 + 32);
            if ( *(char *)(v47 + 99) < 0 )
            {
              v5 = *(unsigned __int16 *)(v25 + 30);
              if ( *(_WORD *)(v25 + 30) )
              {
                if ( *(__int16 *)(*(_QWORD *)(v47 + 16) + 2 * v5) > 35 )
                {
                  v85 = 0;
                  v96 = *(_DWORD *)(v89 + 56) + 1;
                  do
                  {
                    v86 = v96 + v85;
                    v87 = v85++;
                    sub_E1710(v4, 94, *(_DWORD *)(v24 + 880), v87, v86);
                  }
                  while ( (_DWORD)v5 != v85 );
                  v97 = v85;
                  v21 = v92;
                  *(_DWORD *)(v89 + 56) += v5 + 1;
                  LODWORD(v5) = sub_E1710(
                                  v4,
                                  3 * (*(_BYTE *)(a1 + 112LL * v92 + 937) != 37) + 20,
                                  *(_DWORD *)(a1 + 112LL * v92 + 880),
                                  0,
                                  v96);
                  if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
                  {
                    v88 = *(_QWORD *)(v4 + 136) + 24LL * (int)v5;
                    *(_BYTE *)(v88 + 1) = -3;
                    *(_DWORD *)(v88 + 16) = v97;
                  }
                  sub_E1710(v4, 8, 1u, *(_DWORD *)(a1 + 112LL * v92 + 944), 0);
                }
                else
                {
                  LODWORD(v5) = 0;
                }
              }
            }
          }
          v6 = *(_DWORD *)(a1 + 112 * v21 + 896);
          if ( v6 )
            sub_E0BB0(v4, v6);
          v7 = a1 + 112 * v21;
          sub_E1710(
            v4,
            *(_BYTE *)(v7 + 937),
            *(_DWORD *)(v7 + 940),
            *(_DWORD *)(v7 + 944),
            *(unsigned __int8 *)(v7 + 938));
          v8 = *(int *)(v4 + 144);
          if ( (int)v8 > 0 )
            *(_WORD *)(*(_QWORD *)(v4 + 136) + 24 * v8 - 22) = *(unsigned __int8 *)(v7 + 939);
          v9 = (_DWORD *)(a1 + 112 * v21);
          if ( v9[227] )
          {
            sub_E0BB0(v4, v9[228]);
            sub_E1710(v4, 60, v9[227], v9[236] - 1, 0);
          }
          if ( (_DWORD)v5 )
          {
            v10 = *(_DWORD *)(v4 + 144);
            if ( (int)v5 < 0 )
              LODWORD(v5) = v10 - 1;
            v11 = byte_241F50;
            if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
              v11 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * (int)v5);
            *((_DWORD *)v11 + 2) = v10;
          }
        }
        if ( (*(_BYTE *)(v25 + 49) & 8) != 0 )
        {
          v12 = a1 + 112 * v21;
          if ( *(int *)(v12 + 952) > 0 )
          {
            sub_E0BB0(v4, *(_DWORD *)(v12 + 888));
            v48 = *(int *)(v12 + 952);
            v49 = *(_QWORD *)(v12 + 960) + 20 * v48 - 20;
            if ( (int)v48 > 0 )
            {
              v94 = v21;
              v50 = 112 * v21;
              v51 = v49 - 20 * ((unsigned int)(v48 - 1) + 1LL);
              while ( 2 )
              {
                v52 = *(_DWORD *)(v4 + 144);
                v53 = *(_DWORD *)(v49 + 4) + 1;
                if ( v53 < 0 )
                  v53 = v52 - 1;
                v54 = byte_241F50;
                if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
                  v54 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v53);
                *((_DWORD *)v54 + 2) = v52;
                v55 = *(_BYTE *)(v49 + 16);
                if ( v55 == -73 )
                  goto LABEL_81;
                if ( *(_DWORD *)(v49 + 12) )
                {
                  v56 = *(_DWORD *)(v25 + 48) & 0x40400;
                  if ( *(_DWORD *)(a1 + v50 + 872) )
                  {
                    v95 = *(_DWORD *)(v25 + 48) & 0x40400;
                    sub_E1710(v4, 24, *(_DWORD *)v49, *(_DWORD *)(v4 + 144) + (v56 == (_DWORD)&loc_40000) + 2, 0);
                    if ( v95 == (_DWORD)&loc_40000 )
                      goto LABEL_95;
                  }
                  else
                  {
                    if ( v56 != (_DWORD)&loc_40000 )
                      goto LABEL_79;
LABEL_95:
                    sub_E1770(
                      (_QWORD *)v4,
                      25,
                      *(_DWORD *)(a1 + v50 + 880),
                      *(_DWORD *)(v4 + 144) + 2,
                      *(_DWORD *)(v49 + 8),
                      *(_DWORD *)(v49 + 12));
                    v60 = *(_DWORD *)(v4 + 144);
                    v61 = *(_DWORD *)(v49 + 4) + 1;
                    if ( v61 < 0 )
                      v61 = v60 - 1;
                    v62 = byte_241F50;
                    if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
                      v62 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v61);
                    *((_DWORD *)v62 + 2) = v60;
                  }
LABEL_79:
                  v55 = *(_BYTE *)(v49 + 16);
                }
                sub_E1710(v4, v55, *(_DWORD *)v49, *(_DWORD *)(v49 + 4), 0);
LABEL_81:
                v57 = *(_DWORD *)(v4 + 144);
                v58 = *(_DWORD *)(v49 + 4) - 1;
                if ( v58 < 0 )
                  v58 = v57 - 1;
                v59 = byte_241F50;
                if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
                  v59 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v58);
                v49 -= 20;
                *((_DWORD *)v59 + 2) = v57;
                if ( v49 == v51 )
                {
                  v21 = v94;
                  break;
                }
                continue;
              }
            }
          }
        }
        v13 = a1 + 112 * v21;
        sub_E0BB0(v4, *(_DWORD *)(v13 + 884));
        v14 = *(_QWORD *)(v13 + 928);
        if ( v14 )
          sub_E1710(v4, 67, *(_DWORD *)(v14 + 8), 0, 1u);
        v15 = a1 + 112 * v21;
        v16 = *(_DWORD *)(v15 + 892);
        if ( v16 )
        {
          sub_E1710(v4, 8, 0, v16, 0);
          v41 = *(_DWORD *)(v4 + 144);
          v42 = *(_DWORD *)(v15 + 892);
          if ( v42 < 0 )
            v42 = v41 - 1;
          v43 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
            v43 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v42);
          *((_DWORD *)v43 + 2) = v41;
          v44 = *(_DWORD *)(v4 + 144);
          v45 = *(_DWORD *)(a1 + 112 * v21 + 892) - 2;
          if ( v45 < 0 )
            v45 = v44 - 1;
          v46 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
            v46 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v45);
          *((_DWORD *)v46 + 2) = v44;
        }
        v17 = a1 + 112 * v21;
        v18 = *(_DWORD *)(v17 + 920);
        if ( v18 )
          sub_E1710(v4, 60, *(_DWORD *)(v17 + 916) >> 1, v18, 0);
        v19 = a1 + 112 * v21;
        v20 = *(_DWORD *)(v19 + 872);
        if ( v20 )
          break;
        if ( --v92 == -1 )
          goto LABEL_41;
      }
      v27 = *(_DWORD *)(v25 + 48);
      v28 = sub_E1710(v4, 49, v20, 0, 0);
      if ( (v27 & 0x40) == 0 )
        sub_E1710(v4, 136, *(_DWORD *)(v19 + 876), 0, 0);
      if ( (v27 & 0x200) != 0 )
        break;
      if ( (v27 & 0x2000) != 0 )
      {
        v70 = *(_QWORD *)(a1 + 112 * v21 + 952);
        if ( v70 )
          goto LABEL_112;
      }
LABEL_34:
      v29 = a1 + 112 * v21;
      v30 = *(_DWORD *)(v29 + 900);
      if ( *(_BYTE *)(v29 + 937) == 67 )
        sub_E1710(v4, 9, *(_DWORD *)(v29 + 940), v30, 0);
      else
        sub_E1710(v4, 8, 0, v30, 0);
      v31 = *(_DWORD *)(v4 + 144);
      if ( v28 < 0 )
        v28 = v31 - 1;
      v32 = byte_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v4 + 103LL) )
        v32 = (_BYTE *)(*(_QWORD *)(v4 + 136) + 24LL * v28);
      --v92;
      *((_DWORD *)v32 + 2) = v31;
      if ( v92 == -1 )
      {
LABEL_41:
        v33 = *(_BYTE *)(a1 + 72);
        v3 = v4;
        goto LABEL_42;
      }
    }
    if ( (v27 & 0x2000) != 0 )
    {
      v70 = *(_QWORD *)(a1 + 112 * v21 + 952);
LABEL_112:
      v71 = *(_QWORD *)(v70 + 48);
      v72 = -32768;
      if ( v71 )
        v72 = sub_CFB20(v90, v71);
      sub_E1710(v4, 101, *(_DWORD *)(a1 + 112 * v21 + 880), *(_DWORD *)(v70 + 88), v72);
      sub_F2600(v89, v70, a2);
    }
    sub_E1710(v4, 136, *(_DWORD *)(a1 + 112 * v21 + 880), 0, 0);
    goto LABEL_34;
  }
  v33 = 0;
LABEL_42:
  v34 = a1 + 872;
  if ( v33 )
  {
    for ( i = 0; *(unsigned __int8 *)(a1 + 72) > i; ++i )
    {
      if ( *(_QWORD *)(v34 + 56) )
      {
        sub_133790(a1, i, v34);
      }
      else
      {
        v36 = *(unsigned __int8 *)(v34 + 64);
        v37 = v91 + 104 * v36;
        if ( (*(_BYTE *)(v37 + 69) & 0x10) != 0 )
        {
          sub_D0C40(
            *(_QWORD *)v89,
            *(_QWORD *)(v89 + 16),
            *(_DWORD *)(v34 + 32),
            *(_DWORD *)(v34 + 4),
            *(_DWORD *)(v37 + 64),
            0);
          goto LABEL_49;
        }
        v38 = *(_QWORD *)(v34 + 96);
        v39 = *(_DWORD *)(v38 + 48);
        if ( (v39 & 0x240) != 0 )
        {
          v40 = *(_QWORD *)(v38 + 32);
        }
        else
        {
          if ( (v39 & 0x2000) == 0 )
            goto LABEL_49;
          v40 = *(_QWORD *)(v34 + 80);
        }
        if ( v40 && !*(_BYTE *)(v90 + 103) )
        {
          v63 = v93;
          if ( *(_BYTE *)(a1 + 74) && *(char *)(*(_QWORD *)(v40 + 24) + 48LL) >= 0 )
          {
            v63 = *(_DWORD *)(a1 + 84);
            v64 = *(_DWORD *)(v34 + 32) + 1;
            v65 = v64;
            if ( v64 < 0 )
LABEL_129:
              v65 = *(_DWORD *)(v3 + 144) - 1;
          }
          else
          {
            v64 = *(_DWORD *)(v34 + 32) + 1;
            v65 = v64;
            if ( v64 < 0 )
              goto LABEL_129;
          }
          v66 = byte_241F50;
          if ( !*(_BYTE *)(*(_QWORD *)v3 + 103LL) )
            v66 = (_BYTE *)(*(_QWORD *)(v3 + 136) + 24LL * v65);
          v67 = *(_QWORD *)(v91 + 104 * v36 + 40);
          v68 = &v66[24 * (v63 - v64)];
          do
          {
            if ( *((_DWORD *)v66 + 1) == *(_DWORD *)(v34 + 4) )
            {
              v69 = *v66;
              if ( *v66 == 94 )
              {
                v74 = *(_DWORD *)(v67 + 48);
                v75 = *((int *)v66 + 2);
                if ( (v74 & 0x80u) != 0 )
                {
                  for ( j = *(_QWORD *)(v67 + 16); j; j = *(_QWORD *)(j + 40) )
                  {
                    if ( (*(_BYTE *)(j + 99) & 3) == 2 )
                      break;
                  }
                  v77 = *(_WORD *)(*(_QWORD *)(j + 8) + 2 * v75);
                }
                else
                {
                  v76 = *((_DWORD *)v66 + 2);
                  v77 = v76;
                  if ( (v74 & 0x20) != 0 && (v75 & 0x8000u) == 0LL )
                  {
                    v83 = 0;
                    v84 = (_WORD *)(*(_QWORD *)(v67 + 8) + 14LL);
                    do
                    {
                      v76 -= ((*v84 & 0x20) == 0) - 1;
                      ++v83;
                      v84 += 8;
                      v77 = v76;
                    }
                    while ( v83 <= v76 );
                  }
                }
                v78 = v77;
                if ( *(_WORD *)(v40 + 96) )
                {
                  v79 = *(_WORD **)(v40 + 8);
                  if ( v77 == *v79 )
                  {
                    v81 = 0;
LABEL_128:
                    *((_DWORD *)v66 + 2) = v81;
                    *((_DWORD *)v66 + 1) = *(_DWORD *)(v34 + 8);
                  }
                  else
                  {
                    v80 = v79 + 1;
                    v81 = 0;
                    while ( ++v81 != *(unsigned __int16 *)(v40 + 96) )
                    {
                      if ( v78 == *v80++ )
                      {
                        v81 = (__int16)v81;
                        if ( (v81 & 0x8000u) != 0 )
                          break;
                        goto LABEL_128;
                      }
                    }
                  }
                }
              }
              else if ( v69 == -121 )
              {
                v73 = *(_DWORD *)(v34 + 8);
                *v66 = -114;
                *((_DWORD *)v66 + 1) = v73;
              }
              else if ( v69 == 18 )
              {
                *((_DWORD *)v66 + 1) = *(_DWORD *)(v34 + 8);
              }
            }
            v66 += 24;
          }
          while ( v68 > v66 );
        }
      }
LABEL_49:
      v34 += 112;
    }
  }
  sub_E0BB0(v3, *(_DWORD *)(a1 + 60));
  if ( *(_QWORD *)(a1 + 96) )
    sub_D0E60((__int64 **)a1, (__m128i **)(a1 + 96));
  *(_DWORD *)(v89 + 200) = *(_DWORD *)(a1 + 64);
  sub_D7DA0(v90, (_QWORD *)a1);
}
