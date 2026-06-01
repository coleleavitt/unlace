__int64 __fastcall sub_62FD0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v22; // [rsp+10h] [rbp-68h] BYREF
  __m128i v23; // [rsp+18h] [rbp-60h] BYREF
  char v24; // [rsp+28h] [rbp-50h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 216);
  v25 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 120);
  if ( v7 )
  {
    v22 = *(_QWORD *)(v5 + 16) + v7;
    if ( sub_263B0(v5) )
      sub_62E00((_QWORD *)(a2 + 224), &v22, v18, v19, v20);
  }
  v8 = *a3;
  v9 = *a3 + 16 * a3[1];
  if ( v9 == *a3 )
  {
LABEL_9:
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)v8;
      sub_60020((__int64)&v22, a2, *(_QWORD *)v8, *(_DWORD *)(v8 + 8));
      if ( v24 )
        break;
      if ( (_BYTE)v22 && (v11 = *(_QWORD *)(a2 + 216), v21 = v10, sub_263B0(v11)) )
      {
        v8 += 16;
        sub_62E00((_QWORD *)(a2 + 224), &v21, v12, v13, v14);
        if ( v9 == v8 )
          goto LABEL_9;
      }
      else
      {
        v8 += 16;
        if ( v9 == v8 )
          goto LABEL_9;
      }
    }
    v16 = v22;
    v17 = _mm_loadu_si128(&v23);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v16;
    *(__m128i *)(a1 + 8) = v17;
  }
  return a1;
}

