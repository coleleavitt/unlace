__int64 *__fastcall sub_62010(__int64 *a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  _BYTE *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  char *v13; // rax
  char *v14; // r12
  size_t v15; // rax
  __int64 v16; // r13
  size_t v17; // r14
  size_t v18; // r15
  __int64 v19; // rsi
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-78h] BYREF
  __int128 v25; // [rsp+38h] [rbp-70h]
  __int64 v26; // [rsp+50h] [rbp-58h] BYREF
  __m128i v27; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( a3 == 73 )
  {
    v11 = netnode_altval();
    *a1 = 0;
    v12 = v11 >> 8;
    *(_OWORD *)(a1 + 1) = 0;
    if ( (_BYTE)v12 == 15 )
    {
      v21 = qvector_reserve();
      *a1 = v21;
      a1[1] = 4;
      *(_BYTE *)(v21 + 3) = 0;
      v22 = *a1;
      *(_WORD *)v22 = 20566;
      *(_BYTE *)(v22 + 2) = 84;
    }
    else if ( (unsigned __int8)v12 > 0xFu )
    {
      sub_1CD20(a1);
    }
    else
    {
      v13 = sub_39CA0(a5, (unsigned __int8)v12);
      v14 = v13;
      if ( v13 )
      {
        v15 = strlen(v13);
        v16 = a1[1];
        v17 = v15;
        v18 = v15;
        if ( v16 )
        {
          --v16;
          v18 = v15 + v16;
        }
        v19 = *a1;
        v20 = v18 + 1;
        if ( a1[2] < v18 + 1 )
        {
          v23 = qvector_reserve();
          *a1 = v23;
          v20 = v18 + 1;
          v19 = v23;
        }
        a1[1] = v20;
        *(_BYTE *)(v19 + v18) = 0;
        memmove((void *)(v16 + *a1), v14, v17);
      }
    }
    node2ea();
    sub_55D90(a1);
  }
  else
  {
    if ( a3 > 0x49u )
    {
      if ( a3 == 76 )
      {
        node2ea();
        get_ea_diffpos_name();
        v25 = 0;
        generate_disasm_line();
        v26 = 0;
        v27 = 0;
        sub_1CD20(&v26);
        v10 = _mm_loadu_si128(&v27);
        *a1 = v26;
        *(__m128i *)(a1 + 1) = v10;
        return a1;
      }
      if ( a3 == 115 )
      {
        *a1 = 0;
        *(_OWORD *)(a1 + 1) = 0;
        node2ea();
        if ( get_func() && get_ea_name() <= 0 )
          sub_1CD20(a1);
        return a1;
      }
LABEL_12:
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      v8 = (_BYTE *)qvector_reserve();
      *a1 = (__int64)v8;
      a1[1] = 1;
      *v8 = 0;
      return a1;
    }
    if ( a3 == 68 )
    {
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      v9 = netnode_altval();
      if ( (unsigned __int64)(v9 - 1) <= 1 )
      {
        node2ea();
        sub_1CD20(a1);
      }
    }
    else
    {
      if ( a3 != 70 )
        goto LABEL_12;
      *a1 = 0;
      *(_OWORD *)(a1 + 1) = 0;
      v6 = node2ea();
      if ( (unsigned __int8)sub_2F860(a5, (__int64)&v24, v6) )
      {
        sub_1CD20(a1);
        v27 = 0;
        v26 = 0;
        if ( get_ea_name() <= 0 )
          sub_1CD20(&v26);
        if ( v27.m128i_i64[0] > 1uLL )
          sub_55D90(a1);
        if ( v26 )
        {
          v27.m128i_i64[0] = 0;
          qfree();
        }
      }
    }
  }
  return a1;
}

