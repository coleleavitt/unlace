__int64 __fastcall sub_127A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v13; // r13d
  char v14; // al
  __int64 v15; // r14
  char v16; // al
  __int64 v17; // r14
  __int64 v18; // r14
  __int64 v19; // rdi
  unsigned __int64 *v20; // r8
  __int64 v21; // r9
  _QWORD *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // edx
  int v29; // esi
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // r15d
  int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  _BYTE *v42; // rdi
  unsigned __int8 *v43; // [rsp+0h] [rbp-C8h]
  __int64 v44; // [rsp+0h] [rbp-C8h]
  unsigned __int64 *v45; // [rsp+8h] [rbp-C0h]
  __int64 n; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  __int64 v48; // [rsp+20h] [rbp-A8h]
  __int64 v49; // [rsp+28h] [rbp-A0h] BYREF
  void *v50; // [rsp+30h] [rbp-98h] BYREF
  __int128 v51; // [rsp+38h] [rbp-90h]
  __m128i si128; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v53; // [rsp+60h] [rbp-68h] BYREF
  __int128 v54; // [rsp+68h] [rbp-60h]
  char v55; // [rsp+78h] [rbp-50h]
  __int64 v56; // [rsp+80h] [rbp-48h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v8 = a3 + 32;
  v9 = a3 + 32;
  v57 = __readfsqword(0x28u);
  v13 = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v14 = *(_BYTE *)(a3 + 32);
  if ( v14 == 4 )
  {
LABEL_4:
    sub_127FE0(a2, a1, v9, v13, a5, a6, (int)v43, (int)v45, n, v47, v48);
  }
  else
  {
    while ( v14 == 14 )
    {
      sub_128EE0(a2, a1, *(unsigned __int8 **)(v9 + 8), v13, a5, a6, (int)v43, (int)v45, n, v47, v48);
      v15 = *(_QWORD *)(v9 + 8);
      v14 = *(_BYTE *)(v15 + 16);
      v9 = v15 + 16;
      if ( v14 == 4 )
        goto LABEL_4;
    }
  }
  v16 = *(_BYTE *)(a3 + 48);
  v17 = a3 + 48;
  if ( v16 == 4 )
  {
LABEL_8:
    sub_127FE0(a2, a1, v17, v13, a5, a6, (int)v43, (int)v45, n, v47, v48);
  }
  else
  {
    while ( v16 == 14 )
    {
      sub_128EE0(a2, a1, *(unsigned __int8 **)(v17 + 8), v13, a5, a6, (int)v43, (int)v45, n, v47, v48);
      v18 = *(_QWORD *)(v17 + 8);
      v16 = *(_BYTE *)(v18 + 16);
      v17 = v18 + 16;
      if ( v16 == 4 )
        goto LABEL_8;
    }
  }
  v19 = *(_QWORD *)(a2 + 480);
  v20 = *(unsigned __int64 **)(v19 + 112);
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
      return a1;
    case 1:
      goto LABEL_39;
    case 8:
    case 9:
      v21 = a3 + 64;
      if ( (v13 & 0x100) != 0 )
        goto LABEL_12;
      v43 = (unsigned __int8 *)(a3 + 64);
      v45 = *(unsigned __int64 **)(v19 + 112);
      v32 = sub_127420(v8, v45, (unsigned __int8 *)(a3 + 64), a4, 0.0);
      v21 = a3 + 64;
      if ( !v32 )
        goto LABEL_12;
      v35 = *(_DWORD *)(a3 + 36);
      if ( *(_BYTE *)(a3 + 32) == 14 )
        v35 >>= 1;
      sub_123A40((__int64)&si128, v43, v33, v34);
      if ( (unsigned __int8)sub_127850((__int64)&si128, v45, *(_DWORD *)(a3 + 68) - v35, 0, (__m128i)0LL) )
      {
        sub_127FE0(a2, a1, (__int64)&si128, v13, v36, (int)v43, (int)v43, (int)v45, n, v47, v48);
        sub_11CDA0((__int64)&si128);
      }
      else
      {
        sub_11CDA0((__int64)&si128);
        v21 = a3 + 64;
LABEL_12:
        sub_127FE0(a2, a1, v21, v13, (int)v20, v21, (int)v43, (int)v45, n, v47, v48);
      }
      break;
    case 0x38:
    case 0x39:
      if ( !*(_BYTE *)(a3 + 64) && (v13 & 1) != 0 && *(_BYTE *)(a3 + 32) != 11 )
      {
        si128 = 0u;
        v54 = 0;
        v53 = nullptr;
        v49 = 0;
        if ( !(unsigned __int8)sub_F8360(v19, &v49, (_DWORD *)a3, 0.0) )
          clear_tinfo_t();
        sub_1390C0(*(_QWORD *)(a2 + 64), 0, si128.m128i_i64, (__int64)&v49, *(_QWORD *)(a3 + 24), 0);
        if ( (v13 & 0x2000) == 0 )
        {
          v37 = *(_QWORD *)(a2 + 64);
          v50 = nullptr;
          v51 = 0;
          v38 = *(_QWORD *)(v37 + 216);
          if ( v38 )
          {
            v47 = v37;
            v44 = *(_QWORD *)(v37 + 216);
            n = 16 * v38;
            v50 = (void *)qalloc_or_throw(16 * v38, 0, 16 * v38, v37);
            *((_QWORD *)&v51 + 1) = v44;
            LODWORD(v45) = v44;
            memcpy(v50, *(const void **)(v47 + 208), n);
            v37 = v47;
            *(_QWORD *)&v51 = v44;
          }
          v43 = (unsigned __int8 *)&v50;
          sub_317BD0((__int64 *)&v50, (__m128i *)(v37 + 600));
          sub_317C60((__int64 *)&v53, (__int64)&v50);
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree((__int64)v50);
          }
        }
        sub_64280((__int64 *)a1, si128.m128i_i64, 0.0);
        sub_316CB0((__int64 *)(a1 + 16), &v53, v39, v40);
        clear_tinfo_t();
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree((__int64)v53);
        }
        qfree(si128.m128i_i64[0]);
      }
      goto LABEL_11;
    case 0x3B:
      v23 = *(_QWORD **)(a2 + 64);
      v45 = *(unsigned __int64 **)(v19 + 112);
      v43 = (unsigned __int8 *)(a1 + 16);
      v24 = *(int *)(a3 + 36);
      v25 = sub_1CFBB0((__int64)v23, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v25 += *(int *)(v23[188] + 80LL);
      v26 = *(int *)(a3 + 36);
      v27 = *(_QWORD *)(*(_QWORD *)(v23[187] + 24LL) + 16LL) & (v23[180] + v25);
      *(_QWORD *)&v51 = v24;
      v50 = (void *)(v27 - v26);
      sub_316BB0((__int64 *)v43, (__m128i *)&v50, 0.0, a8);
      v20 = v45;
      goto LABEL_17;
    case 0x3C:
LABEL_17:
      v28 = *((_DWORD *)v20 + 21);
      v29 = *((_DWORD *)v20 + 15);
      si128 = 0u;
      sub_63E80(si128.m128i_i64, v29, v28, 0.0);
      v53 = nullptr;
      v54 = 0;
      sub_64280((__int64 *)a1, si128.m128i_i64, 0.0);
      sub_316CB0((__int64 *)(a1 + 16), &v53, v30, v31);
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree((__int64)v53);
      }
      qfree(si128.m128i_i64[0]);
      v21 = a3 + 64;
      goto LABEL_12;
    case 0x3D:
      if ( (v13 & 1) == 0 )
        goto LABEL_11;
      v21 = a3 + 64;
      if ( *(_BYTE *)(a3 + 64) != 4 || **(_DWORD **)(a3 + 72) != 2 )
        goto LABEL_12;
      si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
      sub_316BB0((__int64 *)(a1 + 16), &si128, *(double *)si128.m128i_i64, a8);
      break;
    case 0x3E:
      if ( (*(_BYTE *)(a3 + 5) & 0x10) == 0 )
        goto LABEL_11;
LABEL_39:
      if ( (v13 & 1) != 0 )
      {
        sub_316CB0((__int64 *)(a1 + 16), (__int64 **)(*(_QWORD *)(a2 + 64) + 232LL), a3, a4);
        if ( *(_BYTE *)(a3 + 64) == 4 )
        {
          v41 = *(_QWORD *)(a2 + 64);
          v42 = *(_BYTE **)(a3 + 72);
          v53 = nullptr;
          v54 = 0u;
          v55 = 0;
          si128.m128i_i64[0] = (__int64)&off_4DD688;
          v56 = a1;
          si128.m128i_i64[1] = v41;
          sub_11E900(v42, (__int64)&si128);
        }
      }
      return a1;
    default:
LABEL_11:
      v21 = a3 + 64;
      goto LABEL_12;
  }
  return a1;
}

