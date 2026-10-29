__int64 __fastcall sub_F600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rax
  unsigned int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // rbp
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rdi
  __int64 v27; // r8
  _QWORD *v28; // rsi
  __int64 v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // r12
  _QWORD *v33; // r13
  _QWORD *v34; // rax
  _QWORD *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbp
  char *v39; // rax
  int v40; // eax
  __int64 v41; // r12
  size_t v42; // r12
  char *v43; // r13
  char *v44; // r12
  char *j; // rbp
  __int64 v46; // rsi
  __int64 v47; // r14
  size_t v48; // r14
  _QWORD *v49; // rax
  _QWORD *v50; // r14
  _QWORD *i; // r12
  __int128 v52; // [rsp+0h] [rbp-198h] BYREF
  __int64 v53; // [rsp+10h] [rbp-188h]
  __int64 v54; // [rsp+18h] [rbp-180h]
  __int64 v55; // [rsp+20h] [rbp-178h]
  char v56; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v57[6]; // [rsp+168h] [rbp-30h] BYREF

  v6 = *(_BYTE *)(a1 + 336) == 0;
  v57[0] = __readfsqword(0x28u);
  if ( !v6 )
  {
    sub_D180(a1);
    *(_BYTE *)(a1 + 336) = 0;
  }
  v8 = *(_WORD *)(a2 + 24);
  v9 = v8;
  switch ( v8 )
  {
    case 0u:
    case 0xEu:
    case 0x10u:
    case 0x12u:
      goto LABEL_9;
    case 1u:
    case 3u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
      goto LABEL_12;
    case 2u:
      add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21, a4);
      v10 = *(_QWORD *)(a2 + 16);
      goto LABEL_10;
    case 4u:
    case 5u:
      v17 = *(_QWORD **)(a1 + 408);
      v10 = *(_QWORD *)(a2 + 16);
      if ( v17 )
      {
        v18 = (_QWORD *)(a1 + 400);
        do
        {
          a4 = v17[2];
          if ( v17[4] >= v10 )
          {
            v18 = v17;
            v17 = (_QWORD *)v17[2];
          }
          else
          {
            v17 = (_QWORD *)v17[3];
          }
        }
        while ( v17 );
        if ( (_QWORD *)(a1 + 400) != v18 && v10 >= v18[4] )
        {
          v46 = v18[5];
          if ( (unsigned __int64)(v46 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            add_cref(v10, v46, 19, a4);
            v10 = *(_QWORD *)(a2 + 16);
          }
        }
      }
      goto LABEL_10;
    case 0xAu:
      v25 = *(_QWORD **)(a1 + 408);
      v26 = *(_QWORD *)(a2 + 16);
      v27 = a1 + 400;
      if ( v25 )
      {
        v28 = (_QWORD *)(a1 + 400);
        do
        {
          a4 = v25[2];
          v9 = v25[3];
          if ( v25[4] >= v26 )
          {
            v28 = v25;
            v25 = (_QWORD *)v25[2];
          }
          else
          {
            v25 = (_QWORD *)v25[3];
          }
        }
        while ( v25 );
        if ( (_QWORD *)v27 != v28 && v26 >= v28[4] )
        {
          v29 = v28[5];
          if ( (unsigned __int64)(v29 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            add_cref(v26, v29, 19, a4);
            v26 = *(_QWORD *)(a2 + 16);
          }
        }
      }
      v30 = *(_QWORD **)(a1 + 456);
      v31 = (_QWORD *)(a1 + 448);
      if ( !v30 )
        goto LABEL_67;
      v32 = (_QWORD *)(a1 + 448);
      do
      {
        a4 = v30[2];
        v9 = v30[3];
        if ( v30[4] >= v26 )
        {
          v32 = v30;
          v30 = (_QWORD *)v30[2];
        }
        else
        {
          v30 = (_QWORD *)v30[3];
        }
      }
      while ( v30 );
      if ( v31 != v32 && v26 >= v32[4] && (v47 = v32[6]) != 0 )
      {
        v48 = 8 * v47;
        v49 = (_QWORD *)qalloc_or_throw(v48, v31, v9, a4, v27);
        v31 = (_QWORD *)v32[5];
        v33 = v49;
        memcpy(v49, v31, v48);
        v50 = &v33[v48 / 8];
        for ( i = v33; v50 != i; ++i )
        {
          v31 = (_QWORD *)*i;
          add_cref(*(_QWORD *)(a2 + 16), *i, 19, a4);
        }
        v26 = *(_QWORD *)(a2 + 16);
      }
      else
      {
LABEL_67:
        v33 = nullptr;
      }
      v34 = *(_QWORD **)(a1 + 360);
      v35 = (_QWORD *)(a1 + 352);
      if ( !v34 )
        goto LABEL_77;
      v31 = (_QWORD *)(a1 + 352);
      do
      {
        a4 = v34[2];
        v9 = v34[3];
        if ( v34[4] >= v26 )
        {
          v31 = v34;
          v34 = (_QWORD *)v34[2];
        }
        else
        {
          v34 = (_QWORD *)v34[3];
        }
      }
      while ( v34 );
      if ( v35 == v31 || v26 < v31[4] )
      {
LABEL_77:
        v36 = getseg(v26, v31, v9, a4, v35);
        if ( v36 )
        {
          if ( *(_BYTE *)(v36 + 184) == 2 )
            add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21, v37);
        }
      }
      if ( v33 )
        qfree(v33);
      return 1;
    case 0xBu:
    case 0xCu:
      goto LABEL_35;
    case 0xDu:
      v21 = *(_QWORD **)(a1 + 456);
      v22 = a1 + 448;
      v10 = *(_QWORD *)(a2 + 16);
      v23 = (_QWORD *)(a1 + 448);
      if ( !v21 )
        goto LABEL_10;
      do
      {
        a4 = v21[2];
        v24 = v21[3];
        if ( v21[4] >= v10 )
        {
          v23 = v21;
          v21 = (_QWORD *)v21[2];
        }
        else
        {
          v21 = (_QWORD *)v21[3];
        }
      }
      while ( v21 );
      if ( v23 == (_QWORD *)v22 )
        goto LABEL_10;
      if ( v10 < v23[4] )
        goto LABEL_10;
      v41 = v23[6];
      if ( !v41 )
        goto LABEL_10;
      v42 = 8 * v41;
      v43 = (char *)qalloc_or_throw(v42, v22, v24, a4, a5);
      memcpy(v43, (const void *)v23[5], v42);
      v44 = &v43[v42];
      for ( j = v43; v44 != j; j += 8 )
      {
        if ( (unsigned __int64)(*(_QWORD *)j - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
          add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)j, 19, a4);
      }
      if ( !v43 )
        goto LABEL_9;
      qfree(v43);
      v10 = *(_QWORD *)(a2 + 16);
      goto LABEL_10;
    case 0xFu:
    case 0x11u:
      v14 = *(_QWORD *)(a2 + 48);
      if ( v14 < *(_QWORD *)(a1 + 216)
        && (v15 = (unsigned int *)(*(_QWORD *)(a1 + 208) + 16 * v14)) != nullptr
        && (v16 = *v15) != 0 )
      {
        add_cref(*(_QWORD *)(a2 + 16), v16, 16, a4);
        v10 = *(_QWORD *)(a2 + 16);
      }
      else
      {
        sub_9C70((__int64)"failed to resolve call @0x%llx for index %u\n", *(_QWORD *)(a2 + 16), v14);
        v10 = *(_QWORD *)(a2 + 16);
      }
      goto LABEL_10;
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
      sub_C810((_QWORD *)a1, a2, 0);
      v10 = *(_QWORD *)(a2 + 16);
      goto LABEL_10;
    case 0x1Cu:
    case 0x1Du:
      v12 = *(_QWORD *)(a2 + 48);
      v10 = *(_QWORD *)(a2 + 16);
      if ( v12 < *(_QWORD *)(a1 + 240) )
      {
        v13 = *(_QWORD *)(a1 + 232) + 96 * v12;
        if ( v13 )
        {
          add_dref(v10, *(_QWORD *)(v13 + 8), (unsigned int)(v8 == 28) + 2);
          v10 = *(_QWORD *)(a2 + 16);
        }
      }
      goto LABEL_10;
    default:
      if ( v8 == 188 )
      {
LABEL_35:
        v19 = *(_QWORD **)(a1 + 408);
        v10 = *(_QWORD *)(a2 + 16);
        if ( v19 )
        {
          v20 = (_QWORD *)(a1 + 400);
          do
          {
            a4 = v19[2];
            if ( v19[4] >= v10 )
            {
              v20 = v19;
              v19 = (_QWORD *)v19[2];
            }
            else
            {
              v19 = (_QWORD *)v19[3];
            }
          }
          while ( v19 );
          if ( v20 != (_QWORD *)(a1 + 400) && v10 >= v20[4] )
          {
            v38 = v20[5];
            if ( (unsigned __int64)(v38 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            {
              v53 = -1;
              v39 = &v56;
              v54 = 0;
              v55 = 0;
              v52 = -1;
              do
              {
                *(_WORD *)v39 = 0;
                v39 += 40;
                *((_WORD *)v39 - 19) = 0;
                *((_WORD *)v39 - 18) = 0;
                *((_DWORD *)v39 - 2) = 0;
                *((_WORD *)v39 - 17) = 0;
                *((_OWORD *)v39 - 2) = 0;
                *((_QWORD *)v39 - 2) = 0;
              }
              while ( v57 != (_QWORD *)v39 );
              v40 = decode_insn(&v52, v10 + *(unsigned __int16 *)(a2 + 26), v57, 0.0);
              v10 = *(_QWORD *)(a2 + 16);
              if ( !v40 || (_WORD)v54 != 10 )
              {
                add_cref(v10, v38, 19, a4);
                v10 = *(_QWORD *)(a2 + 16);
              }
            }
          }
        }
      }
      else
      {
        if ( v8 != 540 )
        {
LABEL_12:
          if ( (unsigned __int8)has_insn_feature(v8, 2) )
            sub_9C70((__int64)"unhandled call at 0x%llx\n", *(_QWORD *)(a2 + 16));
          if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
          {
            if ( *(_BYTE *)(a2 + 41) == 8 )
              sub_C810((_QWORD *)a1, a2, 0);
            if ( *(_BYTE *)(a2 + 81) == 8 )
              sub_C810((_QWORD *)a1, a2, 1u);
            if ( *(_BYTE *)(a2 + 121) == 8 )
              sub_C810((_QWORD *)a1, a2, 2u);
          }
LABEL_9:
          v10 = *(_QWORD *)(a2 + 16);
          goto LABEL_10;
        }
        if ( *(_BYTE *)(a2 + 41) == 8 )
          sub_C810((_QWORD *)a1, a2, 0);
        if ( *(_BYTE *)(a2 + 81) != 8 )
          goto LABEL_9;
        sub_C810((_QWORD *)a1, a2, 1u);
        v10 = *(_QWORD *)(a2 + 16);
      }
LABEL_10:
      add_cref(v10, v10 + *(unsigned __int16 *)(a2 + 26), 21, a4);
      return 1;
  }
}
