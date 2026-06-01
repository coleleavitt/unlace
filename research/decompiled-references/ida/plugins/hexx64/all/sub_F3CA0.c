__int64 __fastcall sub_F3CA0(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // r14
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // r15
  unsigned __int64 v29; // r14
  __int64 v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r14
  char v34; // al
  __int64 v35; // rdi
  __int64 *v36; // rbx
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // r15
  __int64 *v43; // rax
  __int64 v44; // rax
  __int64 i; // r14
  __int64 v46; // r12
  char v47; // al
  __int64 v48; // rax
  int v49; // [rsp+4h] [rbp-1C4h]
  int v50; // [rsp+8h] [rbp-1C0h]
  __int64 v51; // [rsp+8h] [rbp-1C0h]
  _QWORD *v52; // [rsp+10h] [rbp-1B8h]
  __int64 v53; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v54; // [rsp+23h] [rbp-1A5h]
  int v55; // [rsp+24h] [rbp-1A4h]
  __int64 v56; // [rsp+30h] [rbp-198h]
  _QWORD v57[3]; // [rsp+50h] [rbp-178h] BYREF
  __int128 v58; // [rsp+68h] [rbp-160h]
  __int64 v59; // [rsp+78h] [rbp-150h]
  __int64 v60; // [rsp+80h] [rbp-148h]
  __int64 v61; // [rsp+88h] [rbp-140h]
  __int64 v62; // [rsp+90h] [rbp-138h]
  __int64 v63; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-120h]
  __int64 v65; // [rsp+B8h] [rbp-110h]
  __int64 v66; // [rsp+D0h] [rbp-F8h]
  int v67; // [rsp+D8h] [rbp-F0h]
  char v68; // [rsp+DCh] [rbp-ECh]
  __int64 v69; // [rsp+E0h] [rbp-E8h]
  __int64 (__fastcall **v70)(); // [rsp+F0h] [rbp-D8h] BYREF
  int v71; // [rsp+F8h] [rbp-D0h]
  __int64 v72; // [rsp+100h] [rbp-C8h]
  __int128 v73; // [rsp+108h] [rbp-C0h]
  __int64 v74; // [rsp+118h] [rbp-B0h]
  __int128 v75; // [rsp+120h] [rbp-A8h]
  _QWORD *v76; // [rsp+130h] [rbp-98h]
  __int64 v77; // [rsp+138h] [rbp-90h]
  __int64 v78; // [rsp+140h] [rbp-88h]
  _QWORD *v79; // [rsp+148h] [rbp-80h]
  __int64 v80; // [rsp+150h] [rbp-78h] BYREF
  __int128 v81; // [rsp+158h] [rbp-70h]
  int v82; // [rsp+168h] [rbp-60h]
  char v83[24]; // [rsp+170h] [rbp-58h] BYREF
  unsigned __int64 v84; // [rsp+188h] [rbp-40h]

  v1 = a1[1];
  v84 = __readfsqword(0x28u);
  v2 = a1;
  v55 = sub_19F880(*(_QWORD *)(v1 + 936));
  v3 = *(_QWORD **)(a1[1] + 936LL);
  v54 = sub_19F810(v3);
  if ( !v54 )
    return v54;
  if ( v55 == -1 || !v3[4] )
    return 0;
  v5 = 0;
  sub_32AD90(a1[27]);
  v6 = 0;
  if ( v3[4] )
  {
    do
    {
      v7 = *(int *)(v3[3] + 4 * v6);
      v8 = *(_QWORD *)(v2[1] + 432LL) + 104 * v7;
      v9 = *(_DWORD *)(v8 + 24);
      if ( (v9 & 0x20) != 0 )
      {
        if ( (v9 & 0x100) != 0 )
          goto LABEL_14;
      }
      else
      {
        qsnprintf();
        if ( !v5 )
          v83[2] = 0;
        sub_213D50((_QWORD *)v2[1], v8, v83, 4);
        v9 = *(_DWORD *)(v8 + 24);
        if ( (v9 & 0x100) != 0 )
        {
LABEL_14:
          BYTE1(v9) &= 0x7Eu;
          *(_DWORD *)(v8 + 24) = v9 | 0x100000;
          v10 = v2[6];
          v11 = *(_DWORD **)v10;
          v12 = *(_QWORD *)v10 + 4LL * *(_QWORD *)(v10 + 8);
          if ( *(_QWORD *)v10 != v12 )
          {
            while ( (_DWORD)v7 != *v11 )
            {
              if ( (_DWORD *)v12 == ++v11 )
                goto LABEL_9;
            }
            if ( (_DWORD *)v12 != v11 )
            {
              memmove(v11, v11 + 1, v12 - (_QWORD)v11 - 4);
              --*(_QWORD *)(v10 + 8);
            }
          }
        }
      }
LABEL_9:
      ++v5;
      sub_1EF8F0(v8, *(_QWORD *)(v2[27] + 112LL), (_BYTE *)(v2[27] + 248LL), 0);
      v6 = v5;
    }
    while ( (unsigned __int64)v5 < v3[4] );
  }
  v13 = v2[27];
  v74 = 0;
  v76 = v2;
  v77 = v13;
  v78 = v13 + 248;
  v79 = v3 + 3;
  v80 = 0;
  v82 = 0;
  v73 = 0;
  v75 = 0;
  v81 = 0;
  v14 = v3[4];
  v71 = 6;
  v72 = 0;
  v70 = off_4DCE80;
  if ( !v14 )
  {
    if ( !under_debugger )
      sub_383060(0xC907u, 0.0);
LABEL_69:
    BUG();
  }
  v80 = qvector_reserve((__int64)&v80, 0, v14, 8);
  memset((void *)(v80 + 8 * v81), 0, 8 * (v14 - v81));
  v15 = v79;
  *(_QWORD *)&v81 = v14;
  if ( v79[1] )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v76[1] + 432LL) + 104LL * *(int *)(*v15 + 4 * v16);
        if ( *(_DWORD *)v18 == 1 )
          break;
        if ( (*(_BYTE *)(v18 + 25) & 2) == 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC741u, 0.0);
          goto LABEL_69;
        }
LABEL_24:
        v16 = ++v17;
        if ( (unsigned __int64)v17 >= v15[1] )
          goto LABEL_30;
      }
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 == -1 )
        goto LABEL_24;
      *(_QWORD *)(v80 + 8 * v16) = v19;
      if ( *(_QWORD *)(v80 + 8LL * v82) < v19 )
        v82 = v17;
      v15 = v79;
      v16 = ++v17;
    }
    while ( (unsigned __int64)v17 < v79[1] );
  }
LABEL_30:
  v20 = v2 + 2;
  sub_255A80((__int64 *)&v70, (__int64)(v2 + 2), 0);
  if ( v3[4] )
  {
    v49 = 0;
    v21 = 0;
    do
    {
      v22 = *(int *)(v3[3] + 4 * v21);
      v23 = v2[1];
      v50 = v22;
      v24 = *(_QWORD *)(v23 + 432) + 104 * v22;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 936) + 72LL))(*(_QWORD *)(v23 + 936)) )
      {
        *(_DWORD *)(v24 + 92) = 1;
        v27 = qalloc_or_throw(40, (__int64)v20, v25, v26);
        *(_QWORD *)v27 = 0;
        v28 = (__int64 *)v27;
        *(_OWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 24) = 0;
        *(_DWORD *)(v27 + 32) = 0;
        v57[1] = 0xFFFFFFFF00000000LL;
        v57[2] = 0xFFFFFFFFLL;
        v59 = 0;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v58 = 0;
        v29 = *(_QWORD *)(v27 + 8);
        v57[0] = -1;
        if ( v29 > 2 )
        {
          v52 = v2;
          v36 = (__int64 *)v27;
          v37 = 2;
          do
          {
            v38 = 9 * v37++;
            v39 = *v36 + 8 * v38;
            clear_tinfo_t();
            sub_255630(v39);
            clear_tinfo_t();
          }
          while ( v29 != v37 );
          v28 = v36;
          v2 = v52;
          v28[1] = 2;
        }
        else if ( v29 != 2 )
        {
          v30 = *(_QWORD *)v27;
          v31 = *(_QWORD *)(v27 + 16);
          if ( (unsigned __int64)v57 < *v28 || (unsigned __int64)v57 >= v30 + 72 * v31 )
          {
            if ( v31 > 1
              || (v48 = qvector_reserve((__int64)v28, v30, 2, 72), v29 = v28[1], *v28 = v48, v30 = v48, v29 <= 1) )
            {
              for ( i = -(int)v29 & 0x48; ; i = 72 )
              {
                v46 = i + v30;
                *(_QWORD *)v46 = -1;
                *(_DWORD *)(v46 + 8) = 0;
                *(_QWORD *)(v46 + 12) = -1;
                *(_QWORD *)(v46 + 48) = 0;
                *(_DWORD *)(v46 + 56) = 0;
                sub_25AFF0(v46, (__int64)v57);
                v47 = BYTE4(v61);
                *(_QWORD *)(v46 + 64) = 0;
                *(_BYTE *)(v46 + 60) = v47;
                copy_tinfo_t();
                if ( i )
                  break;
                v30 = *v28;
              }
            }
            v28[1] = 2;
          }
          else
          {
            v63 = -1;
            LODWORD(v64) = 0;
            *(_QWORD *)((char *)&v64 + 4) = -1;
            v66 = 0;
            v67 = 0;
            sub_25AFF0((__int64)&v63, (__int64)v57);
            v69 = 0;
            v68 = BYTE4(v61);
            copy_tinfo_t();
            if ( (unsigned __int64)v28[2] <= 1 )
              *v28 = qvector_reserve((__int64)v28, *v28, 2, 72);
            v32 = v28[1];
            v56 = 72 * v32;
            if ( v32 <= 1 )
            {
              while ( 1 )
              {
                v33 = *v28 + v56;
                *(_QWORD *)v33 = -1;
                *(_DWORD *)(v33 + 8) = 0;
                *(_QWORD *)(v33 + 12) = -1;
                *(_QWORD *)(v33 + 48) = 0;
                *(_DWORD *)(v33 + 56) = 0;
                sub_25AFF0(v33, (__int64)&v63);
                v34 = v68;
                *(_QWORD *)(v33 + 64) = 0;
                *(_BYTE *)(v33 + 60) = v34;
                copy_tinfo_t();
                if ( v56 )
                  break;
                v56 = 72;
              }
            }
            v28[1] = 2;
            clear_tinfo_t();
            sub_255630((__int64)&v63);
            clear_tinfo_t();
          }
        }
        clear_tinfo_t();
        sub_255630((__int64)v57);
        clear_tinfo_t();
        copy_tinfo_t();
        *(_DWORD *)(*v28 + 8) = 65;
        *(_QWORD *)(*v28 + 24) = v2[1];
        *(_DWORD *)(*v28 + 32) = v50;
        *(_DWORD *)(*v28 + 80) = 65;
        *(_QWORD *)(*v28 + 96) = v2[1];
        *(_DWORD *)(*v28 + 104) = v55;
        copy_tinfo_t();
        copy_tinfo_t();
        v63 = 1;
        v51 = sub_F1640((__int64)&v63, (__int64)v28);
        clear_tinfo_t();
        v40 = (__int64 *)v2[5];
        *(_QWORD *)&v64 = -4294967226LL;
        v63 = -1;
        *((_QWORD *)&v64 + 1) = 0xFFFFFFFFLL;
        v65 = 0;
        v53 = *v40;
        v20 = &v63;
        v42 = qalloc_or_throw(48, (__int64)v28, v41, *v40);
        *(_QWORD *)(v42 + 16) = -1;
        *(_DWORD *)(v42 + 24) = 70;
        *(_QWORD *)(v42 + 28) = -1;
        sub_25AA70(v42 + 16, (__int64)&v63);
        *(_QWORD *)v42 = v53;
        v43 = *(__int64 **)(v53 + 8);
        *(_QWORD *)(v42 + 8) = v43;
        *v43 = v42;
        *(_QWORD *)(v53 + 8) = v42;
        ++v40[2];
        sub_255050((__int64)&v63);
        v44 = *(_QWORD *)v2[5];
        *(_DWORD *)(v44 + 24) = 72;
        *(_QWORD *)(v44 + 40) = v51;
      }
      else if ( !*(_DWORD *)(v24 + 92) )
      {
        *(_DWORD *)(v24 + 92) = 1;
      }
      v21 = ++v49;
      *(_DWORD *)(v24 + 24) |= 1u;
    }
    while ( (unsigned __int64)v49 < v3[4] );
  }
  sub_3252D0((__int64)v2, 1, 0);
  v35 = v80;
  *(_DWORD *)(v2[27] + 1416LL) |= 8u;
  v70 = off_4DCE80;
  if ( v35 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v35);
  }
  v70 = off_4DBCF8;
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v72);
  }
  return v54;
}

