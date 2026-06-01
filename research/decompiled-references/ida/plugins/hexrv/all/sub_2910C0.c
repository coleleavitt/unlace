__int64 __fastcall sub_2910C0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  unsigned int v4; // eax
  __int64 v6; // rdx
  char v7; // al
  char v8; // r13
  unsigned int tinfo_size; // eax
  __int64 v10; // r14
  unsigned int tinfo_property; // eax
  _QWORD *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r14
  int v27; // ebp
  unsigned __int8 v28; // r13
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // r12
  char v32; // r14
  __int64 v33; // r13
  char v34; // dl
  unsigned int v35; // eax
  int v36; // eax
  int v37; // r12d
  char v38; // r12
  unsigned int v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  unsigned int v41; // [rsp+10h] [rbp-78h]
  int v42; // [rsp+18h] [rbp-70h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  __int64 v45; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v46[9]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 8) == 61;
  v46[1] = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_2;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_BYTE *)(v6 + 13);
  if ( (v7 & 0x18) != 0 && (v7 & 6) == 0 )
  {
    v45 = 0;
    v8 = v7 & 8;
    *(_BYTE *)(v6 + 13) = v7 | ((v7 & 8) == 0 ? 4 : 2);
    tinfo_size = get_tinfo_size();
    v39 = sub_27F830(a1, a2, tinfo_size, 0);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v10 + 8) - 22) <= 1 )
    {
      copy_tinfo_t();
      v39 = get_tinfo_size();
    }
    tinfo_property = get_tinfo_property();
    v12 = *(_QWORD **)(a2 + 24);
    v41 = tinfo_property;
    v13 = -*v12;
    if ( !v8 )
      v13 = ~*v12;
    *v12 = sub_325910(v13, v39, 0);
    if ( !(_BYTE)v45 )
    {
      sub_23BC80(v46, *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 72), v39, v41);
      copy_tinfo_t();
      clear_tinfo_t();
    }
    sub_324B80(*(_QWORD *)(a2 + 24) + 8LL, *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL) & 0xFFFFFFFFFFFDFFFFLL);
    if ( v8 && (unsigned int)(*(_DWORD *)(v10 + 8) - 35) <= 1 && a2 == *(_QWORD *)(v10 + 32) )
    {
      copy_tinfo_t();
      v36 = 35;
      if ( *(_DWORD *)(v10 + 8) == 35 )
        v36 = 36;
      *(_DWORD *)(v10 + 8) = v36;
      clear_tinfo_t();
    }
    else
    {
      v14 = j__qalloc_or_throw();
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 8) = 0xFFFFFFFF00000000LL;
      *(_OWORD *)(v14 + 24) = 0;
      *(_QWORD *)v14 = -1;
      *(_QWORD *)(v14 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v14 + 48) = 0;
      *(_DWORD *)(v14 + 56) = 0;
      v15 = *(_QWORD *)a2;
      *(_QWORD *)a2 = -1;
      v16 = *(_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = v15;
      LODWORD(v15) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = v16;
      v17 = *(_DWORD *)(v14 + 12);
      *(_DWORD *)(v14 + 8) = v15;
      LODWORD(v15) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v17;
      v18 = *(_QWORD *)(v14 + 24);
      *(_DWORD *)(v14 + 12) = v15;
      v19 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a2 + 24) = v18;
      v20 = *(_QWORD *)(v14 + 32);
      *(_QWORD *)(v14 + 24) = v19;
      v21 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)(a2 + 32) = v20;
      v22 = *(_QWORD *)(v14 + 40);
      *(_QWORD *)(v14 + 32) = v21;
      v23 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = v22;
      v24 = *(_QWORD *)(v14 + 48);
      *(_QWORD *)(v14 + 40) = v23;
      v25 = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v24;
      LODWORD(v24) = *(_DWORD *)(v14 + 56);
      *(_QWORD *)(v14 + 48) = v25;
      LODWORD(v25) = *(_DWORD *)(a2 + 56);
      *(_DWORD *)(a2 + 56) = v24;
      *(_DWORD *)(v14 + 56) = v25;
      *(_QWORD *)(a2 + 24) = v14;
      *(_DWORD *)(a2 + 8) = v8 == 0 ? 50 : 47;
      *(_QWORD *)a2 = *(_QWORD *)v14;
      sub_23F5C0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      if ( (unsigned int)lexcompare_tinfo() )
      {
        v46[0] = 7;
        copy_tinfo_t();
        clear_tinfo_t();
        v37 = get_tinfo_property();
        if ( v37 != (unsigned int)get_tinfo_property() )
          sub_241F40(a2, *(_QWORD *)(a1 + 72), &v45);
        v38 = sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL));
        clear_tinfo_t();
        if ( v38 )
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
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
    if ( (unsigned int)(*(_DWORD *)(v26 + 8) - 22) > 9 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_290510((_QWORD *)a1, a2) )
      {
        ++*(_DWORD *)(a1 + 80);
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          return 1;
      }
      goto LABEL_5;
    }
    v27 = get_tinfo_size();
    v28 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
    if ( v27 < v28 )
    {
      v29 = sub_250E30(*(__int64 **)(a2 + 24));
      v30 = 8 * v27 - 1;
      v40 = v29;
      if ( (unsigned __int64)v30 <= 0x3F )
      {
        v31 = 1LL << v30;
        if ( (-(1LL << v30) & v29) != 0 )
        {
          v42 = get_tinfo_property();
          v43 = 2 * v31 - 1;
          if ( v42 == 1 && get_tinfo_size() < (unsigned __int64)v28 )
          {
            v32 = is_invsign();
            if ( v32 )
            {
              if ( (v31 & v40) != 0 && v40 != v31 )
                goto LABEL_2;
              v32 = 0;
              v33 = v43 & v40;
            }
            else
            {
              v33 = v43 & v40;
            }
          }
          else
          {
            if ( !*(_BYTE *)(*(_QWORD *)(a2 + 24) + 13LL) )
            {
              v44 = *(_QWORD *)(a2 + 24);
              if ( (unsigned __int8)is_numop() )
              {
                if ( (unsigned int)get_radix() == 10 && (unsigned int)sub_250400(*(_DWORD *)(v26 + 8)) != 1 )
                  sub_324B80(v44 + 8, 0x11111101100000LL);
              }
            }
            v32 = is_invsign();
            if ( !v32 || (v31 & v40) == 0 || v40 == v31 )
              goto LABEL_2;
            v33 = -v40 & v43;
          }
          if ( (get_tinfo_property() & 0x3F) == 0x2D )
          {
            if ( ((unsigned int)get_tinfo_property() == 1) == (v42 == 1) )
              goto LABEL_2;
          }
          else
          {
            v46[0] = 7;
            copy_tinfo_t();
            clear_tinfo_t();
            if ( !v32 )
              **(_QWORD **)(a2 + 24) = v33;
          }
          sub_240180((__int64 *)a2);
        }
      }
    }
LABEL_2:
    if ( !*(_BYTE *)(a1 + 88) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_5:
  *(_DWORD *)(a1 + 80) += sub_28F800(a1, a2);
  v4 = *(_DWORD *)(a1 + 8) & 8;
  if ( !*(_BYTE *)(a1 + 88) )
    return v4 >> 3;
  if ( v4 )
    return 1;
  v34 = sub_28C360(a1, a2);
  v35 = *(_DWORD *)(a1 + 8);
  if ( v34 )
  {
    ++*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 8) = v35 | 8;
    return 1;
  }
  return (v35 >> 3) & 1;
}

