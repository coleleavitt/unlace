__int64 __fastcall sub_2528C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // r13d
  char tinfo_property; // al
  char v9; // al
  int v11; // r13d
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  char v18; // al
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __m128i v27; // xmm0
  int tinfo_size; // edx
  __int64 v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // edx
  unsigned __int8 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+18h] [rbp-E0h]
  int v37; // [rsp+18h] [rbp-E0h]
  __m128i v38; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v40; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+50h] [rbp-A8h] BYREF
  int v42; // [rsp+58h] [rbp-A0h]
  __int64 v43; // [rsp+60h] [rbp-98h]
  __int128 v44; // [rsp+68h] [rbp-90h]
  __int64 v45; // [rsp+78h] [rbp-80h]
  __int128 v46; // [rsp+80h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-68h]
  _QWORD *v48; // [rsp+98h] [rbp-60h]
  __int64 v49; // [rsp+A0h] [rbp-58h]
  int v50; // [rsp+A8h] [rbp-50h]
  bool v51; // [rsp+ACh] [rbp-4Ch]
  bool v52; // [rsp+ADh] [rbp-4Bh]
  unsigned __int64 v53; // [rsp+B8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = sub_3884A0(a2);
  if ( v5 )
  {
    v6 = 0;
    v7 = -991146299 * ((v5 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL)) >> 3);
  }
  else
  {
    if ( *(_DWORD *)a2 != 1 )
      return 0;
    v6 = *(_QWORD *)(a2 + 8);
    v19 = *(_DWORD *)(v6 + 8);
    if ( v19 > 69 )
      return 0;
    if ( (unsigned int)v19 <= 0x3C )
    {
      if ( (unsigned int)v19 <= 0x3A )
        return 0;
    }
    else if ( v19 != 64 )
    {
      return 0;
    }
    v7 = -1;
  }
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0xFu) > 0xA && (tinfo_property & 0x3F) != 0x2D )
    return 0;
  v41 = (__int64 (__fastcall **)())get_tinfo_property();
  v9 = get_tinfo_property();
  if ( (v9 & 0xFu) > 0xA && (v9 & 0x3F) != 0x2D )
  {
    clear_tinfo_t();
    return 0;
  }
  clear_tinfo_t();
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) != get_tinfo_size() )
    return 0;
  v51 = a3 != 0;
  v41 = off_4B2818;
  v52 = (get_tinfo_property() & 0xF) == 10;
  v42 = 2;
  v43 = 0;
  v45 = 0;
  v47 = v6;
  v48 = nullptr;
  v49 = 0;
  v50 = v7;
  v44 = 0;
  v46 = 0;
  if ( (unsigned int)sub_250E80((__int64 *)&v41, a1 + 16, 0) || v49 )
  {
    if ( a3 )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL);
      if ( v48 )
      {
        if ( v49 )
        {
          v12 = (_QWORD *)v48[1];
          if ( v48 != v12 )
          {
            v13 = 0;
            do
            {
              v14 = v12 + 3;
              if ( v12[3] >= v13 )
              {
                v20 = *(_QWORD *)(a3 + 8);
                v21 = *(_QWORD *)a3;
                if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v20 + 1) )
                {
                  v33 = qvector_reserve();
                  *(_QWORD *)a3 = v33;
                  v20 = *(_QWORD *)(a3 + 8);
                  v21 = v33;
                  v14 = v12 + 3;
                }
                v22 = v21 + 144 * v20;
                *(_OWORD *)v22 = 0;
                *(_QWORD *)(v22 + 16) = 0;
                *(_QWORD *)(v22 + 40) = 0;
                *(_QWORD *)(v22 + 112) = 1;
                *(_DWORD *)(v22 + 120) = -1;
                *(_QWORD *)(v22 + 128) = 0;
                *(_BYTE *)(v22 + 136) = 0;
                *(_OWORD *)(v22 + 24) = 0;
                *(_OWORD *)(v22 + 48) = 0;
                *(_OWORD *)(v22 + 64) = 0;
                ++*(_QWORD *)(a3 + 8);
                v23 = 8LL * *v14;
                *(_QWORD *)v22 = v23;
                if ( v11 )
                {
                  while ( (v23 & (v11 - 1)) != 0 )
                    v11 >>= 1;
                }
                copy_tinfo_t();
                sub_3267F0(&v39, v22 + 64);
                v24 = v39;
                v25 = _mm_loadu_si128(&v40);
                v39 = 0;
                v40 = 0;
                if ( *(_QWORD *)(v22 + 16) )
                {
                  *(_QWORD *)(v22 + 24) = 0;
                  v36 = v24;
                  v38 = v25;
                  qfree();
                  v26 = v39;
                  v27 = _mm_load_si128(&v38);
                  *(_QWORD *)(v22 + 16) = v36;
                  *(__m128i *)(v22 + 24) = v27;
                  if ( v26 )
                  {
                    v40.m128i_i64[0] = 0;
                    qfree();
                  }
                }
                else
                {
                  *(_QWORD *)(v22 + 16) = v24;
                  *(__m128i *)(v22 + 24) = v25;
                }
                tinfo_size = get_tinfo_size();
                if ( tinfo_size == -1 )
                {
                  v34 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 130LL);
                  v39 = 7;
                  v37 = v34;
                  copy_tinfo_t();
                  clear_tinfo_t();
                  tinfo_size = v37;
                }
                v29 = 8LL * tinfo_size;
                *(_QWORD *)(v22 + 8) = v29;
                v13 = (unsigned __int64)(*(_QWORD *)v22 + v29) >> 3;
              }
              if ( (*v12 & 2) == 0 )
              {
                v15 = (_QWORD *)v12[2];
                if ( (*(_BYTE *)v15 & 2) != 0 )
                {
                  v30 = (_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFFCLL);
                  v31 = *v30;
                  if ( (*v30 & 2) == 0 )
                  {
                    while ( v12 == (_QWORD *)v30[2] )
                    {
                      v12 = v30;
                      v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
                      v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
                      if ( (v31 & 2) != 0 )
                      {
                        v12 = (_QWORD *)v32;
                        goto LABEL_22;
                      }
                      v30 = (_QWORD *)v32;
                    }
                  }
                  v12 = v30;
                }
                else
                {
                  do
                  {
                    v12 = v15;
                    v15 = (_QWORD *)v15[1];
                  }
                  while ( (*(_BYTE *)v15 & 2) == 0 );
                }
              }
LABEL_22:
              ;
            }
            while ( v48 != v12 );
          }
        }
      }
      v16 = (_QWORD *)(*(_QWORD *)a3 + 144LL * *(_QWORD *)(a3 + 8) - 144);
      v17 = *v16 + v16[1];
      *(_BYTE *)(a3 + 51) = 0;
      *(_QWORD *)(a3 + 24) = (unsigned __int64)(v17 + 7) >> 3;
      if ( *(unsigned __int8 *)(*(_QWORD *)(a1 + 216) + 133LL) > v11 )
        *(_BYTE *)(a3 + 50) |= (unsigned __int8)log2ceil() + 1;
    }
    v18 = 1;
  }
  else
  {
    v18 = 0;
  }
  v35 = v18;
  sub_24FB60(&v41);
  return v35;
}

