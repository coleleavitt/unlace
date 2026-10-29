__int64 __fastcall sub_4EC50(int *a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned int v5; // ebp
  __int64 v8; // rbp
  size_t v9; // rdx
  size_t v10; // rbx
  size_t v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  __m128 v16; // xmm0
  __int64 *v17; // r12
  unsigned __int32 v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // [rsp+4h] [rbp-104h]
  unsigned __int32 v25; // [rsp+2Ch] [rbp-DCh] BYREF
  char *v26; // [rsp+30h] [rbp-D8h] BYREF
  __int64 src; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  size_t v29; // [rsp+48h] [rbp-C0h]
  size_t v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-B0h]
  __int64 v32[3]; // [rsp+60h] [rbp-A8h] BYREF
  char v33; // [rsp+78h] [rbp-90h]
  _BYTE v34[24]; // [rsp+80h] [rbp-88h] BYREF
  int v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  __int128 v37; // [rsp+A8h] [rbp-60h]
  char v38; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  if ( a2 )
  {
    v5 = 1;
    if ( a4[1] )
    {
      qmutex_lock();
      sub_43F20((__int64)&v28, byte_7FBE9, 0x400u);
      sub_46BB0((__int64)&v28, a1[2], a3);
      v25 = a4[1];
      sub_46AA0((__int64)&v28, v25);
      v8 = *a4;
      v9 = v29;
      if ( 112 * a4[1] )
      {
        do
        {
          v10 = *a1;
          v11 = v30;
          v23 = *(_DWORD *)(v8 + 8);
          src = *(_QWORD *)(v8 + 8);
          if ( v30 < v10 + v9 )
          {
            do
            {
              v30 = v31 + v11;
              v12 = qrealloc();
              if ( !v12 )
                sub_43DF0((__int64)"JDWP encoder");
              v28 = v12;
              v11 = v30;
            }
            while ( v30 < v10 + v29 );
          }
          if ( (_DWORD)v10 == 8 )
          {
            if ( v33 )
              sub_1FAD0(v32);
            v17 = (__int64 *)(v28 + v29);
            *v17 = swap64();
          }
          else if ( (_DWORD)v10 == 4 )
          {
            if ( v33 )
              sub_1FAD0(v32);
            *(_DWORD *)(v28 + v29) = _byteswap_ulong(v23);
          }
          else
          {
            if ( v33 )
              sub_1FAD0(v32);
            memcpy((void *)(v28 + v29), &src, v10);
          }
          v13 = a4[1];
          v8 += 112;
          v9 = v10 + v29;
          v29 += v10;
        }
        while ( v8 != *a4 + 112 * v13 );
      }
      memset(v34, 0, sizeof(v34));
      v14 = sub_48F20((unsigned __int64)a1, 9u, 2u, (__int64)&v28, (__int64)v34);
      v26 = v14;
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 1);
        v16 = _mm_loadh_ps((const double *)v14);
        v35 = 0;
        *(_QWORD *)&v34[16] = v15;
        *(__m128 *)v34 = v16;
        v36 = 0;
        v38 = byte_7FBE9;
        v37 = 0;
        v5 = sub_46430((__int64)v34, &v25, 1);
        if ( (_BYTE)v5 && v25 == a4[1] )
        {
          v18 = v25 - 1;
          a2[1] = 0;
          while ( 1 )
          {
            v25 = v18;
            if ( (int)(v18 + 1) <= 0 )
              break;
            v19 = a2[1];
            v20 = *a2;
            v21 = v19 + 1;
            if ( a2[2] < (unsigned __int64)(v19 + 1) )
            {
              v22 = qvector_reserve();
              *a2 = v22;
              v20 = v22;
              v19 = a2[1];
              v21 = v19 + 1;
            }
            a2[1] = v21;
            --v18;
            if ( !(unsigned __int8)sub_473C0((__int64)v34, (__m128i *)(16 * v19 + v20)) )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          v5 = 0;
        }
        sub_43EB0((__int64)v34);
      }
      else
      {
        v5 = 0;
      }
      sub_44B80((_QWORD **)&v26);
      sub_43FA0((__int64)&v28);
      qmutex_unlock();
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

