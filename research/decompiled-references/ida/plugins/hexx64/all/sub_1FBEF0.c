__int64 __fastcall sub_1FBEF0(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v11; // edx
  __int64 v12; // rsi
  int v13; // r15d
  int v14; // eax
  int v15; // eax
  int **v16; // r15
  char v17; // al
  int v18; // ecx
  __int64 v19; // rdx
  unsigned __int64 v20; // r15
  __int64 *v21; // rax
  __int64 v22; // r12
  int v23; // edx
  __int64 v24; // rdi
  char v25; // al
  __int64 v27; // rdx
  _DWORD *v28; // rcx
  _DWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  char v36; // [rsp+28h] [rbp-B0h]
  int v37; // [rsp+2Ch] [rbp-ACh]
  __m128i v38; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 v40; // [rsp+48h] [rbp-90h]
  unsigned __int64 v41; // [rsp+50h] [rbp-88h] BYREF
  __int64 v42; // [rsp+58h] [rbp-80h]
  __m128i v43; // [rsp+60h] [rbp-78h] BYREF
  __int64 v44; // [rsp+70h] [rbp-68h] BYREF
  __int64 v45; // [rsp+78h] [rbp-60h]
  __int64 v46; // [rsp+80h] [rbp-58h] BYREF
  __int128 v47; // [rsp+88h] [rbp-50h]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v11 = a4[22];
  v48 = __readfsqword(0x28u);
  v38 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  if ( !(unsigned __int8)sub_1C3110((__int64)a4, (__int64)&v38, v11, *(double *)a7.m128i_i64) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    a7.m128i_i64[0] = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    sub_1C3380((__int64)a4, v12, (__int64)&v44, 0, 0.0, a8);
    if ( (_QWORD)v47 )
    {
      if ( v46 )
      {
        *(_QWORD *)&v47 = 0;
        qfree(v46);
      }
      goto LABEL_26;
    }
    v13 = sub_64960(&v44, 0);
    v14 = sub_64C00(&v44);
    v38.m128i_i8[8] = 1;
    v38.m128i_i64[0] = v13;
    v38.m128i_i32[3] = v14 - v13 + 1;
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
    qfree(v44);
  }
  v39 = -1;
  v40 = 0;
  if ( !(unsigned __int8)sub_1219B0((char *)a5, (__int64)&v39) )
    return 0;
  v15 = 1;
  if ( *(_DWORD *)(a5 + 4) != -1 )
  {
    v16 = *(int ***)(a1 + 32);
    if ( sub_11CC50((unsigned __int8 *)a5, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL), 0, *(double *)a7.m128i_i64) )
      v15 = *(_DWORD *)(a5 + 4);
    else
      v15 = sub_207610(a5, v16);
  }
  HIDWORD(v40) = v15;
  sub_32F920(v38.m128i_i64, &v39);
  v17 = sub_228C90(*(_QWORD *)(a1 + 8), (__int64)a4);
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0x10;
  if ( v18 )
    LOBYTE(v18) = v38.m128i_i32[3] == *(_DWORD *)(a5 + 4);
  v36 = v17;
  if ( !sub_1FB550((unsigned int *)&v38, *(_QWORD *)(a1 + 8), a6, v18, v17) )
    return 0;
  if ( *(_BYTE *)(a1 + 109) )
  {
    v37 = 0;
    v20 = 0;
  }
  else
  {
    v20 = *(int *)(a1 + 104);
    v37 = *(_DWORD *)(a1 + 104);
  }
  v21 = *(__int64 **)(a1 + 48);
  if ( v20 < v21[1] )
  {
    while ( 1 )
    {
      v19 = *v21;
      v22 = *v21 + 104 * v20;
      if ( a4 == (_DWORD *)v22 || (*(_BYTE *)(v22 + 25) & 0x10) != 0 )
        goto LABEL_48;
      v23 = *(_DWORD *)(v22 + 88);
      v24 = *v21 + 104 * v20;
      v41 = -1;
      v42 = 0;
      if ( (unsigned __int8)sub_1C3110(v24, (__int64)&v41, v23, *(double *)a7.m128i_i64) )
      {
        if ( v38.m128i_i8[8] == (_BYTE)v42 )
        {
          v19 = SHIDWORD(v42);
          if ( v38.m128i_i32[3] )
          {
            if ( HIDWORD(v42)
              && v38.m128i_i32[3] + v38.m128i_i64[0] - 1 >= v41
              && SHIDWORD(v42) + v41 - 1 >= v38.m128i_i64[0]
              && (v20 >= *(int *)(a1 + 104) || sub_1F08F0(*(_QWORD *)(a1 + 8), (__int64)&v41, *(_QWORD *)(v22 + 16))) )
            {
              v27 = a3[1];
              v28 = (_DWORD *)(*a3 + 4 * v27);
              v29 = (_DWORD *)*a3;
              if ( (_DWORD *)*a3 == v28 )
                goto LABEL_57;
              while ( (_DWORD)v20 != *v29 )
              {
                if ( v28 == ++v29 )
                  goto LABEL_57;
              }
              if ( v28 == v29 )
              {
LABEL_57:
                v30 = v27 + 1;
                if ( a3[2] < v30 )
                {
                  v31 = qvector_reserve((__int64)a3, *a3, v30, 4);
                  v32 = a3[1];
                  *a3 = v31;
                  v28 = (_DWORD *)(v31 + 4 * v32);
                }
                *v28 = v20;
                ++a3[1];
              }
              if ( v38.m128i_i8[8] != (_BYTE)v42
                || (v19 = v38.m128i_i64[0], !v38.m128i_i32[3])
                || v41 < v38.m128i_i64[0]
                || v38.m128i_i32[3] + v38.m128i_i64[0] - 1 < v41 + SHIDWORD(v42) - 1 )
              {
                sub_32F920(v38.m128i_i64, (__int64 *)&v41);
                if ( !sub_1FB550((unsigned int *)&v38, *(_QWORD *)(a1 + 8), a6, 0, v36) )
                {
                  *(_DWORD *)(v22 + 24) |= 0x400u;
                  return 0;
                }
                v20 = v37 - 1;
              }
            }
          }
        }
        v21 = *(__int64 **)(a1 + 48);
LABEL_48:
        if ( ++v20 >= v21[1] )
          break;
      }
      else
      {
        if ( ((*(_DWORD *)v22 - 2) & 0xFFFFFFFD) != 0 )
        {
          if ( !under_debugger )
            sub_383060(0xCEBAu, *(double *)a7.m128i_i64);
LABEL_71:
          BUG();
        }
        a7.m128i_i64[0] = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v47 = 0;
        sub_1C31B0(v22, (__int64)&v44, *(_DWORD *)(v22 + 88), 0, 0, 0.0, a8);
        if ( v38.m128i_i8[8] == 5 )
        {
          a8 = (__m128)(unsigned __int64)v38.m128i_i32[3];
          a7 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v38), (__m128i)a8);
          v43 = a7;
          v25 = sub_317E70(&v46, &v43, 0);
        }
        else
        {
          if ( v38.m128i_i8[8] != 1 )
          {
            if ( !under_debugger )
              sub_383060(0xCAB4u, 0.0);
            goto LABEL_71;
          }
          v25 = sub_64A60(&v44, v38.m128i_i32[0], v38.m128i_i32[3]);
        }
        if ( v25 )
        {
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree(v46);
          }
LABEL_26:
          qfree(v44);
          return 0;
        }
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
        }
        ++v20;
        qfree(v44);
        v21 = *(__int64 **)(a1 + 48);
        if ( v20 >= v21[1] )
          break;
      }
    }
  }
  if ( (unsigned int)(*a4 - 1) > 2 )
  {
    if ( !under_debugger )
      sub_383060(0xC75Cu, *(double *)a7.m128i_i64);
    goto LABEL_71;
  }
  sub_32F770(v38.m128i_i64, a2, v19);
  return v38.m128i_u32[3];
}

