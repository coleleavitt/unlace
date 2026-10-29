__int64 __fastcall sub_8F200(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  __int64 v6; // r10
  __int64 v8; // r13
  _QWORD *v9; // r14
  _QWORD *v10; // r12
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // r14d
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v20; // rax
  __int64 v21; // r9
  __int128 v22; // xmm0
  __int64 v23; // r12
  __int64 v24; // rdx
  size_t v25; // r15
  void *v26; // rax
  char v27; // [rsp+7h] [rbp-99h]
  const void **v30; // [rsp+10h] [rbp-90h]
  __int64 v31; // [rsp+18h] [rbp-88h]
  __int64 v32; // [rsp+20h] [rbp-80h]
  __int64 (__fastcall **v33)(); // [rsp+28h] [rbp-78h] BYREF
  char v34; // [rsp+30h] [rbp-70h]
  __int64 v35; // [rsp+38h] [rbp-68h]
  __int128 v36; // [rsp+40h] [rbp-60h]
  int v37; // [rsp+50h] [rbp-50h]
  int v38; // [rsp+54h] [rbp-4Ch]
  char v39; // [rsp+58h] [rbp-48h]
  unsigned __int64 v40; // [rsp+60h] [rbp-40h]

  v6 = a1;
  v8 = a4[1];
  v40 = __readfsqword(0x28u);
  v34 = 50;
  v36 = 0;
  v35 = 0;
  v27 = (a2 != nullptr) | (2 * (a3 != nullptr));
  v33 = &off_238488;
  if ( v8 )
  {
    v20 = sub_198760(24 * v8);
    *((_QWORD *)&v36 + 1) = v8;
    v21 = 0;
    v22 = 0;
    v35 = v20;
    v6 = a1;
    while ( 1 )
    {
      v23 = v20 + 24 * v21;
      v24 = *a4 + 24 * v21;
      *(_QWORD *)v23 = 0;
      *(_OWORD *)(v23 + 8) = v22;
      v25 = *(_QWORD *)(v24 + 8);
      if ( v25 )
      {
        v32 = v6;
        v31 = v21;
        v30 = (const void **)v24;
        v26 = (void *)sub_198760(*(_QWORD *)(v24 + 8));
        *(_QWORD *)(v23 + 16) = v25;
        *(_QWORD *)v23 = v26;
        memcpy(v26, *v30, v25);
        *(_QWORD *)(v23 + 8) = v25;
        v22 = 0;
        v6 = v32;
        v21 = v31 + 1;
        if ( v8 == v31 + 1 )
        {
LABEL_15:
          *(_QWORD *)&v36 = v8;
          break;
        }
      }
      else if ( v8 == ++v21 )
      {
        goto LABEL_15;
      }
      v20 = v35;
    }
  }
  v9 = (_QWORD *)(v6 + 40);
  v37 = a5;
  v38 = a6;
  v39 = v27;
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(v6 + 40) + 80LL))(
                    v6 + 40,
                    &v33);
  v13 = sub_8ACB0(v9, (__int64)v10, 51, nullptr, v11, v12);
  if ( !v13 )
  {
    if ( a2 )
    {
      v14 = *a2;
      v15 = _mm_loadu_si128((const __m128i *)(a2 + 1));
      *a2 = v10[2];
      a2[1] = v10[3];
      a2[2] = v10[4];
      v10[2] = v14;
      *(__m128i *)(v10 + 3) = v15;
    }
    if ( a3 )
    {
      v16 = *a3;
      v17 = _mm_loadu_si128((const __m128i *)(a3 + 1));
      *a3 = v10[5];
      a3[1] = v10[6];
      a3[2] = v10[7];
      v10[5] = v16;
      *((__m128i *)v10 + 3) = v17;
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
  sub_9F0B0(&v33);
  return v13;
}
