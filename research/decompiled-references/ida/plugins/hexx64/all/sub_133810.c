_QWORD *__fastcall sub_133810(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned int *a9)
{
  unsigned __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax
  _QWORD v18[3]; // [rsp+0h] [rbp-78h] BYREF
  char v19; // [rsp+18h] [rbp-60h]
  __int64 v20; // [rsp+20h] [rbp-58h]
  char v21; // [rsp+28h] [rbp-50h]
  _QWORD *v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned int *v24; // [rsp+40h] [rbp-38h]
  _QWORD *v25; // [rsp+48h] [rbp-30h]
  int v26; // [rsp+50h] [rbp-28h]
  unsigned __int64 v27; // [rsp+58h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  *a1 = 0;
  a1[1] = 0;
  v18[1] = 0;
  v18[2] = 0;
  v19 = 0;
  v20 = 0;
  v14 = *a9;
  v24 = a9;
  v15 = 0;
  v21 = 0;
  v18[0] = &off_4DD980;
  v22 = a2;
  v23 = a6;
  v25 = a1;
  if ( (unsigned int)v14 <= 0x21 )
  {
    v16 = 0x306385000LL;
    v15 = 2 * _bittest64(&v16, v14);
  }
  v26 = v15;
  sub_129C50(a2, a3, a4, a5, (__int64)v18, a7, a8);
  return a1;
}

