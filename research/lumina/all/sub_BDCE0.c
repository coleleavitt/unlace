_QWORD *__fastcall sub_BDCE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // r12
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 fields; // rbx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  void (__fastcall *v27)(_QWORD *); // rax
  __int64 v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  char *v31; // rdi
  __int64 v32; // rbp
  __int64 i; // rbx
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rdx
  _QWORD **v38; // rbx
  void (__fastcall *v39)(_QWORD *); // rdx
  void (__fastcall *v40)(_QWORD *); // rax
  _QWORD *v41; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rdi
  _QWORD *v46; // rbx
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // r9
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r13
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // [rsp+8h] [rbp-C0h]
  __int64 v65; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v66; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v67; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v68; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v71; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v72; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v73; // [rsp+8h] [rbp-C0h]
  __int64 v74; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+30h] [rbp-98h]
  unsigned __int64 v79; // [rsp+30h] [rbp-98h]
  __int64 v80; // [rsp+38h] [rbp-90h]
  __int64 v81; // [rsp+38h] [rbp-90h]
  char v82[8]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v83; // [rsp+48h] [rbp-80h]
  __int64 v84; // [rsp+58h] [rbp-70h]
  char v85[8]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v86; // [rsp+68h] [rbp-60h]
  __int64 v87; // [rsp+78h] [rbp-50h]
  unsigned __int64 v88; // [rsp+88h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v74 = *(_QWORD *)a2;
  v3 = mysql_stmt_result_metadata(*(_QWORD *)(*(_QWORD *)a2 + 24LL));
  if ( !v3 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1608);
LABEL_104:
    BUG();
  }
  v4 = v3;
  v5 = operator new(0x80u);
  *(_DWORD *)(v5 + 8) = 1;
  v6 = (_QWORD *)v5;
  *(_QWORD *)v5 = &off_239DB0;
  v7 = *(_QWORD *)a2;
  v6[2] = *(_QWORD *)a2;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  v6[3] = v4;
  v6[4] = 0;
  v6[7] = 0;
  v6[10] = 0;
  v6[13] = 0;
  *(_OWORD *)(v6 + 5) = 0;
  *((_OWORD *)v6 + 4) = 0;
  *(_OWORD *)(v6 + 11) = 0;
  *((_OWORD *)v6 + 7) = 0;
  if ( !v74 || !v6 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1605);
    goto LABEL_104;
  }
  v8 = mysql_num_fields(v4);
  if ( (v8 & 0x80000000) != 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1606);
    goto LABEL_104;
  }
  fields = mysql_fetch_fields(v6[3]);
  sub_BDC40(v6 + 4, v8);
  v10 = v6[8];
  v11 = v8;
  if ( v8 != v10 )
  {
    v82[0] = 2;
    v84 = 0;
    v83 = 0;
    if ( v8 < v10 )
    {
      v65 = fields;
      v15 = v8;
      do
      {
        v16 = v15++;
        sub_176520(v6[7] + 32 * v16);
      }
      while ( v15 < v10 );
      v6[8] = v8;
      fields = v65;
      v11 = v8;
    }
    else
    {
      v12 = v6[7];
      v13 = v6[9];
      if ( (unsigned __int64)v82 < v12 || (unsigned __int64)v82 >= v12 + 32 * v13 )
      {
        if ( v13 < v8 )
        {
          v63 = sub_1987B0(v6 + 7, v12, v8, 32);
          v10 = v6[8];
          v11 = v8;
          v6[7] = v63;
        }
        if ( v10 < v11 )
        {
          do
          {
            v64 = v11;
            v14 = v6[7] + 32 * v10;
            *(_BYTE *)v14 = 2;
            *(_QWORD *)(v14 + 24) = 0;
            *(_OWORD *)(v14 + 8) = 0;
            sub_176730(v14, v82);
            v11 = v64;
            ++v10;
          }
          while ( v10 < v64 );
        }
        v6[8] = v11;
      }
      else
      {
        v85[0] = 2;
        v87 = 0;
        v86 = 0;
        sub_176730(v85, v82);
        v58 = v8;
        if ( v6[9] < (unsigned __int64)v8 )
        {
          v6[7] = sub_1987B0(v6 + 7, v6[7], v8, 32);
          v58 = v8;
        }
        v59 = v6[8];
        if ( v59 < v58 )
        {
          do
          {
            v70 = v58;
            v60 = v6[7] + 32 * v59;
            *(_BYTE *)v60 = 2;
            *(_QWORD *)(v60 + 24) = 0;
            *(_OWORD *)(v60 + 8) = 0;
            sub_176730(v60, v85);
            v58 = v70;
            ++v59;
          }
          while ( v70 != v59 );
        }
        v6[8] = v58;
        v71 = v58;
        sub_176520(v85);
        v11 = v71;
      }
    }
    v66 = v11;
    sub_176520(v82);
    v11 = v66;
  }
  v17 = v6[11];
  if ( v17 < v11 )
  {
    v57 = v6[10];
    if ( v6[12] < v11 )
    {
      v73 = v11;
      v62 = sub_1987B0(v6 + 10, v57, v11, 8);
      v17 = v6[11];
      v11 = v73;
      v6[10] = v62;
      v57 = v62;
    }
    v69 = v11;
    memset((void *)(v57 + 8 * v17), 0, 8 * (v11 - v17));
    v11 = v69;
    v18 = v6[14];
    v6[11] = v69;
    if ( v18 >= v69 )
    {
      if ( v69 == v18 )
        goto LABEL_26;
      goto LABEL_66;
    }
LABEL_63:
    v49 = v6[13];
    if ( v6[15] < v11 )
    {
      v72 = v11;
      v61 = sub_1987B0(v6 + 13, v49, v11, 1);
      v18 = v6[14];
      v11 = v72;
      v6[13] = v61;
      v49 = v61;
    }
    v68 = v11;
    memset((void *)(v49 + v18), 0, v11 - v18);
    v11 = v68;
LABEL_66:
    v6[14] = v11;
LABEL_26:
    v67 = v11;
    v19 = fields + 56;
    v20 = 0;
    v21 = 0;
    while ( 1 )
    {
      v22 = v6[7] + 32 * v21;
      v23 = v20 + v6[4];
      *(_QWORD *)v23 = v6[10] + 8 * v21;
      *(_QWORD *)(v23 + 8) = v21 + v6[13];
      *(_DWORD *)(v23 + 96) = *(_DWORD *)(v19 + 56);
      *(_BYTE *)(v23 + 101) = (*(_BYTE *)(v19 + 44) & 0x20) != 0;
      v24 = *(_DWORD *)(v19 + 56);
      switch ( v24 )
      {
        case 0u:
          goto LABEL_55;
        case 1u:
        case 3u:
          v25 = v22;
          v26 = (_QWORD *)(v22 + 8);
          sub_176520(v25);
          *((_BYTE *)v26 - 8) = 2;
          *v26 = 0;
          *(_QWORD *)(v23 + 16) = v26;
          goto LABEL_29;
        case 2u:
        case 4u:
        case 5u:
        case 6u:
          goto LABEL_95;
        case 7u:
          *(_BYTE *)v22 = 7;
          *(_QWORD *)(v22 + 8) = 0;
          *(_OWORD *)(v22 + 16) = 0;
          v47 = sub_1987B0(v22 + 8, 0, 41, 1);
          v48 = *(_QWORD *)(v22 + 16);
          *(_QWORD *)(v22 + 8) = v47;
          if ( v48 <= 0x28 )
          {
            do
            {
              *(_BYTE *)(v47 + v48++) = 0;
              v47 = *(_QWORD *)(v22 + 8);
            }
            while ( v48 != 41 );
          }
          *(_QWORD *)(v22 + 16) = 41;
          *(_BYTE *)(v47 + 40) = 0;
          goto LABEL_58;
        case 8u:
          v45 = v22;
          v46 = (_QWORD *)(v22 + 8);
          sub_176520(v45);
          *((_BYTE *)v46 - 8) = 9;
          *v46 = 0;
          *(_QWORD *)(v23 + 16) = v46;
          goto LABEL_29;
        default:
          if ( v24 > 0xFC )
          {
            if ( v24 - 253 > 1 )
            {
LABEL_95:
              if ( !unk_2439A0 )
                sub_198E10(1607);
              goto LABEL_104;
            }
            v50 = *(_QWORD *)v19;
            *(_BYTE *)v22 = 7;
            v51 = 0;
            *(_QWORD *)(v22 + 8) = 0;
            *(_OWORD *)(v22 + 16) = 0;
            if ( v50 == -1 )
              goto LABEL_73;
            v81 = v50;
            v79 = v50 + 1;
            v51 = sub_1987B0(v22 + 8, 0, v50 + 1, 1);
            v55 = *(_QWORD *)(v22 + 16);
            v53 = v79;
            *(_QWORD *)(v22 + 8) = v51;
            v50 = v81;
            if ( v55 < v79 )
            {
              do
              {
                v56 = v55;
                *(_BYTE *)(v51 + v55++) = 0;
                v51 = *(_QWORD *)(v22 + 8);
              }
              while ( v81 != v56 );
            }
            goto LABEL_72;
          }
          if ( v24 <= 0xFA )
          {
            if ( v24 != 246 )
              goto LABEL_95;
LABEL_55:
            *(_BYTE *)v22 = 7;
            *(_QWORD *)(v22 + 8) = 0;
            *(_OWORD *)(v22 + 16) = 0;
            v43 = sub_1987B0(v22 + 8, 0, 129, 1);
            v44 = *(_QWORD *)(v22 + 16);
            *(_QWORD *)(v22 + 8) = v43;
            if ( v44 <= 0x80 )
            {
              do
              {
                *(_BYTE *)(v43 + v44++) = 0;
                v43 = *(_QWORD *)(v22 + 8);
              }
              while ( v44 != 129 );
            }
            *(_QWORD *)(v22 + 16) = 129;
            *(_BYTE *)(v43 + 128) = 0;
            goto LABEL_58;
          }
          v50 = *(_QWORD *)v19;
          *(_BYTE *)v22 = 7;
          v51 = 0;
          *(_QWORD *)(v22 + 8) = 0;
          *(_OWORD *)(v22 + 16) = 0;
          if ( v50 != -1 )
          {
            v80 = v50;
            v78 = v50 + 1;
            v51 = sub_1987B0(v22 + 8, 0, v50 + 1, 1);
            v52 = *(_QWORD *)(v22 + 16);
            v53 = v78;
            *(_QWORD *)(v22 + 8) = v51;
            v50 = v80;
            if ( v52 < v78 )
            {
              do
              {
                v54 = v52;
                *(_BYTE *)(v51 + v52++) = 0;
                v51 = *(_QWORD *)(v22 + 8);
              }
              while ( v80 != v54 );
            }
LABEL_72:
            *(_QWORD *)(v22 + 16) = v53;
          }
LABEL_73:
          *(_BYTE *)(v51 + v50) = 0;
LABEL_58:
          *(_QWORD *)(v23 + 16) = *(_QWORD *)(v22 + 8);
          *(_QWORD *)(v23 + 64) = (*(_QWORD *)(v22 + 16) == 0) + *(_QWORD *)(v22 + 16) - 1LL;
LABEL_29:
          ++v21;
          v20 += 112;
          v19 += 128;
          if ( v21 == v67 )
            goto LABEL_30;
          break;
      }
    }
  }
  if ( v11 != v17 )
    v6[11] = v11;
  v18 = v6[14];
  if ( v18 < v11 )
    goto LABEL_63;
  if ( v11 != v18 )
    v6[14] = v11;
  if ( v8 )
    goto LABEL_26;
LABEL_30:
  if ( (unsigned __int8)mysql_stmt_bind_result(*(_QWORD *)(v74 + 24), v6[4])
    || (unsigned int)mysql_stmt_execute(*(_QWORD *)(v74 + 24))
    || (unsigned int)mysql_stmt_store_result(*(_QWORD *)(v74 + 24)) )
  {
    v27 = *(void (__fastcall **)(_QWORD *))(*v6 + 16LL);
    if ( v27 == sub_BD890 )
    {
      v28 = v6[3];
      *v6 = &off_239DB0;
      if ( v28 )
      {
        mysql_free_result();
        v6[3] = 0;
      }
      v29 = (void *)v6[13];
      if ( v29 )
      {
        v6[14] = 0;
        j__free(v29);
      }
      v30 = (void *)v6[10];
      if ( v30 )
      {
        v6[11] = 0;
        j__free(v30);
      }
      v31 = (char *)v6[7];
      if ( v31 )
      {
        v32 = v6[8];
        if ( v32 )
        {
          for ( i = 0; i != v32; ++i )
          {
            v34 = i;
            sub_176520(&v31[32 * v34]);
            v31 = (char *)v6[7];
          }
        }
        v6[8] = 0;
        j__free(v31);
      }
      v35 = (void *)v6[4];
      if ( v35 )
      {
        v6[5] = 0;
        j__free(v35);
      }
      v36 = v6[2];
      if ( v36 )
      {
        if ( (*(_DWORD *)(v36 + 8))-- == 1 )
        {
          v38 = (_QWORD **)v6[2];
          v39 = (void (__fastcall *)(_QWORD *))**v38;
          if ( v39 == sub_BCB00 )
          {
            if ( v38 )
            {
              v40 = (void (__fastcall *)(_QWORD *))(*v38)[2];
              v41 = (_QWORD *)v6[2];
              if ( v40 == sub_BCAE0 )
              {
                sub_BC950(v41);
                operator delete(v38, 0x458u);
              }
              else
              {
                v40(v41);
              }
            }
          }
          else
          {
            v39((_QWORD *)v6[2]);
          }
        }
      }
      operator delete(v6, 0x80u);
    }
    else
    {
      v27(v6);
    }
    v6 = nullptr;
    sub_BCB40(a3, *(_QWORD *)(v74 + 16), a2);
  }
  *a1 = v6;
  return a1;
}
