__int64 __fastcall sub_823C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbp
  _QWORD *v12; // rax
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // r12
  bool v17; // cc
  __int64 v18; // r14
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r13
  __int64 *v24; // rcx
  _BYTE *v25; // r15
  _BYTE *v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+18h] [rbp-80h]
  int v34; // [rsp+20h] [rbp-78h]
  unsigned int v35; // [rsp+24h] [rbp-74h]
  __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 *v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned int v40; // [rsp+50h] [rbp-48h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v36 = a2;
  v37 = a3 + a2;
  v3 = j__qalloc_or_throw();
  sub_2523C0(v3, a1);
  v4 = v37;
  v39 = v3;
  v38 = &v36;
  v40 = 0;
  v40 = unpack_dd();
  if ( v40 <= 5 )
  {
    v4 = v39 + 16;
    if ( (unsigned __int8)sub_80D50((__int64)&v38, v39 + 16) )
    {
      v14 = v39;
      *(_DWORD *)(v14 + 56) = unpack_dd();
      v15 = unpack_dd();
      v16 = v39;
      v17 = v40 <= 4;
      *(_DWORD *)(v39 + 108) = v15;
      if ( v17 )
      {
LABEL_24:
        *(_DWORD *)(v3 + 108) &= 0xFFFFFFFC;
        sub_3201D0(v3, 0, 1);
        return v3;
      }
      *(_BYTE *)(v16 + 208) = 1;
      v4 = v38[1];
      v35 = unpack_dd();
      if ( v38[1] - *v38 >= (unsigned __int64)v35 )
      {
        v18 = *(_QWORD *)(v16 + 192);
        v19 = 0;
        if ( v18 )
        {
          do
          {
            v20 = (_QWORD *)(*(_QWORD *)(v16 + 184) + 24 * v19);
            if ( *v20 )
            {
              v20[1] = 0;
              qfree();
            }
            ++v19;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)(v16 + 192) = 0;
        if ( *(_QWORD *)(v16 + 200) < (unsigned __int64)v35 )
        {
          *(_QWORD *)(v16 + 184) = qvector_reserve();
        }
        else if ( !v35 )
        {
          goto LABEL_24;
        }
        v34 = 0;
        do
        {
          v21 = *(_QWORD *)(v16 + 192);
          v22 = *(_QWORD *)(v16 + 184);
          if ( *(_QWORD *)(v16 + 200) < (unsigned __int64)(v21 + 1) )
          {
            v30 = qvector_reserve();
            *(_QWORD *)(v16 + 184) = v30;
            v21 = *(_QWORD *)(v16 + 192);
            v22 = v30;
          }
          v23 = v22 + 24 * v21;
          *(_QWORD *)v23 = 0;
          v24 = v38;
          *(_OWORD *)(v23 + 8) = 0;
          ++*(_QWORD *)(v16 + 192);
          v25 = (_BYTE *)*v24;
          v26 = (_BYTE *)*v24;
          while ( (unsigned __int64)v26 < v24[1] )
          {
            if ( !*v26++ )
            {
              *v24 = (__int64)v26;
              if ( v25 )
              {
                v27 = *(_QWORD *)(v23 + 8);
                v28 = v26 - v25 - 1;
                n = v28;
                v32 = v28;
                if ( v27 )
                  v32 = --v27 + v28;
                v29 = *(_QWORD *)v23;
                if ( *(_QWORD *)(v23 + 16) < (unsigned __int64)(v32 + 1) )
                {
                  v31 = qvector_reserve();
                  *(_QWORD *)v23 = v31;
                  v29 = v31;
                }
                *(_QWORD *)(v23 + 8) = v32 + 1;
                *(_BYTE *)(v29 + v32) = 0;
                memmove((void *)(v27 + *(_QWORD *)v23), v25, n);
              }
              break;
            }
          }
          ++v34;
        }
        while ( v34 != v35 );
        goto LABEL_24;
      }
    }
  }
  *(_QWORD *)(v3 + 8) = 0;
  if ( v3 )
  {
    sub_253D70(v3, v4);
    v5 = *(_QWORD *)(v3 + 184);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v3 + 192);
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = (_QWORD *)(v5 + 24 * i);
          if ( *v8 )
          {
            v8[1] = 0;
            qfree();
            v5 = *(_QWORD *)(v3 + 184);
          }
        }
      }
      *(_QWORD *)(v3 + 192) = 0;
      qfree();
    }
    if ( *(_QWORD *)(v3 + 160) )
    {
      *(_QWORD *)(v3 + 168) = 0;
      qfree();
    }
    v9 = *(_QWORD *)(v3 + 128);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v3 + 136);
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = (_QWORD *)(v9 + 32 * j);
          if ( *v12 )
          {
            v12[1] = 0;
            qfree();
            v9 = *(_QWORD *)(v3 + 128);
          }
        }
      }
      *(_QWORD *)(v3 + 136) = 0;
      qfree();
    }
    sub_250450(v3 + 16);
    j__qfree();
  }
  return 0;
}

