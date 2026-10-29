unsigned __int64 __fastcall sub_18A780(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int8 *v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int8 *v9; // rdi
  int v10; // ecx
  _BYTE *v11; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  void *v16; // r13
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  __m128i v22; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-B0h]
  __int64 *v24; // [rsp+20h] [rbp-A8h]
  __int64 *v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  __int64 v27; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-88h] BYREF
  __int128 v29; // [rsp+48h] [rbp-80h]
  __int64 v30[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h] BYREF
  __int128 v32; // [rsp+78h] [rbp-50h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  sub_60080((__int64 *)(a1 + 88), a2);
  v22.m128i_i64[0] = (__int64)(a2 + 2);
  sub_311F30(a1 + 104, a2 + 2);
  v24 = (__int64 *)(a1 + 48);
  if ( (unsigned __int8)sub_60580(a2, (_QWORD *)(a1 + 48)) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_40;
  }
  else
  {
    if ( !(unsigned __int8)sub_3136F0(v22.m128i_i64[0], a1 + 64) )
      return v33 - __readfsqword(0x28u);
    v3 = *(_QWORD *)(a1 + 8);
    if ( !v3 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v4 = *(__int64 **)(v3 + 8);
    v26 = 0;
    v27 = 0;
    src = nullptr;
    v29 = 0;
    if ( v4 != (__int64 *)v3 )
    {
      do
      {
        v5 = *(_QWORD *)a1;
        v6 = v4[3];
        if ( !*(_QWORD *)a1 )
        {
          if ( !under_debugger )
            sub_37E160(51550);
          BUG();
        }
        v30[0] = 0;
        v32 = 0;
        v30[1] = 0;
        v31 = 0;
        sub_123DE0(v5, v30, v6, 0);
        if ( (unsigned __int8)sub_60580(v30, a2) || (v23 = &v31, (unsigned __int8)sub_3136F0(&v31, v22.m128i_i64[0])) )
        {
          v7 = (unsigned __int8 *)v4[3];
          sub_18A3D0((unsigned __int64 **)(a1 + 8), v4);
          v4 = *(__int64 **)(a1 + 8);
          if ( v4 )
          {
            v8 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v8 )
            {
              if ( (*(_BYTE *)(*v4 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
              {
                v25 = &v26;
                while ( 1 )
                {
                  v9 = *(unsigned __int8 **)(v8 + 24);
                  v23 = (__int64 *)v8;
                  v10 = sub_119840(v9, v7);
                  v11 = (_BYTE *)v23[1];
                  if ( v10 < 0 )
                    v11 = (_BYTE *)v23[2];
                  else
                    v4 = v23;
                  if ( (*v11 & 2) != 0 )
                    break;
                  v8 = (unsigned __int64)v11;
                }
              }
            }
            else
            {
              v4 = nullptr;
            }
          }
        }
        else
        {
          sub_60080(&v26, v30);
          sub_311F30(&src, v23);
          if ( (*v4 & 2) == 0 )
          {
            v12 = (__int64 *)v4[2];
            if ( (*(_BYTE *)v12 & 2) != 0 )
            {
              v13 = (__int64 *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
              v14 = *v13;
              if ( (*v13 & 2) == 0 )
              {
                while ( (__int64 *)v13[2] == v4 )
                {
                  v4 = v13;
                  v21 = v14 & 0xFFFFFFFFFFFFFFFCLL;
                  v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v14 & 2) != 0 )
                  {
                    v4 = (__int64 *)v21;
                    goto LABEL_20;
                  }
                  v13 = (__int64 *)v21;
                }
              }
              v4 = v13;
            }
            else
            {
              do
              {
                v4 = v12;
                v20 = (__int64 *)v12[1];
                if ( (*(_BYTE *)v20 & 2) != 0 )
                  break;
                v4 = v20;
                v12 = (__int64 *)v20[1];
              }
              while ( (*(_BYTE *)v12 & 2) == 0 );
            }
          }
        }
LABEL_20:
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree();
        }
        qfree();
      }
      while ( v4 != *(__int64 **)(a1 + 8) );
    }
    goto LABEL_23;
  }
LABEL_40:
  v26 = 0;
  v27 = 0;
  src = nullptr;
  v29 = 0;
LABEL_23:
  sub_606D0(v24, &v26);
  v15 = v29;
  v16 = nullptr;
  if ( (_QWORD)v29 )
  {
    v16 = (void *)qalloc_or_throw();
    memcpy(v16, src, 16 * v15);
  }
  v17 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
  if ( *(_QWORD *)(a1 + 64) )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v22 = v17;
    qfree();
    v17 = _mm_load_si128(&v22);
  }
  v18 = src;
  *(_QWORD *)(a1 + 64) = v16;
  *(__m128i *)(a1 + 72) = v17;
  if ( v18 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  qfree();
  return v33 - __readfsqword(0x28u);
}

