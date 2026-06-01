__int64 __fastcall sub_29800(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v7; // rax
  unsigned int *v8; // r12
  __int64 v9; // rax
  int v10; // r14d
  char *v11; // rbp
  char *v12; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  size_t v22; // rax
  size_t v23; // r13
  void *v24; // rdi
  size_t v25; // r15
  _QWORD *v26; // rbx
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+Ch] [rbp-DCh]
  unsigned __int64 v32; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v33; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v35; // [rsp+18h] [rbp-D0h]
  char *s; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-C0h]
  _QWORD v38[4]; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v39; // [rsp+50h] [rbp-98h] BYREF
  __int64 v40; // [rsp+60h] [rbp-88h]
  __int128 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+78h] [rbp-70h]
  __int128 v43; // [rsp+80h] [rbp-68h]
  __int128 v44; // [rsp+90h] [rbp-58h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  sub_32790(v38, 24);
  v5 = a1 + 864;
  v6 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)v5 + 16LL);
  if ( v6 == sub_D0D0 )
    v7 = (unsigned int *)sub_2F150(v5, 24, v38, 0);
  else
    v7 = (unsigned int *)v6(v5, 24u, (__int64)v38);
  v8 = v7;
  if ( v7 )
  {
    v9 = *v7;
    s = (char *)v8 + 5;
    v37 = (unsigned __int64)v8 + v9 + 5;
    v10 = unpack_dd() - 4;
    if ( v10 > 0 )
    {
      LODWORD(v14) = unpack_dd();
      v15 = a2[1];
      v16 = (int)v14;
      v31 = v14;
      if ( (int)v14 != v15 )
      {
        v40 = 0;
        v44 = 0;
        v42 = 0;
        v39 = 0;
        v41 = 0;
        v43 = 0;
        if ( (int)v14 < v15 )
        {
          v14 = (int)v14;
          do
          {
            v26 = (_QWORD *)(*a2 + 80 * v14);
            if ( v26[5] )
            {
              v26[6] = 0;
              v34 = v15;
              v32 = v14;
              qfree();
              v15 = v34;
              v14 = v32;
            }
            if ( v26[2] )
            {
              v26[3] = 0;
              v35 = v15;
              v33 = v14;
              qfree();
              v15 = v35;
              v14 = v33;
            }
            ++v14;
          }
          while ( v14 < v15 );
        }
        else
        {
          v17 = *a2;
          v18 = a2[2];
          if ( (unsigned __int64)&v39 < *a2 || (unsigned __int64)&v39 >= v17 + 80 * v18 )
          {
            if ( v18 < v16 )
            {
              *a2 = qvector_reserve();
              v15 = a2[1];
            }
            if ( v15 < v16 )
            {
              v27 = _mm_load_si128(&v39);
              v28 = 80 * v15;
              do
              {
                ++v15;
                v29 = v28 + *a2;
                v28 += 80;
                *(_QWORD *)(v29 + 16) = 0;
                *(_QWORD *)(v29 + 40) = 0;
                *(_QWORD *)(v29 + 64) = 0;
                *(_WORD *)(v29 + 72) = 0;
                *(__m128i *)v29 = v27;
                *(_OWORD *)(v29 + 24) = 0;
                *(_OWORD *)(v29 + 48) = 0;
              }
              while ( v16 != v15 );
            }
          }
          else
          {
            if ( v18 < v16 )
            {
              *a2 = qvector_reserve();
              v15 = a2[1];
            }
            if ( v15 < v16 )
            {
              v19 = 80 * v15;
              do
              {
                ++v15;
                v20 = v19 + *a2;
                v19 += 80;
                *(_QWORD *)(v20 + 16) = 0;
                *(_QWORD *)(v20 + 40) = 0;
                *(_QWORD *)(v20 + 64) = 0;
                *(_WORD *)(v20 + 72) = 0;
                *(_OWORD *)v20 = 0;
                *(_OWORD *)(v20 + 24) = 0;
                *(_OWORD *)(v20 + 48) = 0;
              }
              while ( v16 != v15 );
            }
          }
        }
        a2[1] = v16;
      }
      if ( v31 > 0 )
      {
        v21 = 0;
        do
        {
          sub_2F720(v21 + *a2, &s);
          v21 += 80;
        }
        while ( 80LL * (unsigned int)v31 != v21 );
      }
    }
    else if ( a3 )
    {
      v11 = s;
      v12 = s;
      do
      {
        if ( (unsigned __int64)v12 >= v37 )
          goto LABEL_9;
        ++v12;
      }
      while ( *(v12 - 1) );
      s = v12;
      if ( !v11 || (v22 = strlen(v11), (v23 = v22) == 0) )
      {
LABEL_9:
        *(_QWORD *)(a3 + 8) = 0;
        goto LABEL_10;
      }
      v24 = *(void **)a3;
      v25 = v22 + 1;
      if ( *(_QWORD *)(a3 + 16) < v22 + 1 )
      {
        v30 = qvector_reserve();
        *(_QWORD *)a3 = v30;
        v24 = (void *)v30;
      }
      *(_QWORD *)(a3 + 8) = v25;
      memmove(v24, v11, v23);
      *(_BYTE *)(*(_QWORD *)a3 + v23) = 0;
    }
LABEL_10:
    qfree();
  }
  else
  {
    v10 = -2;
  }
  if ( v38[0] )
  {
    v38[1] = 0;
    qfree();
  }
  return (unsigned int)v10;
}

