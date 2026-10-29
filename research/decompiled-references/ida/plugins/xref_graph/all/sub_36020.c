unsigned __int64 __fastcall sub_36020(_QWORD *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rdi
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r12d
  int v15; // r15d
  __int64 i; // rsi
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rdx
  _QWORD *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r12
  void *v24; // rdi
  __int64 v25; // rsi
  _QWORD *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r12
  void *v30; // rdi
  __int64 v31; // rsi
  void **v33; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v34; // [rsp+10h] [rbp-E8h]
  void **v35; // [rsp+18h] [rbp-E0h]
  void *v36; // [rsp+20h] [rbp-D8h] BYREF
  void *v37; // [rsp+28h] [rbp-D0h] BYREF
  void *v38[4]; // [rsp+30h] [rbp-C8h] BYREF
  void *v39[4]; // [rsp+50h] [rbp-A8h] BYREF
  void *ptr[4]; // [rsp+70h] [rbp-88h] BYREF
  __m128 v41; // [rsp+90h] [rbp-68h] BYREF
  __m128i v42; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-40h]

  v5 = a1[5];
  v43 = __readfsqword(0x28u);
  QT::QLabel::setText(v5, a2 + 64);
  v7 = a1[6];
  v8 = *(_DWORD *)(a2 + 88);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      QT::QString::fromUtf8(ptr, 6, "Import");
      QT::QLabel::setText(v7, ptr);
    }
    else
    {
      if ( v8 == 1 )
        QT::QString::fromUtf8(ptr, 4, "Data");
      else
        QT::QString::fromUtf8(ptr, 7, "Unknown");
      QT::QLabel::setText(v7, ptr);
    }
  }
  else
  {
    QT::QString::fromUtf8(ptr, 4, "Code");
    QT::QLabel::setText(v7, ptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v9 = a1[7];
  QT::QString::fromUtf8(v39, 4, "0x%1");
  QT::QString::arg(ptr, v39, *(_QWORD *)(a2 + 16), 8, 16, 48);
  QT::QLabel::setText(v9, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
    free(v39[0]);
  v10 = *(_QWORD *)(a2 + 16);
  v36 = nullptr;
  v35 = &v36;
  sub_35E10(ptr, (_DWORD **)&v36, v10, a3, a4);
  v11 = *(_QWORD *)(a2 + 16);
  v37 = nullptr;
  v33 = &v37;
  sub_35E10(ptr, (_DWORD **)&v37, v11, a3, a4);
  v12 = *(_QWORD *)(a2 + 16);
  v41 = _mm_loadh_ps((const double *)&v33);
  v42 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C130), (__m128i)(unsigned __int64)sub_36630);
  sub_1FBE0(v12, 511, (__int64)&v41);
  if ( v42.m128i_i64[0] )
    ((void (__fastcall *)(__m128 *, __m128 *, __int64))v42.m128i_i64[0])(&v41, &v41, 3);
  v13 = *(_QWORD *)(a2 + 96);
  v14 = 0;
  v15 = 0;
  for ( i = v13 + 8LL * *(_QWORD *)(a2 + 104); v13 != i; ++v14 )
  {
    while ( a2 != *(_QWORD *)(*(_QWORD *)v13 + 16LL) )
    {
      v13 += 8;
      ++v15;
      if ( v13 == i )
        goto LABEL_22;
    }
    v13 += 8;
  }
LABEL_22:
  v34 = a1[8];
  QT::QString::fromUtf8(v38, 20, "%1 nodes (%2 hidden)");
  QT::QString::arg(v39, v38, v15, 0, 10, 32);
  v17 = 0;
  if ( v36 )
    v17 = *((_QWORD *)v36 + 1);
  QT::QString::arg(ptr, v39, v17 - v15 - 1, 0, 10, 32);
  QT::QLabel::setText(v34, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
    free(v39[0]);
  if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
    free(v38[0]);
  v18 = a1[9];
  QT::QString::fromUtf8(v38, 20, "%1 nodes (%2 hidden)");
  QT::QString::arg(v39, v38, v14, 0, 10, 32);
  v19 = 0;
  if ( v37 )
    v19 = *((_QWORD *)v37 + 1);
  QT::QString::arg(ptr, v39, v19 - v14 - 1, 0, 10, 32);
  QT::QLabel::setText(v18, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
    free(v39[0]);
  if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
    free(v38[0]);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 104LL))(a1, 1);
  if ( v37 )
  {
    if ( *(_DWORD *)v37 != -1 && !_InterlockedSub((volatile signed __int32 *)v37, 1u) )
    {
      v20 = v37;
      if ( v37 )
      {
        v21 = *((_QWORD *)v37 + 4);
        if ( v21 )
        {
          v22 = v21 + 144LL * *(_QWORD *)(v21 - 8);
          if ( v21 == v22 )
          {
            v25 = 0;
          }
          else
          {
            do
            {
              v23 = v22;
              v24 = *(void **)(v22 - 16);
              v22 -= 144;
              if ( v24 )
                operator delete[](v24);
            }
            while ( v20[4] != v22 );
            v25 = 144LL * *(_QWORD *)(v23 - 152);
          }
          operator delete[]((void *)(v22 - 8), v25 + 8);
        }
        operator delete(v20, 0x28u);
      }
    }
  }
  if ( v36 )
  {
    if ( *(_DWORD *)v36 != -1 && !_InterlockedSub((volatile signed __int32 *)v36, 1u) )
    {
      v26 = v36;
      if ( v36 )
      {
        v27 = *((_QWORD *)v36 + 4);
        if ( v27 )
        {
          v28 = v27 + 144LL * *(_QWORD *)(v27 - 8);
          if ( v27 == v28 )
          {
            v31 = 0;
          }
          else
          {
            do
            {
              v29 = v28;
              v30 = *(void **)(v28 - 16);
              v28 -= 144;
              if ( v30 )
                operator delete[](v30);
            }
            while ( v26[4] != v28 );
            v31 = 144LL * *(_QWORD *)(v29 - 152);
          }
          operator delete[]((void *)(v28 - 8), v31 + 8);
        }
        operator delete(v26, 0x28u);
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}

