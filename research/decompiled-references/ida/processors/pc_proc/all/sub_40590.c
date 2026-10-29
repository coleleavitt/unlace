_QWORD *__fastcall sub_40590(_QWORD *a1, _QWORD *a2)
{
  char v2; // r14
  char v3; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 func; // rax
  bool v12; // r13
  __int64 v13; // r14
  __int64 qword; // rax
  __int64 v15; // r12
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __m128 *v19; // rsi
  __m128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // r9
  bool v25; // zf
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128i v38; // xmm0
  _QWORD *v39; // [rsp+8h] [rbp-90h] BYREF
  _QWORD *v40; // [rsp+10h] [rbp-88h]
  __int64 *v41; // [rsp+18h] [rbp-80h]
  unsigned __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __m128i v45; // [rsp+38h] [rbp-60h] BYREF
  char v46; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v2 = 1;
  v3 = 0;
  v4 = 0;
  v5 = a2[26];
  v6 = a2[14];
  v47 = __readfsqword(0x28u);
  v40 = a1;
  if ( (unsigned __int8)is_mapped() )
  {
    while ( (unsigned __int8)is_mapped() )
    {
      sub_3CA80();
      if ( v4 >= v6 && v3 )
      {
        v39 = v40;
        sub_3D7B0((__int64)&v44);
        v24 = v39;
        *v39 = v44;
        v38 = _mm_loadu_si128(&v45);
        *((_BYTE *)v24 + 24) = 1;
        *(__m128i *)(v24 + 1) = v38;
        return v24;
      }
      sub_3FFE0((__int64)&v44, (__int64)a2, v5, v8, v9, v10);
      if ( v46 )
      {
        v24 = v40;
        *v40 = v44;
        v36 = _mm_loadu_si128(&v45);
        *((_BYTE *)v24 + 24) = 1;
        *(__m128i *)(v24 + 1) = v36;
        return v24;
      }
      if ( (_BYTE)v44 )
      {
        v39 = (_QWORD *)a2[8];
        func = get_func();
        v12 = func != 0;
        if ( !func )
        {
          auto_mark_range();
          auto_mark_range();
        }
        sub_3CA80();
        v13 = a2[14] - 8LL;
        qword = get_qword();
        a2[14] += 8LL;
        a2[26] = qword;
        v15 = qword;
        sub_3CA80();
        v16 = (__int64 *)a2[9];
        v17 = v16[1];
        v18 = *v16;
        if ( v16[2] < (unsigned __int64)(v17 + 1) )
        {
          v41 = (__int64 *)a2[9];
          v30 = qvector_reserve();
          v16 = v41;
          v18 = v30;
          *v41 = v30;
          v17 = v16[1];
        }
        v19 = (__m128 *)(32 * v17 + v18);
        v20 = _mm_loadh_ps((const double *)&v39);
        v19[1].m128_u64[0] = v13;
        v19[1].m128_i8[8] = v12;
        *v19 = v20;
        ++v16[1];
        v21 = sub_3CB00(v15);
        v43 = v22;
        v42 = v21;
        if ( !(_BYTE)v22 )
          goto LABEL_20;
        v5 = v42;
        v23 = a2[14];
        a2[26] = v42;
      }
      else
      {
        if ( !v2 )
          break;
        v27 = get_qword();
        if ( !(unsigned __int8)is_mapped() || (v28 = sub_3CB00(v27), v43 = v29, v42 = v28, !(_BYTE)v29) )
        {
LABEL_20:
          v39 = v40;
          sub_3CA80();
          v24 = v39;
          goto LABEL_15;
        }
        v31 = (__int64 *)a2[9];
        v32 = v31[1];
        v33 = *v31;
        if ( v31[2] < (unsigned __int64)(v32 + 1) )
        {
          v37 = qvector_reserve();
          *v31 = v37;
          v33 = v37;
          v32 = v31[1];
        }
        v34 = 32 * v32 + v33;
        *(_QWORD *)v34 = v5;
        v5 = v42;
        *(_QWORD *)(v34 + 8) = -1;
        *(_QWORD *)(v34 + 16) = v6 - 8;
        *(_BYTE *)(v34 + 24) = 0;
        ++v31[1];
        v35 = a2[14];
        a2[26] = v5;
        v23 = v35 + 8;
        a2[14] = v23;
      }
      v4 = v6;
      v2 = 0;
      v6 = v23;
      v3 = 1;
      if ( !(unsigned __int8)is_mapped() )
        break;
    }
  }
  v24 = v40;
LABEL_15:
  v25 = *(_QWORD *)(a2[9] + 8LL) == 0;
  *((_BYTE *)v24 + 24) = 0;
  *(_BYTE *)v24 = !v25;
  return v24;
}

