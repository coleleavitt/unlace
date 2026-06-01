unsigned __int64 __fastcall sub_1EBD70(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  bool v7; // al
  __int64 *v8; // rbp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rbx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm2
  bool v23; // zf
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // r14
  __m128i v27; // xmm0
  __m128i v28; // xmm4
  __int64 v29; // rax
  __int64 v30; // rbx
  __m128i v31; // xmm0
  __int64 *v32; // rax
  __int64 v33; // rbp
  __m128i v34; // xmm7
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 i; // r12
  __int64 v38; // r15
  __int64 *v39; // rbx
  __m128i v40; // xmm7
  __int64 v41; // rdi
  __int64 v42; // rax
  __m128i si128; // xmm0
  __int64 v44; // rbx
  __int64 v45; // rbp
  __int64 v46; // r12
  char v48; // al
  __int64 *v49; // rdx
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm7
  __m128i v53; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v54; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v55; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v56; // [rsp+30h] [rbp-C8h]
  __int64 *v57; // [rsp+38h] [rbp-C0h]
  __int64 *v58; // [rsp+40h] [rbp-B8h]
  __int64 *v59; // [rsp+48h] [rbp-B0h]
  __int64 v60; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-98h]
  __m128i v62; // [rsp+68h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-80h]
  __m128i v64; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v65[24]; // [rsp+90h] [rbp-68h] BYREF
  char v66; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+B8h] [rbp-40h]

  v55 = a1;
  v58 = a2;
  v67 = __readfsqword(0x28u);
  if ( a1 != a2 && a2 != a1 + 12 )
  {
    v2 = a1 + 24;
    v59 = &v60;
    do
    {
      v3 = *(v2 - 4);
      v57 = v2;
      v4 = v55[8];
      if ( v3 != v4 )
      {
        v5 = v55[9];
        if ( !*(v2 - 3) )
        {
          v7 = v5 == 0;
LABEL_9:
          if ( v7 )
            goto LABEL_10;
          goto LABEL_44;
        }
        if ( !v5 )
          goto LABEL_10;
        v6 = *(_QWORD *)(v4 + 24);
        if ( *(_QWORD *)(v3 + 24) != v6 )
        {
          v7 = *(_QWORD *)(v3 + 24) < v6;
          goto LABEL_9;
        }
      }
      v48 = *((_BYTE *)v2 - 12);
      if ( v48 == *((_BYTE *)v55 + 84) )
      {
        if ( *((_DWORD *)v2 - 4) < *((_DWORD *)v55 + 20) )
          goto LABEL_10;
      }
      else if ( !v48 )
      {
LABEL_10:
        v8 = v2 - 12;
        sub_5DA80(v59, (__int64)(v2 - 12));
        v9 = *(v2 - 10);
        v10 = _mm_loadu_si128((const __m128i *)(v2 - 9));
        *(v2 - 10) = 0;
        v61 = v9;
        v11 = *(v2 - 7);
        v62 = v10;
        v12 = _mm_loadu_si128((const __m128i *)v2 - 3);
        v63 = v11;
        v13 = *(v2 - 2);
        v64 = v12;
        v14 = _mm_loadu_si128((const __m128i *)v2 - 2);
        *(_QWORD *)&v65[16] = v13;
        LOBYTE(v13) = *((_BYTE *)v2 - 8);
        *(v2 - 7) = 0;
        v66 = v13;
        v15 = v55;
        *(_OWORD *)(v2 - 9) = 0;
        v16 = (char *)(v2 - 12) - (char *)v15;
        *((_OWORD *)v2 - 3) = 0;
        *(__m128i *)v65 = v14;
        v56 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 5);
        if ( v16 > 0 )
        {
          do
          {
            v17 = v8;
            v8 -= 12;
            sub_5E350(v17, v8);
            v18 = v17[2];
            v19 = *(v17 - 10);
            *(v17 - 10) = 0;
            v20 = _mm_loadu_si128((const __m128i *)(v17 - 9));
            *(_OWORD *)(v17 - 9) = 0;
            if ( v18 )
            {
              v17[3] = 0;
              v53 = v20;
              qfree();
              v20 = _mm_load_si128(&v53);
            }
            v21 = *(v17 - 7);
            v17[2] = v19;
            v22 = _mm_loadu_si128((const __m128i *)v17 - 3);
            v23 = v17[5] == 0;
            *(v17 - 7) = 0;
            v53.m128i_i64[0] = v21;
            *(__m128i *)(v17 + 3) = v20;
            v54 = v22;
            *((_OWORD *)v17 - 3) = 0;
            if ( !v23 )
            {
              v24 = v17[6];
              v25 = 0;
              if ( v24 )
              {
                do
                {
                  v26 = v17[5] + 40 * v25;
                  if ( *(_QWORD *)(v26 + 16) )
                  {
                    *(_QWORD *)(v26 + 24) = 0;
                    qfree();
                  }
                  ++v25;
                  qfree();
                }
                while ( v24 != v25 );
              }
              v17[6] = 0;
              qfree();
            }
            v27 = _mm_loadu_si128((const __m128i *)v17 - 2);
            v23 = v56-- == 1;
            v28 = _mm_load_si128(&v54);
            v17[5] = v53.m128i_i64[0];
            v29 = *(__int64 *)((char *)v17 - 19);
            *((__m128i *)v17 + 4) = v27;
            *(__int64 *)((char *)v17 + 77) = v29;
            LOBYTE(v29) = *((_BYTE *)v17 - 8);
            *((__m128i *)v17 + 3) = v28;
            *((_BYTE *)v17 + 88) = v29;
          }
          while ( !v23 );
        }
        sub_5E350(v55, v59);
        v30 = v61;
        v61 = 0;
        v31 = _mm_loadu_si128(&v62);
        v62 = 0;
        if ( v55[2] )
        {
          v55[3] = 0;
          v53 = v31;
          qfree();
          v31 = _mm_load_si128(&v53);
        }
        v32 = v55;
        v33 = v63;
        v63 = 0;
        v34 = _mm_load_si128(&v64);
        v64 = 0;
        v35 = v55[5];
        v55[2] = v30;
        *(__m128i *)(v32 + 3) = v31;
        v53 = v34;
        if ( v35 )
        {
          v36 = v32[6];
          if ( v36 )
          {
            for ( i = 0; i != v36; ++i )
            {
              v38 = v35 + 40 * i;
              if ( *(_QWORD *)(v38 + 16) )
              {
                *(_QWORD *)(v38 + 24) = 0;
                qfree();
              }
              qfree();
              v35 = v55[5];
            }
          }
          v39 = v55;
          v55[6] = 0;
          qfree();
          v40 = _mm_load_si128(&v53);
          v41 = v63;
          v39[5] = v33;
          v42 = *(_QWORD *)&v65[13];
          si128 = _mm_load_si128((const __m128i *)v65);
          *((__m128i *)v39 + 3) = v40;
          *((__m128i *)v39 + 4) = si128;
          *(__int64 *)((char *)v39 + 77) = v42;
          *((_BYTE *)v39 + 88) = v66;
          if ( v41 )
          {
            v44 = v64.m128i_i64[0];
            if ( v64.m128i_i64[0] )
            {
              v45 = 0;
              do
              {
                v46 = v41 + 40 * v45;
                if ( *(_QWORD *)(v46 + 16) )
                {
                  *(_QWORD *)(v46 + 24) = 0;
                  qfree();
                }
                ++v45;
                qfree();
                v41 = v63;
              }
              while ( v44 != v45 );
            }
            v64.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          v49 = v55;
          v50 = *(_QWORD *)&v65[13];
          v51 = _mm_load_si128((const __m128i *)v65);
          v52 = _mm_load_si128(&v53);
          v55[5] = v33;
          *((__m128i *)v49 + 4) = v51;
          *(__int64 *)((char *)v49 + 77) = v50;
          LOBYTE(v50) = v66;
          *((__m128i *)v49 + 3) = v52;
          *((_BYTE *)v49 + 88) = v50;
        }
        if ( v61 )
        {
          v62.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        goto LABEL_38;
      }
LABEL_44:
      sub_1EB940((__int64)(v2 - 12));
LABEL_38:
      v2 += 12;
    }
    while ( v58 != v57 );
  }
  return v67 - __readfsqword(0x28u);
}

