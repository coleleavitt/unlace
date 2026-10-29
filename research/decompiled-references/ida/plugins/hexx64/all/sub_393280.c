__int64 __fastcall sub_393280(_QWORD *a1, double a2, double a3, __m128i a4, double a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  double v12; // xmm0_8
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 j; // rbp
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  size_t v30; // r15
  __int64 v31; // r9
  __int64 *v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // r13
  __int64 k; // r12
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r13
  __int64 m; // r12
  __int64 *v42; // rax
  __int64 v43; // rdi
  char v45; // dl
  __int64 v46; // r9
  unsigned __int64 v47; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+18h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+30h] [rbp-98h]
  size_t n[3]; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **func)(std::exception *); // [rsp+50h] [rbp-78h] BYREF
  __int64 v55; // [rsp+58h] [rbp-70h]
  __int128 v56; // [rsp+60h] [rbp-68h]
  __int128 v57; // [rsp+70h] [rbp-58h]
  unsigned __int64 v58; // [rsp+88h] [rbp-40h]

  v5 = a1[1];
  v58 = __readfsqword(0x28u);
  v47 = *(_QWORD *)(v5 + 24);
  if ( *(_BYTE *)(a1[2] + 1LL) != 4 || (v45 = sub_384450((__int64 *)&v47, 1), v5 = a1[1], v45) )
  {
    v7 = *(_QWORD *)(v5 + 16);
    v8 = a1[3];
    v47 = v7;
    if ( v7 != -1 && v8 )
    {
      if ( (*(_BYTE *)v8 & 2) == 0
        || (v9 = *(_QWORD **)(*(_QWORD *)(v8 + 32) + 8LL),
            v10 = sub_330F80(v9, v7),
            !(unsigned __int8)sub_332920((__int64)(v9 + 1), v10)) )
      {
        v50 = 0;
        v51 = -1;
        src = nullptr;
        *(_OWORD *)n = 0;
        func = (__int64 (__fastcall **)(std::exception *))get_func();
        v11 = a1[3];
        v12 = 0.0;
        v56 = 0;
        v55 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 128) + 112LL);
        sub_14CDC0(&v48, v13, (__int64 **)&func, &v50, 8, 0.0, a3, a4, a5);
        if ( v55 )
        {
          *(_QWORD *)&v56 = 0;
          qfree(v55);
        }
        v15 = v48;
        if ( v48 )
        {
          v16 = a1[3];
          ++*(_DWORD *)(v48 + 104);
          func = (__int64 (__fastcall **)(std::exception *))v15;
          sub_390360(v16, (__int64 *)&func, 0, 0.0);
          v17 = (*(_DWORD *)(v15 + 104))-- == 1;
          if ( v17 )
          {
            sub_258970((__int64 *)v15);
            v18 = *(_QWORD *)(v15 + 184);
            if ( v18 )
            {
              v19 = *(_QWORD *)(v15 + 192);
              if ( v19 )
              {
                for ( i = 0; i != v19; ++i )
                {
                  v21 = (__int64 *)(v18 + 24 * i);
                  v22 = *v21;
                  if ( *v21 )
                  {
                    v21[1] = 0;
                    qfree(v22);
                    v18 = *(_QWORD *)(v15 + 184);
                  }
                }
              }
              *(_QWORD *)(v15 + 192) = 0;
              qfree(v18);
            }
            v23 = *(_QWORD *)(v15 + 160);
            if ( v23 )
            {
              *(_QWORD *)(v15 + 168) = 0;
              qfree(v23);
            }
            v24 = *(_QWORD *)(v15 + 128);
            if ( v24 )
            {
              v25 = *(_QWORD *)(v15 + 136);
              if ( v25 )
              {
                for ( j = 0; j != v25; ++j )
                {
                  v27 = (__int64 *)(v24 + 32 * j);
                  v28 = *v27;
                  if ( *v27 )
                  {
                    v27[1] = 0;
                    qfree(v28);
                    v24 = *(_QWORD *)(v15 + 128);
                  }
                }
              }
              *(_QWORD *)(v15 + 136) = 0;
              qfree(v24);
            }
            sub_255050(v15 + 16, 0.0);
            j__qfree(v15);
          }
          *(_DWORD *)a1[3] |= 2u;
        }
        else
        {
          v29 = v51;
          if ( v51 == -1 )
          {
            v51 = v7;
            v29 = v7;
          }
          v30 = n[0];
          func = off_4DBCD0;
          v56 = v29;
          v49 = off_4E3C38;
          LODWORD(v55) = v50;
          v57 = 0;
          if ( n[0] )
          {
            *((_QWORD *)&v56 + 1) = qalloc_or_throw(n[0], v13, (unsigned int)v50, v14);
            *((_QWORD *)&v57 + 1) = v30;
            memcpy(*((void **)&v56 + 1), src, v30);
            *(_QWORD *)&v57 = v30;
          }
          sub_33C260(0.0, (__int64)&v49, *(_QWORD *)(a1[3] + 128LL), (__int64)&func);
          func = off_4DBCD0;
          if ( *((_QWORD *)&v56 + 1) )
          {
            *(_QWORD *)&v57 = 0;
            qfree(*((__int64 *)&v56 + 1));
          }
          std::exception::~exception((std::exception *)&func);
          v12 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                  115,
                  v7,
                  0xFFFFFFFFLL,
                  5,
                  &callui,
                  v31);
        }
        v32 = (__int64 *)v48;
        if ( v48 )
        {
          v17 = (*(_DWORD *)(v48 + 104))-- == 1;
          if ( v17 )
          {
            sub_258970(v32);
            v33 = v32[23];
            if ( v33 )
            {
              v34 = v32[24];
              if ( v34 )
              {
                for ( k = 0; k != v34; ++k )
                {
                  v36 = (__int64 *)(v33 + 24 * k);
                  v37 = *v36;
                  if ( *v36 )
                  {
                    v36[1] = 0;
                    qfree(v37);
                    v33 = v32[23];
                  }
                }
              }
              v32[24] = 0;
              qfree(v33);
            }
            v38 = v32[20];
            if ( v38 )
            {
              v32[21] = 0;
              qfree(v38);
            }
            v39 = v32[16];
            if ( v39 )
            {
              v40 = v32[17];
              if ( v40 )
              {
                for ( m = 0; m != v40; ++m )
                {
                  v42 = (__int64 *)(v39 + 32 * m);
                  v43 = *v42;
                  if ( *v42 )
                  {
                    v42[1] = 0;
                    qfree(v43);
                    v39 = v32[16];
                  }
                }
              }
              v32[17] = 0;
              qfree(v39);
            }
            sub_255050((__int64)(v32 + 2), v12);
            j__qfree((__int64)v32);
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree((__int64)src);
        }
      }
      v8 = a1[3];
    }
    sub_38B490(v8, 0);
    sub_33E140(*(_QWORD *)(a1[3] + 128LL), 0x6Bu);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      115,
      *(_QWORD *)(v5 + 24),
      0xFFFFFFFFLL,
      5,
      &callui,
      v46);
  }
  return 0;
}

