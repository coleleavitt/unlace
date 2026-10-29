__int64 __fastcall sub_1BED60(int *a1, __int64 a2, int a3, int a4, char a5)
{
  unsigned __int16 *v6; // r14
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // r8
  _DWORD *v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int16 *v20; // r12
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int16 **v27; // rax
  unsigned __int16 *v28; // r15
  __int64 v29; // r12
  unsigned __int16 *v30; // rbp
  __int64 j; // rbx
  unsigned __int16 *v32; // rbp
  __int64 i; // rbx
  int v34; // edx
  int v35; // eax
  _QWORD *v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int16 v38; // [rsp+8h] [rbp-80h]
  _QWORD *v39; // [rsp+10h] [rbp-78h]
  __int64 v40; // [rsp+18h] [rbp-70h]
  unsigned __int16 *dest; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h]
  int v43; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a4 <= a3 || a4 == -1 || a3 < 0 )
    return 0;
  switch ( *a1 )
  {
    case 1:
    case 6:
      *((_QWORD *)a1 + 1) += a3;
      return 1;
    case 2:
      if ( !a3 )
        return 1;
      v12 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
      if ( !v12 )
        return 0;
      v36 = *((_QWORD **)a1 + 1);
      v13 = 0;
      v42 = 12 * v12;
      v14 = qalloc_or_throw();
      v15 = a2;
      v16 = v36;
      dest = (unsigned __int16 *)v14;
      v17 = (_DWORD *)v14;
      do
      {
        v18 = *v16;
        v19 = 3 * v13;
        v40 = v15;
        *v17 = 0;
        ++v13;
        v17 += 6;
        v39 = v16;
        v37 = v18 + 8 * v19;
        copy_argloc();
        v16 = v39;
        v15 = v40;
        *(v17 - 2) = *(_DWORD *)(v37 + 16);
      }
      while ( v12 != v13 );
      v20 = &dest[v42];
      if ( dest == &dest[v42] )
      {
        if ( dest )
          goto LABEL_43;
        return 0;
      }
      v6 = dest;
      while ( 1 )
      {
        v21 = v6[8];
        v22 = v6[9];
        if ( v21 + (int)v22 > a3 )
          break;
        v6 += 12;
        if ( v6 == v20 )
          goto LABEL_5;
      }
      if ( v21 < a3 )
      {
        v38 = a3 - v21;
        if ( (unsigned __int8)sub_1BED60(v6, v40, (unsigned int)(a3 - v21), v22, 1) )
        {
          v6[8] = a3;
          v6[9] -= v38;
          goto LABEL_25;
        }
        if ( dest )
          goto LABEL_43;
        return 0;
      }
LABEL_25:
      v23 = v6;
      if ( v20 == v6 )
        goto LABEL_30;
      if ( (((_BYTE)v20 - (_BYTE)v6) & 8) == 0 || (v23 = v6 + 12, v6[8] -= a3, v6 + 12 != v20) )
      {
        do
        {
          v23[8] -= a3;
          v23[20] -= a3;
          v23 += 24;
        }
        while ( v23 != v20 );
      }
      if ( dest != v6 )
      {
LABEL_30:
        v24 = dest;
        do
        {
          v24 += 12;
          cleanup_argloc();
        }
        while ( v24 != v6 );
      }
      memmove(dest, v6, (char *)v20 - (char *)v6);
      v25 = 0xAAAAAAAAAAAAAAABLL * (((char *)v6 - (char *)dest) >> 3);
      v26 = v12 - v25;
      if ( v20 == v6 )
      {
        v12 -= v25;
LABEL_5:
        if ( !dest )
          return 0;
        if ( !v12 )
        {
LABEL_7:
          qfree();
          return 0;
        }
LABEL_43:
        v32 = dest;
        for ( i = 0; i != v12; ++i )
        {
          v32 += 12;
          cleanup_argloc();
        }
        goto LABEL_7;
      }
      v27 = *((unsigned __int16 ***)a1 + 1);
      if ( a5 && v26 == 1 )
      {
        *((_QWORD *)a1 + 1) = *((_QWORD *)dest + 1);
        v34 = *(_DWORD *)dest;
        *((_QWORD *)dest + 1) = v27;
        v35 = *a1;
        *a1 = v34;
        *(_DWORD *)dest = v35;
        if ( !dest )
          return 1;
        v28 = dest;
        v29 = 1;
        goto LABEL_37;
      }
      v28 = *v27;
      v29 = (__int64)v27[1];
      *v27 = dest;
      *(__m128i *)(v27 + 1) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v12);
      if ( v28 )
      {
        if ( !v29 )
        {
LABEL_39:
          qfree();
          return 1;
        }
LABEL_37:
        v30 = v28;
        for ( j = 0; j != v29; ++j )
        {
          v30 += 12;
          cleanup_argloc();
        }
        goto LABEL_39;
      }
      return 1;
    case 3:
      v43 = a1[2];
      if ( !(unsigned __int8)sub_327290(a2, &v43, (unsigned int)a3) )
        return 0;
      v10 = v43;
      *a1 = 3;
      a1[2] = v10;
      return 1;
    case 4:
      if ( !a3 )
        return 1;
      v8 = a3 - a4 / 2;
      if ( v8 < 0 )
        return 0;
      v9 = *((unsigned __int16 *)a1 + 5);
      *a1 = 3;
      a1[2] = v8 + v9;
      return 1;
    case 5:
      **((_QWORD **)a1 + 1) += a3;
      return 1;
    default:
      if ( !under_debugger )
        sub_37B760(51134);
      BUG();
  }
}

