unsigned __int64 __fastcall sub_3B5340(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        double a10)
{
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i **v13; // rbp
  __int64 **v14; // r12
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  __m128i *v17; // r15
  __int64 v18; // r14
  __m128i *v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __m128i *v22; // r14
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *i; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 **v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 **v33; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  _QWORD *v38; // [rsp+0h] [rbp-68h]
  _QWORD *v39; // [rsp+8h] [rbp-60h]
  __int64 **v40; // [rsp+10h] [rbp-58h] BYREF
  __int128 v41; // [rsp+18h] [rbp-50h]
  unsigned __int64 v42; // [rsp+28h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 64) )
  {
    while ( *(_QWORD *)(a1 + 56) )
      sub_3B1EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 32LL), 1, a3);
    *(_BYTE *)(a1 + 65) = 1;
    v41 = 0;
    v40 = nullptr;
    sub_369800(a2, &v40, 0, 16, 0.0, a4, a5, a6, a7, a8, a9, a10);
    v13 = (__m128i **)v40;
    v14 = &v40[v41];
    if ( v14 != v40 )
    {
      do
        sub_3B4E50(a1, *v13++, 0, 0.0);
      while ( v14 != (__int64 **)v13 );
    }
    v39 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        v38 = (_QWORD *)v39[1];
        if ( v39 != v38 )
        {
          while ( 1 )
          {
            v15 = (_QWORD *)v38[6];
            if ( v15 )
            {
              if ( v38[7] )
                break;
            }
LABEL_23:
            if ( (*v38 & 2) == 0 )
            {
              v26 = (_QWORD *)v38[2];
              if ( (*(_BYTE *)v26 & 2) != 0 )
              {
                v27 = (_QWORD *)(*v38 & 0xFFFFFFFFFFFFFFFCLL);
                v28 = *v27;
                if ( (*v27 & 2) == 0 )
                {
                  while ( (_QWORD *)v27[2] == v38 )
                  {
                    v38 = v27;
                    v29 = v28 & 0xFFFFFFFFFFFFFFFCLL;
                    v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v28 & 2) != 0 )
                    {
                      v38 = (_QWORD *)v29;
                      goto LABEL_29;
                    }
                    v27 = (_QWORD *)v29;
                  }
                }
                v38 = v27;
              }
              else
              {
                do
                {
                  v38 = v26;
                  v26 = (_QWORD *)v26[1];
                }
                while ( (*(_BYTE *)v26 & 2) == 0 );
              }
            }
LABEL_29:
            if ( v39 == v38 )
              goto LABEL_30;
          }
          v16 = (_QWORD *)v15[1];
LABEL_12:
          if ( v15 == v16 )
            goto LABEL_23;
          while ( 1 )
          {
            v17 = (__m128i *)v16[4];
            v18 = 40LL * v16[5];
            v19 = (__m128i *)((char *)v17 + v18);
            if ( v17 == (__m128i *)&v17->m128i_i8[v18] )
              goto LABEL_18;
            v20 = 0xCCCCCCCCCCCCCCCDLL * (v18 >> 3);
            if ( !v20 )
              break;
            _BitScanReverse64(&v21, v20);
            sub_3B4BD0(v16[4], v19, 2LL * (int)v21, 0xCCCCCCCCCCCCCCCDLL, v11, v12);
            if ( v18 <= 640 )
              goto LABEL_37;
            v22 = v17 + 40;
            sub_3A9A30(v17, v17 + 40);
            do
            {
              v23 = (__int64)v22;
              v22 = (__m128i *)((char *)v22 + 40);
              sub_3A98C0(v23);
            }
            while ( v19 != v22 );
LABEL_18:
            if ( (*v16 & 2) != 0 )
              goto LABEL_12;
            v24 = (_QWORD *)v16[2];
            if ( (*(_BYTE *)v24 & 2) != 0 )
            {
              v35 = (_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
              v36 = *v35;
              if ( (*v35 & 2) != 0 || (_QWORD *)v35[2] != v16 )
              {
LABEL_39:
                v16 = v35;
              }
              else
              {
                while ( 1 )
                {
                  v16 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
                  v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v36 & 2) != 0 )
                    break;
                  v37 = v35;
                  v35 = v16;
                  if ( (_QWORD *)v16[2] != v37 )
                    goto LABEL_39;
                }
              }
              goto LABEL_12;
            }
            for ( i = (_QWORD *)v24[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v24 = i;
            v16 = v24;
            if ( v15 == v24 )
              goto LABEL_23;
          }
          sub_3B4BD0(v16[4], v19, -2, 0xCCCCCCCCCCCCCCCDLL, v11, v12);
LABEL_37:
          sub_3A9A30(v17, v19);
          goto LABEL_18;
        }
      }
    }
LABEL_30:
    v30 = v40;
    *(_BYTE *)(a1 + 65) = 0;
    if ( v30 )
    {
      v31 = v41;
      if ( (_QWORD)v41 )
      {
        v32 = 0;
        do
        {
          v33 = &v30[v32++];
          sub_140140(v33);
          v30 = v40;
        }
        while ( v31 != v32 );
      }
      *(_QWORD *)&v41 = 0;
      qfree((__int64)v30);
    }
  }
  return v42 - __readfsqword(0x28u);
}

