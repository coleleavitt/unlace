unsigned __int64 __fastcall sub_3B00C0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned __int64 *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 **v14; // rbp
  __int64 **v15; // r12
  _QWORD *v16; // r13
  _QWORD *v17; // r12
  __m128i *v18; // r15
  __int64 v19; // r14
  __m128i *v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __m128i *v23; // r14
  __int64 v24; // rdi
  _QWORD *v25; // rdx
  _QWORD *i; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 **v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 **v34; // rdi
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // [rsp+0h] [rbp-68h]
  _QWORD *v40; // [rsp+8h] [rbp-60h]
  __int64 **v41; // [rsp+10h] [rbp-58h] BYREF
  __int128 v42; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 64) )
  {
    while ( *(_QWORD *)(a1 + 56) )
      sub_3ACC40(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL), 1);
    *(_BYTE *)(a1 + 65) = 1;
    v11 = (unsigned __int64 *)&v41;
    v42 = 0;
    v41 = nullptr;
    sub_364580(a2, &v41, 0, 16, 0.0, a4, a5, a6, a7, a8, a9);
    v14 = (unsigned __int64 **)v41;
    v15 = &v41[v42];
    if ( v15 != v41 )
    {
      do
      {
        v11 = *v14;
        sub_3AFBD0(a1, *v14++, 0);
      }
      while ( v15 != (__int64 **)v14 );
    }
    v40 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        v39 = (_QWORD *)v40[1];
        if ( v40 != v39 )
        {
          while ( 1 )
          {
            v16 = (_QWORD *)v39[6];
            if ( v16 )
            {
              if ( v39[7] )
                break;
            }
LABEL_23:
            if ( (*v39 & 2) == 0 )
            {
              v27 = (_QWORD *)v39[2];
              if ( (*(_BYTE *)v27 & 2) != 0 )
              {
                v28 = (_QWORD *)(*v39 & 0xFFFFFFFFFFFFFFFCLL);
                v29 = *v28;
                if ( (*v28 & 2) == 0 )
                {
                  while ( (_QWORD *)v28[2] == v39 )
                  {
                    v39 = v28;
                    v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
                    v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v29 & 2) != 0 )
                    {
                      v39 = (_QWORD *)v30;
                      goto LABEL_29;
                    }
                    v28 = (_QWORD *)v30;
                  }
                }
                v39 = v28;
              }
              else
              {
                do
                {
                  v39 = v27;
                  v27 = (_QWORD *)v27[1];
                }
                while ( (*(_BYTE *)v27 & 2) == 0 );
              }
            }
LABEL_29:
            if ( v40 == v39 )
              goto LABEL_30;
          }
          v17 = (_QWORD *)v16[1];
LABEL_12:
          if ( v16 == v17 )
            goto LABEL_23;
          while ( 1 )
          {
            v18 = (__m128i *)v17[4];
            v19 = 40LL * v17[5];
            v20 = (__m128i *)((char *)v18 + v19);
            if ( v18 == (__m128i *)&v18->m128i_i8[v19] )
              goto LABEL_18;
            v21 = 0xCCCCCCCCCCCCCCCDLL * (v19 >> 3);
            if ( !v21 )
              break;
            _BitScanReverse64(&v22, v21);
            sub_3AF950(v17[4], v20, 2LL * (int)v22, 0xCCCCCCCCCCCCCCCDLL, v12, v13);
            if ( v19 <= 640 )
              goto LABEL_37;
            v23 = v18 + 40;
            v11 = (unsigned __int64 *)&v18[40];
            sub_3A47B0(v18, v18 + 40);
            do
            {
              v24 = (__int64)v23;
              v23 = (__m128i *)((char *)v23 + 40);
              sub_3A4640(v24);
            }
            while ( v20 != v23 );
LABEL_18:
            if ( (*v17 & 2) != 0 )
              goto LABEL_12;
            v25 = (_QWORD *)v17[2];
            if ( (*(_BYTE *)v25 & 2) != 0 )
            {
              v36 = (_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFFCLL);
              v37 = *v36;
              if ( (*v36 & 2) != 0 || (_QWORD *)v36[2] != v17 )
              {
LABEL_39:
                v17 = v36;
              }
              else
              {
                while ( 1 )
                {
                  v17 = (_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                  v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v37 & 2) != 0 )
                    break;
                  v38 = v36;
                  v36 = v17;
                  if ( (_QWORD *)v17[2] != v38 )
                    goto LABEL_39;
                }
              }
              goto LABEL_12;
            }
            for ( i = (_QWORD *)v25[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v25 = i;
            v17 = v25;
            if ( v16 == v25 )
              goto LABEL_23;
          }
          sub_3AF950(v17[4], v20, -2, 0xCCCCCCCCCCCCCCCDLL, v12, v13);
LABEL_37:
          v11 = &v18->m128i_u64[(unsigned __int64)v19 / 8];
          sub_3A47B0(v18, v20);
          goto LABEL_18;
        }
      }
    }
LABEL_30:
    v31 = v41;
    *(_BYTE *)(a1 + 65) = 0;
    if ( v31 )
    {
      v32 = v42;
      if ( (_QWORD)v42 )
      {
        v33 = 0;
        do
        {
          v34 = &v31[v33++];
          sub_13BC80(v34, (__int64)v11);
          v31 = v41;
        }
        while ( v32 != v33 );
      }
      *(_QWORD *)&v42 = 0;
      qfree();
    }
  }
  return v43 - __readfsqword(0x28u);
}

