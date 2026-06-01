unsigned __int64 __fastcall sub_C330(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rbp
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rax
  _QWORD *v7; // r12
  void (__fastcall *v8)(__int64, _QWORD *, _QWORD *); // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v13; // rdi
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r14
  _QWORD *v16; // rbx
  void (__fastcall *v17)(__int64, _QWORD *, _QWORD *); // rax
  _QWORD v18[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v2 = a1[1];
  if ( v2 != a2 )
  {
    v18[0] = 0;
    v3 = a1;
    v18[1] = 0;
    if ( a2 < v2 )
    {
      v10 = a2;
      do
      {
        v11 = v10++;
        qfree(*(_QWORD *)(*a1 + 16 * v11));
      }
      while ( v2 != v10 );
    }
    else
    {
      v5 = (_QWORD *)*a1;
      v6 = a1[2];
      if ( (unsigned __int64)v18 >= *a1 && v18 < &v5[2 * v6] )
      {
        v19[0] = 0;
        v19[1] = 0;
        hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(a1, v5);
        v13 = 203;
        v14 = v19;
        hexdsp(203, v19, v18);
        if ( v3[2] < a2 )
        {
          v14 = (_QWORD *)*v3;
          v13 = (__int64)v3;
          *v3 = qvector_reserve(v3, *v3, a2, 16);
        }
        v15 = v3[1];
        if ( v15 < a2 )
        {
          do
          {
            v16 = (_QWORD *)(*v3 + 16 * v15);
            *v16 = 0;
            v16[1] = 0;
            v17 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(v13, v14);
            v14 = v16;
            v13 = 203;
            v17(203, v16, v19);
            ++v15;
          }
          while ( a2 != v15 );
        }
        v3[1] = a2;
        qfree(v19[0]);
        goto LABEL_9;
      }
      if ( v6 < a2 )
      {
        *a1 = qvector_reserve(a1, v5, a2, 16);
        v2 = a1[1];
      }
      for ( ; v2 < a2; ++v2 )
      {
        v7 = (_QWORD *)(*v3 + 16 * v2);
        *v7 = 0;
        v7[1] = 0;
        v8 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(a1, v5);
        v5 = v7;
        a1 = &qword_C8 + 3;
        v8(203, v7, v18);
      }
    }
    v3[1] = a2;
LABEL_9:
    qfree(v18[0]);
  }
  return v20 - __readfsqword(0x28u);
}

