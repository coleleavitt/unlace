__int64 __fastcall sub_4EA10(unsigned __int64 a1, __m128i *a2, __int64 a3)
{
  int v4; // esi
  char *v5; // rax
  __int64 v6; // rdx
  __m128 v7; // xmm0
  unsigned int v8; // ebx
  char *v11; // [rsp+18h] [rbp-F0h] BYREF
  _WORD *v12; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v13; // [rsp+28h] [rbp-E0h]
  _QWORD v14[2]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v15; // [rsp+50h] [rbp-B8h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int128 v17; // [rsp+68h] [rbp-A0h]
  char v18; // [rsp+78h] [rbp-90h]
  __m128 v19; // [rsp+80h] [rbp-88h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+98h] [rbp-70h]
  __int64 v22; // [rsp+A0h] [rbp-68h]
  __int128 v23; // [rsp+A8h] [rbp-60h]
  char v24; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v25; // [rsp+C8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  qmutex_lock();
  v13 = 0;
  v12 = (_WORD *)qvector_reserve();
  *v12 = 20;
  v17 = 0;
  v18 = byte_7FBE9;
  *(_QWORD *)&v13 = v13 + 1;
  v16 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)8uLL, (__m128i)8uLL);
  v14[0] = qalloc();
  if ( !v14[0] )
    sub_43DF0((__int64)"JDWP encoder", 0);
  v4 = *(_DWORD *)(a1 + 8);
  v14[1] = 0;
  sub_46BB0((__int64)v14, v4, a3);
  v5 = sub_48F20(a1, 9u, 1u, (__int64)v14, (__int64)&v12);
  v11 = v5;
  if ( v5 )
  {
    v6 = *((_QWORD *)v5 + 1);
    v7 = _mm_loadh_ps((const double *)v5);
    v21 = 0;
    v19 = v7;
    v20 = v6;
    v22 = 0;
    v24 = byte_7FBE9;
    v23 = 0;
    v8 = sub_471E0((__int64)&v19, a2);
    sub_43EB0((__int64)&v19);
  }
  else
  {
    v8 = 0;
  }
  sub_44B80((_QWORD **)&v11);
  qfree();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  qmutex_unlock();
  return v8;
}

