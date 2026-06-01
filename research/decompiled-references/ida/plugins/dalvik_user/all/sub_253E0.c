__int64 __fastcall sub_253E0(_QWORD *a1, __m128i *a2, unsigned __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdi
  const __m128i *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rsi
  const __m128i *v19; // rdx
  _QWORD *v21; // [rsp+8h] [rbp-70h]
  unsigned __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  qmutex_lock();
  v6 = (_QWORD *)a1[55];
  v23 = 0;
  v7 = a1 + 54;
  v25 = 0;
  v22 = a3;
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] < a3 )
          break;
        v7 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v8 )
          goto LABEL_6;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v9 );
LABEL_6:
    if ( a1 + 54 != v7 && a3 >= v7[4] )
      goto LABEL_15;
  }
  v24 = 0;
  v21 = sub_25230(a1 + 53, v7, (__int64)&v22);
  v7 = v21;
  if ( v24 )
    qfree();
  v10 = a1[2];
  v22 = 0;
  v23 = 0;
  if ( (unsigned __int8)sub_4EA10(v10, &v22, a3) )
  {
    if ( (_BYTE)v22 == 1 )
    {
      v12 = v23;
      v21[5] = v23;
      v13 = sub_25060(a1, v12);
      if ( v13 )
      {
        if ( (unsigned __int8)sub_4EC50(a1[2], v21 + 6, a3, v13) )
        {
LABEL_15:
          v14 = sub_25060(a1, v7[5]);
          if ( v14 && (v15 = v7[7], v15 == v14[1]) )
          {
            v16 = (const __m128i *)v7[6];
            v17 = *v14;
            v18 = v17 + 112 * v15;
            v19 = v16;
            if ( 112 * v15 )
            {
              while ( a2->m128i_i64[1] != *(_QWORD *)(v17 + 8) )
              {
                v17 += 112;
                ++v19;
                if ( v18 == v17 )
                  goto LABEL_22;
              }
              a2[6] = _mm_loadu_si128(v19);
              v16 = (const __m128i *)v7[6];
              v15 = v7[7];
            }
LABEL_22:
            if ( v19 != &v16[v15] )
            {
              v11 = 1;
              goto LABEL_24;
            }
            if ( !under_debugger )
              interr();
          }
          else if ( !under_debugger )
          {
            interr();
          }
          BUG();
        }
      }
    }
  }
  v11 = 0;
LABEL_24:
  qmutex_unlock();
  return v11;
}

