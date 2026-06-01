unsigned __int64 __fastcall sub_30E100(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r12
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  __m128i v55; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-30h]

  v56 = __readfsqword(0x28u);
  v4 = sub_30D960(a1, a3);
  v5 = v4;
  switch ( a2 )
  {
    case 0:
      sub_30DA80(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( !v5 )
      {
        v23 = *(unsigned int *)(a1 + 4);
        v24 = -1;
        if ( (_DWORD)v23 == 8 )
          goto LABEL_27;
        goto LABEL_25;
      }
      v55.m128i_i64[1] = v5;
      v55.m128i_i64[0] = 0;
      sub_311AB0(a1 + 8, &v55, v19, v20, v21, v22);
      v23 = *(unsigned int *)(a1 + 4);
      v24 = -1;
      if ( (_DWORD)v23 != 8 )
      {
LABEL_25:
        v23 = (unsigned int)(8 * v23);
        v24 = (1LL << v23) - 1;
      }
      if ( v5 == v24 )
        return v56 - __readfsqword(0x28u);
LABEL_27:
      v55.m128i_i64[0] = v5 + 1;
      v55.m128i_i64[1] = v24 - v5;
      sub_311AB0(a1 + 8, &v55, v5 + 1, v23, v21, v22);
      return v56 - __readfsqword(0x28u);
    case 1:
      sub_30DA80(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v55.m128i_i64[0] = v5;
      v55.m128i_i64[1] = 1;
      sub_311AB0(a1 + 8, &v55, v25, v26, v27, v28);
      return v56 - __readfsqword(0x28u);
    case 2:
      goto LABEL_5;
    case 3:
      if ( !v4 )
        goto LABEL_44;
      v8 = *(_DWORD *)(a1 + 4);
      if ( v8 == 8 )
        goto LABEL_43;
      v5 = v4 - 1;
LABEL_40:
      v40 = (1LL << (8 * (unsigned __int8)v8)) - 1;
LABEL_41:
      if ( v40 == v5 )
        goto LABEL_6;
      ++v5;
LABEL_43:
      sub_30DA80(a1);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v55.m128i_i64[0] = 0;
      v55.m128i_i64[1] = v5;
      sub_311AB0(a1 + 8, &v55, v41, v42, v43, v44);
      return v56 - __readfsqword(0x28u);
    case 4:
      v6 = *(_DWORD *)(a1 + 4);
      if ( v6 == 8 )
      {
        if ( v4 == -1 )
          goto LABEL_44;
        v5 = v4 + 1;
      }
      else
      {
        if ( v4 == (1LL << (8 * (unsigned __int8)v6)) - 1 )
          goto LABEL_44;
        v5 = v4 + 1;
LABEL_5:
        if ( !v5 )
        {
LABEL_6:
          *(_DWORD *)a1 = 1;
          return v56 - __readfsqword(0x28u);
        }
      }
      sub_30DA80(a1);
      v32 = *(unsigned int *)(a1 + 4);
      v37 = a1 + 8;
      *(_DWORD *)a1 = 2;
      v38 = -1;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( (_DWORD)v32 != 8 )
      {
        v32 = (unsigned int)(8 * v32);
        v38 = (1LL << v32) - 1;
      }
      goto LABEL_36;
    case 5:
      v8 = *(_DWORD *)(a1 + 4);
      v40 = -1;
      if ( v8 != 8 )
        goto LABEL_40;
      goto LABEL_41;
    case 6:
      v29 = *(_DWORD *)(a1 + 4);
      if ( v29 == 8 )
      {
        if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
        {
LABEL_44:
          *(_DWORD *)a1 = 0;
          return v56 - __readfsqword(0x28u);
        }
        v5 = v4 + 1;
      }
      else
      {
        v30 = 1LL << (8 * (unsigned __int8)v29 - 1);
        if ( v5 == v30 - 1 )
          goto LABEL_44;
        v5 = ~(-1LL << (8 * (unsigned __int8)v29)) & (v5 + 1);
LABEL_32:
        if ( v30 == v5 )
          goto LABEL_6;
      }
      sub_30DA80(a1);
      v35 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      if ( v35 == 8 )
      {
        if ( v5 >= 0 )
        {
          v38 = 0x7FFFFFFFFFFFFFFFLL;
          v37 = a1 + 8;
          goto LABEL_36;
        }
        v36 = 0x8000000000000000LL;
      }
      else
      {
        v32 = (unsigned int)(8 * v35 - 1);
        v36 = 1LL << (8 * (unsigned __int8)v35 - 1);
        if ( (v5 & v36) == 0 )
        {
          v37 = a1 + 8;
          v38 = v36 - 1;
LABEL_36:
          v55.m128i_i64[0] = v5;
          v55.m128i_i64[1] = v38 - v5 + 1;
          sub_311AB0(v37, &v55, v31, v32, v33, v34);
          return v56 - __readfsqword(0x28u);
        }
      }
      v55.m128i_i64[1] = v36;
      v55.m128i_i64[0] = 0;
      sub_311AB0(a1 + 8, &v55, v31, v32, v33, v34);
      v53 = *(unsigned int *)(a1 + 4);
      v54 = -1;
      if ( (_DWORD)v53 != 8 )
      {
        v53 = (unsigned int)(8 * v53);
        v54 = (1LL << v53) - 1;
      }
      v55.m128i_i64[0] = v5;
      v55.m128i_i64[1] = v54 - v5 + 1;
      sub_311AB0(a1 + 8, &v55, v50, v53, v51, v52);
      return v56 - __readfsqword(0x28u);
    case 7:
      v30 = 0x8000000000000000LL;
      v39 = *(_DWORD *)(a1 + 4);
      if ( v39 != 8 )
        v30 = 1LL << (8 * (unsigned __int8)v39 - 1);
      goto LABEL_32;
    case 8:
      v9 = *(_DWORD *)(a1 + 4);
      if ( v9 == 8 )
      {
        if ( v4 == 0x8000000000000000LL )
          goto LABEL_44;
        v12 = v4;
        v5 = v4 - 1;
      }
      else
      {
        v10 = 1LL << (8 * (unsigned __int8)v9 - 1);
        if ( v5 == v10 )
          goto LABEL_44;
        v5 = ~(-1LL << (8 * (unsigned __int8)v9)) & (v5 - 1);
LABEL_14:
        v11 = v10 - 1;
LABEL_15:
        if ( v5 == v11 )
          goto LABEL_6;
        v12 = v5 + 1;
      }
      sub_30DA80(a1);
      v16 = *(unsigned int *)(a1 + 4);
      *(_DWORD *)a1 = 2;
      v17 = 0x8000000000000000LL;
      *(_OWORD *)(a1 + 16) = 0;
      *(_QWORD *)(a1 + 8) = 0;
      if ( (_DWORD)v16 != 8 )
      {
        v13 = (unsigned int)(8 * v16 - 1);
        v17 = 1LL << (8 * (unsigned __int8)v16 - 1);
      }
      if ( (v5 & v17) != 0 )
      {
        v55.m128i_i64[0] = v17;
        v55.m128i_i64[1] = v12 - v17;
        sub_311AB0(a1 + 8, &v55, v16, v13, v14, v15);
      }
      else
      {
        v55.m128i_i64[1] = v12;
        v55.m128i_i64[0] = 0;
        sub_311AB0(a1 + 8, &v55, v16, v13, v14, v15);
        v48 = *(unsigned int *)(a1 + 4);
        v49 = 0x8000000000000000LL;
        if ( (_DWORD)v48 != 8 )
        {
          v45 = (unsigned int)(8 * v48 - 1);
          v49 = 1LL << (8 * (unsigned __int8)v48 - 1);
        }
        v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
        sub_311AB0(a1 + 8, &v55, v48, v45, v46, v47);
      }
      return v56 - __readfsqword(0x28u);
    case 9:
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      v18 = *(_DWORD *)(a1 + 4);
      if ( v18 == 8 )
        goto LABEL_15;
      v10 = 1LL << (8 * (unsigned __int8)v18 - 1);
      goto LABEL_14;
    default:
      if ( !under_debugger )
        sub_37DDE0(51744);
      BUG();
  }
}

