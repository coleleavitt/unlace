unsigned __int64 __fastcall sub_1B2A80(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        double a6)
{
  const char *v6; // r13
  unsigned int v9; // eax
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r14
  size_t v14; // rax
  unsigned int v15; // r15d
  size_t v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r8
  unsigned int i; // eax
  __int64 v22; // rdx
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 j; // r15
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // r14
  __int64 v32; // r11
  unsigned __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // r14
  __int64 v37; // rsi
  int v38; // r15d
  __int64 v39; // r13
  __int64 v40; // r14
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r13
  unsigned __int64 v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v58; // [rsp+8h] [rbp-90h]
  __int64 v59; // [rsp+10h] [rbp-88h]
  __int64 v60; // [rsp+18h] [rbp-80h]
  unsigned __int64 v61; // [rsp+18h] [rbp-80h]
  unsigned __int64 v62; // [rsp+18h] [rbp-80h]
  size_t v63; // [rsp+20h] [rbp-78h]
  __int64 v64; // [rsp+20h] [rbp-78h]
  const char *v66; // [rsp+40h] [rbp-58h] BYREF
  __int128 v67; // [rsp+48h] [rbp-50h]
  unsigned __int64 v68; // [rsp+58h] [rbp-40h]

  v6 = "this";
  v68 = __readfsqword(0x28u);
  v59 = sub_1AE730(a3, a2, a1, a6);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 != 128 )
  {
    if ( v9 > 0x80 )
    {
      v6 = "spce";
      if ( v9 != 208 )
      {
        if ( v9 > 0xD0 )
        {
          v6 = "spec";
          if ( v9 != 240 )
          {
            v6 = "gostk";
            if ( v9 != 256 )
            {
              v6 = "?";
              if ( v9 == 224 )
                v6 = "spcp";
            }
          }
        }
        else
        {
          v6 = "go";
          if ( v9 != 176 )
          {
            if ( v9 > 0xB0 )
            {
              v6 = "?";
              if ( v9 == 192 )
                v6 = "rsv3";
            }
            else
            {
              v6 = "swft";
              if ( v9 != 144 )
              {
                v6 = "?";
                if ( v9 == 160 )
                  v6 = "!spl";
              }
            }
          }
        }
      }
    }
    else
    {
      v6 = "...";
      if ( v9 != 64 )
      {
        if ( v9 > 0x40 )
        {
          v6 = "pas";
          if ( v9 != 96 )
          {
            v6 = "fast";
            if ( v9 != 112 )
            {
              v6 = "?";
              if ( v9 == 80 )
                v6 = "std";
            }
          }
        }
        else
        {
          v6 = "void";
          if ( v9 != 32 )
          {
            if ( v9 > 0x20 )
            {
              v6 = "?";
              if ( v9 == 48 )
                v6 = "cdecl";
            }
            else
            {
              v6 = "inv";
              if ( v9 )
              {
                v6 = "?";
                if ( v9 == 16 )
                  v6 = "unk";
              }
            }
          }
        }
      }
    }
  }
  v10 = a2[1];
  v11 = 2;
  if ( v10 )
  {
    v11 = v10 + 1;
    v12 = *a2;
    --v10;
    if ( a2[2] >= v11 )
      goto LABEL_12;
LABEL_56:
    v45 = qvector_reserve((__int64)a2, v12, v11, 1);
    *a2 = v45;
    v12 = v45;
    goto LABEL_12;
  }
  v12 = *a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_56;
LABEL_12:
  a2[1] = v11;
  *(_BYTE *)(v12 + v10) = 60;
  *(_BYTE *)(*a2 + v10 + 1) = 0;
  if ( *(_DWORD *)(a1 + 20) != 32 )
  {
    v13 = a2[1];
    v14 = strlen(v6);
    v15 = v14;
    v16 = v14;
    if ( v13 )
    {
      --v13;
      v16 = v14 + v13;
    }
    v17 = *a2;
    v18 = v16 + 1;
    if ( a2[2] < v16 + 1 )
    {
      v63 = v16;
      v60 = v16 + 1;
      v46 = qvector_reserve((__int64)a2, v17, v18, 1);
      *a2 = v46;
      v16 = v63;
      v17 = v46;
      v18 = v60;
    }
    a2[1] = v18;
    *(_BYTE *)(v17 + v16) = 0;
    v19 = *a2;
    v20 = *a2 + v13;
    if ( v15 )
    {
      for ( i = 0; i < v15; ++i )
      {
        v22 = i;
        *(_BYTE *)(v20 + v22) = v6[v22];
      }
      v19 = *a2;
    }
    v23 = a2[1];
    v24 = 2;
    if ( v23 )
      v24 = v23-- + 1;
    v25 = v19;
    if ( a2[2] < v24 )
    {
      v25 = qvector_reserve((__int64)a2, v19, v24, 1);
      *a2 = v25;
    }
    a2[1] = v24;
    *(_BYTE *)(v25 + v23) = 58;
    *(_BYTE *)(*a2 + v23 + 1) = 0;
    v26 = *(_QWORD *)(a1 + 32);
    if ( (int)v26 > 0 )
    {
      v27 = (unsigned int)(v26 - 1);
      for ( j = 0; ; j = v29 )
      {
        if ( j )
        {
          v52 = a2[1];
          v53 = 2;
          if ( v52 )
            v53 = v52-- + 1;
          v54 = *a2;
          if ( a2[2] < v53 )
          {
            v62 = v53;
            v56 = qvector_reserve((__int64)a2, v54, v53, 1);
            *a2 = v56;
            v53 = v62;
            v54 = v56;
          }
          a2[1] = v53;
          *(_BYTE *)(v54 + v52) = 44;
          *(_BYTE *)(*a2 + v52 + 1) = 0;
        }
        v30 = *(_QWORD *)(a1 + 24) + 80 * j;
        v31 = v30;
        if ( *(_BYTE *)v30 )
        {
          sub_1AE7F0(a2, a3, v30 + 24, (const char **)(v30 + 32));
          v32 = a2[1];
          v33 = 2;
          if ( v32 )
            v33 = v32-- + 1;
          v34 = *a2;
          if ( a2[2] < v33 )
          {
            v64 = v32;
            v61 = v33;
            v55 = qvector_reserve((__int64)a2, v34, v33, 1);
            *a2 = v55;
            v32 = v64;
            v34 = v55;
            v33 = v61;
          }
          a2[1] = v33;
          *(_BYTE *)(v34 + v32) = 32;
          *(_BYTE *)(*a2 + v32 + 1) = 0;
          sub_1B0D60(v31, (char *)a2, a3, a5, a6);
          v29 = j + 1;
          if ( v27 == j )
            break;
        }
        else
        {
          sub_FAAD0(a2);
          v29 = j + 1;
          if ( v27 == j )
            break;
        }
      }
    }
  }
  v35 = a2[1];
  v36 = 2;
  if ( v35 )
  {
    v36 = v35 + 1;
    v37 = *a2;
    --v35;
    if ( a2[2] >= v36 )
      goto LABEL_38;
  }
  else
  {
    v37 = *a2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_38;
  }
  v44 = qvector_reserve((__int64)a2, v37, v36, 1);
  *a2 = v44;
  v37 = v44;
LABEL_38:
  a2[1] = v36;
  *(_BYTE *)(v37 + v35) = 62;
  *(_BYTE *)(*a2 + v35 + 1) = 0;
  if ( (get_tinfo_property() & 0x3F) == 1 )
    goto LABEL_39;
  sub_FAAD0(a2);
  a6 = 0.0;
  v67 = 0;
  v66 = nullptr;
  v66 = (const char *)qvector_reserve((__int64)&v66, 0, 1, 1);
  *(_QWORD *)&v67 = 1;
  *v66 = 0;
  sub_1AE7F0(a2, a3, a1 + 72, &v66);
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree((__int64)v66);
  }
  v48 = a2[1];
  v49 = 2;
  if ( v48 )
  {
    v49 = v48 + 1;
    v50 = *a2;
    --v48;
    if ( a2[2] >= v49 )
      goto LABEL_69;
LABEL_71:
    v51 = qvector_reserve((__int64)a2, v50, v49, 1);
    *a2 = v51;
    v50 = v51;
    goto LABEL_69;
  }
  v50 = *a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_71;
LABEL_69:
  a2[1] = v49;
  *(_BYTE *)(v50 + v48) = 32;
  *(_BYTE *)(*a2 + v48 + 1) = 0;
LABEL_39:
  if ( *(_QWORD *)(a1 + 56) )
  {
    v38 = 0;
    v39 = 0;
    while ( 1 )
    {
      sub_1B0D60(*(_QWORD *)(a1 + 48) + 16 * v39, (char *)a2, a3, 6u, a6);
      v39 = ++v38;
      if ( (unsigned __int64)v38 >= *(_QWORD *)(a1 + 56) )
        break;
      v40 = a2[1];
      v41 = 2;
      if ( v40 )
        v41 = v40-- + 1;
      v42 = *a2;
      if ( a2[2] < v41 )
      {
        v58 = v41;
        v47 = qvector_reserve((__int64)a2, v42, v41, 1);
        *a2 = v47;
        v41 = v58;
        v42 = v47;
      }
      a2[1] = v41;
      *(_BYTE *)(v42 + v40) = 58;
      *(_BYTE *)(*a2 + v40 + 1) = 0;
    }
  }
  else if ( a4 != -1 )
  {
    sub_FAAD0(a2);
  }
  if ( v59 != -1 )
  {
    if ( ((unsigned __int8)v59 & 7u) > 2 )
      sub_1ADFD0(a6);
    sub_32AAE0(a2, (v59 & 7) + 41);
  }
  return v68 - __readfsqword(0x28u);
}

