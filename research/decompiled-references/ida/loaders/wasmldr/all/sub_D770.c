__int64 __fastcall sub_D770(__int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // rbp
  unsigned __int8 v4; // r12
  const char *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  size_t v8; // rax
  __int64 v9; // r15
  __int64 v10; // rsi
  size_t v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  void *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  char *v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  void *v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned int v34; // [rsp+4h] [rbp-B4h]
  __m128i v35; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+20h] [rbp-98h]
  size_t v37; // [rsp+28h] [rbp-90h]
  unsigned int v38; // [rsp+3Ch] [rbp-7Ch] BYREF
  char *v39; // [rsp+40h] [rbp-78h] BYREF
  __m128i v40; // [rsp+48h] [rbp-70h]
  void *v41; // [rsp+60h] [rbp-58h] BYREF
  __m128i v42; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 32);
  v43 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 < v1 )
  {
    v34 = -1;
    do
    {
      if ( v1 < v2 + 1 )
        sub_3890((__int64)"couldn't read template type @0x%llx", v2);
      v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v2);
      *(_QWORD *)(a1 + 40) = v2;
      *(_QWORD *)(a1 + 24) = v2 + 1;
      if ( v4 > 0xDu )
        sub_3890((__int64)"read_sections: invalid section code");
      create_data(v2, 0, 1, -1);
      v5 = off_14CE0[v4];
      v40 = 0;
      v39 = nullptr;
      v6 = qvector_reserve(&v39, 0, 10, 1);
      v39 = (char *)v6;
      v40.m128i_i64[0] = 10;
      *(_QWORD *)v6 = 0x206E6F6974636573LL;
      v7 = (__int64)v39;
      *(_BYTE *)(v6 + 8) = 34;
      *(_BYTE *)(v7 + 9) = 0;
      if ( v5 )
      {
        v36 = v7;
        v8 = strlen(v5);
        v9 = v40.m128i_i64[0];
        v10 = v36;
        v11 = v8;
        v12 = v8;
        if ( v40.m128i_i64[0] )
        {
          v9 = v40.m128i_i64[0] - 1;
          v12 = v8 + v40.m128i_i64[0] - 1;
        }
        v13 = v12 + 1;
        if ( v40.m128i_i64[1] < (unsigned __int64)(v12 + 1) )
        {
          v37 = v8;
          v35.m128i_i64[0] = v12;
          v36 = v12 + 1;
          v39 = (char *)qvector_reserve(&v39, v10, v13, 1);
          v11 = v37;
          v10 = (__int64)v39;
          v12 = v35.m128i_i64[0];
          v13 = v36;
        }
        v40.m128i_i64[0] = v13;
        *(_BYTE *)(v10 + v12) = 0;
        memmove(&v39[v9], v5, v11);
      }
      sub_4EE0((__int64 *)&v39, (__int64)"\" (%u)", v4);
      v14 = &unk_10F58;
      if ( v40.m128i_i64[0] )
        v14 = v39;
      set_cmt(*(_QWORD *)(a1 + 40), v14, 0);
      v16 = *(_QWORD *)(a1 + 8);
      v17 = v16 + *(_QWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 32) + v16;
      if ( v17 >= v18 || (v19 = sub_E440(v17, v18, &v38), (v15 = v19) == 0) )
        sub_3890((__int64)"read_sections: couldn't read section size", v18, v15);
      v20 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v20;
      *(_QWORD *)(a1 + 24) = v19 + v20;
      create_data(v20, 0, v19, -1);
      v42 = 0;
      v41 = nullptr;
      v41 = (void *)qvector_reserve(&v41, 0, 14, 1);
      v42.m128i_i64[0] = 14;
      qmemcpy(v41, "section size ", 13);
      v21 = (char *)v41;
      v41 = nullptr;
      v22 = (__int64)v39;
      v21[13] = 0;
      v23 = _mm_loadu_si128(&v42);
      v42 = 0;
      if ( v22 )
      {
        v36 = (__int64)v21;
        v35 = v23;
        v40.m128i_i64[0] = 0;
        qfree(v22);
        v24 = _mm_load_si128(&v35);
        v39 = (char *)v36;
        v40 = v24;
        if ( v41 )
        {
          v42.m128i_i64[0] = 0;
          qfree(v41);
        }
      }
      else
      {
        v39 = v21;
        v40 = v23;
      }
      sub_4EE0((__int64 *)&v39, (__int64)"(0x%x)", v38);
      v25 = &unk_10F58;
      if ( v40.m128i_i64[0] )
        v25 = v39;
      set_cmt(*(_QWORD *)(a1 + 40), v25, 0);
      v26 = *(_QWORD *)(a1 + 24) + v38;
      v1 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v26;
      if ( *(_QWORD *)(a1 + 16) < v26 )
        sub_3890((__int64)"read_sections: invalid section size");
      if ( v34 == -1 )
      {
        if ( *(_BYTE *)(a1 + 104) )
        {
          if ( v4 )
            goto LABEL_26;
LABEL_29:
          add_segm(0, v2, v26, v5, "DATA", 0);
LABEL_30:
          sub_AD00(a1);
          v27 = *(_QWORD *)(a1 + 24);
          v28 = *(_QWORD *)(a1 + 32);
          if ( v27 != v28 )
            goto LABEL_69;
          goto LABEL_31;
        }
      }
      else
      {
        if ( !v4 )
          goto LABEL_29;
        if ( dword_10F20[v34] >= dword_10F20[v4] )
          sub_3890((__int64)"read_sections: sections out of order, current: %s <= last: %s", v5, off_14CE0[v34]);
        if ( *(_BYTE *)(a1 + 104) )
LABEL_26:
          sub_3890((__int64)"read_sections: section %s can not occur after name section", v5);
      }
      if ( v4 == 10 )
      {
        add_segm(0, v2, v26, v5, "CODE", 0);
        sub_9040(a1);
        v27 = *(_QWORD *)(a1 + 24);
        v28 = *(_QWORD *)(a1 + 32);
        if ( v27 != v28 )
          goto LABEL_69;
        v34 = 10;
      }
      else
      {
        add_segm(0, v2, v26, v5, "DATA", 0);
        switch ( v4 )
        {
          case 1u:
            sub_C990(a1);
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 1;
            break;
          case 2u:
            sub_AEE0(a1);
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 2;
            break;
          case 3u:
            sub_8470(a1);
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 3;
            break;
          case 4u:
            sub_7DB0(a1);
            v28 = *(_QWORD *)(a1 + 24);
            v33 = *(_QWORD *)(a1 + 32);
            if ( v33 != v28 )
              goto LABEL_68;
            v34 = 4;
            break;
          case 5u:
            sub_4730(a1);
            v28 = *(_QWORD *)(a1 + 24);
            v33 = *(_QWORD *)(a1 + 32);
            if ( v33 != v28 )
              goto LABEL_68;
            v34 = 5;
            break;
          case 6u:
            sub_7EA0(a1);
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 6;
            break;
          case 7u:
            sub_BFA0(a1);
            v28 = *(_QWORD *)(a1 + 24);
            v33 = *(_QWORD *)(a1 + 32);
            if ( v33 != v28 )
              goto LABEL_68;
            v34 = 7;
            break;
          case 8u:
            sub_4070(a1);
            v28 = *(_QWORD *)(a1 + 24);
            v33 = *(_QWORD *)(a1 + 32);
            if ( v33 != v28 )
              goto LABEL_68;
            v34 = 8;
            break;
          case 9u:
            sub_5680(a1);
            v28 = *(_QWORD *)(a1 + 24);
            v33 = *(_QWORD *)(a1 + 32);
            if ( v33 != v28 )
            {
LABEL_68:
              v27 = v28;
              v28 = v33;
LABEL_69:
              sub_3890((__int64)"read_sections: unfinished section 0x%llx / 0x%llx", v27, v28);
            }
            v34 = 9;
            break;
          case 0xBu:
            sub_87C0(a1);
            v27 = *(_QWORD *)(a1 + 24);
            v28 = *(_QWORD *)(a1 + 32);
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 11;
            break;
          case 0xCu:
            v32 = *(_QWORD *)(a1 + 24);
            v27 = v38 + v32;
            v28 = *(_QWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 40) = v32;
            *(_QWORD *)(a1 + 24) = v27;
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 12;
            break;
          case 0xDu:
            v31 = *(_QWORD *)(a1 + 24);
            v27 = v38 + v31;
            v28 = *(_QWORD *)(a1 + 32);
            *(_QWORD *)(a1 + 40) = v31;
            *(_QWORD *)(a1 + 24) = v27;
            if ( v27 != v28 )
              goto LABEL_69;
            v34 = 13;
            break;
          default:
            goto LABEL_30;
        }
      }
LABEL_31:
      v29 = (__int64)v39;
      *(__m128i *)(a1 + 32) = _mm_unpacklo_epi64((__m128i)v1, (__m128i)v28);
      if ( v29 )
      {
        v40.m128i_i64[0] = 0;
        qfree(v29);
        v1 = *(_QWORD *)(a1 + 32);
      }
      v2 = *(_QWORD *)(a1 + 24);
    }
    while ( v2 < v1 );
  }
  return 1;
}

