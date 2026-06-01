_QWORD *__fastcall sub_37C20(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 (__fastcall ***v9)(__int64); // rdi
  __int64 (__fastcall **v10)(__int64); // rax
  __int64 (__fastcall ****v11)(__int64); // rcx
  __int64 (__fastcall ***v12)(__int64); // rdx
  __int64 v15; // rax
  __m128 v16; // xmm0
  __m128i v17; // xmm0
  _QWORD v18[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v19; // [rsp+10h] [rbp-58h] BYREF
  __m128i v20; // [rsp+18h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v18[0] = off_AA248;
  v19 = 0;
  v20 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(v3 + 104);
  v21 = v3;
  v18[1] = v4;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)v5 + 16LL))(v5, v4, 0, v18) )
  {
    v6 = v19;
    *a1 = 0;
    v18[0] = off_AA248;
    if ( v6 )
    {
      v7 = v20.m128i_i64[0];
      if ( v20.m128i_i64[0] )
      {
        v8 = 0;
        while ( 1 )
        {
          v11 = (__int64 (__fastcall ****)(__int64))(v6 + 8 * v8);
          v12 = *v11;
          if ( !*v11 )
            goto LABEL_8;
          if ( (*((_DWORD *)v12 + 2))-- != 1 )
            goto LABEL_11;
          v9 = *v11;
          v10 = **v11;
          if ( *v10 != sub_241E0 )
          {
            (*v10)((__int64)v9);
            v6 = v19;
            goto LABEL_12;
          }
          if ( v9 )
          {
            v10[20]((__int64)v9);
            v6 = v19;
LABEL_8:
            if ( v7 == ++v8 )
              break;
          }
          else
          {
LABEL_11:
            v6 = v19;
LABEL_12:
            if ( v7 == ++v8 )
              break;
          }
        }
      }
      v20.m128i_i64[0] = 0;
      qfree(v6);
    }
  }
  else
  {
    v15 = operator new(0x38u);
    *a1 = v15;
    *(_DWORD *)(v15 + 8) = 1;
    v16 = _mm_loadh_ps((const double *)&v19);
    *(_QWORD *)v15 = &off_A9FC8;
    *(__m128 *)(v15 + 16) = v16;
    v17 = _mm_loadu_si128(&v20);
    *(_DWORD *)(v15 + 48) = -1;
    *(__m128i *)(v15 + 32) = v17;
  }
  return a1;
}

