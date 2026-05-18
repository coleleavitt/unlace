__int64 __fastcall sub_8E480(__int64 a1, __int64 *a2, _QWORD *a3, int a4, int a5)
{
  __int64 v5; // r9
  __int64 v6; // r12
  _QWORD *v7; // r13
  _QWORD *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // r13d
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 i; // r10
  __int64 v20; // r13
  __int64 v21; // rbx
  size_t v22; // r14
  void *v23; // rax
  __int64 v26; // [rsp+Ah] [rbp-88h]
  __int64 v27; // [rsp+12h] [rbp-80h]
  __int64 (__fastcall **v28)(); // [rsp+1Ah] [rbp-78h] BYREF
  char v29; // [rsp+22h] [rbp-70h]
  __int64 v30; // [rsp+2Ah] [rbp-68h]
  __int128 v31; // [rsp+32h] [rbp-60h]
  int v32; // [rsp+42h] [rbp-50h]
  int v33; // [rsp+46h] [rbp-4Ch]
  bool v34; // [rsp+4Ah] [rbp-48h]
  unsigned __int64 v35; // [rsp+52h] [rbp-40h]

  v5 = a1;
  v6 = a3[1];
  v35 = __readfsqword(0x28u);
  v29 = 79;
  v31 = 0;
  v28 = &off_2389F8;
  v30 = 0;
  if ( v6 )
  {
    v16 = sub_198760(24 * v6);
    *((_QWORD *)&v31 + 1) = v6;
    v17 = 0;
    v18 = 0;
    v30 = v16;
    v5 = a1;
    for ( i = v16; ; i = v30 )
    {
      v20 = i + 24 * v17;
      v21 = 24 * v17 + *a3;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = v18;
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
      {
        v27 = v5;
        v26 = v17;
        v23 = (void *)sub_198760(*(_QWORD *)(v21 + 8));
        *(_QWORD *)(v20 + 16) = v22;
        *(_QWORD *)v20 = v23;
        memcpy(v23, *(const void **)v21, v22);
        *(_QWORD *)(v20 + 8) = v22;
        v18 = 0;
        v5 = v27;
        v17 = v26 + 1;
        if ( v6 == v26 + 1 )
        {
LABEL_13:
          *(_QWORD *)&v31 = v6;
          break;
        }
      }
      else if ( v6 == ++v17 )
      {
        goto LABEL_13;
      }
    }
  }
  v7 = (_QWORD *)(v5 + 40);
  v32 = a4;
  v34 = a2 != nullptr;
  v33 = a5;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(v5 + 40) + 80LL))(
                   v5 + 40,
                   &v28);
  v11 = sub_8ACB0(v7, (__int64)v8, 80, nullptr, v9, v10);
  if ( !v11 && a2 )
  {
    v12 = *a2;
    v13 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v8[2];
    a2[1] = v8[3];
    a2[2] = v8[4];
    v8[2] = v12;
    *(__m128i *)(v8 + 3) = v13;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  sub_9F3B0(&v28);
  return v11;
}
