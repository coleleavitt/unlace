unsigned __int64 __fastcall sub_26F80(__int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // r12
  unsigned __int64 v4; // rbx
  _QWORD *v5; // r13
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  void (__fastcall *v10)(__int64, _QWORD *, unsigned __int64); // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  _QWORD *v14; // rbx
  void (__fastcall *v15)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // rbp
  void (__fastcall *hexdsp)(__int64, _QWORD *, unsigned __int64); // rax
  _QWORD *v20; // rbp
  __int64 v21; // rax
  _QWORD v22[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v3 = a1;
  v4 = a1[1];
  v23 = __readfsqword(0x28u);
  v5 = a2;
  if ( (unsigned __int64)a2 < v4 )
  {
    v20 = a2;
    do
    {
      v21 = (__int64)v20;
      v20 = (_QWORD *)((char *)v20 + 1);
      qfree(*(_QWORD *)(*a1 + 16 * v21));
    }
    while ( (_QWORD *)v4 != v20 );
    a1[1] = (__int64)a2;
  }
  else if ( v4 < (unsigned __int64)a2 )
  {
    v7 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( a3 < *a1 || a3 >= (unsigned __int64)&v7[2 * v8] )
    {
      if ( v8 >= (unsigned __int64)a2
        || (a2 = (_QWORD *)*a1,
            v16 = qvector_reserve(a1, *a1, v5, 16),
            v4 = a1[1],
            *a1 = v16,
            v7 = (_QWORD *)v16,
            v4 < (unsigned __int64)v5) )
      {
        while ( 1 )
        {
          v17 = v4++;
          v18 = &v7[2 * v17];
          *v18 = 0;
          v18[1] = 0;
          hexdsp = (void (__fastcall *)(__int64, _QWORD *, unsigned __int64))get_hexdsp(a1, a2);
          a2 = v18;
          a1 = &qword_C8 + 3;
          hexdsp(203, v18, a3);
          if ( v4 >= (unsigned __int64)v5 )
            break;
          v7 = (_QWORD *)*v3;
        }
        v3[1] = (__int64)v5;
      }
      else
      {
        a1[1] = (__int64)v5;
      }
    }
    else
    {
      v22[0] = 0;
      v22[1] = 0;
      v10 = (void (__fastcall *)(__int64, _QWORD *, unsigned __int64))get_hexdsp(a1, a2);
      v11 = v22;
      v12 = 203;
      v10(203, v22, a3);
      if ( v3[2] < (unsigned __int64)v5 )
      {
        v11 = (_QWORD *)*v3;
        v12 = (__int64)v3;
        *v3 = qvector_reserve(v3, *v3, v5, 16);
      }
      v13 = v3[1];
      if ( v13 < (unsigned __int64)v5 )
      {
        do
        {
          v14 = (_QWORD *)(*v3 + 16 * v13);
          *v14 = 0;
          v14[1] = 0;
          v15 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(v12, v11);
          v11 = v14;
          v12 = 203;
          v15(203, v14, v22);
          ++v13;
        }
        while ( v5 != (_QWORD *)v13 );
      }
      v3[1] = (__int64)v5;
      qfree(v22[0]);
    }
  }
  return v23 - __readfsqword(0x28u);
}
