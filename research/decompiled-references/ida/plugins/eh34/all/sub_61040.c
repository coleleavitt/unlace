__int64 __fastcall sub_61040(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __m128i si128; // xmm0
  unsigned __int64 v14; // r9
  _QWORD *v15; // r13
  unsigned __int64 v16; // rsi
  _QWORD *v17; // r15
  size_t v18; // r10
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  int v21; // r15d
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  _QWORD *v25; // r14
  unsigned __int64 v26; // rsi
  _QWORD *v27; // r11
  size_t v28; // r9
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v32; // rax
  std::__detail::_Prime_rehash_policy *v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  char *v37; // r15
  __int64 v38; // r10
  char *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  char *v44; // r15
  __int64 v45; // r9
  char *v46; // rax
  _QWORD *v47; // rdx
  size_t v48; // r9
  _QWORD *v49; // r10
  _QWORD *v50; // rsi
  _QWORD *v51; // r8
  size_t v52; // rdi
  _QWORD *v53; // rcx
  size_t v54; // rdx
  char *v55; // rax
  char *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdx
  size_t v59; // r8
  _QWORD *v60; // r10
  _QWORD *v61; // rsi
  size_t v62; // r9
  _QWORD *v63; // rcx
  size_t v64; // rdx
  char *v65; // rax
  _QWORD *v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rdx
  size_t n[2]; // [rsp+0h] [rbp-A8h] BYREF
  size_t v70; // [rsp+10h] [rbp-98h]
  unsigned int v71; // [rsp+1Ch] [rbp-8Ch]
  _QWORD *v72; // [rsp+20h] [rbp-88h]
  __int64 v73; // [rsp+28h] [rbp-80h]
  __int64 v74; // [rsp+30h] [rbp-78h]
  _QWORD *v75; // [rsp+38h] [rbp-70h]
  _QWORD *v76; // [rsp+40h] [rbp-68h]
  std::__detail::_Prime_rehash_policy *v77; // [rsp+48h] [rbp-60h]
  size_t v78; // [rsp+50h] [rbp-58h]
  _QWORD *v79; // [rsp+58h] [rbp-50h]
  _DWORD v80[2]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v81; // [rsp+68h] [rbp-40h]

  v72 = a1;
  v73 = a2;
  v74 = a3;
  v81 = __readfsqword(0x28u);
  v5 = a4[38];
  v76 = a4 + 36;
  if ( a4 + 36 != (_QWORD *)v5 )
  {
    v71 = 0;
    v75 = v80;
    v77 = (std::__detail::_Prime_rehash_policy *)(a5 + 4);
    v79 = a5 + 2;
    while ( 1 )
    {
      v8 = *(_DWORD *)(v5 + 40);
      v9 = *(_QWORD *)(v5 + 32);
      v80[1] = 1;
      v80[0] = v8;
      v10 = sub_60140(v72, v73, v74, v9, v75);
      v11 = *(_QWORD *)(v5 + 32);
      v70 = v10;
      *(__m128 *)n = _mm_loadh_ps((const double *)(v10 + 32));
      v12 = operator new(0x18u);
      si128 = _mm_load_si128((const __m128i *)n);
      v14 = a5[3];
      *(_QWORD *)v12 = 0;
      v15 = (_QWORD *)v12;
      *(__m128i *)(v12 + 8) = si128;
      if ( v14 )
      {
        v16 = a5[1];
        v17 = *(_QWORD **)(*a5 + 8 * (v11 % v16));
        v18 = v11 % v16;
        if ( !v17 )
          goto LABEL_29;
        v19 = (_QWORD *)*v17;
        if ( v11 != *(_QWORD *)(*v17 + 8LL) )
        {
          while ( 1 )
          {
            v20 = (_QWORD *)*v19;
            if ( !*v19 )
              break;
            v17 = v19;
            if ( v11 % v16 != v20[1] % v16 )
              break;
            v19 = (_QWORD *)*v19;
            if ( v11 == v20[1] )
              goto LABEL_9;
          }
LABEL_29:
          v33 = v77;
          n[0] = v18;
          if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v77, v16, v14, 1u) )
          {
            v48 = v34;
            if ( v34 == 1 )
            {
              a5[6] = 0;
              v49 = a5 + 6;
              v37 = (char *)(a5 + 6);
            }
            else
            {
              if ( v34 > 0xFFFFFFFFFFFFFFFLL )
              {
                if ( v34 >> 61 )
                  sub_B371(v33, v16, v34, v35, v36);
                std::__throw_bad_alloc();
              }
              v78 = v34;
              n[0] = 8 * v34;
              v37 = (char *)operator new(8 * v34);
              memset(v37, 0, n[0]);
              v48 = v78;
              v49 = a5 + 6;
            }
            v50 = (_QWORD *)a5[2];
            v51 = v79;
            v52 = 0;
            for ( a5[2] = 0; v50; v52 = v54 )
            {
              while ( 1 )
              {
                v53 = v50;
                v50 = (_QWORD *)*v50;
                v54 = v53[1] % v48;
                v55 = &v37[8 * v54];
                if ( !*(_QWORD *)v55 )
                  break;
                *v53 = **(_QWORD **)v55;
                **(_QWORD **)v55 = v53;
                if ( !v50 )
                  goto LABEL_51;
              }
              *v53 = a5[2];
              a5[2] = v53;
              *(_QWORD *)v55 = v51;
              if ( *v53 )
                *(_QWORD *)&v37[8 * v52] = v53;
            }
LABEL_51:
            v56 = (char *)*a5;
            v57 = a5[1];
            if ( (_QWORD *)*a5 != v49 )
            {
              n[0] = v48;
              operator delete(v56, 8 * v57);
              v48 = n[0];
            }
            a5[1] = v48;
            *a5 = v37;
            v38 = 8 * (v11 % v48);
            v39 = &v37[v38];
            v40 = *(_QWORD **)&v37[v38];
            if ( !v40 )
              goto LABEL_54;
LABEL_31:
            *v15 = *v40;
            **(_QWORD **)v39 = v15;
          }
          else
          {
            v37 = (char *)*a5;
            v38 = 8 * n[0];
            v39 = (char *)(*a5 + 8 * n[0]);
            v40 = *(_QWORD **)v39;
            if ( *(_QWORD *)v39 )
              goto LABEL_31;
LABEL_54:
            v58 = a5[2];
            a5[2] = v15;
            *v15 = v58;
            if ( v58 )
            {
              *(_QWORD *)&v37[8 * (*(_QWORD *)(v58 + 8) % a5[1])] = v15;
              v39 = (char *)(v38 + *a5);
            }
            *(_QWORD *)v39 = a5 + 2;
          }
          ++a5[3];
          goto LABEL_13;
        }
LABEL_9:
        if ( !v17 || !*v17 )
          goto LABEL_29;
      }
      else
      {
        v32 = (_QWORD *)a5[2];
        if ( !v32 )
        {
LABEL_28:
          v16 = a5[1];
          v18 = v11 % v16;
          goto LABEL_29;
        }
        while ( v11 != v32[1] )
        {
          v32 = (_QWORD *)*v32;
          if ( !v32 )
            goto LABEL_28;
        }
      }
      if ( v15 )
        operator delete(v15, 0x18u);
LABEL_13:
      v21 = *(_DWORD *)(v5 + 40);
      v22 = *(_QWORD *)(v70 + 32);
      v23 = operator new(0x18u);
      v24 = a4[44];
      *(_QWORD *)v23 = 0;
      v25 = (_QWORD *)v23;
      *(_QWORD *)(v23 + 8) = v22;
      *(_DWORD *)(v23 + 16) = v21;
      if ( v24 )
      {
        v26 = a4[42];
        v27 = *(_QWORD **)(a4[41] + 8 * (v22 % v26));
        v28 = v22 % v26;
        if ( v27 )
        {
          v29 = (_QWORD *)*v27;
          if ( v22 == *(_QWORD *)(*v27 + 8LL) )
          {
LABEL_19:
            if ( v27 && *v27 )
              goto LABEL_21;
          }
          else
          {
            while ( 1 )
            {
              v30 = (_QWORD *)*v29;
              if ( !*v29 )
                break;
              v27 = v29;
              if ( v22 % v26 != v30[1] % v26 )
                break;
              v29 = (_QWORD *)*v29;
              if ( v22 == v30[1] )
                goto LABEL_19;
            }
          }
        }
      }
      else
      {
        v41 = (_QWORD *)a4[43];
        if ( v41 )
        {
          while ( v22 != v41[1] )
          {
            v41 = (_QWORD *)*v41;
            if ( !v41 )
              goto LABEL_36;
          }
LABEL_21:
          if ( v25 )
            operator delete(v25, 0x18u);
          goto LABEL_23;
        }
LABEL_36:
        v26 = a4[42];
        v28 = v22 % v26;
      }
      n[0] = v28;
      if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                              (std::__detail::_Prime_rehash_policy *)(a4 + 45),
                              v26,
                              v24,
                              1u) )
      {
        v59 = v42;
        if ( v42 == 1 )
        {
          v60 = a4 + 47;
          a4[47] = 0;
          v44 = (char *)(a4 + 47);
        }
        else
        {
          if ( v42 > 0xFFFFFFFFFFFFFFFLL )
          {
            if ( v42 >> 61 )
              sub_B371(a4 + 45, v26, v42, v43, v42 >> 61);
            std::__throw_bad_alloc();
          }
          v70 = v42;
          n[0] = 8 * v42;
          v44 = (char *)operator new(8 * v42);
          memset(v44, 0, n[0]);
          v59 = v70;
          v60 = a4 + 47;
        }
        v61 = (_QWORD *)a4[43];
        v62 = 0;
        a4[43] = 0;
        while ( v61 )
        {
          while ( 1 )
          {
            v63 = v61;
            v61 = (_QWORD *)*v61;
            v64 = v63[1] % v59;
            v65 = &v44[8 * v64];
            if ( !*(_QWORD *)v65 )
              break;
            *v63 = **(_QWORD **)v65;
            **(_QWORD **)v65 = v63;
            if ( !v61 )
              goto LABEL_64;
          }
          *v63 = a4[43];
          a4[43] = v63;
          *(_QWORD *)v65 = a4 + 43;
          if ( *v63 )
            *(_QWORD *)&v44[8 * v62] = v63;
          v62 = v64;
        }
LABEL_64:
        v66 = (_QWORD *)a4[41];
        v67 = a4[42];
        if ( v66 != v60 )
        {
          n[0] = v59;
          operator delete(v66, 8 * v67);
          v59 = n[0];
        }
        a4[42] = v59;
        a4[41] = v44;
        v45 = 8 * (v22 % v59);
        v46 = &v44[v45];
        v47 = *(_QWORD **)&v44[v45];
        if ( !v47 )
        {
LABEL_67:
          v68 = a4[43];
          a4[43] = v25;
          *v25 = v68;
          if ( v68 )
          {
            *(_QWORD *)&v44[8 * (*(_QWORD *)(v68 + 8) % a4[42])] = v25;
            v46 = (char *)(v45 + a4[41]);
          }
          *(_QWORD *)v46 = a4 + 43;
          goto LABEL_40;
        }
      }
      else
      {
        v44 = (char *)a4[41];
        v45 = 8 * n[0];
        v46 = &v44[8 * n[0]];
        v47 = *(_QWORD **)v46;
        if ( !*(_QWORD *)v46 )
          goto LABEL_67;
      }
      *v25 = *v47;
      **(_QWORD **)v46 = v25;
LABEL_40:
      ++a4[44];
LABEL_23:
      ++v71;
      v5 = std::_Rb_tree_increment(v5);
      if ( v76 == (_QWORD *)v5 )
        return v71;
    }
  }
  return 0;
}

