_QWORD *__fastcall sub_6F0C0(__int64 a1, char *a2, __int64 a3)
{
  _QWORD **v3; // rbx
  __m128i v6; // rax
  void (__fastcall *v8)(_QWORD *); // rdx
  void (__fastcall *v9)(_QWORD *); // rax
  _QWORD *v10; // r14
  __int64 v11; // r13
  void *v12; // rdi
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // rdi
  _QWORD *v16; // rbx
  __int64 v18; // rax
  __int64 *v19; // rbp
  __m128i v20; // rax
  __m128i v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 72) )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v3 = *(_QWORD ***)(a3 + 216);
  if ( v3 )
  {
    ++*((_DWORD *)v3 + 2);
    v6.m128i_i64[0] = sub_A2E60(v3, a2);
    v21 = v6;
    if ( (*((_DWORD *)v3 + 2))-- == 1 )
    {
      v8 = (void (__fastcall *)(_QWORD *))**v3;
      if ( v8 == sub_15E30 )
      {
        v9 = (void (__fastcall *)(_QWORD *))(*v3)[2];
        if ( v9 == sub_15D70 )
        {
          v10 = v3[16];
          *v3 = &off_C71D8;
          if ( v10 )
          {
            v11 = v10[2];
            while ( v11 )
            {
              sub_68210(*(_QWORD **)(v11 + 24));
              v12 = (void *)v11;
              v11 = *(_QWORD *)(v11 + 16);
              operator delete(v12, 0x30u);
            }
            operator delete(v10, 0x30u);
          }
          v13 = v3[19];
          while ( v13 )
          {
            v14 = v13;
            sub_68C00((_QWORD *)v13[3]);
            v15 = v13[4];
            v13 = (_QWORD *)v13[2];
            if ( v15 )
            {
              v14[5] = 0;
              qfree();
            }
            operator delete(v14, 0x48u);
          }
          if ( v3[12] )
          {
            v3[13] = nullptr;
            qfree();
          }
          operator delete(v3, 0xC0u);
        }
        else
        {
          v9(v3);
        }
      }
      else
      {
        v8(v3);
      }
    }
  }
  else
  {
    v20.m128i_i64[0] = sub_A2E60(nullptr, a2);
    v21 = v20;
  }
  if ( (v21.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v21.m128i_i64[0] == -1 )
    return nullptr;
  v18 = operator new(0x38u);
  *(_DWORD *)(v18 + 8) = 1;
  v16 = (_QWORD *)v18;
  *(_QWORD *)(v18 + 16) = a1;
  *(_QWORD *)v18 = &off_C8808;
  *(_QWORD *)(v18 + 24) = a3;
  v19 = (__int64 *)operator new(0x108u);
  sub_84A60((__int64)v19);
  v16[4] = v19;
  v16[5] = 0;
  v16[6] = 0;
  if ( sub_98E20(v21.m128i_i64, v19) )
    *(__m128i *)(v16 + 5) = _mm_load_si128(&v21);
  return v16;
}

