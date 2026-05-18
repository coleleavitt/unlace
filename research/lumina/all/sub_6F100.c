__int64 __fastcall sub_6F100(_QWORD *a1, char **a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  char *v9; // rbx
  unsigned int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r9
  __m128i si128; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-78h]
  unsigned __int64 v27; // [rsp+0h] [rbp-78h]
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  unsigned int v30; // [rsp+14h] [rbp-64h] BYREF
  char *v31; // [rsp+18h] [rbp-60h] BYREF
  __int64 v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v31 = *a2;
  if ( !__CFADD__(a3, v31) )
  {
    v9 = &v31[a3];
    if ( (unsigned __int8)sub_6EE80((__int64)a1, &v31, a3) )
    {
      LOBYTE(v10) = sub_6E170((__int64)(a1 + 20), (const void **)&v31, v9 - v31);
      v4 = v10;
      if ( (_BYTE)v10 )
      {
        if ( a4 <= 5 )
        {
LABEL_7:
          *a2 = v31;
          return v4;
        }
        if ( sub_6C650(&v30, (unsigned __int64 *)&v31, (__int64)v9) )
        {
          v11 = v30;
          v12 = a1[25];
          v13 = v30;
          v14 = v12;
          if ( v30 != v12 )
          {
            v32 = 0;
            v33 = 0;
            if ( v30 >= v12 )
            {
              v15 = a1[24];
              v16 = a1[26];
              v17 = a1 + 24;
              if ( (unsigned __int64)&v32 < v15 || (unsigned __int64)&v32 >= v15 + 24 * v16 )
              {
                if ( v16 >= v30
                  || (v27 = v30,
                      v24 = sub_1987B0(v17, v15, v30, 24),
                      v14 = a1[25],
                      v11 = v27,
                      a1[24] = v24,
                      v15 = v24,
                      v14 < v27) )
                {
                  si128 = _mm_load_si128((const __m128i *)&v32);
                  v22 = *((_QWORD *)&v33 + 1);
                  v23 = 24 * v14;
                  while ( 1 )
                  {
                    ++v14;
                    *(_QWORD *)(v15 + v23 + 16) = v22;
                    *(__m128i *)(v15 + v23) = si128;
                    v23 += 24;
                    if ( v11 == v14 )
                      break;
                    v15 = a1[24];
                  }
                }
              }
              else if ( v16 >= v30
                     || (v28 = v30,
                         v25 = sub_1987B0(v17, v15, v30, 24),
                         v11 = v28,
                         a1[24] = v25,
                         v15 = v25,
                         v12 = a1[25],
                         v12 < v28) )
              {
                v18 = 24 * v12;
                while ( 1 )
                {
                  v19 = v18 + v15;
                  ++v12;
                  v18 += 24;
                  *(_QWORD *)v19 = 0;
                  *(_OWORD *)(v19 + 8) = 0;
                  if ( v11 == v12 )
                    break;
                  v15 = a1[24];
                }
              }
              a1[25] = v11;
LABEL_18:
              v20 = 0;
              v29 = 24 * v11;
              while ( 1 )
              {
                v26 = v20;
                if ( !(unsigned __int8)sub_6EDE0(a1[24] + v20, (unsigned __int64 *)&v31, v9 - v31) )
                  return 0;
                v20 = v26 + 24;
                if ( v29 == v26 + 24 )
                  goto LABEL_7;
              }
            }
            a1[25] = v30;
          }
          if ( !v13 )
            goto LABEL_7;
          goto LABEL_18;
        }
      }
    }
  }
  return 0;
}
