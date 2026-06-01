_QWORD *__fastcall sub_29060(_QWORD *a1, double a2, __m128i a3, __int64 a4, __int64 a5)
{
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128 v14; // xmm0
  int *v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-78h] BYREF
  __int128 v17; // [rsp+8h] [rbp-70h]
  char v18; // [rsp+18h] [rbp-60h]
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  int *v22; // [rsp+38h] [rbp-40h] BYREF
  int *v23; // [rsp+40h] [rbp-38h]
  __int64 v24; // [rsp+48h] [rbp-30h]
  unsigned __int64 v25; // [rsp+58h] [rbp-20h]

  v25 = __readfsqword(0x28u);
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v7 = (*(unsigned int (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(*(_QWORD *)(a5 + 16) + 104LL) + 48LL))(
         *(_QWORD *)(*(_QWORD *)(a5 + 16) + 104LL),
         &v16,
         *(unsigned int *)(a5 + 24)) == 0;
  v8 = 0;
  if ( v7 && (_QWORD)v17 )
  {
    v20 = 0;
    v21 = 0;
    v22 = &v20;
    v23 = &v20;
    v24 = 0;
    sub_28080(&v19, &v16, 0.0, a3);
    v8 = operator new(0x60u);
    v11 = *(_QWORD *)(a5 + 16);
    v12 = v21;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 16) = v11;
    v13 = v8 + 32;
    *(_QWORD *)v8 = &off_AA200;
    *(_DWORD *)(v8 + 32) = 0;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = v8 + 32;
    *(_QWORD *)(v8 + 56) = v8 + 32;
    *(_QWORD *)(v8 + 64) = 0;
    *(_QWORD *)(v8 + 88) = 0;
    *(_OWORD *)(v8 + 72) = 0;
    if ( v12 )
    {
      v14 = _mm_loadh_ps((const double *)&v22);
      *(_DWORD *)(v8 + 32) = v20;
      v15 = v23;
      *(__m128 *)(v8 + 40) = v14;
      *(_QWORD *)(v8 + 56) = v15;
      *(_QWORD *)(v12 + 8) = v13;
      *(_QWORD *)(v8 + 64) = v24;
    }
    *(_QWORD *)(v8 + 80) = v13;
  }
  v9 = v16;
  *a1 = v8;
  if ( v9 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v9);
  }
  return a1;
}
