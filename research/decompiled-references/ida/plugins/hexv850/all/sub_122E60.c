__int64 __fastcall sub_122E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned int v9; // r13d
  char v10; // al
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edx
  int v27; // esi
  char v28; // al
  unsigned int v29; // r15d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  _BYTE *v33; // rdi
  __int64 v34; // [rsp+0h] [rbp-C8h]
  __int64 v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  __int64 n; // [rsp+10h] [rbp-B8h]
  __int64 v38; // [rsp+18h] [rbp-B0h]
  __int64 v39; // [rsp+28h] [rbp-A0h] BYREF
  void *v40; // [rsp+30h] [rbp-98h] BYREF
  __int128 v41; // [rsp+38h] [rbp-90h]
  __m128i si128; // [rsp+50h] [rbp-78h] BYREF
  __int64 v43; // [rsp+60h] [rbp-68h] BYREF
  __int128 v44; // [rsp+68h] [rbp-60h]
  char v45; // [rsp+78h] [rbp-50h]
  __int64 v46; // [rsp+80h] [rbp-48h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v4 = a3 + 32;
  v5 = a3 + 32;
  v47 = __readfsqword(0x28u);
  v9 = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v10 = *(_BYTE *)(a3 + 32);
  if ( v10 == 4 )
  {
LABEL_4:
    sub_123420(a2, a1, v5, v9);
  }
  else
  {
    while ( v10 == 14 )
    {
      sub_124320(a2, a1, *(_QWORD *)(v5 + 8), v9);
      v11 = *(_QWORD *)(v5 + 8);
      v10 = *(_BYTE *)(v11 + 16);
      v5 = v11 + 16;
      if ( v10 == 4 )
        goto LABEL_4;
    }
  }
  v12 = *(_BYTE *)(a3 + 48);
  v13 = a3 + 48;
  if ( v12 == 4 )
  {
LABEL_8:
    sub_123420(a2, a1, v13, v9);
  }
  else
  {
    while ( v12 == 14 )
    {
      sub_124320(a2, a1, *(_QWORD *)(v13 + 8), v9);
      v14 = *(_QWORD *)(v13 + 8);
      v12 = *(_BYTE *)(v14 + 16);
      v13 = v14 + 16;
      if ( v12 == 4 )
        goto LABEL_8;
    }
  }
  v15 = *(_QWORD *)(a2 + 480);
  v16 = *(_QWORD *)(v15 + 112);
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
      v17 = a3 + 64;
      if ( (v9 & 0x100) != 0 )
        goto LABEL_12;
      v36 = *(_QWORD *)(v15 + 112);
      v28 = sub_122860(v4, v36, (unsigned __int8 *)(a3 + 64));
      v17 = a3 + 64;
      if ( !v28 )
        goto LABEL_12;
      v29 = *(_DWORD *)(a3 + 36);
      if ( *(_BYTE *)(a3 + 32) == 14 )
        v29 >>= 1;
      sub_11EE80((__int64)&si128, (unsigned __int8 *)(a3 + 64));
      if ( (unsigned __int8)sub_122C90((unsigned __int64)&si128, v36, *(_DWORD *)(a3 + 68) - v29, 0) )
      {
        sub_123420(a2, a1, &si128, v9);
        sub_1181E0((__int64)&si128);
      }
      else
      {
        sub_1181E0((__int64)&si128);
        v17 = a3 + 64;
LABEL_12:
        sub_123420(a2, a1, v17, v9);
      }
      break;
    case 0x38:
    case 0x39:
      if ( !*(_BYTE *)(a3 + 64) && (v9 & 1) != 0 && *(_BYTE *)(a3 + 32) != 11 )
      {
        si128 = 0u;
        v44 = 0;
        v43 = 0;
        v39 = 0;
        if ( !(unsigned __int8)sub_F37A0(v15, (__int64)&v39, (_DWORD *)a3) )
          clear_tinfo_t();
        sub_134500(*(_QWORD *)(a2 + 64), 0, &si128, &v39, *(_QWORD *)(a3 + 24), 0);
        if ( (v9 & 0x2000) == 0 )
        {
          v30 = *(_QWORD *)(a2 + 64);
          v40 = nullptr;
          v41 = 0;
          v31 = *(_QWORD *)(v30 + 216);
          if ( v31 )
          {
            v38 = v30;
            v34 = *(_QWORD *)(v30 + 216);
            n = 16 * v31;
            v40 = (void *)qalloc_or_throw();
            *((_QWORD *)&v41 + 1) = v34;
            memcpy(v40, *(const void **)(v38 + 208), n);
            v30 = v38;
            *(_QWORD *)&v41 = v34;
          }
          sub_312310(&v40, v30 + 600);
          sub_3123A0(&v43, &v40);
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree();
          }
        }
        sub_5F800((__int64 *)a1, si128.m128i_i64);
        sub_3113F0(a1 + 16, &v43);
        clear_tinfo_t();
        if ( v43 )
        {
          *(_QWORD *)&v44 = 0;
          qfree();
        }
        qfree();
      }
      goto LABEL_11;
    case 0x3B:
      v19 = *(_QWORD **)(a2 + 64);
      v35 = *(_QWORD *)(v15 + 112);
      v20 = *(int *)(a3 + 36);
      v21 = sub_1CAD30(v19, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v21 += *(int *)(v19[188] + 80LL);
      v23 = *(int *)(a3 + 36);
      v24 = *(_QWORD *)(v19[187] + 24LL);
      v25 = *(_QWORD *)(v24 + 16) & (v19[180] + v21);
      *(_QWORD *)&v41 = v20;
      v40 = (void *)(v25 - v23);
      sub_3112F0(a1 + 16, &v40, v23, v24, v35, v22);
      v16 = v35;
      goto LABEL_17;
    case 0x3C:
LABEL_17:
      v26 = *(_DWORD *)(v16 + 84);
      v27 = *(_DWORD *)(v16 + 60);
      si128 = 0u;
      sub_5F400(si128.m128i_i64, v27, v26);
      v43 = 0;
      v44 = 0;
      sub_5F800((__int64 *)a1, si128.m128i_i64);
      sub_3113F0(a1 + 16, &v43);
      if ( v43 )
      {
        *(_QWORD *)&v44 = 0;
        qfree();
      }
      qfree();
      v17 = a3 + 64;
      goto LABEL_12;
    case 0x3D:
      if ( (v9 & 1) == 0 )
        goto LABEL_11;
      v17 = a3 + 64;
      if ( *(_BYTE *)(a3 + 64) != 4 || **(_DWORD **)(a3 + 72) != 2 )
        goto LABEL_12;
      si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
      sub_3112F0(a1 + 16, &si128, a3, a4, v16, v17);
      break;
    case 0x3E:
      if ( (*(_BYTE *)(a3 + 5) & 0x10) == 0 )
        goto LABEL_11;
LABEL_39:
      if ( (v9 & 1) != 0 )
      {
        sub_3113F0(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
        if ( *(_BYTE *)(a3 + 64) == 4 )
        {
          v32 = *(_QWORD *)(a2 + 64);
          v33 = *(_BYTE **)(a3 + 72);
          v43 = 0;
          v44 = 0u;
          v45 = 0;
          si128.m128i_i64[0] = (__int64)off_4B1068;
          v46 = a1;
          si128.m128i_i64[1] = v32;
          sub_119D40(v33, (__int64)&si128);
        }
      }
      return a1;
    default:
LABEL_11:
      v17 = a3 + 64;
      goto LABEL_12;
  }
  return a1;
}

