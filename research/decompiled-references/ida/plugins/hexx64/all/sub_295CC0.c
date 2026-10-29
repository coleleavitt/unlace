__int64 __fastcall sub_295CC0(__int64 a1, __int64 a2, __m128 a3)
{
  bool v4; // zf
  unsigned int v6; // eax
  __int64 v8; // rdx
  char v9; // al
  char v10; // r13
  unsigned int tinfo_size; // eax
  __int64 v12; // r14
  int tinfo_property; // eax
  __int64 *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r14
  int v33; // ebp
  unsigned __int8 v34; // r13
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // r12
  __int64 v38; // rbp
  char v39; // r14
  __int64 v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rcx
  char v43; // dl
  unsigned int v44; // eax
  int v45; // eax
  int v46; // r12d
  char v47; // r12
  unsigned int v48; // [rsp+8h] [rbp-80h]
  __int64 v49; // [rsp+8h] [rbp-80h]
  int v50; // [rsp+10h] [rbp-78h]
  int v51; // [rsp+18h] [rbp-70h]
  __int64 v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+28h] [rbp-60h]
  __int64 v54; // [rsp+38h] [rbp-50h] BYREF
  __int64 v55[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a2 + 8) == 61;
  v55[1] = __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_2;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_BYTE *)(v8 + 13);
  if ( (v9 & 0x18) != 0 && (v9 & 6) == 0 )
  {
    v54 = 0;
    v10 = v9 & 8;
    *(_BYTE *)(v8 + 13) = v9 | ((v9 & 8) == 0 ? 4 : 2);
    tinfo_size = get_tinfo_size();
    v48 = sub_284430(a1, a2, tinfo_size, 0, *(double *)a3.m128_u64);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v12 + 8) - 22) <= 1 )
    {
      copy_tinfo_t();
      v48 = get_tinfo_size();
    }
    tinfo_property = get_tinfo_property();
    v14 = *(__int64 **)(a2 + 24);
    v50 = tinfo_property;
    v15 = -*v14;
    if ( !v10 )
      v15 = ~*v14;
    *v14 = sub_32ABC0(v15, v48, 0);
    if ( !(_BYTE)v54 )
    {
      sub_240880(v55, *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), v48, v50);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    v16 = *(_QWORD *)(a2 + 24);
    v17 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFDFFFFLL;
    sub_329C80(v16 + 8, v17);
    if ( v10 && (unsigned int)(*(_DWORD *)(v12 + 8) - 35) <= 1 && a2 == *(_QWORD *)(v12 + 32) )
    {
      copy_tinfo_t();
      v45 = 35;
      if ( *(_DWORD *)(v12 + 8) == 35 )
        v45 = 36;
      *(_DWORD *)(v12 + 8) = v45;
      clear_tinfo_t();
    }
    else
    {
      v20 = j__qalloc_or_throw(64, v17, v18, v19);
      a3 = 0;
      *(_QWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v20 + 24) = 0;
      *(_QWORD *)v20 = -1;
      *(_QWORD *)(v20 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v20 + 48) = 0;
      *(_DWORD *)(v20 + 56) = 0;
      v21 = *(_QWORD *)a2;
      *(_QWORD *)a2 = -1;
      v22 = *(_DWORD *)(v20 + 8);
      *(_QWORD *)v20 = v21;
      LODWORD(v21) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = v22;
      v23 = *(_DWORD *)(v20 + 12);
      *(_DWORD *)(v20 + 8) = v21;
      LODWORD(v21) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v23;
      v24 = *(_QWORD *)(v20 + 24);
      *(_DWORD *)(v20 + 12) = v21;
      v25 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = v24;
      v26 = *(_QWORD *)(v20 + 32);
      *(_QWORD *)(v20 + 24) = v25;
      v27 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = v26;
      v28 = *(_QWORD *)(v20 + 40);
      *(_QWORD *)(v20 + 32) = v27;
      v29 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v28;
      v30 = *(_QWORD *)(v20 + 48);
      *(_QWORD *)(v20 + 40) = v29;
      v31 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v30;
      LODWORD(v30) = *(_DWORD *)(v20 + 56);
      *(_QWORD *)(v20 + 48) = v31;
      LODWORD(v31) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 56) = v30;
      *(_DWORD *)(v20 + 56) = v31;
      *(_QWORD *)(a2 + 24) = v20;
      *(_DWORD *)(a2 + 8) = v10 == 0 ? 50 : 47;
      *(_QWORD *)a2 = *(_QWORD *)v20;
      sub_2441C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0, 0.0);
      if ( (unsigned int)lexcompare_tinfo() )
      {
        v55[0] = 7;
        copy_tinfo_t();
        clear_tinfo_t();
        v46 = get_tinfo_property();
        if ( v46 != (unsigned int)get_tinfo_property() )
          sub_246B40(a2, *(_QWORD *)(a1 + 72), &v54, 0.0);
        v47 = sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (__m128)0LL);
        clear_tinfo_t();
        if ( v47 )
        {
          *(_DWORD *)(a1 + 8) |= 8u;
          return 1;
        }
      }
      else
      {
        clear_tinfo_t();
      }
    }
  }
  if ( *(_BYTE *)(a1 + 88) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v32 + 8) - 22) > 9 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_295110((_QWORD *)a1, (char *)a2) )
      {
        ++*(_DWORD *)(a1 + 80);
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          return 1;
      }
      goto LABEL_5;
    }
    v33 = get_tinfo_size();
    v34 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( v33 < v34 )
    {
      v35 = sub_255A30(*(__int64 **)(a2 + 24));
      v36 = 8 * v33 - 1;
      v49 = v35;
      if ( (unsigned __int64)v36 <= 0x3F )
      {
        v37 = 1LL << v36;
        if ( (-(1LL << v36) & v35) != 0 )
        {
          v38 = *(_QWORD *)(v32 + 24);
          if ( a2 == v38 )
            v38 = *(_QWORD *)(v32 + 32);
          v51 = get_tinfo_property();
          v52 = 2 * v37 - 1;
          if ( v51 == 1 && get_tinfo_size() < (unsigned __int64)v34 )
          {
            v39 = is_invsign();
            if ( v39 )
            {
              if ( (v37 & v49) != 0 && v49 != v37 )
                goto LABEL_2;
              v39 = 0;
              v40 = v52 & v49;
            }
            else
            {
              v40 = v52 & v49;
            }
          }
          else
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) )
            {
              v53 = *(_QWORD *)(a2 + 24);
              if ( (unsigned __int8)is_numop() )
              {
                if ( (unsigned int)get_radix() == 10 && (unsigned int)sub_255000(*(_DWORD *)(v32 + 8)) != 1 )
                  sub_329C80(v53 + 8, 0x11111101100000uLL);
              }
            }
            v39 = is_invsign();
            if ( !v39 || (v37 & v49) == 0 || v49 == v37 )
              goto LABEL_2;
            v40 = -v49 & v52;
          }
          if ( (get_tinfo_property() & 0x3F) == 0x2D )
          {
            LOBYTE(v41) = (unsigned int)get_tinfo_property() == 1;
            if ( (_BYTE)v41 == (v51 == 1) )
              goto LABEL_2;
          }
          else
          {
            v55[0] = 7;
            copy_tinfo_t();
            clear_tinfo_t();
            if ( !v39 )
              **(_QWORD **)(a2 + 24) = v40;
          }
          sub_244D80((__int64 *)a2, v38 + 48, v41, v42);
        }
      }
    }
LABEL_2:
    if ( !*(_BYTE *)(a1 + 88) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_5:
  *(_DWORD *)(a1 + 80) += sub_294400(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 8) & 8;
  if ( !*(_BYTE *)(a1 + 88) )
    return v6 >> 3;
  if ( v6 )
    return 1;
  v43 = sub_290F60((_QWORD *)a1, a2, *(double *)a3.m128_u64);
  v44 = *(_DWORD *)(a1 + 8);
  if ( v43 )
  {
    ++*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 8) = v44 | 8;
    return 1;
  }
  return (v44 >> 3) & 1;
}

