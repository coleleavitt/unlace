__int64 __fastcall sub_EF7E0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // r14
  _DWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 *v30; // r15
  unsigned __int64 v31; // r14
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // r14
  char v36; // al
  __int64 v37; // rdi
  __int64 *v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 *v42; // r14
  __int64 v43; // r15
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 i; // r14
  __int64 v47; // r12
  char v48; // al
  __int64 v49; // rax
  int v50; // [rsp+4h] [rbp-1C4h]
  int v51; // [rsp+8h] [rbp-1C0h]
  __int64 v52; // [rsp+8h] [rbp-1C0h]
  _QWORD *v53; // [rsp+10h] [rbp-1B8h]
  __int64 v54; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v55; // [rsp+23h] [rbp-1A5h]
  int v56; // [rsp+24h] [rbp-1A4h]
  __int64 v57; // [rsp+30h] [rbp-198h]
  _QWORD v58[3]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v59; // [rsp+68h] [rbp-160h]
  __int64 v60; // [rsp+78h] [rbp-150h]
  __int64 v61; // [rsp+80h] [rbp-148h]
  __int64 v62; // [rsp+88h] [rbp-140h]
  __int64 v63; // [rsp+90h] [rbp-138h]
  __int64 v64; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v65; // [rsp+A8h] [rbp-120h]
  __int64 v66; // [rsp+B8h] [rbp-110h]
  __int64 v67; // [rsp+D0h] [rbp-F8h]
  int v68; // [rsp+D8h] [rbp-F0h]
  char v69; // [rsp+DCh] [rbp-ECh]
  __int64 v70; // [rsp+E0h] [rbp-E8h]
  __int64 (__fastcall **v71)(); // [rsp+F0h] [rbp-D8h] BYREF
  int v72; // [rsp+F8h] [rbp-D0h]
  __int64 v73; // [rsp+100h] [rbp-C8h]
  __int128 v74; // [rsp+108h] [rbp-C0h]
  __int64 v75; // [rsp+118h] [rbp-B0h]
  __int128 v76; // [rsp+120h] [rbp-A8h]
  _QWORD *v77; // [rsp+130h] [rbp-98h]
  __int64 v78; // [rsp+138h] [rbp-90h]
  __int64 v79; // [rsp+140h] [rbp-88h]
  _QWORD *v80; // [rsp+148h] [rbp-80h]
  __int64 v81; // [rsp+150h] [rbp-78h]
  __int128 v82; // [rsp+158h] [rbp-70h]
  int v83; // [rsp+168h] [rbp-60h]
  _BYTE v84[24]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v85; // [rsp+188h] [rbp-40h]

  v2 = a1[1];
  v85 = __readfsqword(0x28u);
  v3 = a1;
  v56 = sub_19B280(*(_QWORD *)(v2 + 936));
  v4 = *(_QWORD *)(a1[1] + 936LL);
  v55 = sub_19B210(v4);
  if ( !v55 )
    return v55;
  if ( v56 == -1 || !*(_QWORD *)(v4 + 32) )
    return 0;
  v10 = 0;
  sub_325AE0(a1[27], a2, v5, v6, v7, v8);
  v11 = 0;
  if ( *(_QWORD *)(v4 + 32) )
  {
    do
    {
      v12 = *(int *)(*(_QWORD *)(v4 + 24) + 4 * v11);
      v13 = *(_QWORD *)(v3[1] + 432LL) + 104 * v12;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (v14 & 0x20) != 0 )
      {
        if ( (v14 & 0x100) != 0 )
          goto LABEL_14;
      }
      else
      {
        qsnprintf();
        if ( !v10 )
          v84[2] = 0;
        sub_20F150(v3[1], v13, v84, 4);
        v14 = *(_DWORD *)(v13 + 24);
        if ( (v14 & 0x100) != 0 )
        {
LABEL_14:
          BYTE1(v14) &= 0x7Eu;
          *(_DWORD *)(v13 + 24) = v14 | 0x100000;
          v15 = v3[6];
          v16 = *(_DWORD **)v15;
          v17 = *(_QWORD *)v15 + 4LL * *(_QWORD *)(v15 + 8);
          if ( *(_QWORD *)v15 != v17 )
          {
            while ( (_DWORD)v12 != *v16 )
            {
              if ( (_DWORD *)v17 == ++v16 )
                goto LABEL_9;
            }
            if ( (_DWORD *)v17 != v16 )
            {
              memmove(v16, v16 + 1, v17 - (_QWORD)v16 - 4);
              --*(_QWORD *)(v15 + 8);
            }
          }
        }
      }
LABEL_9:
      ++v10;
      sub_1EACF0(v13, *(_QWORD *)(v3[27] + 112LL), v3[27] + 248LL, 0);
      v11 = v10;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(v4 + 32) );
  }
  v18 = v3[27];
  v75 = 0;
  v77 = v3;
  v78 = v18;
  v79 = v18 + 248;
  v80 = (_QWORD *)(v4 + 24);
  v81 = 0;
  v83 = 0;
  v74 = 0;
  v76 = 0;
  v82 = 0;
  v19 = *(_QWORD *)(v4 + 32);
  v72 = 6;
  v73 = 0;
  v71 = off_4AF900;
  if ( !v19 )
  {
    if ( !under_debugger )
      sub_37DDE0(51463);
LABEL_69:
    BUG();
  }
  v81 = qvector_reserve();
  memset((void *)(v81 + 8 * v82), 0, 8 * (v19 - v82));
  v20 = v80;
  *(_QWORD *)&v82 = v19;
  if ( v80[1] )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v77[1] + 432LL) + 104LL * *(int *)(*v20 + 4 * v21);
        if ( *(_DWORD *)v23 == 1 )
          break;
        if ( (*(_BYTE *)(v23 + 25) & 2) == 0 )
        {
          if ( !under_debugger )
            sub_37DDE0(51009);
          goto LABEL_69;
        }
LABEL_24:
        v21 = ++v22;
        if ( (unsigned __int64)v22 >= v20[1] )
          goto LABEL_30;
      }
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 == -1 )
        goto LABEL_24;
      *(_QWORD *)(v81 + 8 * v21) = v24;
      if ( *(_QWORD *)(v81 + 8LL * v83) < v24 )
        v83 = v22;
      v20 = v80;
      v21 = ++v22;
    }
    while ( (unsigned __int64)v22 < v80[1] );
  }
LABEL_30:
  sub_250E80(&v71, v3 + 2, 0);
  if ( *(_QWORD *)(v4 + 32) )
  {
    v50 = 0;
    v25 = 0;
    do
    {
      v26 = *(int *)(*(_QWORD *)(v4 + 24) + 4 * v25);
      v27 = v3[1];
      v51 = v26;
      v28 = *(_QWORD *)(v27 + 432) + 104 * v26;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 936) + 72LL))(*(_QWORD *)(v27 + 936)) )
      {
        *(_DWORD *)(v28 + 92) = 1;
        v29 = qalloc_or_throw();
        *(_QWORD *)v29 = 0;
        v30 = (__int64 *)v29;
        *(_OWORD *)(v29 + 8) = 0;
        *(_QWORD *)(v29 + 24) = 0;
        *(_DWORD *)(v29 + 32) = 0;
        v58[1] = 0xFFFFFFFF00000000LL;
        v58[2] = 0xFFFFFFFFLL;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v59 = 0;
        v31 = *(_QWORD *)(v29 + 8);
        v58[0] = -1;
        if ( v31 > 2 )
        {
          v53 = v3;
          v38 = (__int64 *)v29;
          v39 = 2;
          do
          {
            v40 = 9 * v39++;
            v41 = *v38 + 8 * v40;
            clear_tinfo_t();
            sub_250A30(v41);
            clear_tinfo_t();
          }
          while ( v31 != v39 );
          v30 = v38;
          v3 = v53;
          v30[1] = 2;
        }
        else if ( v31 != 2 )
        {
          v32 = *(_QWORD *)v29;
          v33 = *(_QWORD *)(v29 + 16);
          if ( (unsigned __int64)v58 < *v30 || (unsigned __int64)v58 >= v32 + 72 * v33 )
          {
            if ( v33 > 1 || (v49 = qvector_reserve(), v31 = v30[1], *v30 = v49, v32 = v49, v31 <= 1) )
            {
              for ( i = -(int)v31 & 0x48; ; i = 72 )
              {
                v47 = i + v32;
                *(_QWORD *)v47 = -1;
                *(_DWORD *)(v47 + 8) = 0;
                *(_QWORD *)(v47 + 12) = -1;
                *(_QWORD *)(v47 + 48) = 0;
                *(_DWORD *)(v47 + 56) = 0;
                sub_2563F0(v47, v58);
                v48 = BYTE4(v62);
                *(_QWORD *)(v47 + 64) = 0;
                *(_BYTE *)(v47 + 60) = v48;
                copy_tinfo_t();
                if ( i )
                  break;
                v32 = *v30;
              }
            }
            v30[1] = 2;
          }
          else
          {
            v64 = -1;
            LODWORD(v65) = 0;
            *(_QWORD *)((char *)&v65 + 4) = -1;
            v67 = 0;
            v68 = 0;
            sub_2563F0(&v64, v58);
            v70 = 0;
            v69 = BYTE4(v62);
            copy_tinfo_t();
            if ( (unsigned __int64)v30[2] <= 1 )
              *v30 = qvector_reserve();
            v34 = v30[1];
            v57 = 72 * v34;
            if ( v34 <= 1 )
            {
              while ( 1 )
              {
                v35 = *v30 + v57;
                *(_QWORD *)v35 = -1;
                *(_DWORD *)(v35 + 8) = 0;
                *(_QWORD *)(v35 + 12) = -1;
                *(_QWORD *)(v35 + 48) = 0;
                *(_DWORD *)(v35 + 56) = 0;
                sub_2563F0(v35, &v64);
                v36 = v69;
                *(_QWORD *)(v35 + 64) = 0;
                *(_BYTE *)(v35 + 60) = v36;
                copy_tinfo_t();
                if ( v57 )
                  break;
                v57 = 72;
              }
            }
            v30[1] = 2;
            clear_tinfo_t();
            sub_250A30(&v64);
            clear_tinfo_t();
          }
        }
        clear_tinfo_t();
        sub_250A30(v58);
        clear_tinfo_t();
        copy_tinfo_t();
        *(_DWORD *)(*v30 + 8) = 65;
        *(_QWORD *)(*v30 + 24) = v3[1];
        *(_DWORD *)(*v30 + 32) = v51;
        *(_DWORD *)(*v30 + 80) = 65;
        *(_QWORD *)(*v30 + 96) = v3[1];
        *(_DWORD *)(*v30 + 104) = v56;
        copy_tinfo_t();
        copy_tinfo_t();
        v64 = 1;
        v52 = sub_ED180((__int64)&v64, (__int64)v30, (__int64)"va_start");
        clear_tinfo_t();
        v42 = (__int64 *)v3[5];
        *(_QWORD *)&v65 = -4294967226LL;
        v64 = -1;
        *((_QWORD *)&v65 + 1) = 0xFFFFFFFFLL;
        v66 = 0;
        v54 = *v42;
        v43 = qalloc_or_throw();
        *(_QWORD *)(v43 + 16) = -1;
        *(_DWORD *)(v43 + 24) = 70;
        *(_QWORD *)(v43 + 28) = -1;
        sub_255E70(v43 + 16, &v64);
        *(_QWORD *)v43 = v54;
        v44 = *(__int64 **)(v54 + 8);
        *(_QWORD *)(v43 + 8) = v44;
        *v44 = v43;
        *(_QWORD *)(v54 + 8) = v43;
        ++v42[2];
        sub_250450(&v64);
        v45 = *(_QWORD *)v3[5];
        *(_DWORD *)(v45 + 24) = 72;
        *(_QWORD *)(v45 + 40) = v52;
      }
      else if ( !*(_DWORD *)(v28 + 92) )
      {
        *(_DWORD *)(v28 + 92) = 1;
      }
      v25 = ++v50;
      *(_DWORD *)(v28 + 24) |= 1u;
    }
    while ( (unsigned __int64)v50 < *(_QWORD *)(v4 + 32) );
  }
  sub_3201D0(v3, 1, 0);
  v37 = v81;
  *(_DWORD *)(v3[27] + 1416LL) |= 8u;
  v71 = off_4AF900;
  if ( v37 )
  {
    *(_QWORD *)&v82 = 0;
    qfree();
  }
  v71 = off_4AE778;
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  return v55;
}

