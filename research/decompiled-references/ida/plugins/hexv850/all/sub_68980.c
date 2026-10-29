__int64 __fastcall sub_68980(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned __int64 v6; // r12
  __int64 v8; // rax
  int v9; // eax
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbp
  int *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rax
  unsigned int *v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, int); // rax
  int v22; // eax
  unsigned int v23; // r13d
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(__int64, int, int); // rax
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // ebp
  __int64 v29; // r10
  int v30; // r9d
  __int64 v31; // rax
  int *v32; // rax
  unsigned __int64 v33; // rdx
  _DWORD *v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 *v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  bool v47; // cf
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // [rsp+0h] [rbp-98h]
  int v67; // [rsp+0h] [rbp-98h]
  unsigned __int64 v68; // [rsp+0h] [rbp-98h]
  unsigned __int64 v69; // [rsp+0h] [rbp-98h]
  __int64 v70; // [rsp+10h] [rbp-88h]
  int v71; // [rsp+28h] [rbp-70h] BYREF
  int v72; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v73[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v74; // [rsp+40h] [rbp-58h] BYREF
  __int128 v75; // [rsp+48h] [rbp-50h]
  unsigned __int64 v76; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v76 = __readfsqword(0x28u);
  v5 = (*(__int64 (__fastcall **)(__int64))(v3 + 56))(a1);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)v6;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( a2[3] )
  {
    a2[4] = 0;
    qfree();
    a2[3] = 0;
    a2[5] = 0;
  }
  if ( (v6 & 0x80000000) == 0LL )
  {
    v33 = a2[1];
    LODWORD(v74) = -1;
    if ( v6 >= v33 )
    {
      if ( v33 >= v6 )
        goto LABEL_8;
      v34 = (_DWORD *)*a2;
      v35 = a2[2];
      if ( (unsigned __int64)&v74 < *a2 || &v74 >= (__int64 **)&v34[v35] )
      {
        if ( v35 >= v6 || (v60 = qvector_reserve(), v33 = a2[1], *a2 = v60, v34 = (_DWORD *)v60, v33 < v6) )
        {
          while ( 1 )
          {
            v34[v33++] = -1;
            if ( v6 == v33 )
              break;
            v34 = (_DWORD *)*a2;
          }
        }
      }
      else if ( v35 >= v6 || (v63 = qvector_reserve(), v33 = a2[1], *a2 = v63, v34 = (_DWORD *)v63, v33 < v6) )
      {
        while ( 1 )
        {
          v34[v33++] = -1;
          if ( v6 == v33 )
            break;
          v34 = (_DWORD *)*a2;
        }
      }
    }
    a2[1] = v6;
  }
LABEL_8:
  v73[0] = 0;
  v8 = *(_QWORD *)a1;
  v73[1] = 0;
  v9 = (*(__int64 (__fastcall **)(__int64))(v8 + 80))(a1);
  v74 = nullptr;
  v10 = v9;
  v75 = 0;
  sub_5F710(v73, v9);
  v11 = a2[4];
  if ( v11 )
  {
LABEL_9:
    if ( a2[1] && v10 >= 0 && v10 < (unsigned __int64)a2[4] )
    {
      *(_DWORD *)*a2 = v10;
      *(_DWORD *)(a2[3] + 4LL * v10) = 0;
    }
    goto LABEL_13;
  }
  v36 = a2[1];
  v71 = -1;
  if ( v36 )
  {
    v37 = a2[3];
    v38 = a2[5];
    if ( (unsigned __int64)&v71 < v37 || (unsigned __int64)&v71 >= v37 + 4 * v38 )
    {
      v58 = 0;
      if ( v38 >= v36 || (v61 = qvector_reserve(), v58 = a2[4], a2[3] = v61, v37 = v61, v58 < v36) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v37 + 4 * v58++) = -1;
          if ( v58 == v36 )
            break;
          v37 = a2[3];
        }
      }
    }
    else
    {
      v39 = 0;
      if ( v38 >= v36 || (v65 = qvector_reserve(), a2[3] = v65, v37 = v65, v39 = a2[4], v39 < v36) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v37 + 4 * v39++) = -1;
          if ( v39 == v36 )
            break;
          v37 = a2[3];
        }
      }
    }
    a2[4] = v36;
    do
    {
      v40 = *(int *)(*a2 + 4 * v11);
      if ( (_DWORD)v40 != -1 )
        *(_DWORD *)(a2[3] + 4 * v40) = v11;
      ++v11;
    }
    while ( v11 != v36 );
    goto LABEL_9;
  }
LABEL_13:
  v13 = *((_QWORD *)&v75 + 1);
  v12 = v75;
  if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
  {
    v41 = qvector_reserve();
    v42 = *((_QWORD *)&v75 + 1);
    v14 = v41;
    *((_QWORD *)&v75 + 1) = v13;
    v43 = v74;
    v44 = v75 - 1;
    if ( (__int64)v75 - 1 >= 0 )
    {
      v45 = v41;
      do
      {
        v46 = *v43;
        v45 += 8;
        ++v43;
        *(_QWORD *)(v45 - 8) = v46;
        v47 = v44-- == 0;
      }
      while ( !v47 );
    }
    qfree();
    v74 = (__int64 *)v14;
    v12 = v75;
    *((_QWORD *)&v75 + 1) = v42;
  }
  else
  {
    v14 = (__int64)v74;
  }
  v15 = (int *)(v14 + 8 * v12);
  *v15 = v10;
  LODWORD(v6) = 1;
  v15[1] = 0;
  v16 = v74;
  v17 = v75 + 1;
  *(_QWORD *)&v75 = v75 + 1;
  do
  {
    while ( 1 )
    {
      v18 = (unsigned int *)&v16[v17 - 1];
      v19 = v18[1];
      v20 = *v18;
      v21 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
      v22 = v21 == sub_60610 ? sub_60610(a1, v20) : v21(a1, v20);
      if ( v19 == v22 )
        break;
      v23 = v18[1];
      v24 = *v18;
      v25 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a1 + 112LL);
      if ( v25 == sub_60650 )
      {
        v66 = *v18;
        v26 = sub_60650(a1, v24, v23);
        v27 = v66;
      }
      else
      {
        v26 = v25(a1, v24, v23);
        v23 = v18[1];
        v27 = *v18;
      }
      v28 = v26;
      v18[1] = v23 + 1;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 152LL))(a1, v27, v26)
        && (unsigned __int8)sub_5F710(v73, v28) )
      {
        v29 = a2[4];
        v30 = v6 + 1;
        if ( !v29 )
        {
          v48 = a2[1];
          v72 = -1;
          if ( !v48 )
            goto LABEL_37;
          v49 = a2[3];
          v50 = a2[5];
          if ( (unsigned __int64)&v72 < v49 || (unsigned __int64)&v72 >= v49 + 4 * v50 )
          {
            v59 = 0;
            if ( v50 >= v48
              || (v68 = v48,
                  v62 = qvector_reserve(),
                  v59 = a2[4],
                  v48 = v68,
                  a2[3] = v62,
                  v49 = v62,
                  v29 = 0,
                  v30 = v6 + 1,
                  v59 < v68) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v49 + 4 * v59++) = -1;
                if ( v48 == v59 )
                  break;
                v49 = a2[3];
              }
            }
          }
          else
          {
            v51 = 0;
            if ( v50 >= v48
              || (v69 = v48,
                  v64 = qvector_reserve(),
                  v48 = v69,
                  v49 = v64,
                  v29 = 0,
                  a2[3] = v64,
                  v51 = a2[4],
                  v30 = v6 + 1,
                  v51 < v69) )
            {
              while ( 1 )
              {
                *(_DWORD *)(v49 + 4 * v51++) = -1;
                if ( v48 == v51 )
                  break;
                v49 = a2[3];
              }
            }
          }
          a2[4] = v48;
          do
          {
            v52 = *(int *)(*a2 + 4 * v29);
            if ( (_DWORD)v52 != -1 )
              *(_DWORD *)(a2[3] + 4 * v52) = v29;
            ++v29;
          }
          while ( v48 != v29 );
        }
        if ( (v6 & 0x80000000) == 0LL && (int)v6 < (unsigned __int64)a2[1] && v28 >= 0 && v28 < (unsigned __int64)a2[4] )
        {
          *(_DWORD *)(*a2 + 4LL * (int)v6) = v28;
          *(_DWORD *)(a2[3] + 4LL * v28) = v6;
        }
LABEL_37:
        v31 = v75;
        if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
        {
          v67 = v30;
          v70 = *((_QWORD *)&v75 + 1);
          v6 = qvector_reserve();
          v53 = *((_QWORD *)&v75 + 1);
          v54 = v74;
          v55 = v75 - 1;
          *((_QWORD *)&v75 + 1) = v70;
          if ( (__int64)v75 - 1 >= 0 )
          {
            v56 = v6;
            do
            {
              v57 = *v54;
              v56 += 8LL;
              ++v54;
              *(_QWORD *)(v56 - 8) = v57;
              v47 = v55-- == 0;
            }
            while ( !v47 );
          }
          qfree();
          v31 = v75;
          v74 = (__int64 *)v6;
          v30 = v67;
          *((_QWORD *)&v75 + 1) = v53;
        }
        else
        {
          v6 = (unsigned __int64)v74;
        }
        v32 = (int *)(v6 + 8 * v31);
        LODWORD(v6) = v30;
        *v32 = v28;
        v32[1] = 0;
        v16 = v74;
        v17 = v75 + 1;
        *(_QWORD *)&v75 = v75 + 1;
      }
      else
      {
        v16 = v74;
        v17 = v75;
      }
    }
    v16 = v74;
    if ( !(_QWORD)v75 )
      break;
    v17 = v75 - 1;
    *(_QWORD *)&v75 = v17;
  }
  while ( v17 );
  if ( v74 )
    qfree();
  qfree();
  return (unsigned int)v6;
}

