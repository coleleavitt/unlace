__int64 __fastcall sub_4C170(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  _WORD *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // esi
  char *v8; // rax
  __int64 v9; // rdx
  __m128 v10; // xmm0
  unsigned int v11; // r13d
  char *v14; // [rsp+18h] [rbp-F0h] BYREF
  _WORD *v15; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v16; // [rsp+28h] [rbp-E0h]
  _QWORD v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+60h] [rbp-A8h]
  __int128 v20; // [rsp+68h] [rbp-A0h]
  char v21; // [rsp+78h] [rbp-90h]
  __m128 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h]
  int v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  char v27; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  qmutex_lock();
  v20 = 0;
  v19 = 0;
  v21 = byte_7FBE9;
  v18 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v17[0] = qalloc();
  if ( !v17[0] )
    sub_43DF0((__int64)"JDWP encoder");
  v17[1] = 0;
  v16 = 0;
  v15 = (_WORD *)qvector_reserve();
  *v15 = 101;
  v4 = v15;
  v5 = v16 + 1;
  v6 = v16 + 2;
  *(_QWORD *)&v16 = v16 + 1;
  if ( *((_QWORD *)&v16 + 1) < v6 )
  {
    v15 = (_WORD *)qvector_reserve();
    v4 = v15;
    v5 = v16;
  }
  v4[v5] = 20;
  v7 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)&v16 = v16 + 1;
  sub_46BB0((__int64)v17, v7, a3);
  v8 = sub_48F20(a1, 2u, 7u, (__int64)v17, (__int64)&v15);
  v14 = v8;
  if ( v8 )
  {
    v9 = *((_QWORD *)v8 + 1);
    v10 = _mm_loadh_ps((const double *)v8);
    v24 = 0;
    v22 = v10;
    v23 = v9;
    v25 = 0;
    v27 = byte_7FBE9;
    v26 = 0;
    v11 = sub_464A0((__int64)&v22, a2);
    sub_43EB0((__int64)&v22);
  }
  else
  {
    v11 = *(unsigned __int8 *)(a1 + 57);
    if ( ((unsigned __int8)v11 & (a2 != nullptr)) != 0 )
    {
      if ( *a2 )
      {
        a2[1] = 0;
        qfree();
        *a2 = 0;
        a2[2] = 0;
        v11 = *(unsigned __int8 *)(a1 + 57);
      }
      else
      {
        v11 = (unsigned __int8)v11 & (a2 != nullptr);
      }
    }
  }
  sub_44B80((_QWORD **)&v14);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree();
  }
  qfree();
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  qmutex_unlock();
  return v11;
}

