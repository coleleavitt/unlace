__int64 __fastcall sub_5680(__int64 *a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  size_t v18; // r10
  __int64 v19; // r9
  size_t v20; // r11
  _BYTE *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // r15
  unsigned __int64 v24; // r10
  const char *v25; // rdx
  const char *v26; // rsi
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  size_t v35; // r11
  const void *v36; // r13
  void *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v40; // [rsp+10h] [rbp-58h]
  unsigned __int64 v41; // [rsp+10h] [rbp-58h]
  unsigned __int64 v42; // [rsp+10h] [rbp-58h]
  unsigned __int64 v43; // [rsp+10h] [rbp-58h]
  size_t v44; // [rsp+18h] [rbp-50h]
  unsigned __int64 v45; // [rsp+18h] [rbp-50h]
  size_t v46; // [rsp+18h] [rbp-50h]
  __int64 v47; // [rsp+20h] [rbp-48h]
  unsigned __int64 v48; // [rsp+20h] [rbp-48h]
  size_t v49; // [rsp+28h] [rbp-40h]

  v10 = a1[1];
  v11 = *a1;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    v41 = a6;
    v29 = qvector_reserve(a1, v11, v10 + 1, 80);
    v10 = a1[1];
    a6 = v41;
    *a1 = v29;
    v11 = v29;
  }
  v12 = v11 + 80 * v10;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 72) = -1;
  *(_OWORD *)(v12 + 8) = 0;
  *(_OWORD *)(v12 + 32) = 0;
  *(_OWORD *)(v12 + 56) = 0;
  ++a1[1];
  v13 = a3[7];
  if ( v13 )
  {
    v14 = a3[6];
    v15 = v14 + 96 * v13;
    v16 = v14 + 24;
    if ( v15 != v14 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v17 != 1 )
          {
            v19 = a2[1];
            v20 = v17 - 1;
            if ( v19 )
            {
              --v19;
              v20 = v18 + v19;
              v17 += v19;
            }
            v21 = (_BYTE *)*a2;
            if ( a2[2] < v17 )
            {
              v49 = v20;
              v47 = v19;
              v44 = v18;
              v40 = v17;
              v22 = qvector_reserve(a2, v21, v17, 1);
              v20 = v49;
              v19 = v47;
              *a2 = v22;
              v18 = v44;
              v21 = (_BYTE *)v22;
              v17 = v40;
            }
            a2[1] = v17;
            v21[v20] = 0;
            memcpy((void *)(v19 + *a2), *(const void **)v16, v18);
          }
        }
        if ( !(unsigned __int8)sub_5040((__int64 *)v12, (_QWORD *)v16, a5, 0xFFFFFFFFFFFFFFFFLL) )
          break;
        if ( v15 == v16 + 72 )
          return 1;
        v16 += 96;
      }
    }
  }
  else
  {
    v23 = a3 + 3;
    if ( a3 + 3 != a2 )
    {
      v24 = a3[4];
      if ( !v24 || (v35 = v24 - 1, v24 == 1) )
      {
        a2[1] = 0;
      }
      else
      {
        v36 = (const void *)a3[3];
        v37 = (void *)*a2;
        if ( a2[2] < v24 )
        {
          v48 = a6;
          v46 = v24 - 1;
          v43 = v24;
          v38 = qvector_reserve(a2, *a2, v24, 1);
          a6 = v48;
          v35 = v46;
          *a2 = v38;
          v24 = v43;
          v37 = (void *)v38;
        }
        a2[1] = v24;
        v45 = a6;
        v42 = v24;
        memmove(v37, v36, v35);
        a6 = v45;
        *(_BYTE *)(*a2 + v42 - 1) = 0;
      }
    }
    if ( (unsigned __int8)sub_5040((__int64 *)v12, v23, a5, a6) )
      return 1;
  }
  v25 = s1;
  if ( a2[1] )
    v25 = (const char *)*a2;
  v26 = s1;
  if ( *(_QWORD *)(a4 + 8) )
    v26 = *(const char **)a4;
  sub_42F0((__int64)"Patfind: Pattern file: %s, data: %s invalid number of bits/bytes, pattern skipped.\n", v26, v25);
  v27 = a1[1];
  if ( v27 )
  {
    v30 = v27 - 1;
    a1[1] = v30;
    v31 = (__int64 *)(*a1 + 80 * v30);
    v32 = v31[6];
    if ( v32 )
    {
      v31[7] = 0;
      qfree(v32);
    }
    v33 = v31[3];
    if ( v33 )
    {
      v31[4] = 0;
      qfree(v33);
    }
    v34 = *v31;
    if ( *v31 )
    {
      v31[1] = 0;
      qfree(v34);
    }
  }
  return 0;
}

