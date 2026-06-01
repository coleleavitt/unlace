unsigned __int64 __fastcall sub_333F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  char v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 i; // rbp
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 tinfo_size; // [rsp+0h] [rbp-108h]
  bool v21; // [rsp+Fh] [rbp-F9h]
  unsigned __int64 v22; // [rsp+10h] [rbp-F8h]
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+40h] [rbp-C8h]
  __int128 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int128 v30; // [rsp+60h] [rbp-A8h]
  __int128 v31[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  char v35; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+C8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( *(_DWORD *)(a1 + 40) == *(_DWORD *)(a1 + 16) )
  {
    if ( a2 )
    {
      v19 = *(_QWORD *)(a1 + 8) * *(_QWORD *)(a1 + 48);
      cleanup_argloc(a2);
      *(_DWORD *)a2 = 1;
      *(_QWORD *)(a2 + 8) = v19;
    }
    *(_QWORD *)(a1 + 48) += (unsigned __int64)(*(_QWORD *)(a1 + 8) + (int)tinfo_size - 1LL) / *(_QWORD *)(a1 + 8);
  }
  else
  {
    v3 = qalloc_or_throw(24);
    v21 = 0;
    *(_QWORD *)v3 = 0;
    v4 = (__int64 *)v3;
    *(_OWORD *)(v3 + 8) = 0;
    if ( (unsigned int)(*(_DWORD *)a1 - 1) <= 1 )
      v21 = (get_tinfo_property(*a3, 2) & 0x3F) == 13;
    v5 = 0;
    v22 = (tinfo_size + (int)(*(_QWORD *)(a1 + 8) - 1)) & -*(_DWORD *)(a1 + 8);
    if ( v22 )
    {
      while ( 1 )
      {
        v9 = v4[1];
        v10 = *v4;
        if ( v4[2] < (unsigned __int64)(v9 + 1) )
        {
          v12 = qvector_reserve(v4, v10, v9 + 1, 24);
          *v4 = v12;
          v9 = v4[1];
          v10 = v12;
        }
        v11 = v10 + 24 * v9;
        *(_QWORD *)v11 = 0;
        v8 = tinfo_size - v5;
        *(_DWORD *)(v11 + 16) = 0xFFFF;
        *(_QWORD *)(v11 + 8) = 0;
        ++v4[1];
        *(_WORD *)(v11 + 16) = v5;
        if ( *(_DWORD *)(a1 + 40) == *(_DWORD *)(a1 + 16) )
          break;
        if ( v21 )
        {
          v28 = 0;
          v32 = 1;
          v26 = 0;
          v6 = *a3;
          v25 = 8 * v5;
          v27 = 0;
          v29 = 0;
          v33 = -1;
          v34 = 0;
          v35 = 0;
          v30 = 0;
          v31[0] = 0;
          v7 = 0;
          if ( (unsigned int)find_tinfo_udt_member(&v25, v6, 0) != -1
            && 8 * v5 == v25
            && v26 == 8LL * *(_QWORD *)(a1 + 8) )
          {
            v7 = (get_tinfo_property(*(_QWORD *)&v31[0], 2) & 0xF) == 9;
          }
          clear_tinfo_t(v31);
          if ( v29 )
          {
            *(_QWORD *)&v30 = 0;
            qfree(v29);
          }
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree(v27);
          }
        }
        else
        {
          v7 = 0;
        }
        sub_32EE0(a1, (_DWORD *)v11, v7);
        if ( v8 > *(_QWORD *)(a1 + 8) )
          v8 = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v11 + 18) = v8;
        v5 += *(_QWORD *)(a1 + 8);
        if ( v5 >= v22 )
          goto LABEL_23;
      }
      if ( v11 )
      {
        v13 = *(_QWORD *)(a1 + 8) * *(_QWORD *)(a1 + 48);
        cleanup_argloc(v10 + 24 * v9);
        *(_DWORD *)v11 = 1;
        *(_QWORD *)(v11 + 8) = v13;
      }
      *(_QWORD *)(a1 + 48) += (unsigned __int64)(*(_QWORD *)(a1 + 8) + (int)v8 - 1LL) / *(_QWORD *)(a1 + 8);
      *(_WORD *)(v11 + 18) = v8;
    }
LABEL_23:
    if ( a2 )
    {
      cleanup_argloc(a2);
      if ( v4 )
      {
        *(_DWORD *)a2 = 2;
        *(_QWORD *)(a2 + 8) = v4;
      }
    }
    else if ( v4 )
    {
      v15 = *v4;
      if ( *v4 )
      {
        v16 = v4[1];
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v18 = 3 * i;
            cleanup_argloc(v15 + 8 * v18);
            v15 = *v4;
          }
        }
        v4[1] = 0;
        qfree(v15);
      }
      qfree(v4);
    }
  }
  return v36 - __readfsqword(0x28u);
}

