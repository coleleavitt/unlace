__int64 __fastcall sub_4A050(unsigned __int64 a1, __int64 *a2)
{
  char *v3; // rax
  double *v4; // rbp
  __int64 v5; // rax
  __m128 v6; // xmm0
  unsigned int v7; // r14d
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // [rsp+8h] [rbp-B0h]
  int v16; // [rsp+1Ch] [rbp-9Ch] BYREF
  char *v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v19[24]; // [rsp+30h] [rbp-88h] BYREF
  int v20; // [rsp+48h] [rbp-70h]
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int128 v22; // [rsp+58h] [rbp-60h]
  char v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  qmutex_lock();
  memset(v19, 0, sizeof(v19));
  v3 = sub_48F20(a1, 1u, 4u, 0, (__int64)v19);
  v17 = v3;
  v4 = (double *)v3;
  if ( !v3 )
  {
    v7 = 0;
    goto LABEL_15;
  }
  v5 = *((_QWORD *)v3 + 1);
  v6 = _mm_loadh_ps(v4);
  v20 = 0;
  *(_QWORD *)&v19[16] = v5;
  *(__m128 *)v19 = v6;
  v22 = 0;
  v21 = 0;
  v23 = byte_7FBE9;
  v7 = sub_46430((__int64)v19, (unsigned __int32 *)&v16, 1);
  if ( (_BYTE)v7 )
  {
    v8 = v16--;
    if ( v8 <= 0 )
      goto LABEL_12;
    while ( (unsigned __int8)sub_46950((__int64)v19, *(_DWORD *)(*(_QWORD *)v19 + 8LL), &v18) )
    {
      if ( a2 )
      {
        v10 = a2[1];
        v11 = v18;
        v12 = *a2;
        if ( a2[2] < (unsigned __int64)(v10 + 1) )
        {
          v15 = v18;
          v13 = qvector_reserve();
          *a2 = v13;
          v12 = v13;
          v11 = v15;
          v10 = a2[1];
        }
        *(_QWORD *)(v12 + 8 * v10) = v11;
        ++a2[1];
      }
      v9 = v16--;
      if ( v9 <= 0 )
        goto LABEL_12;
    }
  }
  v7 = 0;
LABEL_12:
  sub_43EB0((__int64)v19);
  if ( *(_QWORD *)v4 )
    qfree();
  operator delete(v4, 0x20u);
LABEL_15:
  qmutex_unlock();
  return v7;
}

