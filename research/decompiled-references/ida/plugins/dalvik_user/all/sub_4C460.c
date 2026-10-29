__int64 __fastcall sub_4C460(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  int v6; // esi
  char *v7; // rax
  __int64 v8; // rdx
  __m128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  char v12; // r12
  int v13; // esi
  char v14; // al
  __int8 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rax
  const __m128i *v18; // rcx
  __m128i *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  const __m128i *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // xmm0
  __int64 v29; // [rsp+10h] [rbp-F8h]
  __int64 v30; // [rsp+18h] [rbp-F0h]
  int v31; // [rsp+24h] [rbp-E4h] BYREF
  char *v32; // [rsp+28h] [rbp-E0h] BYREF
  char v33; // [rsp+30h] [rbp-D8h]
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+50h] [rbp-B8h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  __int128 v38; // [rsp+68h] [rbp-A0h]
  char v39; // [rsp+78h] [rbp-90h]
  _BYTE v40[24]; // [rsp+80h] [rbp-88h] BYREF
  int v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v43; // [rsp+A8h] [rbp-60h]
  char v44; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+C8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  qmutex_lock();
  v38 = 0;
  v37 = 0;
  v39 = byte_7FBE9;
  v36 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v35[0] = qalloc();
  if ( !v35[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v6 = *(_DWORD *)(a1 + 8);
  v35[1] = 0;
  sub_46BB0((__int64)v35, v6, a3);
  memset(v40, 0, sizeof(v40));
  v7 = sub_48F20(a1, 2u, 8u, (__int64)v35, (__int64)v40);
  v32 = v7;
  if ( !v7 )
    goto LABEL_8;
  if ( a2 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v41 = 0;
    *(_QWORD *)&v40[16] = v8;
    *(__m128 *)v40 = v9;
    v42 = 0;
    v44 = byte_7FBE9;
    v43 = 0;
    if ( (unsigned __int8)sub_46430((__int64)v40, (unsigned __int32 *)&v31, 1) )
    {
      while ( 1 )
      {
        v10 = v31--;
        if ( v10 <= 0 )
          break;
        if ( (unsigned __int64)v41 >= *(_QWORD *)&v40[16] )
          goto LABEL_7;
        v12 = *(_BYTE *)(*(_QWORD *)&v40[8] + v41++);
        if ( v44 )
          sub_1FAD0(&v42);
        v13 = *(_DWORD *)(a1 + 8);
        v33 = v12;
        v34 = 0;
        v14 = sub_46950((__int64)v40, v13, &v34);
        v15 = v33;
        v16 = v34;
        if ( !v14 )
          goto LABEL_7;
        v17 = *(_QWORD *)(a2 + 8);
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v17 + 1) )
        {
          v29 = *(_QWORD *)(a2 + 16);
          v20 = qvector_reserve();
          v21 = *(_QWORD *)(a2 + 8);
          v22 = *(_QWORD *)(a2 + 16);
          v23 = *(const __m128i **)a2;
          *(_QWORD *)(a2 + 16) = v29;
          v24 = v21 - 1;
          if ( v24 >= 0 )
          {
            v25 = v20;
            do
            {
              v26 = _mm_loadu_si128(v23);
              v25 += 16;
              ++v23;
              *(__m128i *)(v25 - 16) = v26;
            }
            while ( v24-- != 0 );
          }
          v30 = v20;
          qfree();
          v18 = (const __m128i *)v30;
          v17 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v30;
          *(_QWORD *)(a2 + 16) = v22;
        }
        else
        {
          v18 = *(const __m128i **)a2;
        }
        v19 = (__m128i *)&v18[v17];
        v19->m128i_i8[0] = v15;
        v19->m128i_i64[1] = v16;
        ++*(_QWORD *)(a2 + 8);
      }
      sub_43EB0((__int64)v40);
      goto LABEL_20;
    }
LABEL_7:
    sub_43EB0((__int64)v40);
LABEL_8:
    v11 = 0;
    goto LABEL_21;
  }
LABEL_20:
  v11 = 1;
LABEL_21:
  sub_44B80((_QWORD **)&v32);
  qfree();
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  qmutex_unlock();
  return v11;
}

