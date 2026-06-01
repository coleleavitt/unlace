__int64 __fastcall sub_4D780(unsigned __int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  const __m128i *v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r14
  char v19; // al
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int32 v22; // r8d
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int32 v25; // [rsp+Ch] [rbp-ECh]
  int v26; // [rsp+14h] [rbp-E4h] BYREF
  __int64 *v27; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+20h] [rbp-D8h]
  unsigned __int32 v29; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v30[8]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v31[24]; // [rsp+70h] [rbp-88h] BYREF
  int v32; // [rsp+88h] [rbp-70h]
  __int64 v33; // [rsp+90h] [rbp-68h] BYREF
  __int128 v34; // [rsp+98h] [rbp-60h]
  char v35; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+B8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)v30, byte_7FBE9, 0x10u);
  sub_46BB0((__int64)v30, *(_DWORD *)(a1 + 8), a3);
  sub_46BB0((__int64)v30, *(_DWORD *)(a1 + 4), a4);
  memset(v31, 0, sizeof(v31));
  v7 = (const __m128i *)sub_48F20(a1, 6u, 1u, (__int64)v30, (__int64)v31);
  v27 = (__int64 *)v7;
  if ( !v7 )
    goto LABEL_5;
  if ( a2 )
  {
    v8 = _mm_loadl_epi64(v7);
    v9 = v7->m128i_u64[1];
    v32 = 0;
    v33 = 0;
    *(_QWORD *)&v31[16] = v9;
    *(__m128i *)v31 = _mm_unpacklo_epi64((__m128i)a1, v8);
    v34 = 0;
    v35 = byte_7FBE9;
    if ( v9 > 7 )
    {
      v12 = swap64();
      v32 += 8;
      v13 = v35 == 0;
      *a2 = v12;
      if ( !v13 )
        sub_1FAD0(&v33);
      if ( (unsigned __int8)sub_468D0((__int64)v31, a2 + 1, 1)
        && (unsigned __int8)sub_46430((__int64)v31, (unsigned __int32 *)&v26, 1) )
      {
        v14 = v26--;
        if ( v14 <= 0 )
        {
LABEL_22:
          sub_43EB0((__int64)v31);
          goto LABEL_23;
        }
        while ( *(_QWORD *)&v31[16] >= (unsigned __int64)(v32 + 8LL) )
        {
          v17 = swap64();
          v32 += 8;
          v18 = v17;
          if ( v35 )
            sub_1FAD0(&v33);
          v28 = v18;
          v19 = sub_46430((__int64)v31, &v29, 1);
          v20 = v28;
          if ( !v19 )
            break;
          v21 = a2[3];
          v22 = v29;
          v23 = a2[2];
          if ( a2[4] < (unsigned __int64)(v21 + 1) )
          {
            v25 = v29;
            v24 = qvector_reserve();
            a2[2] = v24;
            v23 = v24;
            v22 = v25;
            v21 = a2[3];
          }
          v15 = 16 * v21 + v23;
          v16 = v26;
          *(_QWORD *)v15 = v20;
          *(_DWORD *)(v15 + 8) = v22;
          v26 = v16 - 1;
          ++a2[3];
          if ( v16 <= 0 )
            goto LABEL_22;
        }
      }
    }
    sub_43EB0((__int64)v31);
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
LABEL_23:
  v10 = 1;
LABEL_6:
  sub_44B80(&v27);
  qfree();
  if ( v30[4] )
  {
    v30[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v10;
}

