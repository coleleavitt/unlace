unsigned __int64 __fastcall sub_B600(
        char *a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  char *v16; // rdi
  unsigned int *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int16 *v28; // r13
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int16 *v31; // r14
  __int64 v32; // rcx
  int v33; // ebx
  unsigned int v34; // edx
  __int64 v35; // rax
  unsigned __int16 v36; // r13
  unsigned __int16 *v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  _BYTE *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int16 *v45; // r13
  unsigned __int8 *v46; // r14
  char *v47; // r15
  unsigned __int64 v48; // rax
  char *v49; // rsi
  _BYTE *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // rsi
  unsigned int v54; // edx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  char v58; // [rsp+0h] [rbp-478h]
  int v59; // [rsp+8h] [rbp-470h]
  __int16 v60; // [rsp+8h] [rbp-470h]
  unsigned int v61; // [rsp+Ch] [rbp-46Ch]
  int v62; // [rsp+Ch] [rbp-46Ch]
  __m128i v63; // [rsp+10h] [rbp-468h] BYREF
  unsigned int *v64; // [rsp+20h] [rbp-458h]
  char *v65; // [rsp+28h] [rbp-450h]
  _BYTE v66[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v67; // [rsp+438h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v14 = sub_4C50(*(_QWORD *)a3, *(_QWORD *)(a3 + 8), *(unsigned int *)(a2 + 4));
  v15 = *(_QWORD *)(a3 + 8);
  v16 = *(char **)a3;
  v17 = (unsigned int *)v14;
  sub_4C50(*(_QWORD *)a3, v15, (unsigned int)(*(_DWORD *)(a2 + 4) + *(_DWORD *)(a2 + 8)));
  v23 = *(unsigned int *)(a2 + 8);
  v63.m128i_i64[0] = a3;
  v63.m128i_i64[1] = (__int64)v17;
  v24 = (unsigned __int64)v17 + v23;
  v65 = (char *)v17 + v23;
  if ( (unsigned int *)((char *)v17 + v23) < v17 )
  {
    if ( !under_debugger )
      interr(30473, v15, v23, v18, v19, v20);
    BUG();
  }
  switch ( *(_WORD *)a2 )
  {
    case 0x120:
      if ( v24 < (unsigned __int64)v17 + 2 )
        goto LABEL_96;
      if ( v24 < (unsigned __int64)(v17 + 1) )
        goto LABEL_96;
      if ( v24 < (unsigned __int64)v17 + 6 )
        goto LABEL_96;
      v45 = (unsigned __int16 *)(v17 + 2);
      v60 = *((_WORD *)v17 + 2);
      if ( v24 < (unsigned __int64)(v17 + 2) )
        goto LABEL_96;
      v62 = *((unsigned __int16 *)v17 + 2);
      v46 = (unsigned __int8 *)v45 + (unsigned int)(12 * v62);
      if ( v24 < (unsigned __int64)v46 || v46 < (unsigned __int8 *)v45 )
        goto LABEL_96;
      v47 = (char *)(v46 + 1);
      if ( v24 < (unsigned __int64)(v46 + 1) )
        sub_3660(v16, v15);
      v48 = (unsigned int)(v24 - (_DWORD)v47);
      if ( v48 > *v46 )
        v48 = *v46;
      if ( v24 < (unsigned __int64)&v47[v48] || &v47[v48] < v47 )
        sub_3660(v16, v15);
      v49 = (char *)(v46 + 1);
      v50 = v66;
      if ( (unsigned int)v48 >= 8 )
      {
        qmemcpy(v66, v47, 8 * (v48 >> 3));
        v49 = &v47[8 * (v48 >> 3)];
        v50 = &v66[8 * (v48 >> 3)];
        v18 = 0;
      }
      v51 = 0;
      if ( (v48 & 4) != 0 )
      {
        *(_DWORD *)v50 = *(_DWORD *)v49;
        v51 = 4;
      }
      if ( (v48 & 2) != 0 )
      {
        v18 = *(unsigned __int16 *)&v49[v51];
        *(_WORD *)&v50[v51] = v18;
        v51 += 2;
      }
      if ( (v48 & 1) != 0 )
      {
        v18 = (unsigned __int8)v49[v51];
        v50[v51] = v18;
      }
      v66[v48] = 0;
      if ( v60 )
      {
        v52 = (__int64)&v17[3 * (v62 - 1) + 5];
        do
        {
          v53 = *v45;
          v54 = *((_DWORD *)v45 + 1);
          if ( (_WORD)v53 || v54 )
          {
            v55 = sub_81F0((__int64)a1, v53, v54, v18, v19, v20);
            if ( v55 != -1 )
              add_sourcefile(v55, *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) & (v55 + *((unsigned int *)v45 + 2)), v66);
          }
          v45 += 6;
        }
        while ( (unsigned __int16 *)v52 != v45 );
      }
      return v67 - __readfsqword(0x28u);
    case 0x122:
      if ( *(_BYTE *)(a3 + 16) )
      {
        v37 = (unsigned __int16 *)(v17 + 1);
        if ( v24 < (unsigned __int64)(v17 + 1) )
          goto LABEL_96;
        v38 = *v17;
      }
      else
      {
        v37 = (unsigned __int16 *)v17 + 1;
        if ( v24 < (unsigned __int64)v17 + 2 )
          goto LABEL_96;
        v38 = *(unsigned __int16 *)v17;
      }
      if ( v24 < (unsigned __int64)(v37 + 1) )
        goto LABEL_96;
      v39 = *v37;
      if ( v24 < (unsigned __int64)(v37 + 2) )
        goto LABEL_96;
      v15 = (unsigned __int64)v37 + 5;
      if ( v24 < (unsigned __int64)v37 + 5 )
        goto LABEL_96;
      v40 = *((unsigned __int8 *)v37 + 4);
      v41 = (unsigned int)(v24 - v15);
      if ( v41 > v40 )
        v41 = v40;
      if ( v24 < v15 + v41 || v15 + v41 < v15 )
        goto LABEL_96;
      v42 = v66;
      if ( (unsigned int)v41 >= 8 )
      {
        qmemcpy(v66, (const void *)v15, 8 * (v41 >> 3));
        v15 += 8 * (v41 >> 3);
        v42 = &v66[8 * (v41 >> 3)];
        v18 = 0;
      }
      v43 = 0;
      if ( (v41 & 4) != 0 )
      {
        *(_DWORD *)v42 = *(_DWORD *)v15;
        v43 = 4;
      }
      if ( (v41 & 2) != 0 )
      {
        v18 = *(unsigned __int16 *)(v15 + v43);
        *(_WORD *)&v42[v43] = v18;
        v43 += 2;
      }
      if ( (v41 & 1) != 0 )
      {
        v18 = *(unsigned __int8 *)(v15 + v43);
        v42[v43] = v18;
      }
      v66[v41] = 0;
      v44 = sub_81F0((__int64)a1, (unsigned __int16)v39, v38, v18, v39, v38);
      if ( v44 != -1 )
        set_name(v44, v66, 1283);
      return v67 - __readfsqword(0x28u);
    case 0x123:
      v64 = v17;
      sub_B350(
        a1,
        (unsigned __int64)&v63,
        *(double *)a4.m128_u64,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11,
        1,
        1,
        v19,
        v20);
      return v67 - __readfsqword(0x28u);
    case 0x124:
    case 0x125:
      v64 = v17;
      sub_B350(
        a1,
        (unsigned __int64)&v63,
        *(double *)a4.m128_u64,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11,
        0,
        1,
        v19,
        v20);
      return v67 - __readfsqword(0x28u);
    case 0x126:
      v15 = (unsigned __int64)v17 + 1;
      if ( v24 < (unsigned __int64)v17 + 1 )
        goto LABEL_96;
      v26 = v23 - 1;
      v27 = *(unsigned __int8 *)v17;
      if ( v27 >= (unsigned int)v26 )
      {
        v28 = (unsigned __int16 *)v24;
        v27 = v26;
      }
      else
      {
        v28 = (unsigned __int16 *)(v27 + v15);
        if ( __CFADD__(v27, v15) || v24 < (unsigned __int64)v28 )
          goto LABEL_96;
      }
      v16 = v66;
      __memcpy_chk(v66, v15, v27, 1024);
      v66[v27] = 0;
      if ( v24 >= (unsigned __int64)(v28 + 1) )
      {
        v31 = v28 + 2;
        if ( v24 >= (unsigned __int64)(v28 + 2) )
        {
          v32 = v28[1];
          v59 = v32;
          if ( !(_WORD)v32 )
            return v67 - __readfsqword(0x28u);
          v33 = 0;
          v61 = *v28;
          while ( v24 >= (unsigned __int64)(v31 + 1) )
          {
            v36 = *v31;
            if ( *(_BYTE *)(a3 + 16) )
            {
              if ( v24 < (unsigned __int64)(v31 + 3) )
                break;
              v34 = *(_DWORD *)(v31 + 1);
              v31 += 3;
            }
            else
            {
              if ( v24 < (unsigned __int64)(v31 + 2) )
                break;
              v34 = v31[1];
              v31 += 2;
            }
            v15 = v61;
            v16 = a1;
            v35 = sub_81F0((__int64)a1, v61, v34, v32, v29, v30);
            if ( v35 != -1 )
            {
              v15 = v36;
              v16 = (char *)v35;
              set_source_linnum(v35, v36);
            }
            if ( ++v33 == v59 )
              return v67 - __readfsqword(0x28u);
          }
        }
      }
LABEL_96:
      sub_3660(v16, v15);
    case 0x128:
      while ( 2 )
      {
        if ( v24 < (unsigned __int64)v17 || (_DWORD)v24 == (_DWORD)v17 )
          return v67 - __readfsqword(0x28u);
        v15 = (unsigned __int64)v17 + 1;
        if ( v24 >= (unsigned __int64)v17 + 1 )
        {
          v56 = (unsigned int)(v24 - v15);
          if ( v56 > *(unsigned __int8 *)v17 )
            v56 = *(unsigned __int8 *)v17;
          v17 = (unsigned int *)(v56 + v15);
          if ( !__CFADD__(v56, v15) && v24 >= (unsigned __int64)v17 )
          {
            v16 = v66;
            if ( (unsigned int)v56 >= 8 )
            {
              qmemcpy(v66, (const void *)v15, 8 * (v56 >> 3));
              v15 += 8 * (v56 >> 3);
              v16 = &v66[8 * (v56 >> 3)];
              v18 = 0;
            }
            v57 = 0;
            if ( (v56 & 4) != 0 )
            {
              *(_DWORD *)v16 = *(_DWORD *)v15;
              v57 = 4;
            }
            if ( (v56 & 2) != 0 )
            {
              v18 = *(unsigned __int16 *)(v15 + v57);
              *(_WORD *)&v16[v57] = v18;
              v57 += 2;
            }
            if ( (v56 & 1) != 0 )
            {
              v18 = *(unsigned __int8 *)(v15 + v57);
              v16[v57] = v18;
            }
            v66[v56] = 0;
            if ( v66[0] )
            {
              v16 = "Library: %s";
              sub_50A0(
                (__int64)"Library: %s",
                (__int64)v66,
                v57,
                v18,
                v19,
                v20,
                a4,
                a5,
                a6,
                a7,
                v21,
                v22,
                a10,
                a11,
                v58);
            }
            continue;
          }
        }
        break;
      }
      goto LABEL_96;
    case 0x129:
    case 0x12A:
      v64 = v17;
      sub_B510(
        a1,
        &v63,
        1u,
        *(double *)a4.m128_u64,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11,
        v18,
        v19,
        v20);
      return v67 - __readfsqword(0x28u);
    case 0x134:
      v64 = v17;
      sub_B510(
        a1,
        &v63,
        0,
        *(double *)a4.m128_u64,
        *(double *)a5.m128_u64,
        *(double *)a6.m128_u64,
        *(double *)a7.m128_u64,
        *(double *)v21.m128_u64,
        *(double *)v22.m128_u64,
        a10,
        a11,
        v18,
        v19,
        v20);
      return v67 - __readfsqword(0x28u);
    default:
      return v67 - __readfsqword(0x28u);
  }
}
