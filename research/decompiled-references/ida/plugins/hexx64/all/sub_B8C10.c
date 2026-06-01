__int64 __fastcall sub_B8C10(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 **a3,
        _QWORD **a4,
        char *a5,
        int a6,
        double a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int8 v12; // al
  __int64 *v13; // rax
  __int64 *v14; // r15
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // r11
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  _DWORD *v28; // r8
  __m128i v29; // xmm0
  __m128i v30; // xmm1
  __int64 v31; // rcx
  __int64 v32; // r9
  const char *v33; // rdx
  __int64 v35; // [rsp+18h] [rbp-80h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v40[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v12 = *a5;
  LOBYTE(v8) = v12 == 15 || v12 == 1;
  if ( (_BYTE)v8 )
  {
    v13 = sub_1FBD10(a4, (unsigned __int64)a5);
    v14 = v13;
    if ( !v13 )
      return 0;
    v15 = *v13;
    v16 = *((int *)v13 + 4);
    if ( *(_QWORD *)(v15 + 440) >= v16 )
    {
      v17 = *a5 == 4;
      v18 = *(_QWORD *)(v15 + 432) + 104 * v16;
      v19 = v14[1];
      v39 = v19;
      if ( !v17 )
      {
        v37 = v18;
        v35 = *(_QWORD *)(a1 + 96);
        v20 = sub_11CC50((unsigned __int8 *)a5, v35);
        v18 = v37;
        if ( v20 == *(_BYTE *)(v35 + 145) )
        {
          v19 = v39;
        }
        else
        {
          v21 = *((int *)a5 + 1);
          v22 = *(_QWORD *)(a1 + 96);
          *(_QWORD *)v40 = v14[1];
          if ( !(unsigned __int8)sub_1C50C0(v37, v22, (__int64 *)v40, v21, *(int *)(v37 + 88)) )
            return 0;
          v23 = *(_QWORD *)(a1 + 96);
          v24 = *(int *)(v37 + 88);
          v39 = *(_QWORD *)v40;
          if ( !(unsigned __int8)sub_1C50C0(v37, v23, &v39, a6, v24) )
            return 0;
          v19 = v39;
          v18 = v37;
        }
      }
      if ( v19 < 0 || a6 + v19 > *(int *)(v18 + 88) )
        return 0;
      v27 = *((int *)v14 + 4);
      if ( *(_QWORD *)(*v14 + 440) >= v27 )
      {
        v28 = (_DWORD *)(*(_QWORD *)(*v14 + 432) + 104 * v27);
        if ( *v28 == 2 )
        {
          v38 = *(_QWORD *)(*v14 + 432) + 104 * v27;
          *(_QWORD *)v40 = 0;
          copy_tinfo_t();
          v33 = s1;
          if ( *(_QWORD *)(v38 + 40) )
            v33 = *(const char **)(v38 + 32);
          sub_11D150((__int64)a2, *v14, v33, (__int64 *)v40, (_DWORD *)v38);
          clear_tinfo_t();
          v32 = a6;
        }
        else
        {
          if ( *v28 != 3 )
            return 0;
          v29 = _mm_cvtsi32_si128(v28[22]);
          v30 = _mm_cvtsi32_si128(v28[2]);
          *(_DWORD *)v40 = 1;
          *(_QWORD *)&a7 = _mm_unpacklo_epi32(v29, v30).m128i_u64[0];
          *(double *)&v40[4] = a7;
          sub_125180((__int64)a2, v40);
          sub_11CDA0((__int64)v40);
          v32 = a6;
        }
        if ( *a2 == 15 )
        {
          v36 = v32;
          if ( !(unsigned __int8)sub_126980((__int64)a2, v39, a6, 0) )
          {
            if ( !a8 )
              return 0;
            if ( v36 != get_tinfo_size() )
            {
              if ( !under_debugger )
                sub_383060(0xCE81u, a7);
              BUG();
            }
            if ( !(unsigned __int8)sub_126980((__int64)a2, v39, a6, 2) )
              return 0;
            if ( *a2 == 15 )
              copy_tinfo_t();
          }
        }
        else if ( !(unsigned __int8)sub_126F10((unsigned __int64)a2, a1, v39, v31)
               || !(unsigned __int8)sub_12AB50(a2, a1, a6, 256) )
        {
          return 0;
        }
        if ( (a5[1] & 0x40) != 0 )
          a2[1] |= 0x40u;
        *a3 = v14;
        return v8;
      }
    }
    sub_B7BC0(a7);
  }
  if ( v12 != 4 )
  {
    v26 = *(_QWORD *)(a1 + 96);
    if ( sub_11CC50((unsigned __int8 *)a5, v26) != *(_BYTE *)(v26 + 145) )
      return v8;
  }
  *a3 = nullptr;
  sub_125180((__int64)a2, (unsigned __int8 *)a5);
  if ( *a5 == 2 && a6 > 8 )
    a6 = 8;
  return sub_12AB50(a2, a1, a6, 256);
}

