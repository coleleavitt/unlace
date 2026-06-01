__int64 __fastcall sub_50D40(int *a1, unsigned __int32 *a2, char a3, char a4, char **a5)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  char *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  char v20; // r13
  __int64 j; // rdi
  __int64 v22; // rax
  size_t v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  size_t v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  size_t v30; // rax
  unsigned __int64 v31; // rsi
  size_t v32; // r13
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  unsigned __int32 v37; // r13d
  __int64 jj; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int32 v44; // r13d
  __int64 v45; // rax
  int v46; // eax
  const char *v47; // rsi
  int v48; // eax
  const char *v49; // rsi
  char v50; // r13
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  __int64 ii; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  char v56; // r13
  unsigned __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rax
  char v60; // r13
  __int64 v61; // rax
  unsigned __int64 v62; // rsi
  __int64 k; // rdi
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  __int64 m; // rdi
  __int64 v68; // rax
  size_t v69; // rax
  unsigned __int64 v70; // rsi
  size_t v71; // r13
  __int64 v72; // rax
  __int64 v73; // rax
  char *v74; // rax
  __int64 v75; // rdx
  __m128 v76; // xmm0
  unsigned int v77; // ebp
  size_t v79; // rax
  unsigned __int64 v80; // rsi
  size_t v81; // r13
  __int64 v82; // rax
  __int64 v83; // rax
  char *s; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+28h] [rbp-E0h]
  char *v87; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v88; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v90; // [rsp+50h] [rbp-B8h]
  __int64 v91; // [rsp+58h] [rbp-B0h]
  __int64 v92[3]; // [rsp+60h] [rbp-A8h] BYREF
  char v93; // [rsp+78h] [rbp-90h]
  _BYTE v94[24]; // [rsp+80h] [rbp-88h] BYREF
  int v95; // [rsp+98h] [rbp-70h]
  __int64 v96; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v97; // [rsp+A8h] [rbp-60h]
  char v98; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v99; // [rsp+C8h] [rbp-40h]

  v99 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)&v88, byte_7FBE9, 0x400u);
  v9 = v89;
  v10 = v90;
  for ( i = v88; v90 < v89 + 1; v10 = v90 )
  {
    v90 = v91 + v10;
    v12 = qrealloc();
    i = v12;
    if ( !v12 )
      sub_43DF0((__int64)"JDWP encoder");
    v88 = v12;
    v9 = v89;
  }
  *(_BYTE *)(i + v9) = a3;
  v13 = ++v89;
  if ( byte_7FBE9 )
  {
    sub_44E10(v92, a3);
    v13 = v89;
  }
  v14 = v90;
  v15 = v88;
  if ( v90 < v13 + 1 )
  {
    do
    {
      v90 = v91 + v14;
      v16 = qrealloc();
      v15 = v16;
      if ( !v16 )
        sub_43DF0((__int64)"JDWP encoder");
      v88 = v16;
      v13 = v89;
      v14 = v90;
    }
    while ( v90 < v89 + 1 );
  }
  *(_BYTE *)(v15 + v13) = a4;
  ++v89;
  if ( byte_7FBE9 )
    sub_45120(v92, a4);
  sub_46AA0((__int64)&v88, *((_DWORD *)a5 + 2));
  v17 = *a5;
  if ( 40LL * (_QWORD)a5[1] )
  {
    do
    {
      v18 = v89;
      v19 = v90;
      v20 = *v17;
      for ( j = v88; v90 < v89 + 1; v19 = v90 )
      {
        v90 = v91 + v19;
        v22 = qrealloc();
        j = v22;
        if ( !v22 )
          sub_43DF0((__int64)"JDWP encoder");
        v88 = v22;
        v18 = v89;
      }
      *(_BYTE *)(j + v18) = v20;
      ++v89;
      switch ( *v17 )
      {
        case 1:
          if ( byte_7FBE9 )
            sub_43D60(v92, "Count,");
          goto LABEL_98;
        case 2:
          if ( byte_7FBE9 )
            sub_43D60(v92, "Conditional,");
          goto LABEL_98;
        case 3:
          if ( byte_7FBE9 )
            sub_43D60(v92, "ThreadOnly,");
LABEL_98:
          sub_46AA0((__int64)&v88, *((_DWORD *)v17 + 2));
          goto LABEL_99;
        case 4:
          if ( byte_7FBE9 )
            sub_43D60(v92, "ClassOnly,");
          sub_46BB0((__int64)&v88, a1[2], *((_QWORD *)v17 + 1));
          goto LABEL_99;
        case 5:
          if ( byte_7FBE9 )
            sub_43D60(v92, "ClassMatch,");
          s = *((char **)v17 + 1);
          if ( v93 )
            sub_1FAD0(v92);
          v79 = strlen(s);
          v80 = v90;
          v25 = v88;
          v81 = v79 + 4;
          n = v79;
          v27 = v89;
          if ( v90 >= v81 + v89 )
            goto LABEL_120;
          do
          {
            v90 = v91 + v80;
            v82 = qrealloc();
            v25 = v82;
            if ( !v82 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v82;
            v27 = v89;
            v80 = v90;
          }
          while ( v90 < v81 + v89 );
          if ( v90 < v89 + 4 )
          {
            do
            {
              v90 = v91 + v80;
              v83 = qrealloc();
              v25 = v83;
              if ( !v83 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v83;
              v80 = v90;
              v27 = v89;
LABEL_120:
              ;
            }
            while ( v80 < v27 + 4 );
          }
          break;
        case 6:
          if ( byte_7FBE9 )
            sub_43D60(v92, "ClassExclude,");
          s = *((char **)v17 + 1);
          if ( v93 )
            sub_1FAD0(v92);
          v69 = strlen(s);
          v70 = v90;
          v25 = v88;
          v71 = v69 + 4;
          n = v69;
          v27 = v89;
          if ( v90 >= v71 + v89 )
            goto LABEL_94;
          do
          {
            v90 = v91 + v70;
            v72 = qrealloc();
            v25 = v72;
            if ( !v72 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v72;
            v27 = v89;
            v70 = v90;
          }
          while ( v90 < v71 + v89 );
          if ( v90 < v89 + 4 )
          {
            do
            {
              v90 = v91 + v70;
              v73 = qrealloc();
              v25 = v73;
              if ( !v73 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v73;
              v70 = v90;
              v27 = v89;
LABEL_94:
              ;
            }
            while ( v70 < v27 + 4 );
          }
          break;
        case 7:
          if ( byte_7FBE9 )
            sub_43D60(v92, "LocationOnly,");
          v60 = v17[8];
          if ( v93 )
            sub_1FAD0(v92);
          v61 = v89;
          v62 = v90;
          for ( k = v88; v90 < v89 + 1; v62 = v90 )
          {
            v90 = v91 + v62;
            v64 = qrealloc();
            k = v64;
            if ( !v64 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v64;
            v61 = v89;
          }
          *(_BYTE *)(k + v61) = v60;
          ++v89;
          sub_46BB0((__int64)&v88, a1[2], *((_QWORD *)v17 + 2));
          sub_46BB0((__int64)&v88, a1[1], *((_QWORD *)v17 + 3));
          if ( v93 )
            sub_1FAD0(v92);
          v65 = v89;
          v66 = v90;
          for ( m = v88; v90 < v89 + 8; v66 = v90 )
          {
            v90 = v91 + v66;
            v68 = qrealloc();
            m = v68;
            if ( !v68 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v68;
            v65 = v89;
          }
          *(_QWORD *)(m + v65) = swap64();
          v89 += 8;
          goto LABEL_99;
        case 8:
          if ( byte_7FBE9 )
            sub_43D60(v92, "ExceptionOnly,");
          sub_46BB0((__int64)&v88, a1[2], *((_QWORD *)v17 + 1));
          v50 = v17[16];
          if ( v93 )
            sub_1FAD0(v92);
          v51 = v89;
          v52 = v90;
          for ( ii = v88; v90 < v89 + 1; v52 = v90 )
          {
            v90 = v91 + v52;
            v54 = qrealloc();
            ii = v54;
            if ( !v54 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v54;
            v51 = v89;
          }
          *(_BYTE *)(ii + v51) = v50;
          v55 = ++v89;
          v56 = v17[17];
          if ( v93 )
          {
            sub_1FAD0(v92);
            v55 = v89;
          }
          v57 = v90;
          v58 = v88;
          if ( v90 < v55 + 1 )
          {
            do
            {
              v90 = v91 + v57;
              v59 = qrealloc();
              v58 = v59;
              if ( !v59 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v59;
              v55 = v89;
              v57 = v90;
            }
            while ( v90 < v89 + 1 );
          }
          *(_BYTE *)(v58 + v55) = v56;
          ++v89;
          goto LABEL_99;
        case 9:
          if ( byte_7FBE9 )
            sub_43D60(v92, "FieldOnly,");
          sub_46BB0((__int64)&v88, a1[2], *((_QWORD *)v17 + 1));
          sub_46BB0((__int64)&v88, *a1, *((_QWORD *)v17 + 2));
          goto LABEL_99;
        case 10:
          if ( byte_7FBE9 )
            sub_43D60(v92, "Step,");
          sub_46BB0((__int64)&v88, a1[2], *((_QWORD *)v17 + 1));
          v35 = v90;
          v36 = v88;
          v37 = _byteswap_ulong(*((_DWORD *)v17 + 4));
          for ( jj = v89; v90 < v89 + 4; v35 = v90 )
          {
            v90 = v91 + v35;
            v39 = qrealloc();
            v36 = v39;
            if ( !v39 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v39;
            jj = v89;
          }
          *(_DWORD *)(v36 + jj) = v37;
          v40 = v90;
          v41 = v88;
          v42 = v89 + 4;
          v43 = v89 + 8;
          v89 += 4;
          v44 = _byteswap_ulong(*((_DWORD *)v17 + 5));
          if ( v90 < v43 )
          {
            do
            {
              v90 = v91 + v40;
              v45 = qrealloc();
              v41 = v45;
              if ( !v45 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v45;
              v42 = v89;
              v40 = v90;
            }
            while ( v90 < v89 + 4 );
          }
          *(_DWORD *)(v41 + v42) = v44;
          v89 += 4;
          if ( byte_7FBE9 )
          {
            v46 = *((_DWORD *)v17 + 4);
            v47 = "MIN,";
            if ( v46 )
            {
              v47 = "ERROR SS_...,";
              if ( v46 == 1 )
                v47 = "LINE,";
            }
            sub_43D60(v92, v47);
            v48 = *((_DWORD *)v17 + 5);
            v49 = "INTO,";
            if ( v48 )
            {
              v49 = "OVER,";
              if ( v48 != 1 )
              {
                v49 = "ERROR SD_...,";
                if ( v48 == 2 )
                  v49 = "OUT,";
              }
            }
            sub_43D60(v92, v49);
          }
          goto LABEL_99;
        case 11:
          if ( byte_7FBE9 )
            sub_43D60(v92, "InstanceOnly,");
          s = *((char **)v17 + 1);
          if ( v93 )
            sub_1FAD0(v92);
          v30 = strlen(s);
          v31 = v90;
          v25 = v88;
          v32 = v30 + 4;
          n = v30;
          v27 = v89;
          if ( v90 >= v32 + v89 )
            goto LABEL_38;
          do
          {
            v90 = v91 + v31;
            v33 = qrealloc();
            v25 = v33;
            if ( !v33 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v33;
            v27 = v89;
            v31 = v90;
          }
          while ( v90 < v32 + v89 );
          if ( v90 < v89 + 4 )
          {
            do
            {
              v90 = v91 + v31;
              v34 = qrealloc();
              v25 = v34;
              if ( !v34 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v34;
              v31 = v90;
              v27 = v89;
LABEL_38:
              ;
            }
            while ( v31 < v27 + 4 );
          }
          break;
        case 12:
          if ( byte_7FBE9 )
            sub_43D60(v92, "SourceNameMatch,");
          s = *((char **)v17 + 1);
          if ( v93 )
            sub_1FAD0(v92);
          v23 = strlen(s);
          v24 = v90;
          v25 = v88;
          v26 = v23 + 4;
          n = v23;
          v27 = v89;
          if ( v90 >= v89 + v26 )
            goto LABEL_26;
          do
          {
            v90 = v91 + v24;
            v28 = qrealloc();
            v25 = v28;
            if ( !v28 )
              sub_43DF0((__int64)"JDWP encoder");
            v88 = v28;
            v27 = v89;
            v24 = v90;
          }
          while ( v90 < v26 + v89 );
          if ( v90 < v89 + 4 )
          {
            do
            {
              v90 = v91 + v24;
              v29 = qrealloc();
              v25 = v29;
              if ( !v29 )
                sub_43DF0((__int64)"JDWP encoder");
              v88 = v29;
              v24 = v90;
              v27 = v89;
LABEL_26:
              ;
            }
            while ( v24 < v27 + 4 );
          }
          break;
        default:
          goto LABEL_99;
      }
      *(_DWORD *)(v25 + v27) = _byteswap_ulong(n);
      v89 += 4;
      memcpy((void *)(v88 + v89), s, n);
      v89 += n;
LABEL_99:
      v17 += 40;
    }
    while ( v17 != &(*a5)[40 * (_QWORD)a5[1]] );
  }
  memset(v94, 0, sizeof(v94));
  v74 = sub_48F20((unsigned __int64)a1, 0xFu, 1u, (__int64)&v88, (__int64)v94);
  v87 = v74;
  if ( v74 )
  {
    v75 = *((_QWORD *)v74 + 1);
    v76 = _mm_loadh_ps((const double *)v74);
    v95 = 0;
    *(__m128 *)v94 = v76;
    *(_QWORD *)&v94[16] = v75;
    v96 = 0;
    v98 = byte_7FBE9;
    v97 = 0;
    if ( byte_7FBE9 )
      sub_43D60(&v96, "reqID=");
    v77 = sub_46430((__int64)v94, a2, 1);
    sub_43EB0((__int64)v94);
  }
  else
  {
    v77 = 0;
  }
  sub_44B80((_QWORD **)&v87);
  sub_43FA0((__int64)&v88);
  qmutex_unlock();
  return v77;
}

