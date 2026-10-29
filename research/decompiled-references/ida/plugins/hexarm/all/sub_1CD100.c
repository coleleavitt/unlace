unsigned __int64 __fastcall sub_1CD100(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // r14
  unsigned __int64 *v11; // r9
  char v12; // al
  unsigned __int64 *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rax
  __int64 v18; // rbx
  bool v19; // cf
  int *v20; // rbx
  __int128 *v21; // r15
  __int128 *v22; // r8
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  char v25; // cl
  int *v26; // rax
  __int128 *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 *v31; // r12
  int *v32; // rax
  int *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // [rsp+0h] [rbp-B8h]
  __int128 *v39; // [rsp+8h] [rbp-B0h]
  int v40; // [rsp+18h] [rbp-A0h] BYREF
  int *v41; // [rsp+20h] [rbp-98h]
  int *v42; // [rsp+28h] [rbp-90h]
  int *v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  __m128i v45; // [rsp+40h] [rbp-78h]
  __int64 v46; // [rsp+50h] [rbp-68h]
  int v47; // [rsp+58h] [rbp-60h]
  __int128 v48; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1200);
  if ( v3 )
  {
    if ( *(_DWORD *)(a2 + 96) )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + (v7 << 6));
        v9 = sub_1CCA10(*(_QWORD **)(a1 + 1192), *(_QWORD *)(a1 + 1192) + 16 * v3, v8);
        v10 = v9;
        if ( v9 == v11 || v8 != *v9 )
        {
          v12 = sub_317400(a3[3], v8);
          v38 = 0;
          v13 = *(unsigned __int64 **)(a1 + 1192);
          if ( !v12 && v13 != v10 )
            v38 = *(v10 - 1);
          v14 = *(_QWORD *)(a1 + 1200);
          v15 = (char *)((char *)v10 - (char *)v13);
          if ( *(_QWORD *)(a1 + 1208) < (unsigned __int64)(v14 + 1) )
          {
            v16 = qvector_reserve();
            v15 = (char *)((char *)v10 - (char *)v13);
            v14 = *(_QWORD *)(a1 + 1200);
            *(_QWORD *)(a1 + 1192) = v16;
            v10 = (unsigned __int64 *)(v16 + (char *)v10 - (char *)v13);
          }
          memmove(v10 + 2, v10, 16 * v14 - (_QWORD)v15);
          *v10 = v8;
          v10[1] = v38;
          ++*(_QWORD *)(a1 + 1200);
        }
        if ( ++v7 >= (unsigned __int64)*(int *)(a2 + 96) )
          break;
        v3 = *(_QWORD *)(a1 + 1200);
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 16LL))(a3) )
    {
      v18 = *(_QWORD *)(a1 + 1200) - 1LL;
      if ( v18 >= 0 )
      {
        do
        {
          while ( sub_64330(a3 + 4, v18) )
          {
            v19 = v18-- == 0;
            if ( v19 )
              goto LABEL_24;
          }
          memmove(
            (void *)(*(_QWORD *)(a1 + 1192) + 16 * v18),
            (const void *)(*(_QWORD *)(a1 + 1192) + 16 * v18 + 16),
            16 * (*(_QWORD *)(a1 + 1200) - v18) - 16);
          --*(_QWORD *)(a1 + 1200);
          v19 = v18-- == 0;
        }
        while ( !v19 );
      }
    }
LABEL_24:
    v20 = *(int **)(a1 + 8);
    v40 = 0;
    v41 = nullptr;
    v42 = &v40;
    v43 = &v40;
    v44 = 0;
    v46 = 0;
    v47 = -1;
    v45 = 0;
    v48 = 0;
    if ( v20 )
    {
      if ( (unsigned __int8)func_tail_iterator_set() )
      {
        v21 = (__int128 *)v45.m128i_i64[0];
        v20 = v41;
        goto LABEL_27;
      }
    }
    else
    {
      v21 = *(__int128 **)(a1 + 16);
      v27 = &v21[*(_QWORD *)(a1 + 24)];
      v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v27);
      if ( v21 != v27 )
      {
LABEL_27:
        if ( v21 )
        {
          v22 = v21;
        }
        else
        {
          v21 = (__int128 *)v46;
          if ( v46 )
            goto LABEL_29;
          v22 = nullptr;
          v21 = &v48;
        }
        while ( 1 )
        {
          v23 = *(_QWORD *)v21;
          if ( !v20 )
            break;
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = *((_QWORD *)v20 + 4);
              v25 = 0;
              v26 = *((int **)v20 + 3);
              if ( v23 < v24 )
              {
                v26 = *((int **)v20 + 2);
                v25 = 1;
              }
              if ( !v26 )
                break;
              v20 = v26;
            }
            if ( v25 )
            {
              if ( v42 != v20 )
              {
LABEL_61:
                v39 = v22;
                v37 = std::_Rb_tree_decrement();
                v22 = v39;
                v24 = *(_QWORD *)(v37 + 32);
                goto LABEL_39;
              }
LABEL_40:
              *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)v21;
              std::_Rb_tree_insert_and_rebalance();
              ++v44;
              v22 = (__int128 *)v45.m128i_i64[0];
              goto LABEL_41;
            }
LABEL_39:
            if ( v24 < v23 )
              goto LABEL_40;
LABEL_41:
            if ( !v22 )
              break;
            v21 = v22 + 1;
            v45.m128i_i64[0] = (__int64)(v22 + 1);
            if ( v22 + 1 == (__int128 *)v45.m128i_i64[1] )
              goto LABEL_47;
            v20 = v41;
            v23 = *(_QWORD *)v21;
            ++v22;
            if ( !v41 )
              goto LABEL_44;
          }
          v21 = (__int128 *)v46;
          if ( !v46 || v47 + 1 >= *(_DWORD *)(v46 + 128) )
            goto LABEL_47;
          ++v47;
          v20 = v41;
LABEL_29:
          v22 = nullptr;
          if ( v47 >= 0 && v47 < *((_DWORD *)v21 + 32) )
            v21 = (__int128 *)(*((_QWORD *)v21 + 17) + 16LL * v47);
        }
LABEL_44:
        if ( v42 != &v40 )
          goto LABEL_61;
        goto LABEL_40;
      }
    }
LABEL_47:
    v28 = *(_QWORD *)(a1 + 1200) - 1LL;
    if ( v28 > 0 )
    {
      do
      {
        v29 = v28;
        v30 = v28--;
        v31 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1192) + 16 * v29);
        if ( v31[1] == *(v31 - 1) )
        {
          v32 = v41;
          if ( v41 )
          {
            v33 = &v40;
            do
            {
              while ( 1 )
              {
                v34 = *((_QWORD *)v32 + 2);
                v35 = *((_QWORD *)v32 + 3);
                if ( *v31 >= *((_QWORD *)v32 + 4) )
                  break;
                v33 = v32;
                v32 = *((int **)v32 + 2);
                if ( !v34 )
                  goto LABEL_56;
              }
              v32 = *((int **)v32 + 3);
            }
            while ( v35 );
          }
          else
          {
            v33 = &v40;
          }
LABEL_56:
          if ( v33 == v42 || (v36 = *(_QWORD *)(std::_Rb_tree_decrement() + 32), *(v31 - 2) >= v36) || *v31 < v36 )
          {
            memmove(v31, v31 + 2, 16 * (*(_QWORD *)(a1 + 1200) - v30) - 16);
            --*(_QWORD *)(a1 + 1200);
          }
        }
      }
      while ( v28 );
    }
    if ( v46 )
      lock_func_range();
    sub_1CCB40(v41);
  }
  return v49 - __readfsqword(0x28u);
}

