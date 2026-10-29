__int64 *__fastcall sub_73C0(char **a1, __int64 *a2, __int64 *a3, unsigned __int64 a4)
{
  __int64 *v4; // r13
  unsigned __int64 bkt; // rax
  unsigned __int64 v7; // rbp
  void *v8; // rax
  char *v9; // rcx
  __int64 *result; // rax
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r12
  __int64 *v14; // r11
  unsigned __int64 v15; // r14
  unsigned __int16 v16; // si
  __int64 v17; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char *v23; // r15
  __int64 **v24; // rcx
  __int64 *v25; // rax
  unsigned __int64 v26; // r9
  size_t v27; // r14
  char *v28; // rsi
  unsigned __int64 v29; // rdi
  char *v30; // rcx
  unsigned __int64 v31; // rdx
  char *v32; // rax
  char *v33; // rax
  std::__detail::_Prime_rehash_policy *v35; // [rsp+10h] [rbp-58h]
  __int64 *v36; // [rsp+18h] [rbp-50h]
  char *v37; // [rsp+20h] [rbp-48h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  v4 = a2;
  *a1 = (char *)(a1 + 6);
  a1[1] = (_BYTE *)(&dword_0 + 1);
  a1[2] = nullptr;
  a1[3] = nullptr;
  *((_DWORD *)a1 + 8) = 1065353216;
  a1[5] = nullptr;
  a1[6] = nullptr;
  v37 = (char *)(a1 + 6);
  v35 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt((std::__detail::_Prime_rehash_policy *)(a1 + 4), a4);
  v7 = bkt;
  if ( (unsigned __int64)a1[1] < bkt )
  {
    if ( bkt == 1 )
    {
      a1[6] = nullptr;
      v9 = (char *)(a1 + 6);
    }
    else
    {
      if ( bkt >> 60 )
      {
        if ( bkt >> 61 )
          ((void (__noreturn *)(void))sub_5477)();
        std::__throw_bad_alloc();
      }
      v8 = (void *)operator new(8 * bkt);
      v9 = (char *)memset(v8, 0, 8 * v7);
    }
    *a1 = v9;
    a1[1] = (char *)v7;
  }
  v36 = (__int64 *)(a1 + 2);
  result = a3;
  if ( a2 != a3 )
  {
    do
    {
      v11 = *(_WORD *)v4;
      if ( a1[3] )
      {
        v12 = (unsigned __int64)a1[1];
        v13 = v11;
        v14 = *(__int64 **)&(*a1)[8 * (v11 % v12)];
        v15 = v11 % v12;
        if ( v14 )
        {
          result = (__int64 *)*v14;
          if ( v11 == *(_WORD *)(*v14 + 8) )
          {
LABEL_13:
            if ( v14 && *v14 )
              goto LABEL_15;
          }
          else
          {
            while ( *result )
            {
              v16 = *(_WORD *)(*result + 8);
              v14 = result;
              if ( v16 % v12 != v11 % v12 )
                break;
              result = (__int64 *)*result;
              if ( v11 == v16 )
                goto LABEL_13;
            }
          }
        }
      }
      else
      {
        result = (__int64 *)a1[2];
        if ( result )
        {
          while ( *((_WORD *)result + 4) != v11 )
          {
            result = (__int64 *)*result;
            if ( !result )
              goto LABEL_20;
          }
          goto LABEL_15;
        }
LABEL_20:
        v13 = v11;
        v15 = v11 % (unsigned __int64)a1[1];
      }
      v17 = operator new(0x18u);
      v18 = (unsigned __int64)a1[3];
      v19 = (unsigned __int64)a1[1];
      *(_QWORD *)v17 = 0;
      *(_WORD *)(v17 + 8) = *(_WORD *)v4;
      *(_QWORD *)(v17 + 16) = v4[1];
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v35, v19, v18, 1u) )
      {
        v26 = v20;
        if ( v20 == 1 )
        {
          a1[6] = nullptr;
          v23 = v37;
        }
        else
        {
          if ( v20 > 0xFFFFFFFFFFFFFFFLL )
          {
            if ( v20 >> 61 )
              sub_5477(v35, v19, v20, v21, v22, v20 >> 61);
            std::__throw_bad_alloc();
          }
          v27 = 8 * v20;
          v38 = v20;
          v23 = (char *)operator new(8 * v20);
          memset(v23, 0, v27);
          v26 = v38;
        }
        v28 = a1[2];
        v29 = 0;
        for ( a1[2] = nullptr; v28; v29 = v31 )
        {
          while ( 1 )
          {
            v30 = v28;
            v28 = *(char **)v28;
            v31 = *((unsigned __int16 *)v30 + 4) % v26;
            v32 = &v23[8 * v31];
            if ( !*(_QWORD *)v32 )
              break;
            *(_QWORD *)v30 = **(_QWORD **)v32;
            **(_QWORD **)v32 = v30;
            if ( !v28 )
              goto LABEL_35;
          }
          *(_QWORD *)v30 = a1[2];
          a1[2] = v30;
          *(_QWORD *)v32 = v36;
          if ( *(_QWORD *)v30 )
            *(_QWORD *)&v23[8 * v29] = v30;
        }
LABEL_35:
        if ( v37 != *a1 )
        {
          v39 = v26;
          operator delete(*a1, 8LL * (_QWORD)a1[1]);
          v26 = v39;
        }
        a1[1] = (char *)v26;
        *a1 = v23;
        v24 = (__int64 **)&v23[8 * (v13 % v26)];
        v25 = *v24;
        if ( !*v24 )
        {
LABEL_38:
          v33 = a1[2];
          a1[2] = (char *)v17;
          *(_QWORD *)v17 = v33;
          if ( v33 )
            *(_QWORD *)&v23[8 * (*((unsigned __int16 *)v33 + 4) % (unsigned __int64)a1[1])] = v17;
          result = v36;
          *v24 = v36;
          goto LABEL_24;
        }
      }
      else
      {
        v23 = *a1;
        v24 = (__int64 **)&(*a1)[8 * v15];
        v25 = *v24;
        if ( !*v24 )
          goto LABEL_38;
      }
      *(_QWORD *)v17 = *v25;
      result = *v24;
      **v24 = v17;
LABEL_24:
      ++a1[3];
LABEL_15:
      v4 += 2;
    }
    while ( a3 != v4 );
  }
  return result;
}

