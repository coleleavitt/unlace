__int64 __fastcall sub_7E640(__int64 *a1, int a2)
{
  char v2; // al
  int v3; // r12d
  char v4; // dl
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // r14
  char v8; // si
  char v9; // al
  unsigned int v10; // esi
  struct _Unwind_Exception *v11; // rbx
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // r15
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // r9
  char v21; // al
  unsigned __int64 v22; // rdx
  __int64 tinfo_size; // r13
  int v26; // eax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  unsigned int v33; // r13d
  unsigned int v34; // r13d
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+0h] [rbp-198h]
  __int64 v39; // [rsp+8h] [rbp-190h]
  __int64 *v40; // [rsp+8h] [rbp-190h]
  __int64 v41; // [rsp+10h] [rbp-188h]
  __int64 v42; // [rsp+10h] [rbp-188h]
  int v43; // [rsp+18h] [rbp-180h]
  int v44; // [rsp+20h] [rbp-178h]
  __int64 v45; // [rsp+28h] [rbp-170h]
  int v46; // [rsp+30h] [rbp-168h]
  int v47; // [rsp+38h] [rbp-160h]
  unsigned int v48; // [rsp+3Ch] [rbp-15Ch]
  unsigned int v49; // [rsp+3Ch] [rbp-15Ch]
  __int64 v50; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-A8h]
  struct _Unwind_Exception *v52[3]; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+110h] [rbp-88h]
  __int128 v54; // [rsp+118h] [rbp-80h]
  __int64 v55; // [rsp+128h] [rbp-70h]
  __m128i si128; // [rsp+130h] [rbp-68h]
  int v57; // [rsp+140h] [rbp-58h]
  int v58; // [rsp+144h] [rbp-54h]
  unsigned int v59; // [rsp+148h] [rbp-50h]
  char v60; // [rsp+14Ch] [rbp-4Ch]
  unsigned __int64 v61; // [rsp+158h] [rbp-40h]

  v2 = *((_BYTE *)a1 + 88);
  v61 = __readfsqword(0x28u);
  v3 = a2;
  v4 = v2;
  v5 = v2 & 0xF0;
  if ( (v4 & 0xF0) == 0xC0 )
    v5 = *((_DWORD *)a1 + 7);
  if ( v5 > 0x10 || (v5 = getinf(99), v5 > 0x10) )
  {
    if ( v5 != 176 )
      goto LABEL_5;
  }
  else if ( (unsigned int)getinf(99) != 176 )
  {
    goto LABEL_5;
  }
  if ( (unsigned __int64)getinf(88) > 0x397
    || (unsigned __int8)getinf_flag(3, 4, v28, v29, v30, v31, v38, v39, v41)
    && (netnode_check(), v34 = netnode_altval(), v34 > 0x74)
    && ((v35 = *(_DWORD *)(get_ph() + 4)) == 0
     || (v36 = (unsigned int)(v35 - 13), (unsigned int)v36 <= 0x3B)
     && (v37 = 0x800000000000005LL, _bittest64(&v37, v36))
     && v34 != 117) )
  {
    v32 = *((_BYTE *)a1 + 88);
    v33 = v32 & 0xF0;
    if ( (v32 & 0xF0) == 0xC0 )
      v33 = *((_DWORD *)a1 + 7);
    if ( v33 <= 0x10 )
      v33 = getinf(99);
    v51 = 0;
    memset(v52, 0, sizeof(v52));
    v53 = 0;
    v54 = 0;
    sub_23880();
    v55 = 0;
    v57 = a2;
    v58 = 0;
    v59 = v33;
    v60 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_89740);
    return 0;
  }
LABEL_5:
  getinf(59);
  v6 = *a1;
  v7 = *a1 + 80 * a1[1];
  if ( *a1 == v7 )
  {
LABEL_6:
    v8 = *((_BYTE *)a1 + 88);
    v51 = 32;
    v9 = v8;
    memset(v52, 0, sizeof(v52));
    v10 = v8 & 0xF0;
    if ( (v9 & 0xF0) == 0xC0 )
      v10 = *((_DWORD *)a1 + 7);
    if ( v10 <= 0x10 )
      getinf(99);
    get_stkarg_area_info();
    v11 = v52[0];
    if ( a1[1] )
    {
      v45 = a1[1];
      v12 = 2 * v3;
      v44 = 2 * v3;
      if ( v3 <= 2 * v3 )
        v12 = v3;
      v43 = v3;
      v13 = 0;
      v47 = v12;
      v40 = &v50;
      v46 = v3 - 1;
      while ( 1 )
      {
        v14 = *a1 + 80 * v13;
        v15 = a1[11] & 0xF0;
        v42 = *(_QWORD *)(v14 + 8);
        if ( (a1[11] & 0xF0) == 0xC0 )
          v15 = *((_DWORD *)a1 + 7);
        if ( v15 <= 0x10 )
          v15 = getinf(99);
        LODWORD(v50) = 0;
        get_tinfo_size();
        v19 = v50;
        v20 = (unsigned int)(v50 - 1);
        if ( ((unsigned int)v20 & (unsigned int)v50) != 0 )
        {
          sub_78100();
          if ( v53 )
          {
            *(_QWORD *)&v54 = 0;
            qfree(v53);
          }
          if ( v52[0] )
          {
            v52[1] = 0;
            qfree((__int64)v52[0]);
          }
          _Unwind_Resume(v11);
        }
        if ( (int)v50 <= v44 )
          break;
        if ( v15 <= 0x10 )
        {
          v48 = v50 - 1;
          v26 = getinf(99);
          if ( v26 == 176 || v26 == 256 )
          {
            if ( v43 <= v44 )
              goto LABEL_61;
LABEL_49:
            v19 = v44;
LABEL_50:
            v15 = getinf(99);
            if ( v15 == 176 )
            {
LABEL_51:
              LODWORD(v20) = v19 - 1;
              goto LABEL_25;
            }
LABEL_23:
            if ( v15 == 256 )
              goto LABEL_51;
            goto LABEL_24;
          }
          v20 = v48;
        }
        else if ( v15 == 256 || v15 == 176 )
        {
          v19 = v47;
          LODWORD(v20) = v47 - 1;
          goto LABEL_25;
        }
        v49 = v20;
        v27 = getinf_flag(67, 512, v16, v17, v18, v20, v38, (__int64)v40, v42);
        v20 = v49;
        if ( v27 )
          goto LABEL_25;
        v19 = v44;
        if ( v43 <= v44 )
        {
          if ( v15 > 0x10 )
          {
            v19 = v44;
LABEL_37:
            if ( (unsigned __int8)getinf_flag(67, 4, v16, v17, v18, v20, v38, (__int64)v40, v42) )
              goto LABEL_51;
LABEL_38:
            LODWORD(v20) = v46;
            v19 = v43;
            goto LABEL_25;
          }
LABEL_61:
          v19 = v44;
LABEL_62:
          v15 = getinf(99);
LABEL_35:
          if ( v15 != 176 && v15 != 256 )
            goto LABEL_37;
          goto LABEL_38;
        }
        if ( v15 <= 0x10 )
          goto LABEL_49;
LABEL_24:
        v21 = getinf_flag(67, 2, v16, v17, v18, v20, v38, (__int64)v40, v42);
        LODWORD(v20) = v19 - 1;
        if ( !v21 )
          goto LABEL_38;
LABEL_25:
        *(_DWORD *)v14 = 1;
        ++v13;
        v22 = ((unsigned __int64)v11 + (int)v20) & -v19;
        *(_QWORD *)(v14 + 8) = v22;
        v11 = (struct _Unwind_Exception *)(v22 + (unsigned int)v42);
        if ( v45 == v13 )
        {
          v3 = v43;
          goto LABEL_27;
        }
      }
      if ( v43 <= (int)v50 )
      {
        if ( v15 <= 0x10 )
          goto LABEL_62;
        goto LABEL_35;
      }
      if ( v15 <= 0x10 )
        goto LABEL_50;
      if ( v15 == 176 )
        goto LABEL_51;
      goto LABEL_23;
    }
LABEL_27:
    a1[7] = (__int64)v11;
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      *((_DWORD *)a1 + 10) = 1;
      a1[6] = ((unsigned __int64)v11 + v3 - 1) & -v3;
    }
    return 1;
  }
  else
  {
    while ( 1 )
    {
      tinfo_size = get_tinfo_size();
      if ( tinfo_size == -1 )
        break;
      v6 += 80;
      cleanup_argloc();
      *(_DWORD *)(v6 - 80) = 1;
      *(_QWORD *)(v6 - 72) = tinfo_size;
      if ( v7 == v6 )
        goto LABEL_6;
    }
    return 0;
  }
}
