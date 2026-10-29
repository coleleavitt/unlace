__int64 __fastcall sub_1A4920(__m128i *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  _DWORD *v9; // r12
  __int64 v10; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rsi
  char v18; // r12
  int v19; // ecx
  int v20; // r14d
  __int64 v21; // r15
  bool v22; // al
  unsigned __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // r14
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  __int64 *v30; // r14
  __int64 *v31; // r15
  int v32; // eax
  __int64 v33; // rsi
  __int64 *v34; // rax
  __int64 *v35; // r15
  __int64 v36; // r13
  int v37; // r14d
  __int64 v38; // rsi
  unsigned __int64 v39; // r13
  __int64 v40; // r12
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 *v49; // r15
  int v50; // eax
  __int64 v51; // rsi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-88h]
  int v55; // [rsp+0h] [rbp-88h]
  __int64 *v56; // [rsp+0h] [rbp-88h]
  __int64 v57; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v58; // [rsp+0h] [rbp-88h]
  __int64 v59; // [rsp+0h] [rbp-88h]
  __int64 v60; // [rsp+0h] [rbp-88h]
  unsigned __int8 *v61; // [rsp+8h] [rbp-80h]
  unsigned __int8 *v62; // [rsp+8h] [rbp-80h]
  __int64 *i; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  int v65; // [rsp+10h] [rbp-78h]
  __int64 v66; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v67; // [rsp+28h] [rbp-60h] BYREF
  _QWORD *v68[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *(_BYTE *)a2 == 10;
  v68[3] = (_QWORD *)__readfsqword(0x28u);
  if ( !v7 || (v12 = *(_QWORD *)(a2 + 8), *(_BYTE *)v12 != 5) )
  {
    v9 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v9 == 4 )
    {
      v30 = (__int64 *)a1[4].m128i_i64[0];
      v61 = (unsigned __int8 *)(v9 + 16);
      v31 = &v30[a1[4].m128i_i64[1]];
      if ( v30 != v31 )
      {
        do
        {
          v33 = *v30;
          if ( v9[17] == -1 || *(_DWORD *)(v33 + 4) == -1 )
          {
            sub_11D380((__int64)v68, (unsigned __int8 *)v33);
            HIDWORD(v68[0]) = v9[17];
            v55 = sub_117380(v61, (unsigned __int8 *)v68);
            sub_1166E0((__int64)v68);
            v32 = v55;
          }
          else
          {
            v32 = sub_117380(v61, (unsigned __int8 *)v33);
          }
          if ( !v32 )
            break;
          ++v30;
        }
        while ( v31 != v30 );
        v34 = (__int64 *)a1[4].m128i_i64[0];
        a3 = a1[4].m128i_i64[1];
        v35 = v34;
        v56 = &v34[a3];
        a4 = v56;
        if ( v30 != v56 )
        {
          v36 = a1[2].m128i_i64[0];
          v62 = (unsigned __int8 *)(v36 + 32);
          a4 = &v34[a3];
          if ( v34 == v56 )
            goto LABEL_46;
          do
          {
            v38 = *v35;
            if ( *(_DWORD *)(v36 + 36) == -1 || *(_DWORD *)(v38 + 4) == -1 )
            {
              sub_11D380((__int64)v68, (unsigned __int8 *)v38);
              HIDWORD(v68[0]) = *(_DWORD *)(v36 + 36);
              v37 = sub_117380(v62, (unsigned __int8 *)v68);
              sub_1166E0((__int64)v68);
            }
            else
            {
              v37 = sub_117380(v62, (unsigned __int8 *)v38);
            }
            if ( !v37 )
              break;
            ++v35;
          }
          while ( v35 != v56 );
          a3 = a1[4].m128i_i64[1];
          v34 = (__int64 *)a1[4].m128i_i64[0];
          a4 = &v34[a3];
          if ( v35 == a4 )
          {
LABEL_46:
            v39 = a1[5].m128i_u64[0];
            v40 = (__int64)v34;
            if ( v39 < a3 + 1 )
            {
              v42 = qvector_reserve();
              v43 = a1[5].m128i_i64[0];
              v44 = (__int64 *)a1[4].m128i_i64[0];
              a1[5].m128i_i64[0] = v39;
              v40 = v42;
              v45 = a1[4].m128i_i64[1] - 1;
              if ( v45 >= 0 )
              {
                v46 = v40;
                do
                {
                  v47 = *v44;
                  v46 += 8;
                  ++v44;
                  *(_QWORD *)(v46 - 8) = v47;
                }
                while ( v45-- != 0 );
              }
              qfree();
              a1[4].m128i_i64[0] = v40;
              a3 = a1[4].m128i_i64[1];
              a1[5].m128i_i64[0] = v43;
            }
            *(_QWORD *)(v40 + 8 * a3) = v62;
            ++a1[4].m128i_i64[1];
          }
        }
      }
    }
    v10 = *(int *)(a2 + 4);
    if ( (_DWORD)v10 != -1 && *(_BYTE *)a2 == 5 )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
      if ( (int)v10 > 1 )
      {
        v68[0] = (_QWORD *)(v27 + 1);
        v68[1] = (_QWORD *)((int)v10 - 1);
        sub_30F830(&a1[8], v68, a3, a4, a5, a6);
      }
      v28 = *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL);
      v29 = (v28 - 1 + v27 + v10) & -v28;
      if ( v29 > a1[10].m128i_i64[1] )
        a1[10].m128i_i64[1] = v29;
    }
    return 1;
  }
  v13 = a3;
  v14 = a1[10].m128i_i64[0];
  v15 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
  if ( v14 > v15 )
    return 1;
  v16 = v15 - v14;
  if ( a1[11].m128i_i32[2] <= v15 - v14 )
    return 1;
  v17 = a1->m128i_i64[1];
  v18 = (char)a4;
  v19 = *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
  v20 = v19;
  if ( !(v16 % v19) )
  {
LABEL_13:
    v23 = (unsigned __int64 *)a1[5].m128i_i64[1];
    v24 = *v23;
    v25 = *v23 + 40 * v23[1];
    if ( *v23 == v25 )
      goto LABEL_64;
    while ( v15 != *(_QWORD *)(v24 + 24) )
    {
      v24 += 40;
      if ( v24 == v25 )
        goto LABEL_64;
    }
    if ( v24 == v25 )
    {
LABEL_64:
      v59 = v15;
      v24 = sub_1931C0(v23, v15, a1[1].m128i_u64[0], a1[2].m128i_u64[0]);
      v15 = v59;
    }
    if ( v18 )
      *(_BYTE *)(v24 + 32) = 1;
    v26 = (_DWORD *)a1[2].m128i_i64[0];
    if ( *v26 == 4 && (_DWORD *)a2 == v26 + 8 )
    {
      v49 = (__int64 *)a1[4].m128i_i64[0];
      v58 = (unsigned __int8 *)(v26 + 16);
      for ( i = &v49[a1[4].m128i_i64[1]]; i != v49; ++v49 )
      {
        v51 = *v49;
        if ( v26[17] == -1 || *(_DWORD *)(v51 + 4) == -1 )
        {
          v66 = v15;
          sub_11D380((__int64)v68, (unsigned __int8 *)v51);
          HIDWORD(v68[0]) = v26[17];
          v65 = sub_117380(v58, (unsigned __int8 *)v68);
          sub_1166E0((__int64)v68);
          v15 = v66;
          v50 = v65;
        }
        else
        {
          v64 = v15;
          v50 = sub_117380(v58, (unsigned __int8 *)v51);
          v15 = v64;
        }
        if ( !v50 )
          break;
      }
      if ( v49 != (__int64 *)(a1[4].m128i_i64[0] + 8 * a1[4].m128i_i64[1]) )
        goto LABEL_22;
      v52 = a1[2].m128i_i64[0];
      v60 = v15;
      v68[0] = &v67;
      v67 = (unsigned __int8 *)(v52 + 64);
      v53 = sub_1A4500(a1 + 3, &v67, v68);
      v15 = v60;
      *(_QWORD *)(v53 + 32) = a2;
    }
    if ( a2 == v13 )
    {
LABEL_22:
      if ( a1[9].m128i_i64[1] < v15 )
        a1[9].m128i_i64[1] = v15;
    }
    return 1;
  }
  v21 = -v19;
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 1496) + 145LL) )
  {
    v54 = v15;
    v22 = sub_1163C0(v19 - v16 % *(int *)(*(_QWORD *)(v17 + 1504) + 80LL));
    v15 = v54;
    if ( v22 )
    {
      v15 = v21 & v54;
      goto LABEL_13;
    }
  }
  v41 = (_QWORD *)a1[5].m128i_i64[1];
  if ( *v41 )
  {
    v41[1] = 0;
    v57 = v15;
    qfree();
    *v41 = 0;
    v15 = v57;
    v41[2] = 0;
  }
  a1[10].m128i_i64[0] = v21 & (v15 + v20 - 1);
  return 0;
}

