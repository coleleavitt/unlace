unsigned __int64 __fastcall sub_108DB0(
        __m128i *a1,
        int a2,
        __int64 *a3,
        int a4,
        int a5,
        int a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        double a14)
{
  int v15; // r8d
  int v16; // r9d
  unsigned __int8 *v17; // r14
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r12
  unsigned __int8 *v29; // r13
  __int64 v30; // rdx
  int v31; // edx
  _QWORD v33[2]; // [rsp+10h] [rbp-C8h] BYREF
  int v34; // [rsp+20h] [rbp-B8h]
  int v35; // [rsp+24h] [rbp-B4h]
  int v36; // [rsp+28h] [rbp-B0h]
  __int16 v37; // [rsp+2Ch] [rbp-ACh]
  __m128i v38; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-98h] BYREF
  __m128i v40; // [rsp+50h] [rbp-88h] BYREF
  __m256i v41; // [rsp+60h] [rbp-78h] BYREF
  __m128i v42; // [rsp+80h] [rbp-58h]
  unsigned __int64 v43; // [rsp+98h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( a2 )
  {
    v17 = (unsigned __int8 *)sub_D9DB0(*a3, 1u, a7, (__int64)a3, a4, a5, a6);
    if ( v17 )
    {
      if ( !(unsigned int)sub_1081B0(a1, a2 - 1, a3 + 1, &v38, v15, v16, a7, a8, a9, a10, v18, v19, a13, a14) )
      {
        v20 = a1->m128i_i64[0];
        v33[1] = 0;
        v33[0] = 0;
        v34 = 0;
        v21 = *(_QWORD *)(v20 + 24);
        v36 = 0;
        v35 = *(_DWORD *)(v21 + 136);
        v37 = 0;
        if ( !v40.m128i_i8[8] )
          sub_C88C0((__int64)&v38);
        sub_C8C60((__int64)&v38);
        v25 = *v17;
        if ( (_BYTE)v25 )
        {
          v26 = 0;
          v27 = 0;
          do
          {
            while ( 2 )
            {
              if ( (_BYTE)v25 == 37 )
              {
                if ( v26 < v27 )
                  sub_DFD90((__int64)v33, &v17[v26], v27 - v26);
                v28 = v27 + 1;
                v26 = v27 + 2;
                v29 = &v17[v27 + 1];
                switch ( *v29 )
                {
                  case '%':
                    sub_DFCC0((__int64)v33, 1, 37);
                    goto LABEL_15;
                  case 'H':
                    v31 = v39.m128i_i32[1];
                    goto LABEL_23;
                  case 'J':
                    v27 = v28;
                    sub_DBBA0((__int64)v33, "%.16g", (double)v38.m128i_i32[0] / 86400000.0);
                    break;
                  case 'M':
                    v31 = v39.m128i_i32[2];
                    goto LABEL_23;
                  case 'S':
                    v31 = (int)*(double *)v40.m128i_i64;
                    goto LABEL_23;
                  case 'W':
                  case 'j':
                    *(__m128i *)v41.m256i_i8 = _mm_load_si128(&v38);
                    *(__m128i *)&v41.m256i_u64[2] = _mm_load_si128(&v39);
                    *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = 0x100000001LL;
                    v42 = _mm_load_si128(&v40);
                    v42.m128i_i8[8] = 0;
                    sub_C88C0((__int64)&v41);
                    v30 = (v38.m128i_i64[0] + 43200000 - v41.m256i_i64[0]) / 86400000;
                    if ( *v29 == 87 )
                      sub_DBBA0(
                        (__int64)v33,
                        "%02d",
                        ((int)v30 + 7 - (int)((v38.m128i_i64[0] + 43200000) / 86400000) % 7) / 7);
                    else
                      sub_DBBA0((__int64)v33, "%03d", v30 + 1);
LABEL_15:
                    v27 = v28;
                    break;
                  case 'Y':
                    v27 = v28;
                    sub_DBBA0((__int64)v33, "%04d", v38.m128i_i32[2]);
                    break;
                  case 'd':
                    v31 = v39.m128i_i32[0];
                    goto LABEL_23;
                  case 'f':
                    v27 = v28;
                    sub_DBBA0((__int64)v33, "%06.3f", fmin(59.999, *(double *)v40.m128i_i64));
                    break;
                  case 'm':
                    v31 = v38.m128i_i32[3];
LABEL_23:
                    v27 = v28 + 1;
                    sub_DBBA0((__int64)v33, "%02d", v31);
                    v25 = v17[v28 + 1];
                    if ( !(_BYTE)v25 )
                      goto LABEL_17;
                    continue;
                  case 's':
                    v27 = v28;
                    sub_DBBA0((__int64)v33, "%lld", v38.m128i_i64[0] / 1000 - 210866760000LL);
                    goto LABEL_16;
                  case 'w':
                    v27 = v28;
                    sub_DFCC0((__int64)v33, 1, (v38.m128i_i64[0] + 129600000) / 86400000 % 7 + 48);
                    goto LABEL_16;
                  default:
                    sub_C92E0((__int64)v33);
                    return __readfsqword(0x28u) ^ v43;
                }
              }
              break;
            }
LABEL_16:
            v25 = v17[++v27];
          }
          while ( (_BYTE)v25 );
LABEL_17:
          if ( v26 < v27 )
            sub_DFD90((__int64)v33, &v17[v26], v27 - v26);
        }
        sub_F5060((__int64)a1, (__int64)v33, v25, v22, v23, v24);
      }
    }
  }
  return __readfsqword(0x28u) ^ v43;
}
