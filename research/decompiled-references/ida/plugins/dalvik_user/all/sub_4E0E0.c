__int64 __fastcall sub_4E0E0(unsigned __int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  char *v7; // rax
  __int64 v8; // rdx
  __m128 v9; // xmm0
  unsigned __int32 v10; // r15d
  unsigned __int32 v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  unsigned int v16; // ebx
  char v18; // dl
  __int64 v19; // rax
  unsigned __int32 v21; // [rsp+14h] [rbp-D4h] BYREF
  char *v22; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v24; // [rsp+30h] [rbp-B8h]
  __int64 v25; // [rsp+40h] [rbp-A8h]
  __int128 v26; // [rsp+48h] [rbp-A0h]
  char v27; // [rsp+58h] [rbp-90h]
  _BYTE v28[24]; // [rsp+60h] [rbp-88h] BYREF
  int v29; // [rsp+78h] [rbp-70h]
  __int64 v30; // [rsp+80h] [rbp-68h] BYREF
  __int128 v31; // [rsp+88h] [rbp-60h]
  char v32; // [rsp+98h] [rbp-50h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  qmutex_lock();
  v26 = 0;
  v25 = 0;
  v27 = byte_7FBE9;
  v24 = _mm_unpacklo_epi64((__m128i)0x10uLL, (__m128i)0x10uLL);
  v23[0] = qalloc();
  if ( !v23[0] )
    sub_43DF0((__int64)"JDWP encoder", a2, a3);
  v6 = *(_DWORD *)(a1 + 8);
  v23[1] = 0;
  sub_46BB0((__int64)v23, v6, a3);
  sub_46BB0((__int64)v23, *(_DWORD *)(a1 + 4), a4);
  memset(v28, 0, sizeof(v28));
  v7 = sub_48F20(a1, 6u, 3u, (__int64)v23, (__int64)v28);
  v22 = v7;
  if ( v7 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v29 = 0;
    *(__m128 *)v28 = v9;
    *(_QWORD *)&v28[16] = v8;
    v30 = 0;
    v32 = byte_7FBE9;
    v31 = 0;
    if ( a2 )
    {
      if ( !(unsigned __int8)sub_46430((__int64)v28, &v21, 1) )
      {
LABEL_11:
        v16 = 0;
LABEL_12:
        sub_43EB0((__int64)v28);
        goto LABEL_13;
      }
      v10 = v21;
LABEL_6:
      v11 = v10 - 1;
      while ( 1 )
      {
        v21 = v11;
        v10 = v11;
        if ( (int)(v11 + 1) <= 0 )
          break;
        v12 = a2[1];
        v13 = *a2;
        v14 = v12 + 1;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v19 = qvector_reserve();
          *a2 = v19;
          v13 = v19;
          v12 = a2[1];
          v14 = v12 + 1;
        }
        a2[1] = v14;
        v15 = (_BYTE *)(16 * v12 + v13);
        *v15 = 66;
        if ( (unsigned __int64)v29 >= *(_QWORD *)&v28[16] )
          goto LABEL_11;
        --v11;
        v18 = *(_BYTE *)(*(_QWORD *)&v28[8] + v29++);
        v15[8] = v18;
        if ( v32 )
        {
          sub_1FAD0(&v30);
          goto LABEL_6;
        }
      }
    }
    v16 = 1;
    goto LABEL_12;
  }
  v16 = 0;
LABEL_13:
  sub_44B80((_QWORD **)&v22);
  qfree();
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  qmutex_unlock();
  return v16;
}

