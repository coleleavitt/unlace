__int64 __fastcall sub_23E50(__int64 a1, __int64 *a2, bool *a3)
{
  __int64 *func; // rax
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // r14d
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  __m128i v15; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  qmutex_lock();
  func = (__int64 *)get_func();
  if ( func )
  {
    v14 = 0;
    v15 = 0;
    v5 = sub_1C3C0(a1, (__int64)&v14, *func);
    v6 = v14;
    v7 = v5;
    if ( !(_BYTE)v5 )
      goto LABEL_11;
    if ( a3 )
    {
      v13 = v14;
      v8 = sub_23D40(a1 + 64, (__int64)&v14);
      v6 = v13;
      *a3 = a1 + 72 != (_QWORD)v8;
    }
    if ( a2 )
    {
      v9 = *a2;
      v10 = a2[2];
      *a2 = v6;
      v11 = _mm_loadu_si128(&v15);
      v14 = v9;
      v15.m128i_i64[1] = v10;
      *(__m128i *)(a2 + 1) = v11;
    }
    else
    {
LABEL_11:
      v9 = v6;
    }
    if ( v9 )
    {
      v15.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v7 = 0;
  }
  qmutex_unlock();
  return v7;
}

