unsigned __int64 __fastcall sub_42200(__int64 *a1, const void *a2, int a3, char a4, char a5, __int64 a6, __int64 a7)
{
  int v7; // r14d
  char v8; // r13
  __int64 *v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbp
  size_t v15; // rax
  size_t v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  const char *v21; // rax
  char *v23; // rdi
  void *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 *v29; // r15
  unsigned __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rbp
  __int64 v34; // rbx
  __int64 v35; // r14
  size_t v36; // rax
  const char *v37; // r11
  size_t v38; // r10
  const char *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  char *v43; // rdi
  void *v44; // rdx
  __int64 v45; // rsi
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  const char *srca; // [rsp+0h] [rbp-78h]
  _BYTE *srcc; // [rsp+0h] [rbp-78h]
  void *srcb; // [rsp+0h] [rbp-78h]
  void *src; // [rsp+0h] [rbp-78h]
  int v60; // [rsp+18h] [rbp-60h]
  char v61; // [rsp+1Ch] [rbp-5Ch]
  const char *v62; // [rsp+20h] [rbp-58h]
  size_t v63; // [rsp+28h] [rbp-50h]
  __int64 v64; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v65; // [rsp+38h] [rbp-40h]

  v7 = a3;
  v8 = a4;
  v9 = a1;
  v65 = __readfsqword(0x28u);
  v10 = a6;
  if ( a6 )
  {
    if ( (a3 & 0x100) != 0 )
    {
      v11 = 1;
    }
    else
    {
      switch ( a4 )
      {
        case 2:
          v11 = 32;
          break;
        case 7:
          v11 = 64;
          break;
        case 1:
          v11 = 16;
          break;
        default:
          if ( !under_debugger )
            interr();
          BUG();
      }
    }
    v27 = a1[10];
    v28 = a1[9];
    if ( a1[11] < (unsigned __int64)(v27 + 1) )
    {
      v48 = qvector_reserve();
      v27 = a1[10];
      a1[9] = v48;
      v28 = v48;
    }
    v64 = 0;
    v29 = (__int64 *)(v28 + 24 * v27);
    *(_OWORD *)(v29 + 1) = 0;
    *v29 = 0;
    ++a1[10];
    v30 = v29[1];
    if ( v11 >= v30 )
    {
      v31 = 8 * v11;
      if ( v30 < v11 )
      {
        v45 = *v29;
        v46 = v29[2];
        if ( (unsigned __int64)&v64 < *v29 || (unsigned __int64)&v64 >= v45 + 8 * v46 )
        {
          if ( v46 >= v11 || (v52 = qvector_reserve(), *v29 = v52, v45 = v52, v30 = v29[1], v30 < v11) )
          {
            v47 = 8 * v30;
            v31 = 8 * v11;
            while ( 1 )
            {
              *(_QWORD *)(v45 + v47) = 0;
              v47 += 8;
              if ( v31 == v47 )
                break;
              v45 = *v29;
            }
          }
          else
          {
            v31 = 8 * v11;
          }
        }
        else if ( v46 >= v11 || (v53 = qvector_reserve(), v31 = 8 * v11, *v29 = v53, v45 = v53, v30 = v29[1], v30 < v11) )
        {
          v50 = 8 * v30;
          v31 = 8 * v11;
          while ( 1 )
          {
            *(_QWORD *)(v45 + v50) = 0;
            v50 += 8;
            if ( v50 == v31 )
              break;
            v45 = *v29;
          }
        }
        v29[1] = v11;
      }
    }
    else
    {
      v29[1] = v11;
      v31 = 8 * v11;
    }
    v61 = v8;
    v32 = 0;
    v34 = v31;
    v60 = v7;
    while ( 1 )
    {
      if ( !*(_QWORD *)(v10 + v32) )
        goto LABEL_32;
      v40 = a1[4];
      v41 = a1[3];
      if ( a1[5] < (unsigned __int64)(v40 + 1) )
      {
        v42 = qvector_reserve();
        v40 = a1[4];
        a1[3] = v42;
        v41 = v42;
      }
      v35 = v41 + 24 * v40;
      *(_QWORD *)v35 = 0;
      *(_OWORD *)(v35 + 8) = 0;
      ++a1[4];
      if ( *(_QWORD *)(v10 + v32)
        && (srca = *(const char **)(v10 + v32), v36 = strlen(srca), v37 = srca, (v38 = v36) != 0) )
      {
        v43 = *(char **)v35;
        v44 = (void *)(v36 + 1);
        if ( *(_QWORD *)(v35 + 16) < v36 + 1 )
        {
          srcb = (void *)(v36 + 1);
          v62 = v37;
          v63 = v36;
          v49 = qvector_reserve();
          v38 = v63;
          v37 = v62;
          *(_QWORD *)v35 = v49;
          v44 = srcb;
          v43 = (char *)v49;
        }
        *(_QWORD *)(v35 + 8) = v44;
        srcc = (_BYTE *)v38;
        memmove(v43, v37, v38);
        srcc[*(_QWORD *)v35] = 0;
        if ( *(_QWORD *)(v35 + 8) )
        {
          v39 = *(const char **)v35;
          goto LABEL_31;
        }
      }
      else
      {
        *(_QWORD *)(v35 + 8) = 0;
      }
      v39 = s;
LABEL_31:
      *(_QWORD *)(*v29 + v32) = v39;
LABEL_32:
      v32 += 8;
      if ( v34 == v32 )
      {
        v9 = a1;
        v7 = v60;
        v8 = v61;
        v10 = *v29;
        break;
      }
    }
  }
  v12 = v9[4];
  v13 = v9[3];
  if ( v9[5] < (unsigned __int64)(v12 + 1) )
  {
    v25 = qvector_reserve();
    v12 = v9[4];
    v9[3] = v25;
    v13 = v25;
  }
  v14 = v13 + 24 * v12;
  *(_QWORD *)v14 = 0;
  *(_OWORD *)(v14 + 8) = 0;
  ++v9[4];
  if ( a2 && (v15 = strlen((const char *)a2), (v16 = v15) != 0) )
  {
    v23 = *(char **)v14;
    v24 = (void *)(v15 + 1);
    if ( *(_QWORD *)(v14 + 16) < v15 + 1 )
    {
      src = (void *)(v15 + 1);
      v51 = qvector_reserve();
      v24 = src;
      *(_QWORD *)v14 = v51;
      v23 = (char *)v51;
    }
    *(_QWORD *)(v14 + 8) = v24;
    memmove(v23, a2, v16);
    *(_BYTE *)(*(_QWORD *)v14 + v16) = 0;
  }
  else
  {
    *(_QWORD *)(v14 + 8) = 0;
  }
  v17 = v9[1];
  v18 = *v9;
  v19 = v17 + 1;
  if ( v9[2] < (unsigned __int64)(v17 + 1) )
  {
    v26 = qvector_reserve();
    *v9 = v26;
    v18 = v26;
    v17 = v9[1];
    v19 = v17 + 1;
  }
  v9[1] = v19;
  v20 = 32 * v17 + v18;
  v21 = s;
  if ( *(_QWORD *)(v14 + 8) )
    v21 = *(const char **)v14;
  *(_QWORD *)v20 = v21;
  *(_DWORD *)(v20 + 8) = v7;
  *(_BYTE *)(v20 + 12) = a5;
  *(_BYTE *)(v20 + 13) = v8;
  *(_QWORD *)(v20 + 16) = v10;
  *(_QWORD *)(v20 + 24) = a7;
  return v65 - __readfsqword(0x28u);
}

