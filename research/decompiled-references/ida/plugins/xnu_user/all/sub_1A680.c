__int64 __fastcall sub_1A680(_QWORD *a1, _QWORD *a2, int a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v5; // rbx
  __m128i *v6; // rbp
  _QWORD *v7; // r12
  __m128i *v8; // r13
  __int64 v9; // r15
  unsigned __int64 v10; // kr00_8
  _QWORD *v11; // kr08_8
  _QWORD *v12; // r12
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  size_t v19; // r13
  void *v20; // r14
  __m128i v21; // xmm0
  __int64 v22; // rdx
  char v23; // al
  __m128i *v24; // rax
  __m128i *v25; // r14
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __m128i *v30; // rdx
  __int64 v31; // rax
  size_t v32; // rbx
  void *v33; // r12
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-98h] BYREF
  __int64 v40; // [rsp+10h] [rbp-88h] BYREF
  __int128 v41; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-60h]
  __int64 v44; // [rsp+48h] [rbp-50h]
  unsigned __int64 v45; // [rsp+58h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v10 = v5;
  v11 = v7;
  v12 = a1;
  v13 = a4;
  switch ( a3 )
  {
    case 1:
      v22 = 2;
      LODWORD(v44) = 2;
      src = nullptr;
      HIDWORD(v44) = a5;
      *(_OWORD *)n = 0;
      goto LABEL_20;
    case 2:
      v22 = 3;
      LODWORD(v44) = 3;
      src = nullptr;
      HIDWORD(v44) = a5;
      *(_OWORD *)n = 0;
      goto LABEL_20;
    case 3:
      LODWORD(v44) = 4;
      v22 = 4;
      src = nullptr;
      HIDWORD(v44) = a5;
      *(_OWORD *)n = 0;
      goto LABEL_20;
    case 4:
      LODWORD(v44) = 0;
      src = nullptr;
      HIDWORD(v44) = a5;
      *(_OWORD *)n = 0;
      if ( a5 <= 0 )
      {
        a5 = *(unsigned __int8 *)(sub_15D50() + 80);
        HIDWORD(v44) = a5;
      }
      if ( (int)sub_71480(a1, &src, v13, (unsigned int)a5) < 0 )
        goto LABEL_5;
      v16 = a1[108];
      LODWORD(v44) = 0;
      if ( !(unsigned __int8)sub_682A0(v16, v13, 0, SHIDWORD(v44)) )
      {
        v36 = v12[108];
        LODWORD(v44) = 1;
        v23 = sub_682A0(v36, v13, 1, SHIDWORD(v44));
LABEL_21:
        if ( v23 )
          goto LABEL_22;
LABEL_5:
        v14 = 0;
        goto LABEL_6;
      }
      v40 = 0;
      v41 = 0;
      v17 = sub_71480(v12, &v40, v13, SHIDWORD(v44));
      v18 = v40;
      if ( v17 < 0 )
      {
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree();
        }
        goto LABEL_5;
      }
      v19 = n[0];
      if ( (_QWORD)v41 != n[0] )
      {
        if ( !a2 )
        {
LABEL_17:
          if ( v18 )
          {
            *(_QWORD *)&v41 = 0;
            qfree();
          }
          goto LABEL_22;
        }
        v20 = nullptr;
        if ( !n[0] )
        {
LABEL_14:
          v21 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
          if ( *a2 )
          {
            a2[1] = 0;
            v39 = v21;
            qfree();
            v21 = _mm_load_si128(&v39);
          }
          *a2 = v20;
          v18 = v40;
          *(__m128i *)(a2 + 1) = v21;
          goto LABEL_17;
        }
LABEL_62:
        v20 = (void *)qalloc_or_throw();
        memcpy(v20, src, v19);
        goto LABEL_14;
      }
      if ( (_QWORD)v41 )
      {
        v38 = 0;
        while ( *(_BYTE *)(v40 + v38) == *((_BYTE *)src + v38) )
        {
          if ( (_QWORD)v41 == ++v38 )
            goto LABEL_68;
        }
        if ( !a2 )
          goto LABEL_17;
        goto LABEL_62;
      }
LABEL_68:
      if ( !src )
      {
        if ( !v40 )
          goto LABEL_22;
        goto LABEL_70;
      }
      n[0] = 0;
      qfree();
      src = nullptr;
      n[1] = 0;
      if ( v40 )
      {
LABEL_70:
        *(_QWORD *)&v41 = 0;
        qfree();
      }
LABEL_22:
      v24 = (__m128i *)v12[206];
      v25 = (__m128i *)(v12 + 205);
      v6 = (__m128i *)(v12 + 205);
      if ( !v24 )
        goto LABEL_29;
      do
      {
        while ( 1 )
        {
          v26 = v24[1].m128i_i64[0];
          v27 = v24[1].m128i_i64[1];
          if ( v24[2].m128i_i64[0] < v13 )
            break;
          v6 = v24;
          v24 = (__m128i *)v24[1].m128i_i64[0];
          if ( !v26 )
            goto LABEL_27;
        }
        v24 = (__m128i *)v24[1].m128i_i64[1];
      }
      while ( v27 );
LABEL_27:
      if ( v6 == v25 || v13 < v6[2].m128i_i64[0] )
      {
LABEL_29:
        v9 = (__int64)(v12 + 204);
        v28 = operator new(0x48u);
        *(_QWORD *)(v28 + 32) = v13;
        v8 = (__m128i *)v28;
        *(_QWORD *)(v28 + 40) = 0;
        *(_QWORD *)(v28 + 64) = 0;
        *(_OWORD *)(v28 + 48) = 0;
        if ( v25 == v6 )
        {
          if ( v12[209] )
          {
            v30 = (__m128i *)v12[208];
            v6 = nullptr;
            if ( v30[2].m128i_i64[0] < v13 )
              goto LABEL_34;
          }
        }
        else
        {
          v29 = v6[2].m128i_u64[0];
          if ( v13 < v29 )
          {
            v30 = v6;
            if ( (__m128i *)v12[207] == v6 )
              goto LABEL_34;
            v31 = std::_Rb_tree_decrement();
            v30 = (__m128i *)v31;
            if ( *(_QWORD *)(v31 + 32) >= v13 )
              goto LABEL_33;
            if ( *(_QWORD *)(v31 + 24) )
              v30 = v6;
            else
              v6 = nullptr;
LABEL_34:
            if ( v30 )
            {
LABEL_35:
              v6 = v8;
              std::_Rb_tree_insert_and_rebalance();
              ++v12[209];
              goto LABEL_36;
            }
LABEL_46:
            if ( v8 )
              operator delete(v8, 0x48u);
            goto LABEL_36;
          }
          if ( v29 >= v13 )
            goto LABEL_46;
LABEL_53:
          if ( (__m128i *)v12[208] == v6 )
          {
LABEL_71:
            if ( v6 )
              goto LABEL_35;
            goto LABEL_46;
          }
          v39.m128i_i64[0] = v29;
          v37 = std::_Rb_tree_increment();
          v30 = (__m128i *)v37;
          if ( v13 < *(_QWORD *)(v37 + 32) )
          {
            if ( v6[1].m128i_i64[1] )
            {
              v6 = (__m128i *)v37;
              goto LABEL_34;
            }
            goto LABEL_71;
          }
        }
LABEL_33:
        v6 = (__m128i *)sub_19640(v9, v13);
        goto LABEL_34;
      }
LABEL_36:
      v32 = n[0];
      v33 = nullptr;
      if ( n[0] )
      {
        v33 = (void *)qalloc_or_throw();
        memcpy(v33, src, v32);
      }
      v34 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
      if ( v6[2].m128i_i64[1] )
      {
        v6[3].m128i_i64[0] = 0;
        v39 = v34;
        qfree();
        v34 = _mm_load_si128(&v39);
      }
      v35 = v44;
      v6[2].m128i_i64[1] = (__int64)v33;
      v14 = 1;
      v6[3] = v34;
      v6[4].m128i_i64[0] = v35;
LABEL_6:
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      return v14;
    case 8:
      v22 = 1;
      LODWORD(v44) = 1;
      src = nullptr;
      HIDWORD(v44) = a5;
      *(_OWORD *)n = 0;
LABEL_20:
      v23 = sub_682A0(a1[108], a4, v22, a5);
      goto LABEL_21;
    default:
      v12 = v11;
      v13 = v10;
      if ( under_debugger )
        BUG();
      interr();
      goto LABEL_53;
  }
}

