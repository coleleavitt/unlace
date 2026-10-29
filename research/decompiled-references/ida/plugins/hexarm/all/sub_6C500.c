unsigned __int64 __fastcall sub_6C500(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int *v8; // rax
  int *v9; // rbx
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // r8d
  __int64 v13; // r12
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rbx
  _DWORD *v17; // rax
  int v18; // r9d
  _QWORD *v19; // r12
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rbx
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  bool v35; // cf
  __int64 *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-78h]
  __int64 v53; // [rsp+0h] [rbp-78h]
  __int64 v54; // [rsp+0h] [rbp-78h]
  int v55; // [rsp+0h] [rbp-78h]
  unsigned __int64 v56; // [rsp+0h] [rbp-78h]
  int v57; // [rsp+0h] [rbp-78h]
  unsigned __int64 v58; // [rsp+0h] [rbp-78h]
  int v59; // [rsp+8h] [rbp-70h]
  int v60; // [rsp+8h] [rbp-70h]
  int v61; // [rsp+Ch] [rbp-6Ch]
  int v62; // [rsp+Ch] [rbp-6Ch]
  int v63; // [rsp+18h] [rbp-60h] BYREF
  int v64; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 *v65; // [rsp+20h] [rbp-58h]
  __int128 v66; // [rsp+28h] [rbp-50h]
  unsigned __int64 v67; // [rsp+38h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v66 = 0;
  v65 = nullptr;
  sub_63B90(a1, a3);
  v29 = qvector_reserve();
  v30 = v65;
  v31 = *((_QWORD *)&v66 + 1);
  *((_QWORD *)&v66 + 1) = 0;
  v32 = v66 - 1;
  if ( (__int64)v66 - 1 >= 0 )
  {
    v33 = v29;
    do
    {
      v34 = *v30;
      v33 += 8;
      ++v30;
      *(_QWORD *)(v33 - 8) = v34;
      v35 = v32-- == 0;
    }
    while ( !v35 );
  }
  v52 = v31;
  qfree();
  v65 = (__int64 *)v29;
  *((_QWORD *)&v66 + 1) = v52;
  v8 = (int *)(v29 + 8 * v66);
  *v8 = a3;
  v8[1] = 0;
  v15 = v66 + 1;
  *(_QWORD *)&v66 = v66 + 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = (int *)&v65[v15 - 1];
      v10 = v9[1];
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, (unsigned int)*v9);
      v12 = *v9;
      if ( v10 == v11 )
        break;
      v13 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL))(
              a2,
              (unsigned int)v12,
              (unsigned int)v9[1]++);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 152LL))(
             a2,
             (unsigned int)*v9,
             v13) )
      {
        goto LABEL_13;
      }
      v14 = sub_63B90(a1, v13);
      v15 = v66;
      if ( v14 )
      {
        if ( *((_QWORD *)&v66 + 1) < (unsigned __int64)(v66 + 1) )
        {
          v53 = *((_QWORD *)&v66 + 1);
          v16 = qvector_reserve();
          v36 = v65;
          v37 = *((_QWORD *)&v66 + 1);
          *((_QWORD *)&v66 + 1) = v53;
          v38 = v66 - 1;
          if ( (__int64)v66 - 1 >= 0 )
          {
            v39 = v16;
            do
            {
              v40 = *v36;
              v39 += 8;
              ++v36;
              *(_QWORD *)(v39 - 8) = v40;
              v35 = v38-- == 0;
            }
            while ( !v35 );
          }
          v54 = v37;
          qfree();
          v15 = v66;
          v65 = (__int64 *)v16;
          *((_QWORD *)&v66 + 1) = v54;
        }
        else
        {
          v16 = (__int64)v65;
        }
        v17 = (_DWORD *)(v16 + 8 * v15);
        *v17 = v13;
        v17[1] = 0;
        v15 = v66 + 1;
        *(_QWORD *)&v66 = v66 + 1;
      }
    }
    v18 = *(_DWORD *)(a4 + 16);
    v19 = *(_QWORD **)(a4 + 24);
    v20 = v18 + 1;
    if ( !(_QWORD)v66 )
      break;
    v15 = v66 - 1;
    *(_QWORD *)&v66 = v15;
    if ( !v15 )
      break;
    *(_DWORD *)(a4 + 16) = v20;
    v21 = v19[4];
    if ( v21 )
    {
LABEL_11:
      if ( v18 < 0 || (unsigned __int64)v18 >= v19[1] || v12 < 0 || (unsigned __int64)v12 >= v19[4] )
      {
LABEL_13:
        v15 = v66;
      }
      else
      {
        *(_DWORD *)(*v19 + 4LL * v18) = v12;
        *(_DWORD *)(v19[3] + 4LL * v12) = v18;
        v15 = v66;
      }
    }
    else
    {
      v43 = v19[1];
      v63 = -1;
      if ( v43 )
      {
        v44 = v19[3];
        v45 = v19[5];
        if ( (unsigned __int64)&v63 < v44 || (unsigned __int64)&v63 >= v44 + 4 * v45 )
        {
          v48 = 0;
          if ( v45 >= v43
            || (v61 = v12,
                v59 = v18,
                v56 = v43,
                v49 = qvector_reserve(),
                v19[3] = v49,
                v43 = v56,
                v44 = v49,
                v48 = v19[4],
                v18 = v59,
                v12 = v61,
                v48 < v56) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v44 + 4 * v48++) = -1;
              if ( v48 == v43 )
                break;
              v44 = v19[3];
            }
          }
        }
        else
        {
          v46 = 0;
          if ( v45 >= v43
            || (v62 = v12,
                v60 = v18,
                v58 = v43,
                v51 = qvector_reserve(),
                v19[3] = v51,
                v43 = v58,
                v44 = v51,
                v46 = v19[4],
                v18 = v60,
                v12 = v62,
                v46 < v58) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v44 + 4 * v46++) = -1;
              if ( v46 == v43 )
                break;
              v44 = v19[3];
            }
          }
        }
        v19[4] = v43;
        do
        {
          v47 = *(int *)(*v19 + 4 * v21);
          if ( (_DWORD)v47 != -1 )
            *(_DWORD *)(v19[3] + 4 * v47) = v21;
          ++v21;
        }
        while ( v21 != v43 );
        goto LABEL_11;
      }
    }
  }
  *(_DWORD *)(a4 + 16) = v20;
  v22 = v19[4];
  if ( v22 )
    goto LABEL_15;
  v24 = v19[1];
  v64 = -1;
  if ( v24 )
  {
    v25 = v19[3];
    v26 = v19[5];
    if ( (unsigned __int64)&v64 < v25 || (unsigned __int64)&v64 >= v25 + 4 * v26 )
    {
      v41 = 0;
      if ( v26 >= v24
        || (v55 = v18, v42 = qvector_reserve(), v41 = v19[4], v18 = v55, v19[3] = v42, v25 = v42, v41 < v24) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v41++) = -1;
          if ( v24 == v41 )
            break;
          v25 = v19[3];
        }
      }
    }
    else
    {
      v27 = 0;
      if ( v26 >= v24
        || (v57 = v18, v50 = qvector_reserve(), v19[3] = v50, v25 = v50, v27 = v19[4], v18 = v57, v27 < v24) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v27++) = -1;
          if ( v24 == v27 )
            break;
          v25 = v19[3];
        }
      }
    }
    v19[4] = v24;
    do
    {
      v28 = *(int *)(*v19 + 4 * v22);
      if ( (_DWORD)v28 != -1 )
        *(_DWORD *)(v19[3] + 4 * v28) = v22;
      ++v22;
    }
    while ( v24 != v22 );
LABEL_15:
    if ( v18 >= 0 && (unsigned __int64)v18 < v19[1] && a3 >= 0 && (unsigned __int64)a3 < v19[4] )
    {
      *(_DWORD *)(*v19 + 4LL * v18) = a3;
      *(_DWORD *)(v19[3] + 4LL * a3) = v18;
    }
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  return v67 - __readfsqword(0x28u);
}

