_BOOL8 __fastcall sub_AD880(_QWORD *a1, const __m128i **a2, __int64 a3)
{
  __int8 *v3; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __m128i v11; // xmm0
  bool v12; // cf
  unsigned __int64 v13; // r10
  __int64 v14; // r9
  _QWORD *v15; // rcx
  void *v16; // rax
  void *v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rdi
  void *v28; // rdi
  size_t na; // [rsp+8h] [rbp-F0h]
  size_t nb; // [rsp+8h] [rbp-F0h]
  size_t n; // [rsp+8h] [rbp-F0h]
  __m128i *nc; // [rsp+8h] [rbp-F0h]
  _QWORD *v33; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v34; // [rsp+10h] [rbp-E8h]
  __int64 v35; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v36; // [rsp+18h] [rbp-E0h]
  __int64 v37; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+18h] [rbp-E0h]
  __int64 v39; // [rsp+20h] [rbp-D8h]
  bool v40; // [rsp+2Bh] [rbp-CDh]
  unsigned int v41; // [rsp+2Ch] [rbp-CCh]
  unsigned int v42; // [rsp+34h] [rbp-C4h] BYREF
  const __m128i *v43; // [rsp+38h] [rbp-C0h] BYREF
  void *v44; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+48h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A0h]
  __m128i v47; // [rsp+60h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-88h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int128 v50; // [rsp+88h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  __m128i v52; // [rsp+A0h] [rbp-58h] BYREF
  int v53; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  v43 = *a2;
  v3 = &v43->m128i_i8[a3];
  if ( !__CFADD__(a3, v43) )
  {
    v40 = sub_6C650(&v42, (unsigned __int64 *)&v43, (__int64)v43->m128i_i64 + a3);
    if ( v40 )
    {
      v7 = v42;
      v8 = a1[3];
      v41 = v42;
      if ( v42 == v8 )
        goto LABEL_23;
      v44 = nullptr;
      v48 = 0;
      v46 = 0;
      v45 = 0;
      v47 = 0;
      if ( v42 < v8 )
      {
        v18 = v42;
        v19 = 56LL * v42;
        do
        {
          v20 = v19 + a1[2];
          v21 = *(void **)v20;
          if ( *(_QWORD *)v20 )
          {
            *(_QWORD *)(v20 + 8) = 0;
            v37 = v19;
            v34 = v8;
            nb = v18;
            j__free(v21);
            v19 = v37;
            v8 = v34;
            v18 = nb;
          }
          ++v18;
          v19 += 56;
        }
        while ( v18 < v8 );
        a1[3] = v7;
      }
      else
      {
        v9 = a1[2];
        v10 = a1[4];
        if ( (unsigned __int64)&v44 < v9 || (unsigned __int64)&v44 >= v9 + 56 * v10 )
        {
          if ( v10 < v42 )
          {
            v9 = sub_1987B0(a1 + 2, a1[2], v42, 56);
            v8 = a1[3];
            a1[2] = v9;
            if ( v8 >= v7 )
            {
              v22 = v44;
              a1[3] = v7;
              if ( !v22 )
                goto LABEL_24;
LABEL_22:
              *(_QWORD *)&v45 = 0;
              j__free(v22);
LABEL_23:
              if ( !v41 )
              {
LABEL_27:
                *a2 = v43;
                return v40;
              }
              goto LABEL_24;
            }
          }
          v25 = 56 * v8;
          while ( 1 )
          {
            v26 = v25 + v9;
            v38 = v8;
            *(_QWORD *)v26 = 0;
            *(_OWORD *)(v26 + 8) = 0;
            v35 = v25;
            nc = (__m128i *)v26;
            sub_9CBB0((_QWORD *)v26, (__int64)&v44);
            nc[1].m128i_i64[1] = v46;
            v8 = v38 + 1;
            v25 = v35 + 56;
            nc[2] = _mm_load_si128(&v47);
            nc[3].m128i_i32[0] = v48;
            if ( v38 + 1 >= v7 )
              break;
            v9 = a1[2];
          }
          a1[3] = v7;
LABEL_33:
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            j__free(v44);
          }
LABEL_24:
          v23 = 7 * v7;
          v24 = 0;
          n = 8 * v23;
          while ( sub_AD7A0((__m128i *)(v24 + a1[2]), &v43, v3 - (__int8 *)v43) )
          {
            v24 += 56;
            if ( n == v24 )
              goto LABEL_27;
          }
          return 0;
        }
        ptr = nullptr;
        v50 = 0;
        sub_9CBB0(&ptr, (__int64)&v44);
        v11 = _mm_load_si128(&v47);
        v12 = a1[4] < v7;
        v51 = v46;
        v52 = v11;
        v53 = v48;
        if ( v12 )
          a1[2] = sub_1987B0(a1 + 2, a1[2], v7, 56);
        v13 = a1[3];
        if ( v13 < v7 )
        {
          v14 = 56 * v13;
          do
          {
            v15 = (_QWORD *)(v14 + a1[2]);
            *v15 = 0;
            *(_OWORD *)(v15 + 1) = 0;
            if ( (_QWORD)v50 )
            {
              v39 = v14;
              v36 = v13;
              v33 = v15;
              na = v50;
              v16 = (void *)sub_198760(v50);
              *v33 = v16;
              v17 = ptr;
              v33[2] = na;
              memcpy(v16, v17, na);
              v15 = v33;
              v14 = v39;
              v13 = v36;
              v33[1] = na;
            }
            ++v13;
            v14 += 56;
            v15[3] = v51;
            *((__m128i *)v15 + 2) = _mm_load_si128(&v52);
            *((_DWORD *)v15 + 12) = v53;
          }
          while ( v7 != v13 );
          v27 = ptr;
          a1[3] = v7;
          if ( v27 )
          {
            *(_QWORD *)&v50 = 0;
            j__free(v27);
            v22 = v44;
            if ( !v44 )
              goto LABEL_24;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
        v28 = ptr;
        a1[3] = v7;
        if ( v28 )
        {
          *(_QWORD *)&v50 = 0;
          j__free(v28);
        }
      }
      v22 = v44;
      if ( !v44 )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  return 0;
}
