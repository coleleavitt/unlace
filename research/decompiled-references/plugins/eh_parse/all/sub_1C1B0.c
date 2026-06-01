unsigned __int64 __fastcall sub_1C1B0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  const char *v9; // rsi
  int v10; // r13d
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  const char *v13; // rsi
  unsigned __int64 v14; // r15
  int v15; // edx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v22; // [rsp+24h] [rbp-64h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-60h] BYREF
  const char *v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-50h]
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v23 = a2;
  if ( (unsigned __int8)sub_1A3A0(&v24, &v23) )
  {
    v7 = v23;
    v8 = getseg(v23);
    if ( v8 )
    {
      v21 = (int)v24;
      if ( *(_QWORD *)(v8 + 8) >= v7 + 2LL * (unsigned int)v24 )
      {
        if ( a1[2] < (unsigned __int64)(unsigned int)v24 )
          *a1 = qvector_reserve(a1, *a1, (unsigned int)v24, 16);
        v25 = 0;
        v24 = nullptr;
        sub_8A10((__int64 *)&v24, (__int64)"num_ip2state entries: %u", v21);
        v9 = s1;
        if ( (_QWORD)v25 )
          v9 = v24;
        set_cmt(a2, v9, 0);
        v10 = 0;
        if ( v21 )
        {
          do
          {
            v17 = a1[1];
            v18 = *a1;
            v19 = v17 + 1;
            if ( a1[2] < (unsigned __int64)(v17 + 1) )
            {
              v20 = qvector_reserve(a1, v18, v17 + 1, 16);
              v17 = a1[1];
              *a1 = v20;
              v18 = v20;
              v19 = v17 + 1;
            }
            a1[1] = v19;
            v11 = v18 + 16 * v17;
            v12 = v23;
            if ( !(unsigned __int8)sub_1A3A0(&v22, &v23) )
              break;
            a3 += v22;
            *(_QWORD *)v11 = a3;
            sub_8A10((__int64 *)&v24, (__int64)"ea 0x%a", 0.0);
            v13 = s1;
            if ( (_QWORD)v25 )
              v13 = v24;
            set_cmt(v12, v13, 0);
            v14 = v23;
            if ( !(unsigned __int8)sub_1A3A0(&v22, &v23) )
              break;
            v15 = v22 - 1;
            *(_DWORD *)(v11 + 8) = v22 - 1;
            sub_8A10((__int64 *)&v24, (__int64)"state %d", v15);
            v16 = s1;
            if ( (_QWORD)v25 )
              v16 = v24;
            set_cmt(v14, v16, 0);
            ++v10;
          }
          while ( v10 != v21 );
        }
        if ( v24 )
        {
          *(_QWORD *)&v25 = 0;
          qfree(v24);
        }
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
