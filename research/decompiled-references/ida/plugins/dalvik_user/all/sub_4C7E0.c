__int64 __fastcall sub_4C7E0(int *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  char *v7; // rax
  unsigned __int64 v8; // rdx
  __m128 v9; // xmm0
  int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // esi
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // [rsp+8h] [rbp-180h]
  unsigned __int64 v22; // [rsp+8h] [rbp-180h]
  unsigned __int8 v23; // [rsp+1Fh] [rbp-169h]
  __int64 v24; // [rsp+28h] [rbp-160h]
  __int64 v25; // [rsp+28h] [rbp-160h]
  __int64 v26; // [rsp+30h] [rbp-158h]
  int v27; // [rsp+44h] [rbp-144h] BYREF
  char *v28; // [rsp+48h] [rbp-140h] BYREF
  _QWORD v29[8]; // [rsp+50h] [rbp-138h] BYREF
  __m128 v30; // [rsp+90h] [rbp-F8h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-E8h]
  int v32; // [rsp+A8h] [rbp-E0h]
  __int64 v33; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-D0h]
  char v35; // [rsp+C8h] [rbp-C0h]
  __int64 v36; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+D8h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-A0h]
  __int64 v39; // [rsp+F8h] [rbp-90h] BYREF
  __int128 v40; // [rsp+100h] [rbp-88h]
  __int64 v41; // [rsp+110h] [rbp-78h] BYREF
  __int128 v42; // [rsp+118h] [rbp-70h]
  unsigned __int32 v43; // [rsp+128h] [rbp-60h]
  unsigned __int64 v44; // [rsp+148h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  qmutex_lock();
  sub_43F20((__int64)v29, byte_7FBE9, 8u);
  sub_46BB0((__int64)v29, a1[2], a4);
  v36 = 0;
  v37 = 0;
  v7 = sub_48F20((unsigned __int64)a1, 2u, 0xEu, (__int64)v29, (__int64)&v36);
  v28 = v7;
  if ( v7 )
  {
    v8 = *((_QWORD *)v7 + 1);
    v9 = _mm_loadh_ps((const double *)v7);
    v32 = 0;
    v31 = v8;
    v30 = v9;
    v33 = 0;
    v35 = byte_7FBE9;
    v34 = 0;
    v23 = sub_46430((__int64)&v30, (unsigned __int32 *)&v27, 1);
    if ( v23 )
    {
      while ( 1 )
      {
        v10 = v27--;
        if ( v10 <= 0 )
          break;
        if ( byte_7FBE9 )
        {
          v11 = v34;
          v12 = 2;
          if ( (_QWORD)v34 )
          {
            v12 = v34 + 1;
            v11 = v34 - 1;
          }
          v13 = v33;
          if ( *((_QWORD *)&v34 + 1) < v12 )
          {
            v24 = v11;
            v21 = v12;
            v33 = qvector_reserve();
            v11 = v24;
            v13 = v33;
            v12 = v21;
          }
          *(_QWORD *)&v34 = v12;
          *(_BYTE *)(v13 + v11) = 123;
          *(_BYTE *)(v33 + v11 + 1) = 0;
        }
        v14 = *a1;
        v37 = 0u;
        v39 = 0;
        v41 = 0;
        v36 = a4;
        v38 = 0;
        v40 = 0;
        v42 = 0;
        if ( !(unsigned __int8)sub_46950((__int64)&v30, v14, (__int64 *)&v37)
          || !(unsigned __int8)sub_464A0((__int64)&v30, (__int64 *)&v37 + 1)
          || !(unsigned __int8)sub_464A0((__int64)&v30, &v39)
          || !(unsigned __int8)sub_464A0((__int64)&v30, &v41)
          || v31 < v32 + 4 )
        {
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree();
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v37 + 1) )
          {
            *(_QWORD *)&v38 = 0;
            qfree();
          }
          goto LABEL_21;
        }
        v16 = *(_DWORD *)(v30.m128_u64[1] + v32);
        v32 += 4;
        v43 = _byteswap_ulong(v16);
        if ( (v16 & 0x8000000) != 0 )
        {
          if ( a2 )
            sub_44BB0(a2, (__int64)&v36);
        }
        else if ( a3 )
        {
          sub_44BB0(a3, (__int64)&v36);
        }
        if ( byte_7FBE9 )
        {
          sub_1FAD0(&v33);
          v17 = v34;
          if ( (_QWORD)v34 )
          {
            v18 = v34 + 1;
            v19 = v34 + 2;
            v17 = v34 - 1;
          }
          else
          {
            v19 = 3;
            v18 = 2;
          }
          v20 = v33;
          if ( *((_QWORD *)&v34 + 1) < v19 )
          {
            v26 = v18;
            v25 = v17;
            v22 = v19;
            v33 = qvector_reserve();
            v18 = v26;
            v20 = v33;
            v17 = v25;
            v19 = v22;
          }
          *(_QWORD *)&v34 = v19;
          *(_BYTE *)(v20 + v18) = 0;
          *(_WORD *)(v33 + v17) = 11389;
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
        if ( *((_QWORD *)&v37 + 1) )
        {
          *(_QWORD *)&v38 = 0;
          qfree();
        }
      }
    }
    else
    {
LABEL_21:
      v23 = 0;
    }
    sub_43EB0((__int64)&v30);
  }
  else
  {
    v23 = 0;
  }
  sub_44B80((_QWORD **)&v28);
  qfree();
  if ( v29[4] )
  {
    v29[5] = 0;
    qfree();
  }
  qmutex_unlock();
  return v23;
}

