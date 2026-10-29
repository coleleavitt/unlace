unsigned __int64 __fastcall sub_1AFB60(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  char *v5; // r13
  __int64 v6; // rsi
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbp
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __m128i v26; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v6 = *a2;
      v3 = 7;
      v4 = 6;
      v5 = "(none)";
      if ( (unsigned __int64)a2[2] >= 7 )
        goto LABEL_4;
      goto LABEL_16;
    case 1:
      v17 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)v17 != -1 )
      {
        sub_652F0(a2);
        v17 = *(_QWORD *)(a1 + 8);
      }
      if ( *(_DWORD *)(v17 + 8) == 61 )
        sub_F4410(a2);
      v18 = a2[1];
      if ( v18 )
      {
        v19 = v18 + 1;
        v20 = v18 + 2;
        --v18;
      }
      else
      {
        v20 = 3;
        v19 = 2;
      }
      v21 = *a2;
      if ( a2[2] < v20 )
      {
        v23 = qvector_reserve();
        *a2 = v23;
        v21 = v23;
      }
      a2[1] = v20;
      *(_BYTE *)(v21 + v19) = 0;
      *(_WORD *)(*a2 + v18) = 8250;
      v22 = *(_QWORD *)(a1 + 8);
      if ( *(int *)(v22 + 8) > 69 )
        return sub_262320(v22, a2, 0);
      else
        return sub_260C60(v22, a2, 0);
    case 2:
      v10 = *(_QWORD *)(get_module_data() + 1344);
      if ( v10 )
      {
        sub_259120(&v25, v10, *(_QWORD *)(a1 + 8), 0);
        v11 = *a2;
        v12 = v25;
        v25 = 0;
        v13 = _mm_loadu_si128(&v26);
        v26 = 0;
        if ( v11 )
        {
          a2[1] = 0;
          v24 = v13;
          qfree();
          v14 = _mm_load_si128(&v24);
          v15 = v25;
          *a2 = v12;
          *(__m128i *)(a2 + 1) = v14;
          if ( v15 )
          {
            v26.m128i_i64[0] = 0;
            qfree();
          }
        }
        else
        {
          *a2 = v12;
          *(__m128i *)(a2 + 1) = v13;
        }
      }
      return v27 - __readfsqword(0x28u);
    case 3:
      v3 = 7;
      v4 = 6;
      v5 = "(func)";
      goto LABEL_3;
    case 4:
      if ( *(_QWORD *)(a1 + 8) == -1 )
        get_module_data();
      sub_652F0(a2);
      return sub_1A90F0(a2, *(_DWORD *)(a1 + 16));
    default:
      v3 = 2;
      v4 = 1;
      v5 = "?";
LABEL_3:
      v6 = *a2;
      if ( a2[2] < v3 )
      {
LABEL_16:
        v16 = qvector_reserve();
        *a2 = v16;
        v6 = v16;
      }
LABEL_4:
      a2[1] = v3;
      v7 = 0;
      do
      {
        v8 = v7++;
        *(_BYTE *)(v6 + v8) = v5[v8];
      }
      while ( v7 < (unsigned int)v4 );
      *(_BYTE *)(*a2 + v4) = 0;
      return v27 - __readfsqword(0x28u);
  }
}

