unsigned __int64 __fastcall sub_1AC280(unsigned __int64 a1, __int64 *a2, __int64 a3, int a4, unsigned int a5)
{
  const char *v5; // r13
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
  char *v38; // rsi
  unsigned __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r15d
  __int64 v43; // r13
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r13
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  __int64 v55; // r14
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int64 v61; // [rsp+8h] [rbp-90h]
  __int64 v62; // [rsp+10h] [rbp-88h]
  __int64 v63; // [rsp+18h] [rbp-80h]
  unsigned __int64 v64; // [rsp+18h] [rbp-80h]
  unsigned __int64 v65; // [rsp+18h] [rbp-80h]
  size_t v66; // [rsp+20h] [rbp-78h]
  __int64 v67; // [rsp+20h] [rbp-78h]
  _BYTE *v69; // [rsp+40h] [rbp-58h] BYREF
  __int128 v70; // [rsp+48h] [rbp-50h]
  unsigned __int64 v71; // [rsp+58h] [rbp-40h]

  v5 = "this";
  v71 = __readfsqword(0x28u);
  v62 = sub_1A7F30(a3, (__int64)a2, a1);
  v9 = *(_DWORD *)(a1 + 20);
  if ( v9 != 128 )
  {
    if ( v9 > 0x80 )
    {
      v5 = "spce";
      if ( v9 != 208 )
      {
        if ( v9 > 0xD0 )
        {
          v5 = "spec";
          if ( v9 != 240 )
          {
            v5 = "gostk";
            if ( v9 != 256 )
            {
              v5 = "?";
              if ( v9 == 224 )
                v5 = "spcp";
            }
          }
        }
        else
        {
          v5 = "go";
          if ( v9 != 176 )
          {
            if ( v9 > 0xB0 )
            {
              v5 = "?";
              if ( v9 == 192 )
                v5 = "rsv3";
            }
            else
            {
              v5 = "swft";
              if ( v9 != 144 )
              {
                v5 = "?";
                if ( v9 == 160 )
                  v5 = "!spl";
              }
            }
          }
        }
      }
    }
    else
    {
      v5 = "...";
      if ( v9 != 64 )
      {
        if ( v9 > 0x40 )
        {
          v5 = "pas";
          if ( v9 != 96 )
          {
            v5 = "fast";
            if ( v9 != 112 )
            {
              v5 = "?";
              if ( v9 == 80 )
                v5 = "std";
            }
          }
        }
        else
        {
          v5 = "void";
          if ( v9 != 32 )
          {
            if ( v9 > 0x20 )
            {
              v5 = "?";
              if ( v9 == 48 )
                v5 = "cdecl";
            }
            else
            {
              v5 = "inv";
              if ( v9 )
              {
                v5 = "?";
                if ( v9 == 16 )
                  v5 = "unk";
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
    v49 = qvector_reserve();
    *a2 = v49;
    v12 = v49;
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
    v14 = strlen(v5);
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
      v66 = v16;
      v63 = v16 + 1;
      v50 = qvector_reserve();
      *a2 = v50;
      v16 = v66;
      v17 = v50;
      v18 = v63;
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
        *(_BYTE *)(v20 + v22) = v5[v22];
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
      v25 = qvector_reserve();
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
          v55 = a2[1];
          v56 = 2;
          if ( v55 )
            v56 = v55-- + 1;
          v57 = *a2;
          if ( a2[2] < v56 )
          {
            v65 = v56;
            v59 = qvector_reserve();
            *a2 = v59;
            v56 = v65;
            v57 = v59;
          }
          a2[1] = v56;
          *(_BYTE *)(v57 + v55) = 44;
          *(_BYTE *)(*a2 + v55 + 1) = 0;
        }
        v30 = *(_QWORD *)(a1 + 24) + 80 * j;
        v31 = v30;
        if ( *(_BYTE *)v30 )
        {
          sub_1A7FF0(a2, a3, v30 + 24, (__int64 *)(v30 + 32));
          v32 = a2[1];
          v33 = 2;
          if ( v32 )
            v33 = v32-- + 1;
          v34 = *a2;
          if ( a2[2] < v33 )
          {
            v67 = v32;
            v64 = v33;
            v58 = qvector_reserve();
            *a2 = v58;
            v32 = v67;
            v34 = v58;
            v33 = v64;
          }
          a2[1] = v33;
          *(_BYTE *)(v34 + v32) = 32;
          *(_BYTE *)(*a2 + v32 + 1) = 0;
          sub_1AA560(v31, (char *)a2, a3, a5);
          v29 = j + 1;
          if ( v27 == j )
            break;
        }
        else
        {
          sub_F4410(a2);
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
  v48 = qvector_reserve();
  *a2 = v48;
  v37 = v48;
LABEL_38:
  a2[1] = v36;
  *(_BYTE *)(v37 + v35) = 62;
  v38 = (char *)&word_2;
  *(_BYTE *)(*a2 + v35 + 1) = 0;
  v39 = *(_QWORD *)(a1 + 72);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    goto LABEL_39;
  sub_F4410(a2);
  v70 = 0;
  v69 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v70 = 1;
  *v69 = 0;
  sub_1A7FF0(a2, a3, a1 + 72, (__int64 *)&v69);
  v39 = (unsigned __int64)v69;
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree();
  }
  v52 = a2[1];
  v53 = 2;
  if ( v52 )
  {
    v53 = v52 + 1;
    v38 = (char *)*a2;
    --v52;
    if ( a2[2] >= v53 )
      goto LABEL_69;
LABEL_71:
    v39 = (unsigned __int64)a2;
    v54 = qvector_reserve();
    *a2 = v54;
    v38 = (char *)v54;
    goto LABEL_69;
  }
  v38 = (char *)*a2;
  if ( (unsigned __int64)a2[2] < 2 )
    goto LABEL_71;
LABEL_69:
  a2[1] = v53;
  v38[v52] = 32;
  *(_BYTE *)(*a2 + v52 + 1) = 0;
LABEL_39:
  if ( *(_QWORD *)(a1 + 56) )
  {
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      v38 = (char *)a2;
      v39 = *(_QWORD *)(a1 + 48) + 16 * v43;
      sub_1AA560(v39, (char *)a2, a3, 6u);
      v43 = ++v42;
      if ( (unsigned __int64)v42 >= *(_QWORD *)(a1 + 56) )
        break;
      v44 = a2[1];
      v45 = 2;
      if ( v44 )
        v45 = v44-- + 1;
      v46 = *a2;
      if ( a2[2] < v45 )
      {
        v61 = v45;
        v51 = qvector_reserve();
        *a2 = v51;
        v45 = v61;
        v46 = v51;
      }
      a2[1] = v45;
      *(_BYTE *)(v46 + v44) = 58;
      *(_BYTE *)(*a2 + v44 + 1) = 0;
    }
  }
  else if ( a4 != -1 )
  {
    v38 = ".%d";
    v39 = (unsigned __int64)a2;
    sub_F4410(a2);
  }
  if ( v62 != -1 )
  {
    if ( ((unsigned __int8)v62 & 7u) > 2 )
      sub_1A77D0(v39, v38, v40, v41);
    sub_3235B0(a2, (unsigned int)(v62 & 7) + 41);
  }
  return v71 - __readfsqword(0x28u);
}

