__int64 __fastcall sub_38B980(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall **v8)(std::exception *); // r12
  __int64 v9; // rdi
  bool v10; // zf
  __int64 (__fastcall *v11)(std::exception *); // rdx
  __int64 (__fastcall *v12)(std::exception *); // r13
  __int64 (__fastcall *i)(std::exception *); // rbp
  _QWORD *v14; // rax
  __int64 (__fastcall *v15)(std::exception *); // rdx
  __int64 (__fastcall *v16)(std::exception *); // r13
  __int64 (__fastcall *j)(std::exception *); // rbp
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  size_t v20; // r15
  __int64 v21; // r9
  __int64 *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 k; // r12
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r13
  __int64 m; // r12
  _QWORD *v30; // rax
  char v32; // dl
  __int64 v33; // r9
  unsigned __int64 v34; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+10h] [rbp-B8h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+18h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+28h] [rbp-A0h]
  void *src; // [rsp+30h] [rbp-98h]
  size_t n[3]; // [rsp+38h] [rbp-90h]
  __int64 (__fastcall **func)(std::exception *); // [rsp+50h] [rbp-78h] BYREF
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int128 v43; // [rsp+60h] [rbp-68h]
  __int128 v44; // [rsp+70h] [rbp-58h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v1 = a1[1];
  v45 = __readfsqword(0x28u);
  v34 = *(_QWORD *)(v1 + 24);
  if ( *(_BYTE *)(a1[2] + 1LL) != 4 || (v32 = sub_37CB50((__int64 *)&v34, 1), v1 = a1[1], v32) )
  {
    v3 = *(_QWORD *)(v1 + 16);
    v4 = a1[3];
    v34 = v3;
    if ( v3 != -1 && v4 )
    {
      if ( (*(_BYTE *)v4 & 2) == 0
        || (v5 = *(_QWORD **)(*(_QWORD *)(v4 + 32) + 8LL),
            v6 = sub_329920(v5, v3),
            !(unsigned __int8)sub_32B2E0((__int64)(v5 + 1), v6)) )
      {
        v37 = 0;
        v38 = -1;
        src = nullptr;
        *(_OWORD *)n = 0;
        func = (__int64 (__fastcall **)(std::exception *))get_func();
        v7 = a1[3];
        v43 = 0;
        v42 = 0;
        sub_146700(&v35, *(_QWORD *)(*(_QWORD *)(v7 + 128) + 112LL), &func, &v37, 8);
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree();
        }
        v8 = (__int64 (__fastcall **)(std::exception *))v35;
        if ( v35 )
        {
          v9 = a1[3];
          ++*(_DWORD *)(v35 + 104);
          func = v8;
          sub_388A60(v9, (__int64 *)&func, 0);
          v10 = (*((_DWORD *)v8 + 26))-- == 1;
          if ( v10 )
          {
            sub_2515F0((__int64 *)v8);
            v11 = v8[23];
            if ( v11 )
            {
              v12 = v8[24];
              if ( v12 )
              {
                for ( i = nullptr; i != v12; i = (__int64 (__fastcall *)(std::exception *))((char *)i + 1) )
                {
                  v14 = (_QWORD *)((char *)v11 + 24 * (_QWORD)i);
                  if ( *v14 )
                  {
                    v14[1] = 0;
                    qfree();
                    v11 = v8[23];
                  }
                }
              }
              v8[24] = nullptr;
              qfree();
            }
            if ( v8[20] )
            {
              v8[21] = nullptr;
              qfree();
            }
            v15 = v8[16];
            if ( v15 )
            {
              v16 = v8[17];
              if ( v16 )
              {
                for ( j = nullptr; j != v16; j = (__int64 (__fastcall *)(std::exception *))((char *)j + 1) )
                {
                  v18 = (_QWORD *)((char *)v15 + 32 * (_QWORD)j);
                  if ( *v18 )
                  {
                    v18[1] = 0;
                    qfree();
                    v15 = v8[16];
                  }
                }
              }
              v8[17] = nullptr;
              qfree();
            }
            sub_24DCD0((__int64)(v8 + 2));
            j__qfree();
          }
          *(_DWORD *)a1[3] |= 2u;
        }
        else
        {
          v19 = v38;
          if ( v38 == -1 )
          {
            v38 = v3;
            v19 = v3;
          }
          v20 = n[0];
          func = off_4A8510;
          v43 = v19;
          v36 = off_4B0438;
          LODWORD(v42) = v37;
          v44 = 0;
          if ( n[0] )
          {
            *((_QWORD *)&v43 + 1) = qalloc_or_throw();
            *((_QWORD *)&v44 + 1) = v20;
            memcpy(*((void **)&v43 + 1), src, v20);
            *(_QWORD *)&v44 = v20;
          }
          sub_3349E0(0.0, (__int64)&v36, *(_QWORD *)(a1[3] + 128LL), (__int64)&func);
          func = off_4A8510;
          if ( *((_QWORD *)&v43 + 1) )
          {
            *(_QWORD *)&v44 = 0;
            qfree();
          }
          std::exception::~exception((std::exception *)&func);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            115,
            v3,
            0xFFFFFFFFLL,
            5,
            &callui,
            v21);
        }
        v22 = (__int64 *)v35;
        if ( v35 )
        {
          v10 = (*(_DWORD *)(v35 + 104))-- == 1;
          if ( v10 )
          {
            sub_2515F0(v22);
            v23 = v22[23];
            if ( v23 )
            {
              v24 = v22[24];
              if ( v24 )
              {
                for ( k = 0; k != v24; ++k )
                {
                  v26 = (_QWORD *)(v23 + 24 * k);
                  if ( *v26 )
                  {
                    v26[1] = 0;
                    qfree();
                    v23 = v22[23];
                  }
                }
              }
              v22[24] = 0;
              qfree();
            }
            if ( v22[20] )
            {
              v22[21] = 0;
              qfree();
            }
            v27 = v22[16];
            if ( v27 )
            {
              v28 = v22[17];
              if ( v28 )
              {
                for ( m = 0; m != v28; ++m )
                {
                  v30 = (_QWORD *)(v27 + 32 * m);
                  if ( *v30 )
                  {
                    v30[1] = 0;
                    qfree();
                    v27 = v22[16];
                  }
                }
              }
              v22[17] = 0;
              qfree();
            }
            sub_24DCD0((__int64)(v22 + 2));
            j__qfree();
          }
        }
        if ( src )
        {
          n[0] = 0;
          qfree();
        }
      }
      v4 = a1[3];
    }
    sub_383B90(v4, 0);
    sub_3368C0(*(_QWORD *)(a1[3] + 128LL), 0x6Bu);
  }
  else
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
      115,
      *(_QWORD *)(v1 + 24),
      0xFFFFFFFFLL,
      5,
      &callui,
      v33);
  }
  return 0;
}

