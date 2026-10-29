__int64 __fastcall sub_213400(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  _QWORD *v6; // r14
  _QWORD *v7; // rbp
  const char *v8; // rdi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  _QWORD *v15; // rbx
  __int64 func; // rax
  _QWORD *v18; // rsi
  __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // r13
  _QWORD *v22; // rbp
  const char *v23; // rdi
  __int64 v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 i; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  __int64 j; // rbx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rbp
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  __int64 v38; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+20h] [rbp-98h] BYREF
  __int64 v40; // [rsp+28h] [rbp-90h]
  __int128 v41; // [rsp+30h] [rbp-88h]
  _QWORD *v42; // [rsp+40h] [rbp-78h] BYREF
  __int128 v43; // [rsp+48h] [rbp-70h]
  unsigned __int64 v44; // [rsp+58h] [rbp-60h]
  __int128 v45; // [rsp+60h] [rbp-58h]
  int v46; // [rsp+70h] [rbp-48h]
  unsigned __int64 v47; // [rsp+78h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v42 = nullptr;
  v44 = 0;
  v46 = 1;
  v43 = 0;
  v45 = 0;
  sub_2B3E30(a1, &v42, a3);
  v6 = v42;
  v7 = &v42[12 * v43];
  if ( v42 == v7 )
  {
LABEL_24:
    func = get_func();
    if ( !func )
    {
      v9 = 0;
      goto LABEL_9;
    }
    v39 = func;
    v18 = (_QWORD *)a1;
    v41 = 0;
    v40 = 0;
    sub_148BC0(&v38, a1, &v39, nullptr, 1);
    v19 = v38;
    if ( v38 )
    {
      v20 = *(_QWORD *)(v38 + 8);
      v21 = *(_QWORD **)(v20 + 432);
      v22 = &v21[13 * *(_QWORD *)(v20 + 440)];
      if ( v22 == v21 )
      {
LABEL_63:
        v9 = 0;
      }
      else
      {
        while ( 1 )
        {
          v23 = s1;
          if ( v21[5] )
            v23 = (const char *)v21[4];
          v18 = a4;
          if ( !strcmp(v23, a4) )
            break;
          v21 += 13;
          if ( v21 == v22 )
            goto LABEL_63;
        }
        v18 = v21;
        copy_argloc();
        v24 = v21[2];
        v19 = v38;
        v9 = 1;
        *(_QWORD *)(a2 + 16) = v24;
        if ( !v19 )
          goto LABEL_51;
      }
      if ( (*(_DWORD *)(v19 + 104))-- == 1 )
      {
        sub_2540F0(v19, v18);
        v26 = *(_QWORD *)(v19 + 184);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v19 + 192);
          if ( v27 )
          {
            for ( i = 0; i != v27; ++i )
            {
              v29 = (_QWORD *)(v26 + 24 * i);
              if ( *v29 )
              {
                v29[1] = 0;
                qfree();
                v26 = *(_QWORD *)(v19 + 184);
              }
            }
          }
          *(_QWORD *)(v19 + 192) = 0;
          qfree();
        }
        if ( *(_QWORD *)(v19 + 160) )
        {
          *(_QWORD *)(v19 + 168) = 0;
          qfree();
        }
        v30 = *(_QWORD *)(v19 + 128);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v19 + 136);
          if ( v31 )
          {
            for ( j = 0; j != v31; ++j )
            {
              v33 = (_QWORD *)(v30 + 32 * j);
              if ( *v33 )
              {
                v33[1] = 0;
                qfree();
                v30 = *(_QWORD *)(v19 + 128);
              }
            }
          }
          *(_QWORD *)(v19 + 136) = 0;
          qfree();
        }
        sub_2507D0(v19 + 16);
        j__qfree();
      }
    }
    else
    {
      v9 = 0;
    }
LABEL_51:
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree();
    }
    goto LABEL_9;
  }
  while ( 1 )
  {
    v8 = s1;
    if ( v6[4] )
      v8 = (const char *)v6[3];
    if ( !strcmp(v8, a4) )
      break;
    v6 += 12;
    if ( v7 == v6 )
      goto LABEL_24;
  }
  copy_argloc();
  v9 = 1;
  *(_QWORD *)(a2 + 16) = v6[2];
LABEL_9:
  v10 = v44;
  if ( v44 )
  {
    v11 = *(_QWORD *)v44;
    if ( !(_QWORD)v45 )
    {
      *(_QWORD *)v44 = *(_QWORD *)v44 & 3LL | v44 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
      *(_QWORD *)v44 &= ~1uLL;
      *(_QWORD *)v44 |= 2uLL;
      goto LABEL_12;
    }
    v34 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_62:
      *(_QWORD *)v10 = v11 & 3 | v10 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64((__m128i)v44, (__m128i)v44);
      *(_QWORD *)v44 &= ~1uLL;
      *(_QWORD *)v44 |= 2uLL;
      *(_QWORD *)&v45 = 0;
LABEL_12:
      if ( v44 )
        qfree();
      goto LABEL_14;
    }
    v35 = *(_QWORD **)(v34 + 8);
    if ( (*(_BYTE *)v35 & 2) != 0 )
    {
      v36 = *(_QWORD **)(v34 + 16);
      if ( (*(_BYTE *)v36 & 2) != 0 )
        goto LABEL_66;
    }
    else
    {
      sub_211510(v35);
      v36 = *(_QWORD **)(v34 + 16);
      if ( (*(_BYTE *)v36 & 2) != 0 )
        goto LABEL_58;
    }
    sub_211510(v36);
LABEL_58:
    if ( (*(_BYTE *)v34 & 2) != 0 )
    {
LABEL_59:
      if ( v11 > 3 )
        qfree();
      v10 = v44;
      v11 = *(_QWORD *)v44;
      goto LABEL_62;
    }
LABEL_66:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v34 |= 2uLL;
    goto LABEL_59;
  }
LABEL_14:
  v12 = v42;
  if ( v42 )
  {
    v13 = v43;
    if ( (_QWORD)v43 )
    {
      v14 = 0;
      do
      {
        v15 = &v12[12 * v14];
        if ( v15[7] )
        {
          v15[8] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v15[3] )
        {
          v15[4] = 0;
          qfree();
        }
        ++v14;
        cleanup_argloc();
        v12 = v42;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  return v9;
}

