__int64 __fastcall sub_36560(__int64 *a1, char *a2, _QWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v7; // r15
  __int64 v9; // rax
  int v10; // r14d
  const char *(__fastcall *v11)(__int64); // rdx
  const char *v12; // r13
  const char *(__fastcall *v13)(__int64 *, __int64); // rax
  const char *v14; // rsi
  __int64 (__fastcall *v15)(__int64); // rax
  char *v16; // rdi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i si128; // xmm0
  __int64 v21; // r9
  unsigned __int64 v22; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rdi
  void *v25; // rdi
  __int64 v26; // rax
  unsigned __int64 v27; // r9
  size_t v28; // r10
  __int64 v29; // rax
  const void *v30; // r11
  void *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-90h]
  unsigned __int64 v33; // [rsp+8h] [rbp-90h]
  unsigned __int64 v34; // [rsp+8h] [rbp-90h]
  size_t v35; // [rsp+10h] [rbp-88h]
  const void *v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h] BYREF
  __int128 v38; // [rsp+28h] [rbp-70h]
  void *dest; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v7 = (__int64 *)a1[1];
  v41 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    v9 = *v7;
    v10 = *a2;
    v11 = *(const char *(__fastcall **)(__int64))(*v7 + 32);
    if ( v11 == sub_303B0 )
    {
      v12 = nptr;
      if ( v7[11] )
        v12 = (const char *)v7[10];
    }
    else
    {
      a1 = v7;
      v12 = v11((__int64)v7);
      v9 = *v7;
    }
    v13 = *(const char *(__fastcall **)(__int64 *, __int64))(v9 + 16);
    if ( v13 == sub_36100 )
    {
      if ( (unsigned __int64)v7[2] > 1 )
        goto LABEL_7;
      v37 = 0;
      v38 = 0;
      v21 = sub_135E0(a1, a2);
      v22 = v7[5];
      dest = nullptr;
      v32 = v21;
      v40 = 0;
      qmutex_lock();
      v23 = *(_QWORD **)(v32 + 1168);
      if ( !v23 )
        goto LABEL_30;
      v24 = (_QWORD *)(v32 + 1160);
      do
      {
        if ( v23[4] >= v22 )
        {
          v24 = v23;
          v23 = (_QWORD *)v23[2];
        }
        else
        {
          v23 = (_QWORD *)v23[3];
        }
      }
      while ( v23 );
      if ( v24 != (_QWORD *)(v32 + 1160) && v22 >= v24[4] )
      {
        v26 = *(_QWORD *)(v32 + 1080) + 72LL * *((int *)v24 + 10);
        if ( &dest != (void **)(v26 + 16) )
        {
          v27 = *(_QWORD *)(v26 + 24);
          if ( v27 && (v28 = v27 - 1, v27 != 1) )
          {
            v30 = *(const void **)(v26 + 16);
            v31 = dest;
            if ( *((_QWORD *)&v40 + 1) < v27 )
            {
              v36 = v30;
              v35 = v27 - 1;
              v34 = v27;
              v31 = (void *)qvector_reserve();
              v30 = v36;
              v28 = v35;
              dest = v31;
              v27 = v34;
            }
            *(_QWORD *)&v40 = v27;
            v33 = v27;
            memmove(v31, v30, v28);
            *((char *)dest + v33 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v40 = 0;
          }
        }
        qmutex_unlock();
        v25 = dest;
        if ( (_QWORD)v40 && *(_BYTE *)dest == 76 )
        {
          sub_32350((__int64)&v37, (__int64)dest);
          v25 = dest;
        }
      }
      else
      {
LABEL_30:
        qmutex_unlock();
        v25 = dest;
      }
      if ( v25 )
      {
        *(_QWORD *)&v40 = 0;
        qfree();
      }
      sub_13B20(v7 + 1);
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree();
      }
      if ( v7[2] )
LABEL_7:
        v14 = (const char *)v7[1];
      else
        v14 = nptr;
    }
    else
    {
      v14 = (const char *)((__int64 (__fastcall *)(__int64 *))v13)(v7);
    }
    sub_111A0((__int64)"DEXSIP: write_value fld %s`%s idcv.vtype=%d\n", v14, v12, v10);
  }
  v15 = *(__int64 (__fastcall **)(__int64))(*v7 + 24);
  if ( v15 == sub_303A0 )
    v16 = (char *)(v7 + 17);
  else
    v16 = (char *)v15((__int64)v7);
  if ( !(unsigned __int8)sub_32CA0(v16, a2, a3, a5) )
    return 0;
  v18 = sub_135E0(v16, a2);
  result = sub_1D180((_QWORD *)(v18 + 1040), v7[4], (__int64)(v7 + 5));
  if ( (_BYTE)result != 1 && a5 )
  {
    v19 = *a5;
    if ( (unsigned __int64)a5[2] <= 0x1E )
    {
      v29 = qvector_reserve();
      *a5 = v29;
      v19 = v29;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_6A540);
    a5[1] = 31;
    *(__m128i *)v19 = si128;
    *(__m128i *)(v19 + 14) = _mm_load_si128((const __m128i *)&xmmword_6A550);
    *(_BYTE *)(*a5 + 30) = 0;
    return 0;
  }
  return result;
}

