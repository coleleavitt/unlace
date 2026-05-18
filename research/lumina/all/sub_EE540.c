int __fastcall sub_EE540(unsigned int a1, char *a2, __int64 *a3, int a4, double a5)
{
  int v7; // ebx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // edx
  unsigned int v13; // ebp
  __int16 v14; // dx
  char *v15; // rdi
  __int64 v16; // rsi
  char *v17; // rdi
  unsigned __int8 v18; // al
  int v19; // ecx
  int result; // eax
  unsigned __int64 v21; // rax
  long double v22; // fst7
  unsigned int v23; // edx
  unsigned __int64 v24; // rax
  int i; // edx
  signed int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rax
  signed int v30; // ecx
  size_t v31; // rdx
  signed __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // r8
  char v35; // dl
  char v36; // dl
  __int16 v37; // cx
  signed int v38; // r11d
  size_t v39; // rdx
  long double v40; // fst7
  unsigned __int8 v41; // al
  int v42; // r13d
  char *v43; // rax
  signed int v45; // [rsp+18h] [rbp-A0h]
  __int64 v46; // [rsp+18h] [rbp-A0h]
  unsigned int v47; // [rsp+28h] [rbp-90h]
  signed int v48; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v49; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v50; // [rsp+3Ch] [rbp-7Ch] BYREF
  __m128i v51; // [rsp+40h] [rbp-78h] BYREF
  signed int v52; // [rsp+50h] [rbp-68h]
  __int16 v53; // [rsp+54h] [rbp-64h]
  char v54; // [rsp+56h] [rbp-62h]
  __int64 v55; // [rsp+58h] [rbp-60h]
  unsigned __int64 v56; // [rsp+78h] [rbp-40h]

  v7 = a4;
  v8 = a3[1];
  v56 = __readfsqword(0x28u);
  if ( a4 )
  {
    v9 = (unsigned __int8)a2[1];
    v51.m128i_i32[0] = (unsigned __int8)a2[1];
    if ( (unsigned int)v9 > 0x7F )
    {
      v41 = sub_CB760(a2 + 1, v51.m128i_i32);
      v9 = v51.m128i_u32[0];
      v42 = v41;
      v10 = (unsigned __int8)*a2;
      v11 = v42 + 1;
      v49 = v10;
      if ( v51.m128i_i32[0] > 0x7Fu )
      {
        v12 = (unsigned int)(v51.m128i_i32[0] - 12) >> 1;
        goto LABEL_5;
      }
    }
    else
    {
      v10 = (unsigned __int8)*a2;
      v11 = 2;
      v49 = v10;
    }
    v12 = byte_1BEB80[v9];
LABEL_5:
    v13 = v12 + v10;
    v8 += 56;
    goto LABEL_6;
  }
  v13 = (unsigned __int8)*a2;
  v11 = 1;
  v49 = v13;
  if ( v13 <= 0x7F )
  {
LABEL_6:
    if ( a1 >= v13 )
      goto LABEL_7;
LABEL_14:
    v19 = 84997;
LABEL_15:
    sub_E8BB0(
      0xBu,
      "%s at line %d of [%.10s]",
      "database corruption",
      v19,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    *((_BYTE *)a3 + 31) = 11;
    return 0;
  }
  v18 = sub_CB760(a2, (int *)&v49);
  v13 = v49;
  v11 = v18;
  if ( a1 < v49 )
    goto LABEL_14;
LABEL_7:
  while ( 1 )
  {
    v14 = *(_WORD *)(v8 + 20);
    v15 = &a2[v11];
    v16 = (unsigned __int8)*v15;
    v50 = (unsigned __int8)*v15;
    if ( (v14 & 0x24) != 0 )
      break;
    if ( (v14 & 8) == 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        if ( (unsigned int)v16 > 0x7F )
          sub_CB760(v15, (int *)&v50);
        if ( v50 <= 0xB )
          goto LABEL_84;
        if ( (v50 & 1) == 0 )
          goto LABEL_61;
        v26 = (v50 - 12) >> 1;
        v52 = v26;
        if ( a1 < v26 + v13 || (v27 = *a3, *(unsigned __int16 *)(*a3 + 8) <= v7) )
        {
          v19 = 85074;
          goto LABEL_15;
        }
        v28 = *(_QWORD *)(v27 + 8LL * v7 + 32);
        if ( v28 )
        {
          v54 = *(_BYTE *)(v27 + 4);
          v29 = *(_QWORD *)(v27 + 16);
          v51.m128i_i64[1] = (__int64)&a2[v13];
          v53 = 2;
          v55 = v29;
          result = sub_EE2B0(&v51, (const __m128i *)v8, v28, (_BYTE *)a3 + 31, a5);
        }
        else
        {
          v38 = *(_DWORD *)(v8 + 16);
          v46 = *a3;
          v47 = (v50 - 12) >> 1;
          v39 = v38;
          v48 = v38;
          if ( v26 <= v38 )
            v39 = (v50 - 12) >> 1;
          result = memcmp(&a2[v13], *(const void **)(v8 + 8), v39);
          v33 = v46;
          v34 = v7;
          if ( result )
            goto LABEL_62;
          result = v47 - v48;
        }
      }
      else if ( (v14 & 0x10) != 0 )
      {
        if ( (unsigned int)v16 > 0x7F )
        {
          sub_CB760(v15, (int *)&v50);
          LODWORD(v16) = v50;
        }
        if ( (unsigned int)v16 <= 0xB || (v16 & 1) != 0 )
          goto LABEL_84;
        v30 = (unsigned int)(v16 - 12) >> 1;
        if ( a1 < v30 + v13 )
        {
          v19 = 85104;
          goto LABEL_15;
        }
        if ( (*(_BYTE *)(v8 + 21) & 4) != 0 )
        {
          if ( v30 )
          {
            if ( a2[v13] )
              goto LABEL_61;
            v43 = &a2[v13 + 1];
            while ( &a2[v13 + 1 + v30 - 1] != v43 )
            {
              if ( *v43++ )
                goto LABEL_61;
            }
          }
          result = v30 - *(_DWORD *)v8;
        }
        else
        {
          v31 = v30;
          v45 = *(_DWORD *)(v8 + 16);
          if ( v45 <= v30 )
            v31 = *(int *)(v8 + 16);
          result = memcmp(&a2[v13], *(const void **)(v8 + 8), v31);
          if ( result )
            goto LABEL_81;
          result = ((unsigned int)(v16 - 12) >> 1) - v45;
        }
      }
      else
      {
        result = v16 != 0;
      }
      goto LABEL_56;
    }
    if ( (unsigned int)v16 > 9 )
      goto LABEL_61;
    if ( !(_DWORD)v16 )
    {
LABEL_84:
      v33 = *a3;
      result = -1;
      v34 = v7;
      goto LABEL_62;
    }
    sub_C6E20(&a2[v13], v16, (__int64)&v51);
    v21 = v50;
    if ( v50 == 7 )
    {
      a5 = *(double *)v8;
      if ( *(double *)v8 > *(double *)v51.m128i_i64 )
        goto LABEL_84;
      if ( *(double *)v51.m128i_i64 > a5 )
      {
LABEL_61:
        v33 = *a3;
        result = 1;
        v34 = v7;
        goto LABEL_62;
      }
      if ( *((unsigned __int16 *)a3 + 14) == ++v7 )
        goto LABEL_29;
LABEL_34:
      v23 = byte_1BEB80[v21];
      goto LABEL_25;
    }
    v22 = (long double)v51.m128i_i64[0];
    if ( *(double *)v8 > v22 )
      goto LABEL_84;
    if ( v22 > *(double *)v8 )
      goto LABEL_61;
LABEL_22:
    if ( *((unsigned __int16 *)a3 + 14) == ++v7 )
      goto LABEL_29;
    v21 = v50;
    if ( v50 <= 0x7F )
      goto LABEL_34;
    v23 = (v50 - 12) >> 1;
LABEL_25:
    v24 = v21 >> 7;
    v13 += v23;
    for ( i = 1; v24; ++i )
      v24 >>= 7;
    v11 += i;
    v8 += 56;
    if ( v49 <= v11 || a1 < v13 )
    {
LABEL_29:
      result = *((char *)a3 + 30);
      *((_BYTE *)a3 + 34) = 1;
      return result;
    }
  }
  if ( (unsigned int)v16 > 9 )
    goto LABEL_61;
  if ( !(_DWORD)v16 )
    goto LABEL_84;
  v17 = &a2[v13];
  if ( (_DWORD)v16 != 7 )
  {
    switch ( v16 )
    {
      case 1LL:
        v32 = *v17;
        break;
      case 2LL:
        v32 = (unsigned __int8)v17[1] | (*v17 << 8);
        break;
      case 3LL:
        v32 = (unsigned __int16)__ROL2__(*(_WORD *)(v17 + 1), 8) | (*v17 << 16);
        break;
      case 4LL:
        v32 = (int)_byteswap_ulong(*(_DWORD *)v17);
        break;
      case 5LL:
        v32 = _byteswap_ulong(*(_DWORD *)(v17 + 2))
            + ((unsigned __int64)((unsigned __int8)v17[1] | (unsigned int)(*v17 << 8)) << 32);
        break;
      case 6LL:
        v32 = _byteswap_uint64(*(_QWORD *)v17);
        break;
      default:
        v32 = (unsigned int)(v16 - 8);
        break;
    }
    if ( *(_QWORD *)v8 > v32 )
      goto LABEL_84;
    if ( *(_QWORD *)v8 < v32 )
      goto LABEL_61;
    goto LABEL_22;
  }
  sub_C6E20(v17, 7, (__int64)&v51);
  v40 = (long double)*(__int64 *)v8;
  if ( *(double *)v51.m128i_i64 <= v40 )
  {
    result = -(v40 > *(double *)v51.m128i_i64);
LABEL_56:
    if ( result )
      goto LABEL_81;
    goto LABEL_22;
  }
  result = 1;
LABEL_81:
  v33 = *a3;
  v34 = v7;
LABEL_62:
  v35 = *(_BYTE *)(*(_QWORD *)(v33 + 24) + v34);
  if ( v35 )
  {
    if ( (v35 & 2) == 0 )
      return -result;
    v36 = v35 & 1;
    LOBYTE(v37) = 1;
    if ( v50 )
      v37 = *(_WORD *)(v8 + 20) & 1;
    if ( v36 != (_BYTE)v37 )
      return -result;
  }
  return result;
}
