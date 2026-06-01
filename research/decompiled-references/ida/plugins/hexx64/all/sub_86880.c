__int64 __fastcall sub_86880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v18; // r12
  int v19; // eax
  __int64 v20; // r12
  bool v21; // cc
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r13
  char **v29; // rcx
  char *v30; // r15
  char *v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+18h] [rbp-80h]
  int v39; // [rsp+20h] [rbp-78h]
  unsigned int v40; // [rsp+24h] [rbp-74h]
  __int64 v41; // [rsp+28h] [rbp-70h]
  _QWORD v42[2]; // [rsp+30h] [rbp-68h] BYREF
  char **v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned int v45; // [rsp+50h] [rbp-48h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v42[0] = a2;
  v42[1] = a3 + a2;
  v5 = j__qalloc_or_throw(224, a3 + a2, a3, a4);
  sub_256FC0((__int64 *)v5, a1);
  v44 = v5;
  v43 = (char **)v42;
  v45 = 0;
  v45 = unpack_dd();
  if ( v45 <= 5 && (unsigned __int8)sub_85210(&v43, v44 + 16, a5) )
  {
    v18 = v44;
    *(_DWORD *)(v18 + 56) = unpack_dd();
    v19 = unpack_dd();
    v20 = v44;
    v21 = v45 <= 4;
    *(_DWORD *)(v44 + 108) = v19;
    if ( v21 )
    {
LABEL_24:
      *(_DWORD *)(v5 + 108) &= 0xFFFFFFFC;
      sub_3252D0(v5, 0, 1);
      return v5;
    }
    *(_BYTE *)(v20 + 208) = 1;
    v40 = unpack_dd();
    if ( v43[1] - *v43 >= (unsigned __int64)v40 )
    {
      v22 = *(_QWORD *)(v20 + 192);
      v23 = 0;
      if ( v22 )
      {
        do
        {
          v24 = (__int64 *)(*(_QWORD *)(v20 + 184) + 24 * v23);
          v25 = *v24;
          if ( *v24 )
          {
            v24[1] = 0;
            qfree(v25);
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      *(_QWORD *)(v20 + 192) = 0;
      v41 = v20 + 184;
      if ( *(_QWORD *)(v20 + 200) < (unsigned __int64)v40 )
      {
        *(_QWORD *)(v20 + 184) = qvector_reserve(v41, *(_QWORD *)(v20 + 184), v40, 24);
      }
      else if ( !v40 )
      {
        goto LABEL_24;
      }
      v39 = 0;
      do
      {
        v26 = *(_QWORD *)(v20 + 192);
        v27 = *(_QWORD *)(v20 + 184);
        if ( *(_QWORD *)(v20 + 200) < (unsigned __int64)(v26 + 1) )
        {
          v35 = qvector_reserve(v41, v27, v26 + 1, 24);
          *(_QWORD *)(v20 + 184) = v35;
          v26 = *(_QWORD *)(v20 + 192);
          v27 = v35;
        }
        v28 = v27 + 24 * v26;
        *(_QWORD *)v28 = 0;
        v29 = v43;
        *(_OWORD *)(v28 + 8) = 0;
        ++*(_QWORD *)(v20 + 192);
        v30 = *v29;
        v31 = *v29;
        while ( v31 < v29[1] )
        {
          if ( !*v31++ )
          {
            *v29 = v31;
            if ( v30 )
            {
              v32 = *(_QWORD *)(v28 + 8);
              v33 = v31 - v30 - 1;
              n = v33;
              v37 = v33;
              if ( v32 )
                v37 = --v32 + v33;
              v34 = *(_QWORD *)v28;
              if ( *(_QWORD *)(v28 + 16) < (unsigned __int64)(v37 + 1) )
              {
                v36 = qvector_reserve(v28, v34, v37 + 1, 1);
                *(_QWORD *)v28 = v36;
                v34 = v36;
              }
              *(_QWORD *)(v28 + 8) = v37 + 1;
              *(_BYTE *)(v34 + v37) = 0;
              memmove((void *)(v32 + *(_QWORD *)v28), v30, n);
            }
            break;
          }
        }
        ++v39;
      }
      while ( v39 != v40 );
      goto LABEL_24;
    }
  }
  *(_QWORD *)(v5 + 8) = 0;
  if ( v5 )
  {
    sub_258970((__int64 *)v5);
    v6 = *(_QWORD *)(v5 + 184);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v5 + 192);
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (__int64 *)(v6 + 24 * i);
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = 0;
            qfree(v10);
            v6 = *(_QWORD *)(v5 + 184);
          }
        }
      }
      *(_QWORD *)(v5 + 192) = 0;
      qfree(v6);
    }
    v11 = *(_QWORD *)(v5 + 160);
    if ( v11 )
    {
      *(_QWORD *)(v5 + 168) = 0;
      qfree(v11);
    }
    v12 = *(_QWORD *)(v5 + 128);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v5 + 136);
      if ( v13 )
      {
        for ( j = 0; j != v13; ++j )
        {
          v15 = (__int64 *)(v12 + 32 * j);
          v16 = *v15;
          if ( *v15 )
          {
            v15[1] = 0;
            qfree(v16);
            v12 = *(_QWORD *)(v5 + 128);
          }
        }
      }
      *(_QWORD *)(v5 + 136) = 0;
      qfree(v12);
    }
    sub_255050(v5 + 16);
    j__qfree(v5);
  }
  return 0;
}

