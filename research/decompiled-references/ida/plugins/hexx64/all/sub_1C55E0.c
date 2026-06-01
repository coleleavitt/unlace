__int64 __fastcall sub_1C55E0(unsigned int *a1, __int64 a2, int a3, __int64 a4, char a5, double a6)
{
  __int64 v6; // rbx
  int v7; // eax
  bool v8; // dl
  char *v9; // r14
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // r8
  _DWORD *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rsi
  char *v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  char *v26; // rax
  char *v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 *v30; // rax
  __int64 v31; // r15
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 j; // rbx
  char *v35; // rbp
  __int64 i; // rbx
  unsigned int v37; // edx
  int v38; // eax
  _QWORD *v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int16 v41; // [rsp+8h] [rbp-80h]
  _QWORD *v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+18h] [rbp-70h]
  char *dest; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+28h] [rbp-60h]
  unsigned int v46; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v6 = a3;
  v47 = __readfsqword(0x28u);
  v7 = a4;
  v8 = (_DWORD)a4 == -1;
  LOBYTE(a4) = (int)a4 <= (int)v6;
  if ( (unsigned __int8)a4 | v8 || (int)v6 < 0 )
    return 0;
  switch ( *a1 )
  {
    case 1u:
    case 6u:
      *((_QWORD *)a1 + 1) += v6;
      return 1;
    case 2u:
      if ( !(_DWORD)v6 )
        return 1;
      v15 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
      if ( !v15 )
        return 0;
      v39 = *((_QWORD **)a1 + 1);
      v16 = 0;
      v45 = 24 * v15;
      v17 = qalloc_or_throw(24 * v15, a2, *a1, a4);
      v18 = a2;
      v19 = v39;
      dest = (char *)v17;
      v20 = (_DWORD *)v17;
      do
      {
        v21 = *v19;
        v22 = 3 * v16;
        v43 = v18;
        *v20 = 0;
        ++v16;
        v20 += 6;
        v42 = v19;
        v40 = v21 + 8 * v22;
        copy_argloc();
        v19 = v42;
        v18 = v43;
        *(v20 - 2) = *(_DWORD *)(v40 + 16);
      }
      while ( v15 != v16 );
      v23 = &dest[v45];
      if ( dest == &dest[v45] )
      {
        if ( dest )
          goto LABEL_43;
        return 0;
      }
      v9 = dest;
      while ( 1 )
      {
        v24 = *((unsigned __int16 *)v9 + 8);
        v25 = *((unsigned __int16 *)v9 + 9);
        if ( v24 + (int)v25 > (int)v6 )
          break;
        v9 += 24;
        if ( v9 == v23 )
          goto LABEL_5;
      }
      if ( v24 < (int)v6 )
      {
        v41 = v6 - v24;
        if ( (unsigned __int8)sub_1C55E0((unsigned int *)v9, v43, (int)v6 - v24, v25, 1) )
        {
          *((_WORD *)v9 + 8) = v6;
          *((_WORD *)v9 + 9) -= v41;
          goto LABEL_25;
        }
        if ( dest )
          goto LABEL_43;
        return 0;
      }
LABEL_25:
      v26 = v9;
      if ( v23 == v9 )
        goto LABEL_30;
      if ( (((_BYTE)v23 - (_BYTE)v9) & 8) == 0 || (v26 = v9 + 24, *((_WORD *)v9 + 8) -= v6, v9 + 24 != v23) )
      {
        do
        {
          *((_WORD *)v26 + 8) -= v6;
          *((_WORD *)v26 + 20) -= v6;
          v26 += 48;
        }
        while ( v26 != v23 );
      }
      if ( dest != v9 )
      {
LABEL_30:
        v27 = dest;
        do
        {
          v27 += 24;
          cleanup_argloc();
        }
        while ( v27 != v9 );
      }
      memmove(dest, v9, v23 - v9);
      v28 = 0xAAAAAAAAAAAAAAABLL * ((v9 - dest) >> 3);
      v29 = v15 - v28;
      if ( v23 == v9 )
      {
        v15 -= v28;
LABEL_5:
        if ( !dest )
          return 0;
        if ( !v15 )
        {
LABEL_7:
          qfree((__int64)dest);
          return 0;
        }
LABEL_43:
        v35 = dest;
        for ( i = 0; i != v15; ++i )
        {
          v35 += 24;
          cleanup_argloc();
        }
        goto LABEL_7;
      }
      v30 = *((__int64 **)a1 + 1);
      if ( a5 && v29 == 1 )
      {
        *((_QWORD *)a1 + 1) = *((_QWORD *)dest + 1);
        v37 = *(_DWORD *)dest;
        *((_QWORD *)dest + 1) = v30;
        v38 = *a1;
        *a1 = v37;
        *(_DWORD *)dest = v38;
        if ( !dest )
          return 1;
        v31 = (__int64)dest;
        v32 = 1;
        goto LABEL_37;
      }
      v31 = *v30;
      v32 = v30[1];
      *v30 = (__int64)dest;
      *(__m128i *)(v30 + 1) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v15);
      if ( v31 )
      {
        if ( !v32 )
        {
LABEL_39:
          qfree(v31);
          return 1;
        }
LABEL_37:
        v33 = v31;
        for ( j = 0; j != v32; ++j )
        {
          v33 += 24;
          cleanup_argloc();
        }
        goto LABEL_39;
      }
      return 1;
    case 3u:
      v46 = a1[2];
      if ( !(unsigned __int8)sub_32E7D0(a2, (int *)&v46, v6) )
        return 0;
      v13 = v46;
      *a1 = 3;
      a1[2] = v13;
      return 1;
    case 4u:
      if ( !(_DWORD)v6 )
        return 1;
      v11 = v6 - v7 / 2;
      if ( v11 < 0 )
        return 0;
      v12 = *((unsigned __int16 *)a1 + 5);
      *a1 = 3;
      a1[2] = v11 + v12;
      return 1;
    case 5u:
      **((_QWORD **)a1 + 1) += v6;
      return 1;
    default:
      if ( !under_debugger )
        sub_383060(0xC7BEu, a6);
      BUG();
  }
}

