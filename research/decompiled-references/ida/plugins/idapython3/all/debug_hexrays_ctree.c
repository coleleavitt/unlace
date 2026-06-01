unsigned __int64 __fastcall debug_hexrays_ctree(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14,
        char a15)
{
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-C0h]
  _BYTE v25[16]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-A8h]
  __int64 v27; // [rsp+38h] [rbp-A0h]
  __int64 v28; // [rsp+40h] [rbp-98h]
  __int64 v29; // [rsp+48h] [rbp-90h]
  __m128 v30; // [rsp+50h] [rbp-88h]
  __m128 v31; // [rsp+60h] [rbp-78h]
  __m128 v32; // [rsp+70h] [rbp-68h]
  __m128 v33; // [rsp+80h] [rbp-58h]
  __m128 v34; // [rsp+90h] [rbp-48h]
  __m128 v35; // [rsp+A0h] [rbp-38h]
  __m128 v36; // [rsp+B0h] [rbp-28h]
  __m128 v37; // [rsp+C0h] [rbp-18h]

  v26 = a3;
  v27 = a4;
  v28 = a5;
  v29 = a6;
  v30 = a7;
  v31 = a8;
  v32 = a9;
  v33 = a10;
  v34 = a11;
  v35 = a12;
  v36 = a13;
  v37 = a14;
  v24 = __readfsqword(0x28u);
  v15 = sub_6B10(a1);
  if ( a2 && v15 )
  {
    sub_7F30((__int64)"HEXRAYS CTREE: ", a2, v16, v17, v18, v19, 0x3000000010LL, &a15, v25);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(23, a2, &v23, &callui, v21, v22);
  }
  return v24 - __readfsqword(0x28u);
}

