__int64 __fastcall sub_3DFA70(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 *v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __m128i v16; // xmm0
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  __m128i v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]

  v10 = *(__int64 **)(a1 + 48);
  v11 = *a4;
  v22 = __readfsqword(0x28u);
  sub_3D1670(&v20, *v10, (__int64)a4, *(_DWORD *)(a2 + 64), (_DWORD *)a2);
  v12 = v20;
  if ( !v20 )
    return (unsigned int)sub_3DF760(a1, a2, a3, v11, a5, a6, a7, a8);
  if ( *(_DWORD *)(v20 + 312) == *(_DWORD *)(a2 + 64) )
  {
    if ( *(_DWORD *)a2 == -33 )
    {
      v19 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = -1;
      if ( v19 )
      {
        *(_QWORD *)(a2 + 24) = 0;
        qfree();
      }
      a5 = 0.0;
      *(_QWORD *)(a2 + 16) = 0;
      *(_OWORD *)(a2 + 24) = 0;
    }
    else if ( *(_DWORD *)a2 )
    {
      goto LABEL_15;
    }
    sub_3DF6C0(&v21, *(unsigned __int64 **)(a1 + 48), v11, a5, a6, a7, a8);
    v16 = _mm_load_si128(&v21);
    v17 = *(volatile signed __int32 **)(a2 + 48);
    v18 = v16.m128i_i64[0];
    *(__m128i *)(a2 + 40) = v16;
    if ( v17 )
    {
      sub_3D5C20(v17);
      v18 = *(_QWORD *)(a2 + 40);
    }
    if ( v18 )
    {
      v13 = sub_3D91C0(a1, a2, a3);
      goto LABEL_4;
    }
    if ( !*(_DWORD *)a2 )
    {
      *(_DWORD *)a2 = -2;
      *(_QWORD *)(a2 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 128LL))(a3);
      sub_6B2B0((__int64 *)(a2 + 16));
    }
LABEL_15:
    v14 = 0;
    goto LABEL_5;
  }
  v13 = sub_3DF760(a1, a2, a3, v11, a5, a6, a7, a8);
LABEL_4:
  v14 = v13;
LABEL_5:
  sub_83CD0(v12);
  j__qfree();
  return v14;
}

