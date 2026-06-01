__int64 __fastcall PyW_to_jobj_t(__int64 *a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 8);
  v11 = __readfsqword(0x28u);
  if ( ((*(__int64 (__fastcall **)(__int64))(qword_24798 + 928))(v4) & 0x20000000) != 0 )
  {
    v9 = 0;
    v10 = nullptr;
    v3 = PyW_to_jvalue_t(&v9, a2);
    if ( (_BYTE)v3 )
    {
      if ( (_DWORD)v9 == 3 )
      {
        v6 = v10;
        v7 = *a1;
        v8 = _mm_loadu_si128((const __m128i *)(a1 + 1));
        *a1 = *v10;
        a1[1] = v6[1];
        a1[2] = v6[2];
        *v6 = v7;
        *(__m128i *)(v6 + 1) = v8;
      }
      else
      {
        v3 = 0;
      }
    }
    jvalue_t_clear();
  }
  return v3;
}

