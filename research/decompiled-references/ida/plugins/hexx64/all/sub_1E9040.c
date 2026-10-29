unsigned __int64 __fastcall sub_1E9040(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // r10
  _QWORD *v8; // rbp
  __int64 *v9; // r15
  unsigned __int64 *v10; // r14
  unsigned __int8 v11; // al
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // r14
  _QWORD *i; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rdx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int8 v34; // al
  char v35; // al
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __m128i *v41; // r11
  char v42; // al
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __m128i v52; // xmm1
  unsigned __int64 v53; // rax
  unsigned __int8 v54; // cl
  char v55; // al
  unsigned __int8 v56; // dl
  __int64 v57; // rsi
  char v58; // dl
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rdx
  _BYTE *v62; // rdx
  __int64 *v63; // rax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  int v69; // [rsp+0h] [rbp-78h]
  unsigned __int64 v70; // [rsp+0h] [rbp-78h]
  __int64 v71; // [rsp+8h] [rbp-70h]
  __int64 *v72; // [rsp+8h] [rbp-70h]
  char v73; // [rsp+17h] [rbp-61h] BYREF
  unsigned __int64 v74; // [rsp+18h] [rbp-60h] BYREF
  const __m128i *v75; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 *v76; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v77; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v78; // [rsp+38h] [rbp-40h]

  v78 = __readfsqword(0x28u);
  v5 = *(unsigned __int64 **)(a1 + 8);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      v6 = *(_QWORD **)(a2 + 8);
      v7 = v5[1];
      if ( !v6 || !*(_QWORD *)(a2 + 16) )
        goto LABEL_25;
    }
    else
    {
      v6 = *(_QWORD **)(a2 + 8);
      if ( !v6 )
        return v78 - __readfsqword(0x28u);
      v7 = *(_QWORD *)(a1 + 8);
      if ( !*(_QWORD *)(a2 + 16) )
        return v78 - __readfsqword(0x28u);
    }
    v8 = (_QWORD *)v6[1];
    if ( v8 == v6 )
      goto LABEL_25;
  }
  else
  {
    v36 = *(_QWORD **)(a2 + 8);
    if ( !v36 )
      return v78 - __readfsqword(0x28u);
    if ( !*(_QWORD *)(a2 + 16) )
      return v78 - __readfsqword(0x28u);
    v8 = (_QWORD *)v36[1];
    if ( v8 == v36 )
      return v78 - __readfsqword(0x28u);
    v7 = 0;
  }
  do
  {
    v9 = v8 + 3;
    v10 = v5;
    v69 = *((_DWORD *)v8 + 11);
    v71 = v8[3];
    if ( v5 != (unsigned __int64 *)v7 )
    {
      while ( 1 )
      {
        v11 = *((_BYTE *)v8 + 32);
        v12 = (__int64 *)(v7 + 24);
        if ( *(_BYTE *)(v7 + 32) >= v11
          && (*(_BYTE *)(v7 + 32) != v11 || *(_QWORD *)(v7 + 24) + *(int *)(v7 + 44) > *v9) )
        {
          break;
        }
        v13 = *(_QWORD *)v7;
        v14 = *(_QWORD *)v7 & 2LL;
        if ( *(_DWORD *)(v7 + 40) == 8 )
        {
          if ( !v14 )
          {
            v26 = *(_QWORD *)(v7 + 16);
            if ( (*(_BYTE *)v26 & 2) != 0 )
            {
              v31 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              v32 = *v31;
              if ( (*v31 & 2) == 0 )
              {
                while ( v31[2] == v7 )
                {
                  v7 = (unsigned __int64)v31;
                  v33 = v32 & 0xFFFFFFFFFFFFFFFCLL;
                  v32 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v32 & 2) != 0 )
                  {
                    v7 = v33;
                    goto LABEL_16;
                  }
                  v31 = (__int64 *)v33;
                }
              }
              v7 = (unsigned __int64)v31;
            }
            else
            {
              do
              {
                v7 = v26;
                v26 = *(_QWORD *)(v26 + 8);
              }
              while ( (*(_BYTE *)v26 & 2) == 0 );
            }
          }
        }
        else
        {
          v15 = (_QWORD *)v7;
          if ( !v14 )
          {
            v15 = *(_QWORD **)(v7 + 16);
            if ( (*(_BYTE *)v15 & 2) != 0 )
            {
              v27 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
              v28 = v7;
              v29 = *v27;
              v15 = v27;
              if ( (*v27 & 2) == 0 )
              {
                while ( v15[2] == v28 )
                {
                  v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
                  v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v29 & 2) != 0 )
                  {
                    v15 = (_QWORD *)v30;
                    break;
                  }
                  v28 = (unsigned __int64)v15;
                  v15 = (_QWORD *)v30;
                }
              }
            }
            else
            {
              for ( i = (_QWORD *)v15[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
                v15 = i;
            }
          }
          sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v7);
          v5 = *(unsigned __int64 **)(a1 + 8);
          v7 = (unsigned __int64)v15;
        }
LABEL_16:
        if ( v5 == (unsigned __int64 *)v7 )
          goto LABEL_17;
      }
      if ( v5 == (unsigned __int64 *)v7 )
      {
LABEL_17:
        v17 = (unsigned __int64)v5;
      }
      else
      {
        v34 = *(_BYTE *)(v7 + 32);
        if ( *((_BYTE *)v8 + 32) >= v34 && (v34 != *((_BYTE *)v8 + 32) || v71 + v69 > *v12) )
        {
          if ( *v12 == *v9 && v69 == *(_DWORD *)(v7 + 44) )
          {
            v72 = (__int64 *)v7;
            v70 = v7 + 24;
            sub_314C00((int *)(v7 + 40), (int *)v8 + 10);
            v7 = (unsigned __int64)v72;
            v37 = *v72;
            v38 = *v72 & 2;
            if ( *(_DWORD *)(v70 + 16) == 1 )
            {
              v60 = (unsigned __int64)v72;
              if ( !v38 )
              {
                v61 = v72[2];
                if ( (*(_BYTE *)v61 & 2) != 0 )
                {
                  v60 = v37 & 0xFFFFFFFFFFFFFFFCLL;
                  v66 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v66 & 2) == 0 )
                  {
                    v67 = (unsigned __int64)v72;
                    do
                    {
                      if ( v67 != *(_QWORD *)(v60 + 16) )
                        break;
                      v67 = v60;
                      v68 = v66 & 0xFFFFFFFFFFFFFFFCLL;
                      v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCLL);
                      v60 = v68;
                    }
                    while ( (v66 & 2) == 0 );
                  }
                }
                else
                {
                  do
                  {
                    v60 = v61;
                    v61 = *(_QWORD *)(v61 + 8);
                  }
                  while ( (*(_BYTE *)v61 & 2) == 0 );
                }
              }
              sub_1E3D90((unsigned __int64 **)(a1 + 8), v72);
              v5 = *(unsigned __int64 **)(a1 + 8);
              v7 = v60;
              goto LABEL_20;
            }
            if ( !v38 )
            {
              v39 = v72[2];
              if ( (*(_BYTE *)v39 & 2) != 0 )
              {
                v63 = (__int64 *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                v64 = v72;
                v65 = *v63;
                if ( (*v63 & 2) == 0 )
                {
                  while ( v64 == (__int64 *)v63[2] )
                  {
                    v64 = v63;
                    v7 = v65 & 0xFFFFFFFFFFFFFFFCLL;
                    v65 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v65 & 2) != 0 )
                      goto LABEL_59;
                    v63 = (__int64 *)v7;
                  }
                }
                v5 = *(unsigned __int64 **)(a1 + 8);
                v7 = (unsigned __int64)v63;
                goto LABEL_20;
              }
              do
              {
                v7 = v39;
                v39 = *(_QWORD *)(v39 + 8);
              }
              while ( (*(_BYTE *)v39 & 2) == 0 );
            }
          }
          else if ( *(_DWORD *)(v7 + 40) == 8
                 || *((_DWORD *)v8 + 10) == 8
                 || (v74 = v7,
                     v35 = sub_1E5560((unsigned __int64 **)a1, &v74, (const __m128i *)(v8 + 3), (__int64)(v8 + 5)),
                     v7 = v74,
                     !v35) )
          {
            v74 = v7;
            v74 = sub_1E47E0(a1, v7, (const __m128i *)(v8 + 3), v69);
            v7 = v74;
          }
LABEL_59:
          v5 = *(unsigned __int64 **)(a1 + 8);
          goto LABEL_20;
        }
        v17 = v7;
        v7 = (unsigned __int64)v5;
      }
      v10 = (unsigned __int64 *)v7;
      v7 = v17;
    }
    if ( *((_DWORD *)v8 + 10) != 8 )
      goto LABEL_20;
    v75 = (const __m128i *)(v8 + 3);
    v41 = (__m128i *)(a1 + 8);
    if ( !v10 )
    {
      v51 = qalloc();
      v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v51, (__m128i)(unsigned __int64)v51);
      if ( !v51 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v51 + 64) = 0;
      v41 = (__m128i *)(a1 + 8);
      *(_OWORD *)(v51 + 16) = 0;
      *(_OWORD *)(v51 + 32) = 0;
      *(_OWORD *)(v51 + 48) = 0;
      *(_QWORD *)v51 = v51 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v51 + 8) = v52;
      *(_QWORD *)(a1 + 8) = v51;
      *(_QWORD *)v51 = v51 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v51 & 3LL;
      *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                  (__m128i)*(unsigned __int64 *)(a1 + 8));
      **(_QWORD **)(a1 + 8) &= ~1uLL;
      **(_QWORD **)(a1 + 8) |= 2uLL;
      v5 = *(unsigned __int64 **)(a1 + 8);
LABEL_101:
      v53 = sub_1E8B00(v41, v5, 1, &v75);
      v5 = *(unsigned __int64 **)(a1 + 8);
      v7 = v53;
      goto LABEL_20;
    }
    if ( !*(_QWORD *)(a1 + 16) )
      goto LABEL_101;
    v76 = v10;
    v73 = 1;
    v77 = 0;
    if ( v7 )
    {
      v42 = sub_88E40((unsigned __int64 *)(a1 + 8), (__int64)(v8 + 3), v7, (unsigned __int64 *)&v76, &v73, &v77);
      v41 = (__m128i *)(a1 + 8);
      if ( v42 )
      {
        v7 = v77;
        if ( !v77 )
        {
          v43 = sub_1E8B00((__m128i *)(a1 + 8), v76, v73, &v75);
          v5 = *(unsigned __int64 **)(a1 + 8);
          v7 = v43;
          goto LABEL_20;
        }
        goto LABEL_59;
      }
    }
    v7 = *v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v7 & 2) != 0 )
    {
      v58 = 1;
      goto LABEL_110;
    }
    v54 = *((_BYTE *)v8 + 32);
    v55 = 1;
    while ( 1 )
    {
      v56 = *(_BYTE *)(v7 + 32);
      if ( v54 >= v56 )
      {
        if ( v56 < v54 )
          goto LABEL_116;
        v57 = *(_QWORD *)(v7 + 24);
        if ( *v9 >= v57 )
          break;
      }
      v62 = *(_BYTE **)(v7 + 8);
      v55 = 1;
LABEL_117:
      if ( (*v62 & 2) != 0 )
        goto LABEL_109;
      v7 = (unsigned __int64)v62;
    }
    if ( *v9 > v57 )
    {
LABEL_116:
      v62 = *(_BYTE **)(v7 + 16);
      v55 = 0;
      goto LABEL_117;
    }
    if ( v7 )
      goto LABEL_59;
LABEL_109:
    v58 = v55;
    v10 = (unsigned __int64 *)v7;
LABEL_110:
    v59 = sub_1E8B00(v41, v10, v58, &v75);
    v5 = *(unsigned __int64 **)(a1 + 8);
    v7 = v59;
LABEL_20:
    if ( (*v8 & 2) == 0 )
    {
      v18 = (_QWORD *)v8[2];
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v19 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
        v20 = *v19;
        if ( (*v19 & 2) == 0 )
        {
          while ( v8 == (_QWORD *)v19[2] )
          {
            v8 = v19;
            v40 = v20 & 0xFFFFFFFFFFFFFFFCLL;
            v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v20 & 2) != 0 )
            {
              v8 = (_QWORD *)v40;
              goto LABEL_24;
            }
            v19 = (_QWORD *)v40;
          }
        }
        v8 = v19;
      }
      else
      {
        do
        {
          v8 = v18;
          v18 = (_QWORD *)v18[1];
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
      }
    }
LABEL_24:
    ;
  }
  while ( *(_QWORD **)(a2 + 8) != v8 );
LABEL_25:
  if ( v5 != (unsigned __int64 *)v7 )
  {
    do
    {
      v21 = *(_QWORD *)v7;
      v22 = *(_QWORD *)v7 & 2LL;
      if ( *(_DWORD *)(v7 + 40) == 8 )
      {
        if ( !v22 )
        {
          v44 = *(_QWORD *)(v7 + 16);
          if ( (*(_BYTE *)v44 & 2) != 0 )
          {
            v48 = (__int64 *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
            v49 = *v48;
            if ( (*v48 & 2) == 0 )
            {
              while ( v48[2] == v7 )
              {
                v7 = (unsigned __int64)v48;
                v50 = v49 & 0xFFFFFFFFFFFFFFFCLL;
                v49 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v49 & 2) != 0 )
                {
                  v7 = v50;
                  goto LABEL_31;
                }
                v48 = (__int64 *)v50;
              }
            }
            v7 = (unsigned __int64)v48;
          }
          else
          {
            do
            {
              v7 = v44;
              v44 = *(_QWORD *)(v44 + 8);
            }
            while ( (*(_BYTE *)v44 & 2) == 0 );
          }
        }
      }
      else
      {
        v23 = v7;
        if ( !v22 )
        {
          v24 = *(_QWORD *)(v7 + 16);
          if ( (*(_BYTE *)v24 & 2) != 0 )
          {
            v45 = v7;
            v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
            v46 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v46 & 2) == 0 )
            {
              while ( v45 == *(_QWORD *)(v23 + 16) )
              {
                v47 = v46 & 0xFFFFFFFFFFFFFFFCLL;
                v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v46 & 2) != 0 )
                {
                  v23 = v47;
                  break;
                }
                v45 = v23;
                v23 = v47;
              }
            }
          }
          else
          {
            do
            {
              v23 = v24;
              v24 = *(_QWORD *)(v24 + 8);
            }
            while ( (*(_BYTE *)v24 & 2) == 0 );
          }
        }
        sub_1E3D90((unsigned __int64 **)(a1 + 8), (__int64 *)v7);
        v7 = v23;
      }
LABEL_31:
      ;
    }
    while ( *(_QWORD *)(a1 + 8) != v7 );
  }
  return v78 - __readfsqword(0x28u);
}

