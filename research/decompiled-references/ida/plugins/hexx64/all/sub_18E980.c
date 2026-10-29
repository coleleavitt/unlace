unsigned __int64 __fastcall sub_18E980(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int8 *v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int8 *v14; // rdi
  int v15; // ecx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  void *v25; // r13
  __int64 v26; // rdi
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 *v30; // rdx
  unsigned __int64 v31; // rcx
  __m128i v32; // [rsp+0h] [rbp-C8h] BYREF
  __int64 **v33; // [rsp+18h] [rbp-B0h]
  __int64 *v34; // [rsp+20h] [rbp-A8h]
  __int64 *v35; // [rsp+28h] [rbp-A0h]
  __int64 v36; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+40h] [rbp-88h] BYREF
  __int128 v39; // [rsp+48h] [rbp-80h]
  __int64 v40[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 *v41; // [rsp+70h] [rbp-58h] BYREF
  __int128 v42; // [rsp+78h] [rbp-50h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  sub_64280((__int64 *)(a1 + 88), a2, a3);
  v32.m128i_i64[0] = (__int64)(a2 + 2);
  sub_316CB0((__int64 *)(a1 + 104), (__int64 **)a2 + 2, v4, v5);
  v34 = (__int64 *)(a1 + 48);
  if ( (unsigned __int8)sub_64780(a2, (_QWORD *)(a1 + 48)) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    if ( !v8 )
      goto LABEL_40;
  }
  else
  {
    if ( !(unsigned __int8)sub_318470((unsigned __int64 **)v32.m128i_i64[0], a1 + 64) )
      return v43 - __readfsqword(0x28u);
    v8 = *(_QWORD *)(a1 + 8);
    if ( !v8 )
      goto LABEL_40;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    v9 = *(__int64 **)(v8 + 8);
    v36 = 0;
    v37 = 0;
    src = nullptr;
    v39 = 0;
    if ( v9 != (__int64 *)v8 )
    {
      do
      {
        v10 = *(_QWORD *)a1;
        v11 = v9[3];
        if ( !*(_QWORD *)a1 )
        {
          if ( !under_debugger )
            sub_383060(0xC95Eu, 0.0);
          BUG();
        }
        v40[0] = 0;
        v42 = 0;
        v40[1] = 0;
        v41 = nullptr;
        sub_127FE0(v10, v40, v11, 0, v6, v7, 0.0, (__m128)0LL);
        if ( (unsigned __int8)sub_64780(v40, a2)
          || (v33 = (__int64 **)&v41, (unsigned __int8)sub_318470(&v41, v32.m128i_i64[0])) )
        {
          v12 = (unsigned __int8 *)v9[3];
          sub_18E5D0((unsigned __int64 **)(a1 + 8), v9);
          v9 = *(__int64 **)(a1 + 8);
          if ( v9 )
          {
            v13 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v13 )
            {
              if ( (*(_BYTE *)(*v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
              {
                v35 = &v36;
                while ( 1 )
                {
                  v14 = *(unsigned __int8 **)(v13 + 24);
                  v33 = (__int64 **)v13;
                  v15 = sub_11DA40(v14, v12, 0.0);
                  v16 = v33[1];
                  if ( v15 < 0 )
                    v16 = v33[2];
                  else
                    v9 = (__int64 *)v33;
                  if ( (*(_BYTE *)v16 & 2) != 0 )
                    break;
                  v13 = (unsigned __int64)v16;
                }
              }
            }
            else
            {
              v9 = nullptr;
            }
          }
        }
        else
        {
          sub_64280(&v36, v40, 0.0);
          sub_316CB0((__int64 *)&src, v33, v17, v18);
          if ( (*v9 & 2) == 0 )
          {
            v19 = (__int64 *)v9[2];
            if ( (*(_BYTE *)v19 & 2) != 0 )
            {
              v20 = (__int64 *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
              v21 = *v20;
              if ( (*v20 & 2) == 0 )
              {
                while ( (__int64 *)v20[2] == v9 )
                {
                  v9 = v20;
                  v31 = v21 & 0xFFFFFFFFFFFFFFFCLL;
                  v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v21 & 2) != 0 )
                  {
                    v9 = (__int64 *)v31;
                    goto LABEL_20;
                  }
                  v20 = (__int64 *)v31;
                }
              }
              v9 = v20;
            }
            else
            {
              do
              {
                v9 = v19;
                v30 = (__int64 *)v19[1];
                if ( (*(_BYTE *)v30 & 2) != 0 )
                  break;
                v9 = v30;
                v19 = (__int64 *)v30[1];
              }
              while ( (*(_BYTE *)v19 & 2) == 0 );
            }
          }
        }
LABEL_20:
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree((__int64)v41);
        }
        qfree(v40[0]);
      }
      while ( v9 != *(__int64 **)(a1 + 8) );
    }
    goto LABEL_23;
  }
LABEL_40:
  v36 = 0;
  v37 = 0;
  src = nullptr;
  v39 = 0;
LABEL_23:
  sub_648D0(v34, (const void **)&v36, 0.0);
  v24 = v39;
  v25 = nullptr;
  if ( (_QWORD)v39 )
  {
    v25 = (void *)qalloc_or_throw(16 * v39, (__int64)&v36, v22, v23);
    memcpy(v25, src, 16 * v24);
  }
  v26 = *(_QWORD *)(a1 + 64);
  v27 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v32 = v27;
    qfree(v26);
    v27 = _mm_load_si128(&v32);
  }
  v28 = src;
  *(_QWORD *)(a1 + 64) = v25;
  *(__m128i *)(a1 + 72) = v27;
  if ( v28 )
  {
    *(_QWORD *)&v39 = 0;
    qfree((__int64)v28);
  }
  qfree(v36);
  return v43 - __readfsqword(0x28u);
}

