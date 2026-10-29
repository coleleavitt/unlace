__int64 __fastcall sub_2A7AB0(__int64 a1, int a2, unsigned int *a3, int a4, int a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebp
  unsigned int *v18; // rcx
  __int64 v19; // r15
  int v20; // edx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int *v24; // rax
  __m128i *v25; // rbp
  unsigned __int64 *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  int v29; // r14d
  unsigned __int64 v30; // r15
  int v31; // eax
  _QWORD *v32; // rax
  unsigned __int64 v33; // r14
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int *v39; // [rsp+38h] [rbp-F0h]
  _QWORD *v40; // [rsp+38h] [rbp-F0h]
  __int64 v41; // [rsp+40h] [rbp-E8h]
  _QWORD *v42; // [rsp+48h] [rbp-E0h]
  __m128i v43; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 *v44; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-C0h]
  _QWORD v46[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-A0h]
  unsigned int v49[4]; // [rsp+90h] [rbp-98h] BYREF
  _DWORD v50[4]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v51; // [rsp+B0h] [rbp-78h]
  _QWORD v52[2]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v53[4]; // [rsp+D0h] [rbp-58h] BYREF
  int v54; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v55; // [rsp+E8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v52[0] = 0;
  v52[1] = 0;
  v47 = 0;
  v48 = 0;
  v49[0] = 0;
  sub_29F770((__int64)v49, (unsigned int *)&v47, *(double *)a6.m128_u64);
  v50[0] = 0;
  sub_29F770((__int64)v50, (unsigned int *)v52, *(double *)a6.m128_u64);
  v51 = 0;
  sub_29EC30((__int64)&v47, *(double *)a6.m128_u64);
  sub_29EC30((__int64)v52, *(double *)a6.m128_u64);
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 || !*(_QWORD *)(a1 + 24) || (v8 = *(_QWORD *)(v7 + 8), v7 == v8) )
  {
LABEL_15:
    v16 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v9 = v8 + 24;
    v10 = v8 + 40;
    if ( !a4 )
      v10 = v8 + 24;
    if ( *(_DWORD *)v10 == 6 && (v11 = *(_QWORD *)(v10 + 8), *(_DWORD *)(v11 + 8) == 65) )
      v12 = *(_DWORD *)(v11 + 32);
    else
      v12 = -1;
    if ( a2 != v12 )
      goto LABEL_10;
    v47 = 0;
    v48 = 0;
    v46[0] = 0;
    v46[1] = 0;
    LODWORD(v52[0]) = 0;
    sub_29F770((__int64)v52, (unsigned int *)v46, *(double *)a6.m128_u64);
    v53[0] = 0;
    sub_29F770((__int64)v53, (unsigned int *)&v47, *(double *)a6.m128_u64);
    v54 = 0;
    sub_29EC30((__int64)v46, *(double *)a6.m128_u64);
    sub_29EC30((__int64)&v47, *(double *)a6.m128_u64);
    if ( a4 == 1 )
    {
      v18 = a3;
      v19 = v8 + 24;
      if ( *(_DWORD *)(v8 + 28) != a3[1] )
        goto LABEL_19;
    }
    else
    {
      v19 = v8 + 40;
      v18 = a3 + 4;
      if ( *(_DWORD *)(v8 + 44) != a3[5] )
        goto LABEL_19;
    }
    v39 = v18;
    v41 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( !(unsigned int)sub_29E6F0(v19, (__int64)v18, *(double *)a6.m128_u64) )
      break;
    v20 = *(_DWORD *)v19;
    if ( *v39 != 2 )
    {
      if ( a3[8] == *(_DWORD *)(v8 + 56) && v20 == 1 && *v39 == 1 )
      {
        if ( (unsigned __int8)compare_tinfo() )
          goto LABEL_62;
        sub_29D550(
          (__int64 *)&v44,
          *(_QWORD *)(v41 + 1496),
          (__int64 *)(v19 + 8),
          (__int64 *)v39 + 1,
          *(double *)a6.m128_u64);
        if ( (_BYTE)v44 )
        {
          sub_29F770((__int64)v49, a3, *(double *)a6.m128_u64);
          sub_29F770((__int64)v50, a3 + 4, *(double *)a6.m128_u64);
          v51 = a3[8];
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_55;
        }
        clear_tinfo_t();
      }
      goto LABEL_19;
    }
    v22 = *((_QWORD *)v39 + 1);
    if ( !*(_DWORD *)v22 )
    {
      if ( v20 == 2 )
        goto LABEL_62;
      goto LABEL_19;
    }
    if ( v20 == 2 )
    {
      v23 = *(_QWORD *)(v19 + 8);
      if ( !*(_DWORD *)v23 )
        goto LABEL_69;
      if ( *(_DWORD *)(v8 + 56) == a3[8] && *(_DWORD *)v23 == 3 )
      {
        v40 = *(_QWORD **)(v23 + 8);
        if ( *(_DWORD *)v22 == 3 )
        {
          v42 = *(_QWORD **)(v22 + 8);
          if ( v42 )
          {
            if ( v40 )
            {
              sub_29F560((unsigned __int64 **)&v43, (__int64)v40);
              if ( !(unsigned __int8)sub_2A64C0(&v43, v41, v42, (__int64)v52, a6) )
              {
                if ( v43.m128i_i64[0] )
                {
                  sub_29EB30((unsigned __int64 **)&v43);
                  if ( v43.m128i_i64[0] )
                    qfree(v43.m128i_i64[0]);
                }
                goto LABEL_19;
              }
              if ( (unsigned int)sub_29E4E0(&v43, v40) )
              {
                sub_29F770((__int64)v49, a3, *(double *)a6.m128_u64);
                sub_29F770((__int64)v50, a3 + 4, *(double *)a6.m128_u64);
                v51 = a3[8];
                v24 = v50;
                if ( 1 == a4 )
                  v24 = v49;
                v25 = *(__m128i **)(*((_QWORD *)v24 + 1) + 8LL);
                if ( v25 != &v43 )
                {
                  sub_29F560(&v44, (__int64)&v43);
                  v26 = (unsigned __int64 *)v25->m128i_i64[0];
                  v25->m128i_i64[0] = (__int64)v44;
                  v44 = v26;
                  v27 = v25->m128i_i64[1];
                  v25->m128i_i64[1] = v45;
                  v45 = v27;
                  if ( v26 )
                  {
                    sub_29EB30(&v44);
                    if ( v44 )
                      qfree((__int64)v44);
                  }
                }
                if ( v43.m128i_i64[0] )
                {
                  sub_29EB30((unsigned __int64 **)&v43);
                  if ( v43.m128i_i64[0] )
                    qfree(v43.m128i_i64[0]);
                }
LABEL_55:
                v28 = *(_QWORD **)(a1 + 16);
                v29 = *(_DWORD *)(v8 + 64) + a5;
                a5 += *(_DWORD *)(v9 + 40);
                if ( v28 )
                {
                  v30 = *v28 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( v30 )
                  {
LABEL_57:
                    if ( (*(_BYTE *)v30 & 2) != 0 )
                      goto LABEL_61;
                    while ( 1 )
                    {
                      v31 = sub_29E6F0(v9, v30 + 24, *(double *)a6.m128_u64);
                      if ( v31 || (v31 = sub_29E6F0(v9 + 16, v30 + 40, *(double *)a6.m128_u64)) != 0 )
                      {
                        if ( v31 >= 0 )
                          goto LABEL_88;
                      }
                      else if ( *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v30 + 56) )
                      {
LABEL_88:
                        v36 = sub_29E6F0(v30 + 24, v9, *(double *)a6.m128_u64);
                        if ( v36 || (v36 = sub_29E6F0(v30 + 40, v9 + 16, *(double *)a6.m128_u64)) != 0 )
                        {
                          if ( v36 < 0 )
                            goto LABEL_90;
LABEL_84:
                          if ( *(_QWORD *)(a1 + 16) == v30 )
                            goto LABEL_61;
                          break;
                        }
                        if ( *(_DWORD *)(v30 + 56) >= *(_DWORD *)(v9 + 32) )
                          goto LABEL_84;
LABEL_90:
                        v30 = *(_QWORD *)(v30 + 16);
                        goto LABEL_57;
                      }
                      v30 = *(_QWORD *)(v30 + 8);
                      if ( (*(_BYTE *)v30 & 2) != 0 )
                        goto LABEL_61;
                    }
                  }
                  sub_2A5030((unsigned __int64 **)(a1 + 16), (__int64 *)v30, *(double *)a6.m128_u64);
                }
LABEL_61:
                sub_2A77F0(a1, v49, v29, *(double *)a6.m128_u64);
              }
              else if ( v43.m128i_i64[0] )
              {
                sub_29EB30((unsigned __int64 **)&v43);
                if ( v43.m128i_i64[0] )
                  qfree(v43.m128i_i64[0]);
              }
LABEL_62:
              v16 = 1;
              goto LABEL_63;
            }
          }
        }
      }
    }
LABEL_19:
    v54 = -1;
    sub_29EC30((__int64)v53, *(double *)a6.m128_u64);
    sub_29EC30((__int64)v52, *(double *)a6.m128_u64);
LABEL_10:
    if ( (*(_QWORD *)v8 & 2) != 0 )
    {
LABEL_14:
      if ( *(_QWORD *)(a1 + 16) == v8 )
        goto LABEL_15;
    }
    else
    {
      v13 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        v14 = (_QWORD *)(*(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL);
        v15 = *v14;
        if ( (*v14 & 2) != 0 || v8 != v14[2] )
        {
LABEL_13:
          v8 = (unsigned __int64)v14;
        }
        else
        {
          while ( 1 )
          {
            v8 = v15 & 0xFFFFFFFFFFFFFFFCLL;
            v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v15 & 2) != 0 )
              break;
            v21 = v14;
            v14 = (_QWORD *)v8;
            if ( v21 != *(_QWORD **)(v8 + 16) )
              goto LABEL_13;
          }
        }
        goto LABEL_14;
      }
      do
      {
        v8 = v13;
        v13 = *(_QWORD *)(v13 + 8);
      }
      while ( (*(_BYTE *)v13 & 2) == 0 );
      if ( *(_QWORD *)(a1 + 16) == v8 )
        goto LABEL_15;
    }
  }
  if ( (*(_DWORD *)(v19 + 4) & 0xFFFFFF7B) != 0 )
    goto LABEL_19;
  if ( *(_DWORD *)(v8 + 56) >= (signed int)a3[8] )
    goto LABEL_62;
LABEL_69:
  v32 = *(_QWORD **)(a1 + 16);
  a5 += *(_DWORD *)(v8 + 64);
  if ( v32 )
  {
    v33 = *v32 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v33 )
    {
LABEL_71:
      if ( (*(_BYTE *)v33 & 2) != 0 )
        goto LABEL_75;
      while ( 1 )
      {
        v34 = sub_29E6F0(v9, v33 + 24, *(double *)a6.m128_u64);
        if ( v34 || (v34 = sub_29E6F0(v9 + 16, v33 + 40, *(double *)a6.m128_u64)) != 0 )
        {
          if ( v34 >= 0 )
            goto LABEL_93;
        }
        else if ( *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v33 + 56) )
        {
LABEL_93:
          v35 = sub_29E6F0(v33 + 24, v9, *(double *)a6.m128_u64);
          if ( v35 || (v35 = sub_29E6F0(v33 + 40, v9 + 16, *(double *)a6.m128_u64)) != 0 )
          {
            if ( v35 < 0 )
              goto LABEL_95;
LABEL_78:
            if ( *(_QWORD *)(a1 + 16) == v33 )
              goto LABEL_75;
            break;
          }
          if ( *(_DWORD *)(v33 + 56) >= *(_DWORD *)(v9 + 32) )
            goto LABEL_78;
LABEL_95:
          v33 = *(_QWORD *)(v33 + 16);
          goto LABEL_71;
        }
        v33 = *(_QWORD *)(v33 + 8);
        if ( (*(_BYTE *)v33 & 2) != 0 )
          goto LABEL_75;
      }
    }
    sub_2A5030((unsigned __int64 **)(a1 + 16), (__int64 *)v33, *(double *)a6.m128_u64);
    v16 = 0;
  }
  else
  {
LABEL_75:
    v16 = 0;
  }
LABEL_63:
  if ( v54 )
    sub_2A77F0(a1, (unsigned int *)v52, a5, *(double *)a6.m128_u64);
  v54 = -1;
  sub_29EC30((__int64)v53, *(double *)a6.m128_u64);
  sub_29EC30((__int64)v52, *(double *)a6.m128_u64);
LABEL_16:
  v51 = -1;
  sub_29EC30((__int64)v50, *(double *)a6.m128_u64);
  sub_29EC30((__int64)v49, *(double *)a6.m128_u64);
  return v16;
}

