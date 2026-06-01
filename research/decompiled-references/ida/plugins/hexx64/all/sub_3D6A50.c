void __fastcall sub_3D6A50(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  _QWORD *v7; // r12
  __int64 v8; // rbx
  const char *v9; // rax
  int v10; // edx
  unsigned __int64 *v11; // rbp
  unsigned __int64 *v12; // r14
  int v13; // r10d
  unsigned __int64 v14; // rdx
  __m128i *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r10d
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __int16 v27; // ax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // r10d
  __int64 v31; // r15
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // [rsp+0h] [rbp-118h]
  __int64 v35; // [rsp+0h] [rbp-118h]
  __int64 v36; // [rsp+8h] [rbp-110h]
  double v37[2]; // [rsp+10h] [rbp-108h] BYREF
  double v38; // [rsp+20h] [rbp-F8h] BYREF
  int v39; // [rsp+28h] [rbp-F0h]
  char v40; // [rsp+2Fh] [rbp-E9h]
  int v41; // [rsp+38h] [rbp-E0h] BYREF
  int v42; // [rsp+3Ch] [rbp-DCh] BYREF
  __int128 v43; // [rsp+40h] [rbp-D8h] BYREF
  int v44; // [rsp+50h] [rbp-C8h]
  __m128i v45; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+70h] [rbp-A8h]
  __int64 v47; // [rsp+78h] [rbp-A0h]
  __int64 v48; // [rsp+80h] [rbp-98h]
  __int64 v49; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v50)(); // [rsp+90h] [rbp-88h] BYREF
  __int128 v51; // [rsp+98h] [rbp-80h]
  _BYTE v52[12]; // [rsp+A8h] [rbp-70h]
  __int128 v53; // [rsp+B8h] [rbp-60h]
  __int128 v54; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 80) )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = (_QWORD *)a1;
    if ( v6 )
    {
      if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) <= 1 )
      {
        v8 = a2;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
          70,
          *(_QWORD *)a1,
          1,
          &callui,
          a5,
          a6);
        v43 = -1;
        if ( v9 )
        {
          v10 = *(_DWORD *)(a1 + 40);
          v50 = nullptr;
          v51 = 0;
          if ( !(unsigned __int8)sub_3D44C0((unsigned __int64)&v50, v9, v10)
            || (v11 = (unsigned __int64 *)&v50[v51], v11 == (unsigned __int64 *)v50) )
          {
            if ( v50 )
            {
              *(_QWORD *)&v51 = 0;
              qfree((__int64)v50);
            }
          }
          else
          {
            v12 = (unsigned __int64 *)v50;
            v13 = -1;
            do
            {
              v14 = *v12;
              v44 = v13;
              sub_3D2990((_QWORD *)v6, (__int64 *)&v43, v14, 0.0);
              ++v12;
              v13 = v44;
            }
            while ( v11 != v12 );
            if ( v50 )
            {
              v39 = v44;
              *(_QWORD *)&v51 = 0;
              qfree((__int64)v50);
              v13 = v39;
            }
            if ( v13 >= 0 && *(_DWORD *)(*(_QWORD *)(v6 + 64) + 64LL) > v13 )
            {
              v50 = off_4E90B0;
              if ( (unsigned int)(*(_DWORD *)(v6 + 60) - 1) <= 1 )
              {
                HIDWORD(v51) = v13;
                v39 = v13;
                v53 = -1;
                v54 = -1;
                LODWORD(v51) = 0;
                *(_QWORD *)((char *)&v51 + 4) = 3;
                *(_QWORD *)v52 = 0;
                *(_DWORD *)&v52[8] = 73;
                sub_3D4D30(a1, (__int64)&v50, v6, NAN);
                v41 = 0;
                v15 = *(__m128i **)a1;
                v42 = 0;
                v16 = *(_QWORD *)((char *)&v51 + 4);
                v17 = *(_QWORD *)&v52[4];
                v38 = *((double *)&v54 + 1);
                callui(56, v15, 1, &v41, &v42, &callui, v34, v53, *((_QWORD *)&v53 + 1), v54);
                v20 = v39;
                if ( (_DWORD)v8 == 1 )
                {
                  v29 = sub_3D6580(*(_QWORD **)(a1 + 48), *(_DWORD *)(a1 + 56), -1, 0);
                  v30 = v39;
                  v31 = (__int64)v29;
                  v45.m128i_i64[0] = *(_QWORD *)(a1 + 64);
                  v32 = *(_QWORD *)(a1 + 72);
                  if ( v32 )
                  {
                    if ( &_pthread_key_create )
                      _InterlockedAdd((volatile signed __int32 *)(v32 + 8), 1u);
                    else
                      ++*(_DWORD *)(v32 + 8);
                  }
                  v15 = &v45;
                  v39 = v30;
                  v45.m128i_i64[1] = v32;
                  v33 = sub_3D5A90(v31, &v45);
                  v20 = v39;
                  if ( v45.m128i_i64[1] )
                  {
                    v40 = v33;
                    sub_3D56E0((volatile signed __int32 *)v45.m128i_i64[1]);
                    v33 = v40;
                    v20 = v39;
                  }
                  if ( !v33 )
                  {
                    sub_3D62E0(*(_QWORD *)(a1 + 48));
                    return;
                  }
                  v7 = (_QWORD *)v31;
                }
                v39 = v20;
                v46 = 0;
                v47 = -1;
                v48 = 0;
                v49 = 0;
                v45 = 0;
                v21 = qalloc_or_throw(72, (__int64)v15, v18, v19);
                v24 = v39;
                *(_QWORD *)v21 = off_4E90B0;
                *(_DWORD *)(v21 + 8) = 0;
                v25 = _mm_loadh_ps(v37);
                *(_QWORD *)(v21 + 12) = v16;
                *(__m128 *)(v21 + 40) = v25;
                *(_DWORD *)(v21 + 20) = v24;
                v26 = _mm_loadh_ps(&v38);
                *(_DWORD *)(v21 + 24) = 0;
                *(_QWORD *)(v21 + 28) = v17;
                *(__m128 *)(v21 + 56) = v26;
                v49 = v21;
                v27 = v42;
                WORD2(v47) = 0;
                LODWORD(v47) = -1;
                LODWORD(v48) = 1;
                if ( v42 < 0 )
                  v27 = 0;
                v28 = 0;
                HIWORD(v47) = v27;
                if ( (unsigned int)v8 <= 5 )
                  v28 = dword_4314E0[v8];
                callui(149, *v7, &v45, v28, v22, v23, v35, v36, *(_QWORD *)&v37[0], *(_QWORD *)&v37[1]);
                if ( v49 )
                  qfree(v49);
              }
            }
          }
        }
      }
    }
  }
}

