__int64 __fastcall sub_2E2D80(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // r15
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // r14
  _QWORD *v12; // r11
  _QWORD *v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdx
  unsigned int v18; // r12d
  unsigned __int64 *v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i v26; // xmm0
  int v27; // r10d
  __m128i v28; // xmm0
  int v29; // r10d
  __int64 v30; // r10
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // [rsp+0h] [rbp-130h]
  __int64 v36; // [rsp+10h] [rbp-120h]
  __int64 v37; // [rsp+10h] [rbp-120h]
  __int64 v38; // [rsp+18h] [rbp-118h]
  _QWORD v39[2]; // [rsp+38h] [rbp-F8h] BYREF
  char v40; // [rsp+48h] [rbp-E8h]
  __int64 v41; // [rsp+50h] [rbp-E0h]
  __m128i v42; // [rsp+58h] [rbp-D8h] BYREF
  __m128i v43; // [rsp+68h] [rbp-C8h] BYREF
  _QWORD v44[2]; // [rsp+78h] [rbp-B8h] BYREF
  _BYTE v45[48]; // [rsp+88h] [rbp-A8h] BYREF
  char v46; // [rsp+B8h] [rbp-78h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v48; // [rsp+D8h] [rbp-58h]
  __int64 v49; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v50; // [rsp+F0h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = a1[22];
  v44[0] = a1[1];
  v3 = (__int64 *)v45;
  v44[1] = v2;
  v4 = (__int64 *)v45;
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &v47 );
  v47 = 0;
  v49 = 0;
  v48 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = a1[v5 + 19];
      if ( v7 )
      {
        switch_dbctx();
        v8 = *(_QWORD *)(v7 + 80);
        v9 = *(_QWORD *)(v7 + 64);
        v40 = 105;
        v39[1] = v8;
        v39[0] = &off_4AD8A0;
        v41 = 0;
        v10 = (__int64 *)sub_2AF070(v9, v39);
        v11 = v10;
        if ( v10 )
        {
          v12 = (_QWORD *)*v10;
          if ( *v10 )
          {
            if ( v10[1] )
            {
              v13 = (_QWORD *)v12[1];
              if ( v12 != v13 )
              {
                while ( 1 )
                {
                  v14 = v4[1];
                  v15 = v13 + 3;
                  if ( v4[2] < (unsigned __int64)(v14 + 1) )
                  {
                    v36 = v4[2];
                    v35 = v12;
                    v21 = qvector_reserve();
                    v22 = *v4;
                    v23 = v21;
                    v24 = v4[2];
                    v25 = v4[1] - 1;
                    v4[2] = v36;
                    if ( v25 >= 0 )
                    {
                      do
                      {
                        v26 = _mm_loadu_si128((const __m128i *)(v22 + 8));
                        v27 = *(_DWORD *)(v22 + 24);
                        v21 += 64;
                        v22 += 64;
                        *(__m128i *)(v21 - 56) = v26;
                        v28 = _mm_loadu_si128((const __m128i *)(v22 - 32));
                        *(_DWORD *)(v21 - 40) = v27;
                        v29 = *(_DWORD *)(v22 - 16);
                        *(__m128i *)(v21 - 32) = v28;
                        *(_DWORD *)(v21 - 16) = v29;
                        v30 = *(_QWORD *)(v22 - 8);
                        *(_QWORD *)(v21 - 64) = off_4AF410;
                        *(_QWORD *)(v21 - 8) = v30;
                      }
                      while ( v25-- != 0 );
                    }
                    v38 = v24;
                    v37 = v23;
                    qfree();
                    v14 = v4[1];
                    v15 = v13 + 3;
                    *v4 = v37;
                    v12 = v35;
                    v4[2] = v38;
                  }
                  v16 = *v4 + (v14 << 6);
                  ++v6;
                  *(_QWORD *)(v16 + 8) = -1;
                  *(_DWORD *)(v16 + 16) = 0;
                  *(_DWORD *)(v16 + 24) = 0;
                  *(_QWORD *)(v16 + 32) = -1;
                  *(_DWORD *)(v16 + 40) = 0;
                  *(_DWORD *)(v16 + 48) = -2;
                  *(_QWORD *)v16 = off_4AF410;
                  *(_QWORD *)(v16 + 56) = -1;
                  ++v4[1];
                  *(_QWORD *)(v16 + 8) = *v15;
                  *(_DWORD *)(v16 + 16) = *((_DWORD *)v15 + 2);
                  *(_DWORD *)(v16 + 24) = *((_DWORD *)v15 + 4);
                  if ( (*v13 & 2) != 0 )
                    goto LABEL_14;
                  v17 = (_QWORD *)v13[2];
                  if ( (*(_BYTE *)v17 & 2) != 0 )
                  {
                    v32 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
                    v33 = *v32;
                    if ( (*v32 & 2) == 0 )
                    {
                      while ( (_QWORD *)v32[2] == v13 )
                      {
                        v13 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
                        v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v33 & 2) != 0 )
                          goto LABEL_14;
                        v34 = v32;
                        v32 = v13;
                        v13 = v34;
                      }
                    }
                    v13 = v32;
                    if ( v12 == v32 )
                      break;
                  }
                  else
                  {
                    do
                    {
                      v13 = v17;
                      v17 = (_QWORD *)v17[1];
                    }
                    while ( (*(_BYTE *)v17 & 2) == 0 );
LABEL_14:
                    if ( v12 == v13 )
                      break;
                  }
                }
              }
            }
          }
          sub_2BB410(v11);
          qfree();
        }
      }
      ++v5;
      v4 += 3;
    }
    while ( v5 < a1[22] );
    if ( v6 )
    {
      v43 = 0u;
      v42 = 0;
      if ( sub_2A6230 )
      {
        v42.m128i_i64[0] = (__int64)sub_2A6230;
        v43 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4AF580), (__m128i)(unsigned __int64)sub_2A5E70);
      }
      sub_2E1500(v44, &v42, 1);
      sub_606D0((__int64)&v42);
      sub_2BE680(v44, a1 + 19, 1);
      v18 = 1;
    }
    else
    {
      v18 = 0;
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = (unsigned __int64 *)&v46;
  do
  {
    if ( *v19 )
    {
      v19[1] = 0;
      qfree();
    }
    v19 -= 3;
  }
  while ( &v43.m128i_u64[1] != v19 );
  return v18;
}

