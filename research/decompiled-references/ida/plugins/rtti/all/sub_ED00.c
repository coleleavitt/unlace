unsigned __int64 __fastcall sub_ED00(__int64 a1, unsigned __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  char v5; // al
  __int64 v8; // rdx
  size_t v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  char *v13; // rcx
  __int64 v14; // r13
  __int64 v15; // r10
  void *v16; // rax
  char *v17; // rcx
  const void *v18; // rsi
  char v19; // al
  char *v20; // rbx
  __int64 v21; // rdi
  void *v22; // rax
  const void *v23; // rsi
  __int64 v24; // [rsp+8h] [rbp-200h]
  __int64 v25; // [rsp+18h] [rbp-1F0h]
  char *v26; // [rsp+18h] [rbp-1F0h]
  char *v27; // [rsp+20h] [rbp-1E8h]
  __int64 v28; // [rsp+20h] [rbp-1E8h]
  __int64 n; // [rsp+28h] [rbp-1E0h]
  void *v30; // [rsp+30h] [rbp-1D8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-1D0h]
  __int128 v32; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-1A8h]
  __int128 v34; // [rsp+68h] [rbp-1A0h]
  __int64 v35; // [rsp+78h] [rbp-190h]
  __m128i si128; // [rsp+80h] [rbp-188h]
  __int128 v37; // [rsp+90h] [rbp-178h]
  _OWORD v38[3]; // [rsp+A0h] [rbp-168h] BYREF
  void *v39; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-130h]
  __int64 v41; // [rsp+E8h] [rbp-120h]
  int v42; // [rsp+F0h] [rbp-118h]
  __int64 v43; // [rsp+F8h] [rbp-110h]
  _BYTE v44[192]; // [rsp+100h] [rbp-108h] BYREF
  char v45; // [rsp+1C0h] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+1C8h] [rbp-40h]

  v3 = a3;
  v5 = *a3;
  v46 = __readfsqword(0x28u);
  if ( v5 == 46 )
  {
    v5 = a3[1];
    v3 = a3 + 1;
  }
  if ( v5 == 95 && v3[1] == 90 && v3[2] == 84 && (unsigned __int8)(v3[3] - 73) <= 0xDu )
  {
    v8 = -9218;
    if ( !_bittest64(&v8, (unsigned int)(unsigned __int8)v3[3] - 73) )
    {
      if ( v3[4] )
      {
        if ( v3[5] )
        {
          if ( (unsigned __int8)is_mapped() )
          {
            v24 = a1 + 120;
            if ( !*(_QWORD *)(a1 + 128) || !rangeset_t_find_range() )
            {
              if ( (unsigned __int8)sub_10140(a1, v3) )
              {
                v30 = 0;
                v31 = 0;
                if ( a3 )
                {
                  v9 = strlen(a3);
                  v30 = (void *)qvector_reserve();
                  *(_QWORD *)&v31 = v9 + 1;
                  memmove(v30, a3, v9);
                  *((_BYTE *)v30 + v9) = 0;
                }
                if ( (unsigned __int8)sub_101D0(&v30, 1610612736) )
                {
                  v10 = *(_QWORD *)(a1 + 128);
                  v39 = 0;
                  v40 = 0;
                  if ( v10 )
                  {
                    v22 = (void *)qalloc_or_throw();
                    v23 = *(const void **)(a1 + 120);
                    v39 = v22;
                    *((_QWORD *)&v40 + 1) = v10;
                    memcpy(v22, v23, 16 * v10);
                    *(_QWORD *)&v40 = v10;
                  }
                  v11 = *(_QWORD *)(a1 + 160);
                  v41 = 0;
                  v12 = a1 + 168;
                  v42 = -1;
                  v13 = v44;
                  v14 = 7;
                  v43 = v11;
                  do
                  {
                    v15 = *(_QWORD *)(v12 + 8);
                    *(_QWORD *)v13 = 0;
                    *(_OWORD *)(v13 + 8) = 0;
                    if ( v15 )
                    {
                      v27 = v13;
                      v25 = v15;
                      n = 8 * v15;
                      v16 = (void *)qalloc_or_throw();
                      v17 = v27;
                      v18 = *(const void **)v12;
                      *((_QWORD *)v27 + 2) = v25;
                      *(_QWORD *)v27 = v16;
                      v28 = v25;
                      v26 = v17;
                      memcpy(v16, v18, n);
                      v13 = v26;
                      *((_QWORD *)v26 + 1) = v28;
                    }
                    v13 += 24;
                    --v14;
                    v12 += 24;
                  }
                  while ( v13 != &v45 );
                  v45 = *(_BYTE *)(a1 + 360);
                  v19 = v3[3];
                  if ( v19 == 73 )
                  {
                    v35 = a1;
                    v33 = 0;
                    LODWORD(v37) = 0;
                    *((_QWORD *)&v37 + 1) = 0;
                    v32 = 0;
                    v34 = 0;
                    si128 = (__m128i)-1LL;
                    memset(v38, 0, 40);
                    if ( (unsigned __int8)sub_CC60(&v32, (__int64)&v39, a2, 0) )
                      sub_CC60(&v32, v24, a2, 0x30u);
                    sub_BC60(&v32);
                  }
                  else if ( v19 == 86 && !sub_4ED0((__int64)&v39, 6u, a2) )
                  {
                    if ( (unsigned __int8)is_loaded() )
                    {
                      sub_E800(a1, a2);
                    }
                    else
                    {
                      v35 = a1;
                      v33 = 0;
                      memset(v38, 0, 24);
                      si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
                      v32 = 0;
                      v34 = 0;
                      v37 = -1;
                      if ( (unsigned __int8)sub_DA90((__int64 *)&v32, (__int64)&v39, a2, 1u, 0) )
                        sub_DA90((__int64 *)&v32, v24, a2, 0x31u, 0);
                      sub_BCB0(&v32);
                    }
                  }
                  v20 = &v45;
                  do
                  {
                    v21 = *((_QWORD *)v20 - 3);
                    v20 -= 24;
                    if ( v21 )
                    {
                      *((_QWORD *)v20 + 1) = 0;
                      qfree();
                    }
                  }
                  while ( v20 != v44 );
                  if ( v39 )
                  {
                    *(_QWORD *)&v40 = 0;
                    qfree();
                  }
                  if ( v30 )
                    goto LABEL_18;
                }
                else if ( v30 )
                {
LABEL_18:
                  *(_QWORD *)&v31 = 0;
                  qfree();
                }
              }
            }
          }
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}
